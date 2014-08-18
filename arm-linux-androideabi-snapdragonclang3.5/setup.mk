# * Copyright (c) 2013 Qualcomm Technologies, Inc.
#       All Rights Reserved.
#       Qualcomm Technologies Inc. Confidential and Proprietary.
#       Notifications and licenses are retained for attribution purposes only.

# Copyright (C) 2009 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

# this file is used to prepare the NDK to build with the Snapdragon LLVM ARM
# 3.5 toolchain any number of source files
#
# its purpose is to define (or re-define) templates used to build
# various sources into target object files, libraries or executables.
#
# Note that this file may end up being parsed several times in future
# revisions of the NDK.
#

#
# Override the toolchain prefix
#

LLVM_VERSION := 3.5
LLVM_NAME := llvm-Snapdragon_LLVM_for_Android_$(LLVM_VERSION)
LLVM_TOOLCHAIN_ROOT := $(NDK_ROOT)/toolchains/$(LLVM_NAME)
LLVM_TOOLCHAIN_PREBUILT_ROOT := $(call host-prebuilt-tag,$(LLVM_TOOLCHAIN_ROOT))
LLVM_TOOLCHAIN_PREFIX := $(LLVM_TOOLCHAIN_PREBUILT_ROOT)/bin/

#NDK_VERSION can optionally be set by the user
ifeq (r8e,$(NDK_VERSION))
  TOOLCHAIN_VERSION := 4.7
else ifeq (,$(NDK_VERSION))
  TOOLCHAIN_VERSION := 4.8
else ifeq (r9,$(findstring r9,$(NDK_VERSION)))
  TOOLCHAIN_VERSION := 4.8
else ifeq (r10,$(NDK_VERSION))
  TOOLCHAIN_VERSION := 4.8
else
  $(error The only supported versions of the Android NDK are r8e, r9+ and r10)
endif

TOOLCHAIN_NAME := arm-linux-androideabi-$(TOOLCHAIN_VERSION)
TOOLCHAIN_ROOT := $(NDK_ROOT)/toolchains/$(TOOLCHAIN_NAME)
TOOLCHAIN_PREBUILT_ROOT := $(call host-prebuilt-tag,$(TOOLCHAIN_ROOT))
TOOLCHAIN_PREFIX := $(TOOLCHAIN_PREBUILT_ROOT)/bin/arm-linux-androideabi-

TARGET_CC := $(LLVM_TOOLCHAIN_PREFIX)clang$(HOST_EXEEXT)
TARGET_CXX := $(LLVM_TOOLCHAIN_PREFIX)clang++$(HOST_EXEEXT)

#
# CFLAGS and LDFLAGS
#

TARGET_CFLAGS := $(CFLAGS) \
    -gcc-toolchain $(call host-path,$(TOOLCHAIN_PREBUILT_ROOT)) \
    -fpic \
    -ffunction-sections \
    -funwind-tables \
    -fstack-protector \
    -no-canonical-prefixes

TARGET_LDFLAGS += $(CLANG_LDF) \
    -gcc-toolchain $(call host-path,$(TOOLCHAIN_PREBUILT_ROOT)) \
    -no-canonical-prefixes

TARGET_C_INCLUDES := \
    $(SYSROOT_INC)/usr/include

ifneq ($(filter %armeabi-v7a,$(TARGET_ARCH_ABI)),)
    LLVM_TRIPLE := armv7-none-linux-androideabi

    TARGET_CFLAGS += -target $(LLVM_TRIPLE) \
                     -march=armv7-a \
                     -mfloat-abi=softfp

    TARGET_LDFLAGS += -target $(LLVM_TRIPLE) \
                      -Wl,--fix-cortex-a8
else
    LLVM_TRIPLE := armv5te-none-linux-androideabi

    TARGET_CFLAGS += -target $(LLVM_TRIPLE) \
                     -msoft-float

    TARGET_LDFLAGS += -target $(LLVM_TRIPLE)
endif

TARGET_CFLAGS.neon := -mfpu=neon

TARGET_arm_release_CFLAGS := $(CCF)
TARGET_thumb_release_CFLAGS := $(CCF)

TARGET_arm_debug_CFLAGS := $(CCF)
TARGET_thumb_debug_CFLAGS := $(CCF)

# This function will be called to determine the target CFLAGS used to build
# a C or Assembler source file, based on its tags.
#
TARGET-process-src-files-tags = \
$(eval __arm_sources := $(call get-src-files-with-tag,arm)) \
$(eval __thumb_sources := $(call get-src-files-without-tag,arm)) \
$(eval __debug_sources := $(call get-src-files-with-tag,debug)) \
$(eval __release_sources := $(call get-src-files-without-tag,debug)) \
$(call set-src-files-target-cflags, \
    $(call set_intersection,$(__arm_sources),$(__debug_sources)), \
    $(TARGET_arm_debug_CFLAGS)) \
$(call set-src-files-target-cflags,\
    $(call set_intersection,$(__arm_sources),$(__release_sources)),\
    $(TARGET_arm_release_CFLAGS)) \
$(call set-src-files-target-cflags,\
    $(call set_intersection,$(__arm_sources),$(__debug_sources)),\
    $(TARGET_arm_debug_CFLAGS)) \
$(call set-src-files-target-cflags,\
    $(call set_intersection,$(__thumb_sources),$(__release_sources)),\
    $(TARGET_thumb_release_CFLAGS)) \
$(call set-src-files-target-cflags,\
    $(call set_intersection,$(__thumb_sources),$(__debug_sources)),\
    $(TARGET_thumb_debug_CFLAGS)) \
$(call add-src-files-target-cflags,\
    $(call get-src-files-with-tag,neon),\
    $(TARGET_CFLAGS.neon)) \
$(call set-src-files-text,$(__arm_sources),arm$(space)$(space)) \
$(call set-src-files-text,$(__thumb_sources),thumb)
This is the release of Snapdragon LLVM ARM C/C++ Compiler version 3.5 for
Android NDK. This is a cross compiler built to run on x86 Ubuntu Linux
64-bit/32-bit (version 10.04 and later) and Windows platform (Windows 7 32-bit
and 64-bit). This Snapdragon LLVM ARM Compiler will generate code only for ARM
targets and will not generate code for any of the other targets supported by
llvm.org LLVM.

The version 3.5 of Snapdragon LLVM ARM Compiler is based off the llvm.org tip
as of June 20, 2014. Certain patches after this date from the llvm.org tip have
been cherry-picked onto Snapdragon LLVM to improve stability. In other words,
the Snapdragon LLVM 3.5 release is not based off llvm.org 3.5 release branch
and hence there are some differences between Snapdragon LLVM 3.5 and llvm.org
3.5 release; one such example is the "#pragma clang loop" feature that is
available in llvm.org 3.5 release, but not in the Snapdragon LLVM 3.5 release.
An additional difference from the llvm.org 3.5 release  is that the Snapdragon
LLVM ARM Compiler includes proprietary features and optimizations that are not
available in llvm.org release.

The Snapdragon LLVM ARM Compiler uses the integrated assembler for assembling
and relies on GNU tools for linking.

NOTE: GLIBCXX_3.4.18 or higher is required to run Snapdragon LLVM 3.5 on Ubuntu
x86; this library is typically available as part of Ubuntu distribution or
GCC-4.8 or later x86 distributions.

The complete user guide for this release of the Snapdragon LLVM ARM Compiler is
available as part of your downloaded package under
llvm-Snapdragon_LLVM_for_Android_3.5/prebuilt/<platform>/Snapdragon_LLVM_ARM_35_User_Guide.pdf.

Please post all questions about this release on
http://developer.qualcomm.com/llvm-forum

The following are some of the key features in the 3.5 version compared to the
3.4 version:

1. Optimizations for ARMv8 64-bit mode: Snapdragon LLVM ARM 3.5 Compiler now
supports optimized code generation for both AArch32  and AArch64 (64-bit)
modes. This includes
  - Exploiting newer capabilities of AArch64 ISA such as double-precision
    vectorization
  - Exploiting more GPRs available in AArch64 ISA to speed up performance
  - Auto-vectorizer tuned to exploit AArch64 ISA capabilities
  - Code generation tuning for Cortex-a53 cores (we expect tuned code
    generation for Cortex-a57 in our next release)

2. Sanitizers: This release introduces support for Undefined Behavior
sanitizer, a new security checker that checks usage of semantics that result in
undefined behavior such as unsigned integer overflow.

3. This release introduces an auto-parallelizer that can automatically
spread the execution of certain application loops across the idle CPUs
on the Snapdragon processor. Only 32-bit target runtime environment is
supported in this release. Support for 64-bit Auto-parallelizer runtime
will be available in the next release.


LLVM's Support for GCC command line options:

Most of the commonly used GCC options are supported by LLVM as well. A detailed
list of options supported is listed in chapter 4 of the Snapdragon LLVM ARM
Compiler user guide under
llvm-Snapdragon_LLVM_for_Android_3.5/prebuilt/<platform>/Snapdragon_LLVM_ARM_35_User_Guide.pdf.


Basic Usage & Examples:

clang -O3 -o foo foo.c
clang++ -Os -mthumb -o bar bar.cpp

Options:

To find out the most common options, please pass -help flag to the clang
driver. This will report the Snapdragon ARM specific options and general ARM
options first, before listing target independent options available in
Snapdragon LLVM ARM Compiler.

Compiler options for best performance:

We recommend using the "-Ofast -mcpu=krait2" options for best performance of
your application on Krait cores. For non-Krait cores, we recommend using the
"-Ofast" option. If you would like to avoid the generation of Krait specific
instructions (hardware divide, fused-mac) to enable running on a variety of
ARMv7 cores, but still optimize for best performance on Krait cores, we
recommend the "-Ofast -mtune=krait2 -march=armv7-a" option list.

The -Ofast option enables several high performance optimizations such as
Auto-vectorizer. Please refer to section 3.4.19 of the Snapdragon LLVM ARM
Compiler guide for more details on -Ofast.

For 64-bit optimization, we recommend passing "-Ofast -mcpu=cortex-a53" flags
on the command line for all ARMv8 cores including Cortex-a57, since we have
observed better performance on Cortex-a57 cores with this setting compared to
default mcpu setting.

Compiler options for smallest code-size:

We recommending using the "-Osize -mthumb" options to generate the most compact
code with the Snapdragon LLVM 3.5 compiler. Please refer to section 3.4.18 for
more details on the -Osize optimization level

To enable these recommended flags for your build, please add them to the
LOCAL_CFLAGS variable in your project's Android.mk file(s).


Compiling for AArch64:

To compile for AArch64 (ARMv8 64-bit mode), please pass

-target aarch64-linux-gnueabi

option to clang.

Compiling for AArch32:

To compile for AArch32, please pass

-target armv8-linux-gnueabi

option to clang. Note that even though AArch32 ISA is fully backward compatible
with ARMv7 ISA, there are new instructions in AArch32 ISA compared to ARMv7
ISA. This means that AArch32 executables cannot be executed on ARMv7 cores such
as Krait.


Using Snapdragon LLVM ARM Compiler 3.5 with Android NDK:

Snapdragon LLVM ARM Compiler 3.5 can be used as a drop-in replacement
for LLVM shipped as part of the Android NDK.

1. Snapdragon LLVM ARM Compiler 3.5 has been verified to work with Android NDK
versions r8e and later for Windows and Linux (32 and 64 bit).

2. On Windows, it is assumed that the user has Cygwin setup as required by the
Android NDK instructions. Also on Windows, Microsoft Visual C++ 2013 x86
Redistributable is required in order to use the Windows version of Snapdragon
LLVM ARM 3.5. If the invocation of clang.exe results in a "Missing DLL" message
popup on your windows system, you are likely missing the Redistributable dlls.
Please install the 32-bit version of MSVC++ redistributables if they are
reported missing.  If your system does not already have the required dll,  you
can download and install it from the following link:

https://www.microsoft.com/en-us/download/details.aspx?id=40784

Click "Download" and select "vcredist_x86.exe" to install the 32-bit version of
MSVC++ redistributable required for Snapdragon LLVM ARM 3.5

3. On Windows and Linux it is recommended that you extract the Android NDK
under a directory which *does not* contain spaces, like:

C:\android-ndk-r10
/local/mnt/workspace/android-ndk-r10

This directory is referred to as <NDK_ROOT> in this README.

4. Unzip Snapdragon-llvm-3.5-compiler-windows.zip or untar
Snapdragon-llvm-3.5-compiler-linux64.tar.gz and
Snapdragon-llvm-3.5-compiler-linux32.tar.gz under <NDK_ROOT>/toolchains.

5. By default, it is assumed that the user has Android NDK r10 and hence will
use arm-linux-androideabi-4.8 for linking. If you want to use an older version
of Android, for example NDK r8e, then you must set the variable NDK_VERSION=r8e
(as shown below) and arm-linux-androideabi-4.7 would then be used for linking.

6. The Snapdragon LLVM ARM 3.5 plugin can be installed in r10-32bit and/or
r10-64bit. It is designed to work with both the versions of the NDK as
described below:

For generating armv7 code, invoke your compilation line as follows:

ndk-build NDK_TOOLCHAIN_VERSION=snapdragonclang3.5 APP_ABI="armeabi-v7a" -C <some_project>
ndk-build NDK_TOOLCHAIN_VERSION=snapdragonclang3.5 APP_ABI="armeabi-v7a" NDK_VERSION=r10 -C <some_project>
ndk-build NDK_TOOLCHAIN_VERSION=snapdragonclang3.5 APP_ABI="armeabi-v7a" NDK_VERSION=r9d -C <some_project>
ndk-build NDK_TOOLCHAIN_VERSION=snapdragonclang3.5 APP_ABI="armeabi-v7a" NDK_VERSION=r8e -C <some_project>

7. For generating aarch64 (64-bit) code, invoke your compilation line as follows:

ndk-build NDK_TOOLCHAIN=aarch64-linux-android-snapdragonclang3.5 APP_ABI="arm64-v8a" -C <some_project>

Note: The aarch64 support is only available in the 64-bit version of Android NDK r10 .

8. A standalone toolchain for the Android NDK environment using the Snapdragon
LLVM ARM compiler can be created using the make-standalone-toolchain.sh Android
NDK utility. For example, to create a standalone toolchain for Linux 64-bit
environment, the following command can be used:

For armv7:

<NDK_ROOT>/build/tools/make-standalone-toolchain.sh --ndk-dir=<NDK_ROOT> \
--platform=android-19 --arch=arm --install-dir=<some_dir> \
--toolchain=arm-linux-androideabi-4.8 \
--llvm-version=Snapdragon_LLVM_for_Android_3.5 --system=linux-x86_64

The above command line specifies that android-19 platform directory must be
copied to be used as the standalone sysroot and GCC-4.8 toolchain must be
copied to be used as the linker and for other binutils such as objdump.

For aarch64:

<NDK_ROOT>/build/tools/make-standalone-toolchain.sh --ndk-dir=<NDK_ROOT> \
--platform=android-L --arch=arm64 --install-dir=<some_dir> \
--toolchain=aarch64-linux-android-4.9 \
--llvm-version=Snapdragon_LLVM_for_Android_3.5 --system=linux-x86_64

The above command line specifies that android-L platform directory must be
copied to be used as the standalone sysroot and GCC-4.9 toolchain must be
copied to be used as the linker and for other binutils such as objdump.

NOTES:
1. The Android NDK r9c has an incompatible definition in its header file math.h
that causes compilation errors with LLVM (both Snapdragon LLVM and llvm.org
LLVM). To use r9c, please comment out the following line in the file
<NDK_ROOT>/platforms/android-xx/arch-arm/usr/include/math.h

int     __builtin_isnan(double) __NDK_FPABI_MATH__ __pure2;


2. The gold plugin for LLVM compiler for use with Link Time Optimization
(LTO) is not distributed as part of the Linux version of the LLVM compiler. If
you are using Android NDK version r10, copy the file LLVMgold.so from
Android-NDK-root/toolchains/llvm-3.4/prebuilt/linux-x86_64/lib
to $INSTALL_PREFIX/lib, where INSTALL_PREFIX is the top of Snapdragon LLVM 3.5
install directory


Contacts & Bug Reporting
http://developer.qualcomm.com/llvm-forum

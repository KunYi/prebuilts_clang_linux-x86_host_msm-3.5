/*===---- arm_neon.h - ARM Neon intrinsics ---------------------------------===
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

#ifndef __ARM_NEON_H
#define __ARM_NEON_H

#if !defined(__ARM_NEON)
#error "NEON support not enabled"
#endif

#include <stdint.h>

typedef float float32_t;
typedef __fp16 float16_t;
#ifdef __aarch64__
typedef double float64_t;
#endif

#ifdef __aarch64__
typedef uint8_t poly8_t;
typedef uint16_t poly16_t;
typedef uint64_t poly64_t;
typedef __uint128_t poly128_t;
#else
typedef int8_t poly8_t;
typedef int16_t poly16_t;
#endif
typedef __attribute__((neon_vector_type(8))) int8_t int8x8_t;
typedef __attribute__((neon_vector_type(16))) int8_t int8x16_t;
typedef __attribute__((neon_vector_type(4))) int16_t int16x4_t;
typedef __attribute__((neon_vector_type(8))) int16_t int16x8_t;
typedef __attribute__((neon_vector_type(2))) int32_t int32x2_t;
typedef __attribute__((neon_vector_type(4))) int32_t int32x4_t;
typedef __attribute__((neon_vector_type(1))) int64_t int64x1_t;
typedef __attribute__((neon_vector_type(2))) int64_t int64x2_t;
typedef __attribute__((neon_vector_type(8))) uint8_t uint8x8_t;
typedef __attribute__((neon_vector_type(16))) uint8_t uint8x16_t;
typedef __attribute__((neon_vector_type(4))) uint16_t uint16x4_t;
typedef __attribute__((neon_vector_type(8))) uint16_t uint16x8_t;
typedef __attribute__((neon_vector_type(2))) uint32_t uint32x2_t;
typedef __attribute__((neon_vector_type(4))) uint32_t uint32x4_t;
typedef __attribute__((neon_vector_type(1))) uint64_t uint64x1_t;
typedef __attribute__((neon_vector_type(2))) uint64_t uint64x2_t;
typedef __attribute__((neon_vector_type(4))) float16_t float16x4_t;
typedef __attribute__((neon_vector_type(8))) float16_t float16x8_t;
typedef __attribute__((neon_vector_type(2))) float32_t float32x2_t;
typedef __attribute__((neon_vector_type(4))) float32_t float32x4_t;
#ifdef __aarch64__
typedef __attribute__((neon_vector_type(1))) float64_t float64x1_t;
typedef __attribute__((neon_vector_type(2))) float64_t float64x2_t;
#endif
typedef __attribute__((neon_polyvector_type(8))) poly8_t poly8x8_t;
typedef __attribute__((neon_polyvector_type(16))) poly8_t poly8x16_t;
typedef __attribute__((neon_polyvector_type(4))) poly16_t poly16x4_t;
typedef __attribute__((neon_polyvector_type(8))) poly16_t poly16x8_t;
#ifdef __aarch64__
typedef __attribute__((neon_polyvector_type(1))) poly64_t poly64x1_t;
typedef __attribute__((neon_polyvector_type(2))) poly64_t poly64x2_t;
#endif

typedef struct int8x8x2_t {
  int8x8_t val[2];
} int8x8x2_t;

typedef struct int8x16x2_t {
  int8x16_t val[2];
} int8x16x2_t;

typedef struct int16x4x2_t {
  int16x4_t val[2];
} int16x4x2_t;

typedef struct int16x8x2_t {
  int16x8_t val[2];
} int16x8x2_t;

typedef struct int32x2x2_t {
  int32x2_t val[2];
} int32x2x2_t;

typedef struct int32x4x2_t {
  int32x4_t val[2];
} int32x4x2_t;

typedef struct int64x1x2_t {
  int64x1_t val[2];
} int64x1x2_t;

typedef struct int64x2x2_t {
  int64x2_t val[2];
} int64x2x2_t;

typedef struct uint8x8x2_t {
  uint8x8_t val[2];
} uint8x8x2_t;

typedef struct uint8x16x2_t {
  uint8x16_t val[2];
} uint8x16x2_t;

typedef struct uint16x4x2_t {
  uint16x4_t val[2];
} uint16x4x2_t;

typedef struct uint16x8x2_t {
  uint16x8_t val[2];
} uint16x8x2_t;

typedef struct uint32x2x2_t {
  uint32x2_t val[2];
} uint32x2x2_t;

typedef struct uint32x4x2_t {
  uint32x4_t val[2];
} uint32x4x2_t;

typedef struct uint64x1x2_t {
  uint64x1_t val[2];
} uint64x1x2_t;

typedef struct uint64x2x2_t {
  uint64x2_t val[2];
} uint64x2x2_t;

typedef struct float16x4x2_t {
  float16x4_t val[2];
} float16x4x2_t;

typedef struct float16x8x2_t {
  float16x8_t val[2];
} float16x8x2_t;

typedef struct float32x2x2_t {
  float32x2_t val[2];
} float32x2x2_t;

typedef struct float32x4x2_t {
  float32x4_t val[2];
} float32x4x2_t;

#ifdef __aarch64__
typedef struct float64x1x2_t {
  float64x1_t val[2];
} float64x1x2_t;

typedef struct float64x2x2_t {
  float64x2_t val[2];
} float64x2x2_t;

#endif
typedef struct poly8x8x2_t {
  poly8x8_t val[2];
} poly8x8x2_t;

typedef struct poly8x16x2_t {
  poly8x16_t val[2];
} poly8x16x2_t;

typedef struct poly16x4x2_t {
  poly16x4_t val[2];
} poly16x4x2_t;

typedef struct poly16x8x2_t {
  poly16x8_t val[2];
} poly16x8x2_t;

#ifdef __aarch64__
typedef struct poly64x1x2_t {
  poly64x1_t val[2];
} poly64x1x2_t;

typedef struct poly64x2x2_t {
  poly64x2_t val[2];
} poly64x2x2_t;

#endif
typedef struct int8x8x3_t {
  int8x8_t val[3];
} int8x8x3_t;

typedef struct int8x16x3_t {
  int8x16_t val[3];
} int8x16x3_t;

typedef struct int16x4x3_t {
  int16x4_t val[3];
} int16x4x3_t;

typedef struct int16x8x3_t {
  int16x8_t val[3];
} int16x8x3_t;

typedef struct int32x2x3_t {
  int32x2_t val[3];
} int32x2x3_t;

typedef struct int32x4x3_t {
  int32x4_t val[3];
} int32x4x3_t;

typedef struct int64x1x3_t {
  int64x1_t val[3];
} int64x1x3_t;

typedef struct int64x2x3_t {
  int64x2_t val[3];
} int64x2x3_t;

typedef struct uint8x8x3_t {
  uint8x8_t val[3];
} uint8x8x3_t;

typedef struct uint8x16x3_t {
  uint8x16_t val[3];
} uint8x16x3_t;

typedef struct uint16x4x3_t {
  uint16x4_t val[3];
} uint16x4x3_t;

typedef struct uint16x8x3_t {
  uint16x8_t val[3];
} uint16x8x3_t;

typedef struct uint32x2x3_t {
  uint32x2_t val[3];
} uint32x2x3_t;

typedef struct uint32x4x3_t {
  uint32x4_t val[3];
} uint32x4x3_t;

typedef struct uint64x1x3_t {
  uint64x1_t val[3];
} uint64x1x3_t;

typedef struct uint64x2x3_t {
  uint64x2_t val[3];
} uint64x2x3_t;

typedef struct float16x4x3_t {
  float16x4_t val[3];
} float16x4x3_t;

typedef struct float16x8x3_t {
  float16x8_t val[3];
} float16x8x3_t;

typedef struct float32x2x3_t {
  float32x2_t val[3];
} float32x2x3_t;

typedef struct float32x4x3_t {
  float32x4_t val[3];
} float32x4x3_t;

#ifdef __aarch64__
typedef struct float64x1x3_t {
  float64x1_t val[3];
} float64x1x3_t;

typedef struct float64x2x3_t {
  float64x2_t val[3];
} float64x2x3_t;

#endif
typedef struct poly8x8x3_t {
  poly8x8_t val[3];
} poly8x8x3_t;

typedef struct poly8x16x3_t {
  poly8x16_t val[3];
} poly8x16x3_t;

typedef struct poly16x4x3_t {
  poly16x4_t val[3];
} poly16x4x3_t;

typedef struct poly16x8x3_t {
  poly16x8_t val[3];
} poly16x8x3_t;

#ifdef __aarch64__
typedef struct poly64x1x3_t {
  poly64x1_t val[3];
} poly64x1x3_t;

typedef struct poly64x2x3_t {
  poly64x2_t val[3];
} poly64x2x3_t;

#endif
typedef struct int8x8x4_t {
  int8x8_t val[4];
} int8x8x4_t;

typedef struct int8x16x4_t {
  int8x16_t val[4];
} int8x16x4_t;

typedef struct int16x4x4_t {
  int16x4_t val[4];
} int16x4x4_t;

typedef struct int16x8x4_t {
  int16x8_t val[4];
} int16x8x4_t;

typedef struct int32x2x4_t {
  int32x2_t val[4];
} int32x2x4_t;

typedef struct int32x4x4_t {
  int32x4_t val[4];
} int32x4x4_t;

typedef struct int64x1x4_t {
  int64x1_t val[4];
} int64x1x4_t;

typedef struct int64x2x4_t {
  int64x2_t val[4];
} int64x2x4_t;

typedef struct uint8x8x4_t {
  uint8x8_t val[4];
} uint8x8x4_t;

typedef struct uint8x16x4_t {
  uint8x16_t val[4];
} uint8x16x4_t;

typedef struct uint16x4x4_t {
  uint16x4_t val[4];
} uint16x4x4_t;

typedef struct uint16x8x4_t {
  uint16x8_t val[4];
} uint16x8x4_t;

typedef struct uint32x2x4_t {
  uint32x2_t val[4];
} uint32x2x4_t;

typedef struct uint32x4x4_t {
  uint32x4_t val[4];
} uint32x4x4_t;

typedef struct uint64x1x4_t {
  uint64x1_t val[4];
} uint64x1x4_t;

typedef struct uint64x2x4_t {
  uint64x2_t val[4];
} uint64x2x4_t;

typedef struct float16x4x4_t {
  float16x4_t val[4];
} float16x4x4_t;

typedef struct float16x8x4_t {
  float16x8_t val[4];
} float16x8x4_t;

typedef struct float32x2x4_t {
  float32x2_t val[4];
} float32x2x4_t;

typedef struct float32x4x4_t {
  float32x4_t val[4];
} float32x4x4_t;

#ifdef __aarch64__
typedef struct float64x1x4_t {
  float64x1_t val[4];
} float64x1x4_t;

typedef struct float64x2x4_t {
  float64x2_t val[4];
} float64x2x4_t;

#endif
typedef struct poly8x8x4_t {
  poly8x8_t val[4];
} poly8x8x4_t;

typedef struct poly8x16x4_t {
  poly8x16_t val[4];
} poly8x16x4_t;

typedef struct poly16x4x4_t {
  poly16x4_t val[4];
} poly16x4x4_t;

typedef struct poly16x8x4_t {
  poly16x8_t val[4];
} poly16x8x4_t;

#ifdef __aarch64__
typedef struct poly64x1x4_t {
  poly64x1_t val[4];
} poly64x1x4_t;

typedef struct poly64x2x4_t {
  poly64x2_t val[4];
} poly64x2x4_t;

#endif

#define __ai static inline __attribute__((__always_inline__, __nodebug__))

__ai uint8x16_t vabdq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vabdq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
__ai uint32x4_t vabdq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vabdq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
__ai uint16x8_t vabdq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vabdq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
__ai int8x16_t vabdq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vabdq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
__ai float32x4_t vabdq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vabdq_v((int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
__ai int32x4_t vabdq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vabdq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
__ai int16x8_t vabdq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vabdq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
__ai uint8x8_t vabd_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vabd_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
__ai uint32x2_t vabd_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vabd_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
__ai uint16x4_t vabd_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vabd_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
__ai int8x8_t vabd_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vabd_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
__ai float32x2_t vabd_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vabd_v((int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
__ai int32x2_t vabd_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vabd_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
__ai int16x4_t vabd_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vabd_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
__ai int8x16_t vabsq_s8(int8x16_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vabsq_v((int8x16_t)__p0, 32);
  return __ret;
}
__ai float32x4_t vabsq_f32(float32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vabsq_v((int8x16_t)__p0, 41);
  return __ret;
}
__ai int32x4_t vabsq_s32(int32x4_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vabsq_v((int8x16_t)__p0, 34);
  return __ret;
}
__ai int16x8_t vabsq_s16(int16x8_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vabsq_v((int8x16_t)__p0, 33);
  return __ret;
}
__ai int8x8_t vabs_s8(int8x8_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vabs_v((int8x8_t)__p0, 0);
  return __ret;
}
__ai float32x2_t vabs_f32(float32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vabs_v((int8x8_t)__p0, 9);
  return __ret;
}
__ai int32x2_t vabs_s32(int32x2_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vabs_v((int8x8_t)__p0, 2);
  return __ret;
}
__ai int16x4_t vabs_s16(int16x4_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vabs_v((int8x8_t)__p0, 1);
  return __ret;
}
__ai uint8x16_t vaddq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
__ai uint32x4_t vaddq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
__ai uint64x2_t vaddq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
__ai uint16x8_t vaddq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
__ai int8x16_t vaddq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
__ai float32x4_t vaddq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
__ai int32x4_t vaddq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
__ai int64x2_t vaddq_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
__ai int16x8_t vaddq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
__ai uint8x8_t vadd_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
__ai uint32x2_t vadd_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
__ai uint64x1_t vadd_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x1_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
__ai uint16x4_t vadd_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
__ai int8x8_t vadd_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
__ai float32x2_t vadd_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
__ai int32x2_t vadd_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
__ai int64x1_t vadd_s64(int64x1_t __p0, int64x1_t __p1) {
  int64x1_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
__ai int16x4_t vadd_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
__ai uint16x4_t vaddhn_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vaddhn_v((int8x16_t)__p0, (int8x16_t)__p1, 17);
  return __ret;
}
__ai uint32x2_t vaddhn_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vaddhn_v((int8x16_t)__p0, (int8x16_t)__p1, 18);
  return __ret;
}
__ai uint8x8_t vaddhn_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vaddhn_v((int8x16_t)__p0, (int8x16_t)__p1, 16);
  return __ret;
}
__ai int16x4_t vaddhn_s32(int32x4_t __p0, int32x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vaddhn_v((int8x16_t)__p0, (int8x16_t)__p1, 1);
  return __ret;
}
__ai int32x2_t vaddhn_s64(int64x2_t __p0, int64x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vaddhn_v((int8x16_t)__p0, (int8x16_t)__p1, 2);
  return __ret;
}
__ai int8x8_t vaddhn_s16(int16x8_t __p0, int16x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vaddhn_v((int8x16_t)__p0, (int8x16_t)__p1, 0);
  return __ret;
}
__ai uint8x16_t vandq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}
__ai uint32x4_t vandq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}
__ai uint64x2_t vandq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}
__ai uint16x8_t vandq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}
__ai int8x16_t vandq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}
__ai int32x4_t vandq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}
__ai int64x2_t vandq_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}
__ai int16x8_t vandq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}
__ai uint8x8_t vand_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}
__ai uint32x2_t vand_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}
__ai uint64x1_t vand_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x1_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}
__ai uint16x4_t vand_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}
__ai int8x8_t vand_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}
__ai int32x2_t vand_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}
__ai int64x1_t vand_s64(int64x1_t __p0, int64x1_t __p1) {
  int64x1_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}
__ai int16x4_t vand_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = __p0 & __p1;
  return __ret;
}
__ai uint8x16_t vbicq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}
__ai uint32x4_t vbicq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}
__ai uint64x2_t vbicq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}
__ai uint16x8_t vbicq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}
__ai int8x16_t vbicq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}
__ai int32x4_t vbicq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}
__ai int64x2_t vbicq_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}
__ai int16x8_t vbicq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}
__ai uint8x8_t vbic_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}
__ai uint32x2_t vbic_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}
__ai uint64x1_t vbic_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x1_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}
__ai uint16x4_t vbic_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}
__ai int8x8_t vbic_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}
__ai int32x2_t vbic_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}
__ai int64x1_t vbic_s64(int64x1_t __p0, int64x1_t __p1) {
  int64x1_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}
__ai int16x4_t vbic_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = __p0 & ~__p1;
  return __ret;
}
__ai poly8x8_t vbsl_p8(uint8x8_t __p0, poly8x8_t __p1, poly8x8_t __p2) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vbsl_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 4);
  return __ret;
}
__ai poly16x4_t vbsl_p16(uint16x4_t __p0, poly16x4_t __p1, poly16x4_t __p2) {
  poly16x4_t __ret;
  __ret = (poly16x4_t) __builtin_neon_vbsl_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 5);
  return __ret;
}
__ai poly8x16_t vbslq_p8(uint8x16_t __p0, poly8x16_t __p1, poly8x16_t __p2) {
  poly8x16_t __ret;
  __ret = (poly8x16_t) __builtin_neon_vbslq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 36);
  return __ret;
}
__ai poly16x8_t vbslq_p16(uint16x8_t __p0, poly16x8_t __p1, poly16x8_t __p2) {
  poly16x8_t __ret;
  __ret = (poly16x8_t) __builtin_neon_vbslq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 37);
  return __ret;
}
__ai uint8x16_t vbslq_u8(uint8x16_t __p0, uint8x16_t __p1, uint8x16_t __p2) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vbslq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 48);
  return __ret;
}
__ai uint32x4_t vbslq_u32(uint32x4_t __p0, uint32x4_t __p1, uint32x4_t __p2) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vbslq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 50);
  return __ret;
}
__ai uint64x2_t vbslq_u64(uint64x2_t __p0, uint64x2_t __p1, uint64x2_t __p2) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vbslq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 51);
  return __ret;
}
__ai uint16x8_t vbslq_u16(uint16x8_t __p0, uint16x8_t __p1, uint16x8_t __p2) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vbslq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 49);
  return __ret;
}
__ai int8x16_t vbslq_s8(uint8x16_t __p0, int8x16_t __p1, int8x16_t __p2) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vbslq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 32);
  return __ret;
}
__ai float32x4_t vbslq_f32(uint32x4_t __p0, float32x4_t __p1, float32x4_t __p2) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vbslq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 41);
  return __ret;
}
__ai int32x4_t vbslq_s32(uint32x4_t __p0, int32x4_t __p1, int32x4_t __p2) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vbslq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 34);
  return __ret;
}
__ai int64x2_t vbslq_s64(uint64x2_t __p0, int64x2_t __p1, int64x2_t __p2) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vbslq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 35);
  return __ret;
}
__ai int16x8_t vbslq_s16(uint16x8_t __p0, int16x8_t __p1, int16x8_t __p2) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vbslq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 33);
  return __ret;
}
__ai uint8x8_t vbsl_u8(uint8x8_t __p0, uint8x8_t __p1, uint8x8_t __p2) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vbsl_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 16);
  return __ret;
}
__ai uint32x2_t vbsl_u32(uint32x2_t __p0, uint32x2_t __p1, uint32x2_t __p2) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vbsl_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 18);
  return __ret;
}
__ai uint64x1_t vbsl_u64(uint64x1_t __p0, uint64x1_t __p1, uint64x1_t __p2) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vbsl_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 19);
  return __ret;
}
__ai uint16x4_t vbsl_u16(uint16x4_t __p0, uint16x4_t __p1, uint16x4_t __p2) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vbsl_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 17);
  return __ret;
}
__ai int8x8_t vbsl_s8(uint8x8_t __p0, int8x8_t __p1, int8x8_t __p2) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vbsl_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 0);
  return __ret;
}
__ai float32x2_t vbsl_f32(uint32x2_t __p0, float32x2_t __p1, float32x2_t __p2) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vbsl_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 9);
  return __ret;
}
__ai int32x2_t vbsl_s32(uint32x2_t __p0, int32x2_t __p1, int32x2_t __p2) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vbsl_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 2);
  return __ret;
}
__ai int64x1_t vbsl_s64(uint64x1_t __p0, int64x1_t __p1, int64x1_t __p2) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vbsl_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 3);
  return __ret;
}
__ai int16x4_t vbsl_s16(uint16x4_t __p0, int16x4_t __p1, int16x4_t __p2) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vbsl_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 1);
  return __ret;
}
__ai uint32x4_t vcageq_f32(float32x4_t __p0, float32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vcageq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
__ai uint32x2_t vcage_f32(float32x2_t __p0, float32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vcage_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
__ai uint32x4_t vcagtq_f32(float32x4_t __p0, float32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vcagtq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
__ai uint32x2_t vcagt_f32(float32x2_t __p0, float32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vcagt_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
__ai uint32x4_t vcaleq_f32(float32x4_t __p0, float32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vcaleq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
__ai uint32x2_t vcale_f32(float32x2_t __p0, float32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vcale_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
__ai uint32x4_t vcaltq_f32(float32x4_t __p0, float32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vcaltq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
__ai uint32x2_t vcalt_f32(float32x2_t __p0, float32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vcalt_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
__ai uint8x8_t vceq_p8(poly8x8_t __p0, poly8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0 == __p1);
  return __ret;
}
__ai uint8x16_t vceqq_p8(poly8x16_t __p0, poly8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0 == __p1);
  return __ret;
}
__ai uint8x16_t vceqq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0 == __p1);
  return __ret;
}
__ai uint32x4_t vceqq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0 == __p1);
  return __ret;
}
__ai uint16x8_t vceqq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0 == __p1);
  return __ret;
}
__ai uint8x16_t vceqq_s8(int8x16_t __p0, int8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0 == __p1);
  return __ret;
}
__ai uint32x4_t vceqq_f32(float32x4_t __p0, float32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0 == __p1);
  return __ret;
}
__ai uint32x4_t vceqq_s32(int32x4_t __p0, int32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0 == __p1);
  return __ret;
}
__ai uint16x8_t vceqq_s16(int16x8_t __p0, int16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0 == __p1);
  return __ret;
}
__ai uint8x8_t vceq_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0 == __p1);
  return __ret;
}
__ai uint32x2_t vceq_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0 == __p1);
  return __ret;
}
__ai uint16x4_t vceq_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0 == __p1);
  return __ret;
}
__ai uint8x8_t vceq_s8(int8x8_t __p0, int8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0 == __p1);
  return __ret;
}
__ai uint32x2_t vceq_f32(float32x2_t __p0, float32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0 == __p1);
  return __ret;
}
__ai uint32x2_t vceq_s32(int32x2_t __p0, int32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0 == __p1);
  return __ret;
}
__ai uint16x4_t vceq_s16(int16x4_t __p0, int16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0 == __p1);
  return __ret;
}
__ai uint8x16_t vcgeq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0 >= __p1);
  return __ret;
}
__ai uint32x4_t vcgeq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0 >= __p1);
  return __ret;
}
__ai uint16x8_t vcgeq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0 >= __p1);
  return __ret;
}
__ai uint8x16_t vcgeq_s8(int8x16_t __p0, int8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0 >= __p1);
  return __ret;
}
__ai uint32x4_t vcgeq_f32(float32x4_t __p0, float32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0 >= __p1);
  return __ret;
}
__ai uint32x4_t vcgeq_s32(int32x4_t __p0, int32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0 >= __p1);
  return __ret;
}
__ai uint16x8_t vcgeq_s16(int16x8_t __p0, int16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0 >= __p1);
  return __ret;
}
__ai uint8x8_t vcge_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0 >= __p1);
  return __ret;
}
__ai uint32x2_t vcge_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0 >= __p1);
  return __ret;
}
__ai uint16x4_t vcge_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0 >= __p1);
  return __ret;
}
__ai uint8x8_t vcge_s8(int8x8_t __p0, int8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0 >= __p1);
  return __ret;
}
__ai uint32x2_t vcge_f32(float32x2_t __p0, float32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0 >= __p1);
  return __ret;
}
__ai uint32x2_t vcge_s32(int32x2_t __p0, int32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0 >= __p1);
  return __ret;
}
__ai uint16x4_t vcge_s16(int16x4_t __p0, int16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0 >= __p1);
  return __ret;
}
__ai uint8x16_t vcgtq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0 > __p1);
  return __ret;
}
__ai uint32x4_t vcgtq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0 > __p1);
  return __ret;
}
__ai uint16x8_t vcgtq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0 > __p1);
  return __ret;
}
__ai uint8x16_t vcgtq_s8(int8x16_t __p0, int8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0 > __p1);
  return __ret;
}
__ai uint32x4_t vcgtq_f32(float32x4_t __p0, float32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0 > __p1);
  return __ret;
}
__ai uint32x4_t vcgtq_s32(int32x4_t __p0, int32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0 > __p1);
  return __ret;
}
__ai uint16x8_t vcgtq_s16(int16x8_t __p0, int16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0 > __p1);
  return __ret;
}
__ai uint8x8_t vcgt_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0 > __p1);
  return __ret;
}
__ai uint32x2_t vcgt_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0 > __p1);
  return __ret;
}
__ai uint16x4_t vcgt_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0 > __p1);
  return __ret;
}
__ai uint8x8_t vcgt_s8(int8x8_t __p0, int8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0 > __p1);
  return __ret;
}
__ai uint32x2_t vcgt_f32(float32x2_t __p0, float32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0 > __p1);
  return __ret;
}
__ai uint32x2_t vcgt_s32(int32x2_t __p0, int32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0 > __p1);
  return __ret;
}
__ai uint16x4_t vcgt_s16(int16x4_t __p0, int16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0 > __p1);
  return __ret;
}
__ai uint8x16_t vcleq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0 <= __p1);
  return __ret;
}
__ai uint32x4_t vcleq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0 <= __p1);
  return __ret;
}
__ai uint16x8_t vcleq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0 <= __p1);
  return __ret;
}
__ai uint8x16_t vcleq_s8(int8x16_t __p0, int8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0 <= __p1);
  return __ret;
}
__ai uint32x4_t vcleq_f32(float32x4_t __p0, float32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0 <= __p1);
  return __ret;
}
__ai uint32x4_t vcleq_s32(int32x4_t __p0, int32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0 <= __p1);
  return __ret;
}
__ai uint16x8_t vcleq_s16(int16x8_t __p0, int16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0 <= __p1);
  return __ret;
}
__ai uint8x8_t vcle_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0 <= __p1);
  return __ret;
}
__ai uint32x2_t vcle_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0 <= __p1);
  return __ret;
}
__ai uint16x4_t vcle_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0 <= __p1);
  return __ret;
}
__ai uint8x8_t vcle_s8(int8x8_t __p0, int8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0 <= __p1);
  return __ret;
}
__ai uint32x2_t vcle_f32(float32x2_t __p0, float32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0 <= __p1);
  return __ret;
}
__ai uint32x2_t vcle_s32(int32x2_t __p0, int32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0 <= __p1);
  return __ret;
}
__ai uint16x4_t vcle_s16(int16x4_t __p0, int16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0 <= __p1);
  return __ret;
}
__ai int8x16_t vclsq_s8(int8x16_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vclsq_v((int8x16_t)__p0, 32);
  return __ret;
}
__ai int32x4_t vclsq_s32(int32x4_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vclsq_v((int8x16_t)__p0, 34);
  return __ret;
}
__ai int16x8_t vclsq_s16(int16x8_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vclsq_v((int8x16_t)__p0, 33);
  return __ret;
}
__ai int8x8_t vcls_s8(int8x8_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vcls_v((int8x8_t)__p0, 0);
  return __ret;
}
__ai int32x2_t vcls_s32(int32x2_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vcls_v((int8x8_t)__p0, 2);
  return __ret;
}
__ai int16x4_t vcls_s16(int16x4_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vcls_v((int8x8_t)__p0, 1);
  return __ret;
}
__ai uint8x16_t vcltq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0 < __p1);
  return __ret;
}
__ai uint32x4_t vcltq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0 < __p1);
  return __ret;
}
__ai uint16x8_t vcltq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0 < __p1);
  return __ret;
}
__ai uint8x16_t vcltq_s8(int8x16_t __p0, int8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0 < __p1);
  return __ret;
}
__ai uint32x4_t vcltq_f32(float32x4_t __p0, float32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0 < __p1);
  return __ret;
}
__ai uint32x4_t vcltq_s32(int32x4_t __p0, int32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0 < __p1);
  return __ret;
}
__ai uint16x8_t vcltq_s16(int16x8_t __p0, int16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0 < __p1);
  return __ret;
}
__ai uint8x8_t vclt_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0 < __p1);
  return __ret;
}
__ai uint32x2_t vclt_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0 < __p1);
  return __ret;
}
__ai uint16x4_t vclt_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0 < __p1);
  return __ret;
}
__ai uint8x8_t vclt_s8(int8x8_t __p0, int8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0 < __p1);
  return __ret;
}
__ai uint32x2_t vclt_f32(float32x2_t __p0, float32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0 < __p1);
  return __ret;
}
__ai uint32x2_t vclt_s32(int32x2_t __p0, int32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0 < __p1);
  return __ret;
}
__ai uint16x4_t vclt_s16(int16x4_t __p0, int16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0 < __p1);
  return __ret;
}
__ai uint8x16_t vclzq_u8(uint8x16_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vclzq_v((int8x16_t)__p0, 48);
  return __ret;
}
__ai uint32x4_t vclzq_u32(uint32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vclzq_v((int8x16_t)__p0, 50);
  return __ret;
}
__ai uint16x8_t vclzq_u16(uint16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vclzq_v((int8x16_t)__p0, 49);
  return __ret;
}
__ai int8x16_t vclzq_s8(int8x16_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vclzq_v((int8x16_t)__p0, 32);
  return __ret;
}
__ai int32x4_t vclzq_s32(int32x4_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vclzq_v((int8x16_t)__p0, 34);
  return __ret;
}
__ai int16x8_t vclzq_s16(int16x8_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vclzq_v((int8x16_t)__p0, 33);
  return __ret;
}
__ai uint8x8_t vclz_u8(uint8x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vclz_v((int8x8_t)__p0, 16);
  return __ret;
}
__ai uint32x2_t vclz_u32(uint32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vclz_v((int8x8_t)__p0, 18);
  return __ret;
}
__ai uint16x4_t vclz_u16(uint16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vclz_v((int8x8_t)__p0, 17);
  return __ret;
}
__ai int8x8_t vclz_s8(int8x8_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vclz_v((int8x8_t)__p0, 0);
  return __ret;
}
__ai int32x2_t vclz_s32(int32x2_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vclz_v((int8x8_t)__p0, 2);
  return __ret;
}
__ai int16x4_t vclz_s16(int16x4_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vclz_v((int8x8_t)__p0, 1);
  return __ret;
}
__ai poly8x8_t vcnt_p8(poly8x8_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vcnt_v((int8x8_t)__p0, 4);
  return __ret;
}
__ai poly8x16_t vcntq_p8(poly8x16_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t) __builtin_neon_vcntq_v((int8x16_t)__p0, 36);
  return __ret;
}
__ai uint8x16_t vcntq_u8(uint8x16_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vcntq_v((int8x16_t)__p0, 48);
  return __ret;
}
__ai int8x16_t vcntq_s8(int8x16_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vcntq_v((int8x16_t)__p0, 32);
  return __ret;
}
__ai uint8x8_t vcnt_u8(uint8x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vcnt_v((int8x8_t)__p0, 16);
  return __ret;
}
__ai int8x8_t vcnt_s8(int8x8_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vcnt_v((int8x8_t)__p0, 0);
  return __ret;
}
__ai poly8x16_t vcombine_p8(poly8x8_t __p0, poly8x8_t __p1) {
  poly8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15);
  return __ret;
}
__ai poly16x8_t vcombine_p16(poly16x4_t __p0, poly16x4_t __p1) {
  poly16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 1, 2, 3, 4, 5, 6, 7);
  return __ret;
}
__ai uint8x16_t vcombine_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15);
  return __ret;
}
__ai uint32x4_t vcombine_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 1, 2, 3);
  return __ret;
}
__ai uint64x2_t vcombine_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 1);
  return __ret;
}
__ai uint16x8_t vcombine_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 1, 2, 3, 4, 5, 6, 7);
  return __ret;
}
__ai int8x16_t vcombine_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15);
  return __ret;
}
__ai float32x4_t vcombine_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 1, 2, 3);
  return __ret;
}
__ai float16x8_t vcombine_f16(float16x4_t __p0, float16x4_t __p1) {
  float16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 1, 2, 3, 4, 5, 6, 7);
  return __ret;
}
__ai int32x4_t vcombine_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 1, 2, 3);
  return __ret;
}
__ai int64x2_t vcombine_s64(int64x1_t __p0, int64x1_t __p1) {
  int64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 1);
  return __ret;
}
__ai int16x8_t vcombine_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 1, 2, 3, 4, 5, 6, 7);
  return __ret;
}
__ai poly8x8_t vcreate_p8(uint64_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
__ai poly16x4_t vcreate_p16(uint64_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
__ai uint8x8_t vcreate_u8(uint64_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
__ai uint32x2_t vcreate_u32(uint64_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
__ai uint64x1_t vcreate_u64(uint64_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
__ai uint16x4_t vcreate_u16(uint64_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
__ai int8x8_t vcreate_s8(uint64_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
__ai float32x2_t vcreate_f32(uint64_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
__ai float16x4_t vcreate_f16(uint64_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
__ai int32x2_t vcreate_s32(uint64_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
__ai int64x1_t vcreate_s64(uint64_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
__ai int16x4_t vcreate_s16(uint64_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
__ai float16x4_t vcvt_f16_f32(float32x4_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t) __builtin_neon_vcvt_f16_v((int8x16_t)__p0, 8);
  return __ret;
}
__ai float32x4_t vcvtq_f32_u32(uint32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vcvtq_f32_v((int8x16_t)__p0, 50);
  return __ret;
}
__ai float32x4_t vcvtq_f32_s32(int32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vcvtq_f32_v((int8x16_t)__p0, 34);
  return __ret;
}
__ai float32x2_t vcvt_f32_u32(uint32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vcvt_f32_v((int8x8_t)__p0, 18);
  return __ret;
}
__ai float32x2_t vcvt_f32_s32(int32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vcvt_f32_v((int8x8_t)__p0, 2);
  return __ret;
}
__ai float32x4_t vcvt_f32_f16(float16x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vcvt_f32_f16((int8x8_t)__p0, 8);
  return __ret;
}
#define vcvtq_n_f32_u32(__p0, __p1) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  float32x4_t __ret; \
  __ret = (float32x4_t) __builtin_neon_vcvtq_n_f32_v((int8x16_t)__s0, __p1, 50); \
  __ret; \
})
#define vcvtq_n_f32_s32(__p0, __p1) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  float32x4_t __ret; \
  __ret = (float32x4_t) __builtin_neon_vcvtq_n_f32_v((int8x16_t)__s0, __p1, 34); \
  __ret; \
})
#define vcvt_n_f32_u32(__p0, __p1) __extension__ ({ \
  uint32x2_t __s0 = __p0; \
  float32x2_t __ret; \
  __ret = (float32x2_t) __builtin_neon_vcvt_n_f32_v((int8x8_t)__s0, __p1, 18); \
  __ret; \
})
#define vcvt_n_f32_s32(__p0, __p1) __extension__ ({ \
  int32x2_t __s0 = __p0; \
  float32x2_t __ret; \
  __ret = (float32x2_t) __builtin_neon_vcvt_n_f32_v((int8x8_t)__s0, __p1, 2); \
  __ret; \
})
#define vcvtq_n_s32_f32(__p0, __p1) __extension__ ({ \
  float32x4_t __s0 = __p0; \
  int32x4_t __ret; \
  __ret = (int32x4_t) __builtin_neon_vcvtq_n_s32_v((int8x16_t)__s0, __p1, 34); \
  __ret; \
})
#define vcvt_n_s32_f32(__p0, __p1) __extension__ ({ \
  float32x2_t __s0 = __p0; \
  int32x2_t __ret; \
  __ret = (int32x2_t) __builtin_neon_vcvt_n_s32_v((int8x8_t)__s0, __p1, 2); \
  __ret; \
})
#define vcvtq_n_u32_f32(__p0, __p1) __extension__ ({ \
  float32x4_t __s0 = __p0; \
  uint32x4_t __ret; \
  __ret = (uint32x4_t) __builtin_neon_vcvtq_n_u32_v((int8x16_t)__s0, __p1, 50); \
  __ret; \
})
#define vcvt_n_u32_f32(__p0, __p1) __extension__ ({ \
  float32x2_t __s0 = __p0; \
  uint32x2_t __ret; \
  __ret = (uint32x2_t) __builtin_neon_vcvt_n_u32_v((int8x8_t)__s0, __p1, 18); \
  __ret; \
})
__ai int32x4_t vcvtq_s32_f32(float32x4_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vcvtq_s32_v((int8x16_t)__p0, 34);
  return __ret;
}
__ai int32x2_t vcvt_s32_f32(float32x2_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vcvt_s32_v((int8x8_t)__p0, 2);
  return __ret;
}
__ai uint32x4_t vcvtq_u32_f32(float32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vcvtq_u32_v((int8x16_t)__p0, 50);
  return __ret;
}
__ai uint32x2_t vcvt_u32_f32(float32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vcvt_u32_v((int8x8_t)__p0, 18);
  return __ret;
}
#define vdup_lane_p8(__p0, __p1) __extension__ ({ \
  poly8x8_t __s0 = __p0; \
  poly8x8_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdup_lane_p16(__p0, __p1) __extension__ ({ \
  poly16x4_t __s0 = __p0; \
  poly16x4_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdupq_lane_p8(__p0, __p1) __extension__ ({ \
  poly8x8_t __s0 = __p0; \
  poly8x16_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdupq_lane_p16(__p0, __p1) __extension__ ({ \
  poly16x4_t __s0 = __p0; \
  poly16x8_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdupq_lane_u8(__p0, __p1) __extension__ ({ \
  uint8x8_t __s0 = __p0; \
  uint8x16_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdupq_lane_u32(__p0, __p1) __extension__ ({ \
  uint32x2_t __s0 = __p0; \
  uint32x4_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdupq_lane_u64(__p0, __p1) __extension__ ({ \
  uint64x1_t __s0 = __p0; \
  uint64x2_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1); \
  __ret; \
})
#define vdupq_lane_u16(__p0, __p1) __extension__ ({ \
  uint16x4_t __s0 = __p0; \
  uint16x8_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdupq_lane_s8(__p0, __p1) __extension__ ({ \
  int8x8_t __s0 = __p0; \
  int8x16_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdupq_lane_f32(__p0, __p1) __extension__ ({ \
  float32x2_t __s0 = __p0; \
  float32x4_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdupq_lane_s32(__p0, __p1) __extension__ ({ \
  int32x2_t __s0 = __p0; \
  int32x4_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdupq_lane_s64(__p0, __p1) __extension__ ({ \
  int64x1_t __s0 = __p0; \
  int64x2_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1); \
  __ret; \
})
#define vdupq_lane_s16(__p0, __p1) __extension__ ({ \
  int16x4_t __s0 = __p0; \
  int16x8_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdup_lane_u8(__p0, __p1) __extension__ ({ \
  uint8x8_t __s0 = __p0; \
  uint8x8_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdup_lane_u32(__p0, __p1) __extension__ ({ \
  uint32x2_t __s0 = __p0; \
  uint32x2_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1); \
  __ret; \
})
#define vdup_lane_u64(__p0, __p1) __extension__ ({ \
  uint64x1_t __s0 = __p0; \
  uint64x1_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1); \
  __ret; \
})
#define vdup_lane_u16(__p0, __p1) __extension__ ({ \
  uint16x4_t __s0 = __p0; \
  uint16x4_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdup_lane_s8(__p0, __p1) __extension__ ({ \
  int8x8_t __s0 = __p0; \
  int8x8_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdup_lane_f32(__p0, __p1) __extension__ ({ \
  float32x2_t __s0 = __p0; \
  float32x2_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1); \
  __ret; \
})
#define vdup_lane_s32(__p0, __p1) __extension__ ({ \
  int32x2_t __s0 = __p0; \
  int32x2_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1); \
  __ret; \
})
#define vdup_lane_s64(__p0, __p1) __extension__ ({ \
  int64x1_t __s0 = __p0; \
  int64x1_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1); \
  __ret; \
})
#define vdup_lane_s16(__p0, __p1) __extension__ ({ \
  int16x4_t __s0 = __p0; \
  int16x4_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1); \
  __ret; \
})
__ai poly8x8_t vdup_n_p8(poly8_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
__ai poly16x4_t vdup_n_p16(poly16_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t) {__p0, __p0, __p0, __p0};
  return __ret;
}
__ai poly8x16_t vdupq_n_p8(poly8_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
__ai poly16x8_t vdupq_n_p16(poly16_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
__ai uint8x16_t vdupq_n_u8(uint8_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
__ai uint32x4_t vdupq_n_u32(uint32_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) {__p0, __p0, __p0, __p0};
  return __ret;
}
__ai uint64x2_t vdupq_n_u64(uint64_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) {__p0, __p0};
  return __ret;
}
__ai uint16x8_t vdupq_n_u16(uint16_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
__ai int8x16_t vdupq_n_s8(int8_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
__ai float32x4_t vdupq_n_f32(float32_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) {__p0, __p0, __p0, __p0};
  return __ret;
}
#define vdupq_n_f16(__p0) __extension__ ({ \
  float16_t __s0 = __p0; \
  float16x8_t __ret; \
  __ret = (float16x8_t) {__s0, __s0, __s0, __s0, __s0, __s0, __s0, __s0}; \
  __ret; \
})
__ai int32x4_t vdupq_n_s32(int32_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t) {__p0, __p0, __p0, __p0};
  return __ret;
}
__ai int64x2_t vdupq_n_s64(int64_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t) {__p0, __p0};
  return __ret;
}
__ai int16x8_t vdupq_n_s16(int16_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
__ai uint8x8_t vdup_n_u8(uint8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
__ai uint32x2_t vdup_n_u32(uint32_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) {__p0, __p0};
  return __ret;
}
__ai uint64x1_t vdup_n_u64(uint64_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) {__p0};
  return __ret;
}
__ai uint16x4_t vdup_n_u16(uint16_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) {__p0, __p0, __p0, __p0};
  return __ret;
}
__ai int8x8_t vdup_n_s8(int8_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
__ai float32x2_t vdup_n_f32(float32_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) {__p0, __p0};
  return __ret;
}
#define vdup_n_f16(__p0) __extension__ ({ \
  float16_t __s0 = __p0; \
  float16x4_t __ret; \
  __ret = (float16x4_t) {__s0, __s0, __s0, __s0}; \
  __ret; \
})
__ai int32x2_t vdup_n_s32(int32_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t) {__p0, __p0};
  return __ret;
}
__ai int64x1_t vdup_n_s64(int64_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t) {__p0};
  return __ret;
}
__ai int16x4_t vdup_n_s16(int16_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t) {__p0, __p0, __p0, __p0};
  return __ret;
}
__ai uint8x16_t veorq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}
__ai uint32x4_t veorq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}
__ai uint64x2_t veorq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}
__ai uint16x8_t veorq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}
__ai int8x16_t veorq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}
__ai int32x4_t veorq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}
__ai int64x2_t veorq_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}
__ai int16x8_t veorq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}
__ai uint8x8_t veor_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}
__ai uint32x2_t veor_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}
__ai uint64x1_t veor_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x1_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}
__ai uint16x4_t veor_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}
__ai int8x8_t veor_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}
__ai int32x2_t veor_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}
__ai int64x1_t veor_s64(int64x1_t __p0, int64x1_t __p1) {
  int64x1_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}
__ai int16x4_t veor_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = __p0 ^ __p1;
  return __ret;
}
#define vext_p8(__p0, __p1, __p2) __extension__ ({ \
  poly8x8_t __s0 = __p0; \
  poly8x8_t __s1 = __p1; \
  poly8x8_t __ret; \
  __ret = (poly8x8_t) __builtin_neon_vext_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 4); \
  __ret; \
})
#define vext_p16(__p0, __p1, __p2) __extension__ ({ \
  poly16x4_t __s0 = __p0; \
  poly16x4_t __s1 = __p1; \
  poly16x4_t __ret; \
  __ret = (poly16x4_t) __builtin_neon_vext_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 5); \
  __ret; \
})
#define vextq_p8(__p0, __p1, __p2) __extension__ ({ \
  poly8x16_t __s0 = __p0; \
  poly8x16_t __s1 = __p1; \
  poly8x16_t __ret; \
  __ret = (poly8x16_t) __builtin_neon_vextq_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 36); \
  __ret; \
})
#define vextq_p16(__p0, __p1, __p2) __extension__ ({ \
  poly16x8_t __s0 = __p0; \
  poly16x8_t __s1 = __p1; \
  poly16x8_t __ret; \
  __ret = (poly16x8_t) __builtin_neon_vextq_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 37); \
  __ret; \
})
#define vextq_u8(__p0, __p1, __p2) __extension__ ({ \
  uint8x16_t __s0 = __p0; \
  uint8x16_t __s1 = __p1; \
  uint8x16_t __ret; \
  __ret = (uint8x16_t) __builtin_neon_vextq_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 48); \
  __ret; \
})
#define vextq_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint32x4_t __s1 = __p1; \
  uint32x4_t __ret; \
  __ret = (uint32x4_t) __builtin_neon_vextq_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 50); \
  __ret; \
})
#define vextq_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64x2_t __s0 = __p0; \
  uint64x2_t __s1 = __p1; \
  uint64x2_t __ret; \
  __ret = (uint64x2_t) __builtin_neon_vextq_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 51); \
  __ret; \
})
#define vextq_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x8_t __s0 = __p0; \
  uint16x8_t __s1 = __p1; \
  uint16x8_t __ret; \
  __ret = (uint16x8_t) __builtin_neon_vextq_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 49); \
  __ret; \
})
#define vextq_s8(__p0, __p1, __p2) __extension__ ({ \
  int8x16_t __s0 = __p0; \
  int8x16_t __s1 = __p1; \
  int8x16_t __ret; \
  __ret = (int8x16_t) __builtin_neon_vextq_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 32); \
  __ret; \
})
#define vextq_f32(__p0, __p1, __p2) __extension__ ({ \
  float32x4_t __s0 = __p0; \
  float32x4_t __s1 = __p1; \
  float32x4_t __ret; \
  __ret = (float32x4_t) __builtin_neon_vextq_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 41); \
  __ret; \
})
#define vextq_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int32x4_t __s1 = __p1; \
  int32x4_t __ret; \
  __ret = (int32x4_t) __builtin_neon_vextq_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 34); \
  __ret; \
})
#define vextq_s64(__p0, __p1, __p2) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int64x2_t __s1 = __p1; \
  int64x2_t __ret; \
  __ret = (int64x2_t) __builtin_neon_vextq_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 35); \
  __ret; \
})
#define vextq_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  int16x8_t __s1 = __p1; \
  int16x8_t __ret; \
  __ret = (int16x8_t) __builtin_neon_vextq_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 33); \
  __ret; \
})
#define vext_u8(__p0, __p1, __p2) __extension__ ({ \
  uint8x8_t __s0 = __p0; \
  uint8x8_t __s1 = __p1; \
  uint8x8_t __ret; \
  __ret = (uint8x8_t) __builtin_neon_vext_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 16); \
  __ret; \
})
#define vext_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x2_t __s0 = __p0; \
  uint32x2_t __s1 = __p1; \
  uint32x2_t __ret; \
  __ret = (uint32x2_t) __builtin_neon_vext_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 18); \
  __ret; \
})
#define vext_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64x1_t __s0 = __p0; \
  uint64x1_t __s1 = __p1; \
  uint64x1_t __ret; \
  __ret = (uint64x1_t) __builtin_neon_vext_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 19); \
  __ret; \
})
#define vext_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x4_t __s0 = __p0; \
  uint16x4_t __s1 = __p1; \
  uint16x4_t __ret; \
  __ret = (uint16x4_t) __builtin_neon_vext_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 17); \
  __ret; \
})
#define vext_s8(__p0, __p1, __p2) __extension__ ({ \
  int8x8_t __s0 = __p0; \
  int8x8_t __s1 = __p1; \
  int8x8_t __ret; \
  __ret = (int8x8_t) __builtin_neon_vext_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 0); \
  __ret; \
})
#define vext_f32(__p0, __p1, __p2) __extension__ ({ \
  float32x2_t __s0 = __p0; \
  float32x2_t __s1 = __p1; \
  float32x2_t __ret; \
  __ret = (float32x2_t) __builtin_neon_vext_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 9); \
  __ret; \
})
#define vext_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x2_t __s0 = __p0; \
  int32x2_t __s1 = __p1; \
  int32x2_t __ret; \
  __ret = (int32x2_t) __builtin_neon_vext_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 2); \
  __ret; \
})
#define vext_s64(__p0, __p1, __p2) __extension__ ({ \
  int64x1_t __s0 = __p0; \
  int64x1_t __s1 = __p1; \
  int64x1_t __ret; \
  __ret = (int64x1_t) __builtin_neon_vext_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 3); \
  __ret; \
})
#define vext_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x4_t __s0 = __p0; \
  int16x4_t __s1 = __p1; \
  int16x4_t __ret; \
  __ret = (int16x4_t) __builtin_neon_vext_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 1); \
  __ret; \
})
__ai float32x4_t vfmaq_f32(float32x4_t __p0, float32x4_t __p1, float32x4_t __p2) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vfmaq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 41);
  return __ret;
}
__ai float32x2_t vfma_f32(float32x2_t __p0, float32x2_t __p1, float32x2_t __p2) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vfma_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 9);
  return __ret;
}
__ai poly8x8_t vget_high_p8(poly8x16_t __p0) {
  poly8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 8, 9, 10, 11, 12, 13, 14, 15);
  return __ret;
}
__ai poly16x4_t vget_high_p16(poly16x8_t __p0) {
  poly16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 4, 5, 6, 7);
  return __ret;
}
__ai uint8x8_t vget_high_u8(uint8x16_t __p0) {
  uint8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 8, 9, 10, 11, 12, 13, 14, 15);
  return __ret;
}
__ai uint32x2_t vget_high_u32(uint32x4_t __p0) {
  uint32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 2, 3);
  return __ret;
}
__ai uint64x1_t vget_high_u64(uint64x2_t __p0) {
  uint64x1_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1);
  return __ret;
}
__ai uint16x4_t vget_high_u16(uint16x8_t __p0) {
  uint16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 4, 5, 6, 7);
  return __ret;
}
__ai int8x8_t vget_high_s8(int8x16_t __p0) {
  int8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 8, 9, 10, 11, 12, 13, 14, 15);
  return __ret;
}
__ai float32x2_t vget_high_f32(float32x4_t __p0) {
  float32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 2, 3);
  return __ret;
}
__ai float16x4_t vget_high_f16(float16x8_t __p0) {
  float16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 4, 5, 6, 7);
  return __ret;
}
__ai int32x2_t vget_high_s32(int32x4_t __p0) {
  int32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 2, 3);
  return __ret;
}
__ai int64x1_t vget_high_s64(int64x2_t __p0) {
  int64x1_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1);
  return __ret;
}
__ai int16x4_t vget_high_s16(int16x8_t __p0) {
  int16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 4, 5, 6, 7);
  return __ret;
}
#define vget_lane_p8(__p0, __p1) __extension__ ({ \
  poly8x8_t __s0 = __p0; \
  poly8_t __ret; \
  __ret = (poly8_t) __builtin_neon_vget_lane_i8((int8x8_t)__s0, __p1); \
  __ret; \
})
#define vget_lane_p16(__p0, __p1) __extension__ ({ \
  poly16x4_t __s0 = __p0; \
  poly16_t __ret; \
  __ret = (poly16_t) __builtin_neon_vget_lane_i16((int8x8_t)__s0, __p1); \
  __ret; \
})
#define vgetq_lane_p8(__p0, __p1) __extension__ ({ \
  poly8x16_t __s0 = __p0; \
  poly8_t __ret; \
  __ret = (poly8_t) __builtin_neon_vgetq_lane_i8((int8x16_t)__s0, __p1); \
  __ret; \
})
#define vgetq_lane_p16(__p0, __p1) __extension__ ({ \
  poly16x8_t __s0 = __p0; \
  poly16_t __ret; \
  __ret = (poly16_t) __builtin_neon_vgetq_lane_i16((int8x16_t)__s0, __p1); \
  __ret; \
})
#define vgetq_lane_u8(__p0, __p1) __extension__ ({ \
  uint8x16_t __s0 = __p0; \
  uint8_t __ret; \
  __ret = (uint8_t) __builtin_neon_vgetq_lane_i8((int8x16_t)__s0, __p1); \
  __ret; \
})
#define vgetq_lane_u32(__p0, __p1) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint32_t __ret; \
  __ret = (uint32_t) __builtin_neon_vgetq_lane_i32((int8x16_t)__s0, __p1); \
  __ret; \
})
#define vgetq_lane_u64(__p0, __p1) __extension__ ({ \
  uint64x2_t __s0 = __p0; \
  uint64_t __ret; \
  __ret = (uint64_t) __builtin_neon_vgetq_lane_i64((int8x16_t)__s0, __p1); \
  __ret; \
})
#define vgetq_lane_u16(__p0, __p1) __extension__ ({ \
  uint16x8_t __s0 = __p0; \
  uint16_t __ret; \
  __ret = (uint16_t) __builtin_neon_vgetq_lane_i16((int8x16_t)__s0, __p1); \
  __ret; \
})
#define vgetq_lane_s8(__p0, __p1) __extension__ ({ \
  int8x16_t __s0 = __p0; \
  int8_t __ret; \
  __ret = (int8_t) __builtin_neon_vgetq_lane_i8((int8x16_t)__s0, __p1); \
  __ret; \
})
#define vgetq_lane_f32(__p0, __p1) __extension__ ({ \
  float32x4_t __s0 = __p0; \
  float32_t __ret; \
  __ret = (float32_t) __builtin_neon_vgetq_lane_f32((int8x16_t)__s0, __p1); \
  __ret; \
})
#define vgetq_lane_s32(__p0, __p1) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int32_t __ret; \
  __ret = (int32_t) __builtin_neon_vgetq_lane_i32((int8x16_t)__s0, __p1); \
  __ret; \
})
#define vgetq_lane_s64(__p0, __p1) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int64_t __ret; \
  __ret = (int64_t) __builtin_neon_vgetq_lane_i64((int8x16_t)__s0, __p1); \
  __ret; \
})
#define vgetq_lane_s16(__p0, __p1) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  int16_t __ret; \
  __ret = (int16_t) __builtin_neon_vgetq_lane_i16((int8x16_t)__s0, __p1); \
  __ret; \
})
#define vget_lane_u8(__p0, __p1) __extension__ ({ \
  uint8x8_t __s0 = __p0; \
  uint8_t __ret; \
  __ret = (uint8_t) __builtin_neon_vget_lane_i8((int8x8_t)__s0, __p1); \
  __ret; \
})
#define vget_lane_u32(__p0, __p1) __extension__ ({ \
  uint32x2_t __s0 = __p0; \
  uint32_t __ret; \
  __ret = (uint32_t) __builtin_neon_vget_lane_i32((int8x8_t)__s0, __p1); \
  __ret; \
})
#define vget_lane_u64(__p0, __p1) __extension__ ({ \
  uint64x1_t __s0 = __p0; \
  uint64_t __ret; \
  __ret = (uint64_t) __builtin_neon_vget_lane_i64((int8x8_t)__s0, __p1); \
  __ret; \
})
#define vget_lane_u16(__p0, __p1) __extension__ ({ \
  uint16x4_t __s0 = __p0; \
  uint16_t __ret; \
  __ret = (uint16_t) __builtin_neon_vget_lane_i16((int8x8_t)__s0, __p1); \
  __ret; \
})
#define vget_lane_s8(__p0, __p1) __extension__ ({ \
  int8x8_t __s0 = __p0; \
  int8_t __ret; \
  __ret = (int8_t) __builtin_neon_vget_lane_i8((int8x8_t)__s0, __p1); \
  __ret; \
})
#define vget_lane_f32(__p0, __p1) __extension__ ({ \
  float32x2_t __s0 = __p0; \
  float32_t __ret; \
  __ret = (float32_t) __builtin_neon_vget_lane_f32((int8x8_t)__s0, __p1); \
  __ret; \
})
#define vget_lane_s32(__p0, __p1) __extension__ ({ \
  int32x2_t __s0 = __p0; \
  int32_t __ret; \
  __ret = (int32_t) __builtin_neon_vget_lane_i32((int8x8_t)__s0, __p1); \
  __ret; \
})
#define vget_lane_s64(__p0, __p1) __extension__ ({ \
  int64x1_t __s0 = __p0; \
  int64_t __ret; \
  __ret = (int64_t) __builtin_neon_vget_lane_i64((int8x8_t)__s0, __p1); \
  __ret; \
})
#define vget_lane_s16(__p0, __p1) __extension__ ({ \
  int16x4_t __s0 = __p0; \
  int16_t __ret; \
  __ret = (int16_t) __builtin_neon_vget_lane_i16((int8x8_t)__s0, __p1); \
  __ret; \
})
__ai poly8x8_t vget_low_p8(poly8x16_t __p0) {
  poly8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 0, 1, 2, 3, 4, 5, 6, 7);
  return __ret;
}
__ai poly16x4_t vget_low_p16(poly16x8_t __p0) {
  poly16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 0, 1, 2, 3);
  return __ret;
}
__ai uint8x8_t vget_low_u8(uint8x16_t __p0) {
  uint8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 0, 1, 2, 3, 4, 5, 6, 7);
  return __ret;
}
__ai uint32x2_t vget_low_u32(uint32x4_t __p0) {
  uint32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 0, 1);
  return __ret;
}
__ai uint64x1_t vget_low_u64(uint64x2_t __p0) {
  uint64x1_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 0);
  return __ret;
}
__ai uint16x4_t vget_low_u16(uint16x8_t __p0) {
  uint16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 0, 1, 2, 3);
  return __ret;
}
__ai int8x8_t vget_low_s8(int8x16_t __p0) {
  int8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 0, 1, 2, 3, 4, 5, 6, 7);
  return __ret;
}
__ai float32x2_t vget_low_f32(float32x4_t __p0) {
  float32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 0, 1);
  return __ret;
}
__ai float16x4_t vget_low_f16(float16x8_t __p0) {
  float16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 0, 1, 2, 3);
  return __ret;
}
__ai int32x2_t vget_low_s32(int32x4_t __p0) {
  int32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 0, 1);
  return __ret;
}
__ai int64x1_t vget_low_s64(int64x2_t __p0) {
  int64x1_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 0);
  return __ret;
}
__ai int16x4_t vget_low_s16(int16x8_t __p0) {
  int16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 0, 1, 2, 3);
  return __ret;
}
__ai uint8x16_t vhaddq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vhaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
__ai uint32x4_t vhaddq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vhaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
__ai uint16x8_t vhaddq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vhaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
__ai int8x16_t vhaddq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vhaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
__ai int32x4_t vhaddq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vhaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
__ai int16x8_t vhaddq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vhaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
__ai uint8x8_t vhadd_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vhadd_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
__ai uint32x2_t vhadd_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vhadd_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
__ai uint16x4_t vhadd_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vhadd_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
__ai int8x8_t vhadd_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vhadd_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
__ai int32x2_t vhadd_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vhadd_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
__ai int16x4_t vhadd_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vhadd_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
__ai uint8x16_t vhsubq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vhsubq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
__ai uint32x4_t vhsubq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vhsubq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
__ai uint16x8_t vhsubq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vhsubq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
__ai int8x16_t vhsubq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vhsubq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
__ai int32x4_t vhsubq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vhsubq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
__ai int16x8_t vhsubq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vhsubq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
__ai uint8x8_t vhsub_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vhsub_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
__ai uint32x2_t vhsub_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vhsub_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
__ai uint16x4_t vhsub_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vhsub_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
__ai int8x8_t vhsub_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vhsub_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
__ai int32x2_t vhsub_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vhsub_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
__ai int16x4_t vhsub_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vhsub_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
#define vld1_p8(__p0) __extension__ ({ \
  poly8x8_t __ret; \
  __ret = (poly8x8_t) __builtin_neon_vld1_v(__p0, 4); \
  __ret; \
})
#define vld1_p16(__p0) __extension__ ({ \
  poly16x4_t __ret; \
  __ret = (poly16x4_t) __builtin_neon_vld1_v(__p0, 5); \
  __ret; \
})
#define vld1q_p8(__p0) __extension__ ({ \
  poly8x16_t __ret; \
  __ret = (poly8x16_t) __builtin_neon_vld1q_v(__p0, 36); \
  __ret; \
})
#define vld1q_p16(__p0) __extension__ ({ \
  poly16x8_t __ret; \
  __ret = (poly16x8_t) __builtin_neon_vld1q_v(__p0, 37); \
  __ret; \
})
#define vld1q_u8(__p0) __extension__ ({ \
  uint8x16_t __ret; \
  __ret = (uint8x16_t) __builtin_neon_vld1q_v(__p0, 48); \
  __ret; \
})
#define vld1q_u32(__p0) __extension__ ({ \
  uint32x4_t __ret; \
  __ret = (uint32x4_t) __builtin_neon_vld1q_v(__p0, 50); \
  __ret; \
})
#define vld1q_u64(__p0) __extension__ ({ \
  uint64x2_t __ret; \
  __ret = (uint64x2_t) __builtin_neon_vld1q_v(__p0, 51); \
  __ret; \
})
#define vld1q_u16(__p0) __extension__ ({ \
  uint16x8_t __ret; \
  __ret = (uint16x8_t) __builtin_neon_vld1q_v(__p0, 49); \
  __ret; \
})
#define vld1q_s8(__p0) __extension__ ({ \
  int8x16_t __ret; \
  __ret = (int8x16_t) __builtin_neon_vld1q_v(__p0, 32); \
  __ret; \
})
#define vld1q_f32(__p0) __extension__ ({ \
  float32x4_t __ret; \
  __ret = (float32x4_t) __builtin_neon_vld1q_v(__p0, 41); \
  __ret; \
})
#define vld1q_f16(__p0) __extension__ ({ \
  float16x8_t __ret; \
  __ret = (float16x8_t) __builtin_neon_vld1q_v(__p0, 40); \
  __ret; \
})
#define vld1q_s32(__p0) __extension__ ({ \
  int32x4_t __ret; \
  __ret = (int32x4_t) __builtin_neon_vld1q_v(__p0, 34); \
  __ret; \
})
#define vld1q_s64(__p0) __extension__ ({ \
  int64x2_t __ret; \
  __ret = (int64x2_t) __builtin_neon_vld1q_v(__p0, 35); \
  __ret; \
})
#define vld1q_s16(__p0) __extension__ ({ \
  int16x8_t __ret; \
  __ret = (int16x8_t) __builtin_neon_vld1q_v(__p0, 33); \
  __ret; \
})
#define vld1_u8(__p0) __extension__ ({ \
  uint8x8_t __ret; \
  __ret = (uint8x8_t) __builtin_neon_vld1_v(__p0, 16); \
  __ret; \
})
#define vld1_u32(__p0) __extension__ ({ \
  uint32x2_t __ret; \
  __ret = (uint32x2_t) __builtin_neon_vld1_v(__p0, 18); \
  __ret; \
})
#define vld1_u64(__p0) __extension__ ({ \
  uint64x1_t __ret; \
  __ret = (uint64x1_t) __builtin_neon_vld1_v(__p0, 19); \
  __ret; \
})
#define vld1_u16(__p0) __extension__ ({ \
  uint16x4_t __ret; \
  __ret = (uint16x4_t) __builtin_neon_vld1_v(__p0, 17); \
  __ret; \
})
#define vld1_s8(__p0) __extension__ ({ \
  int8x8_t __ret; \
  __ret = (int8x8_t) __builtin_neon_vld1_v(__p0, 0); \
  __ret; \
})
#define vld1_f32(__p0) __extension__ ({ \
  float32x2_t __ret; \
  __ret = (float32x2_t) __builtin_neon_vld1_v(__p0, 9); \
  __ret; \
})
#define vld1_f16(__p0) __extension__ ({ \
  float16x4_t __ret; \
  __ret = (float16x4_t) __builtin_neon_vld1_v(__p0, 8); \
  __ret; \
})
#define vld1_s32(__p0) __extension__ ({ \
  int32x2_t __ret; \
  __ret = (int32x2_t) __builtin_neon_vld1_v(__p0, 2); \
  __ret; \
})
#define vld1_s64(__p0) __extension__ ({ \
  int64x1_t __ret; \
  __ret = (int64x1_t) __builtin_neon_vld1_v(__p0, 3); \
  __ret; \
})
#define vld1_s16(__p0) __extension__ ({ \
  int16x4_t __ret; \
  __ret = (int16x4_t) __builtin_neon_vld1_v(__p0, 1); \
  __ret; \
})
#define vld1_dup_p8(__p0) __extension__ ({ \
  poly8x8_t __ret; \
  __ret = (poly8x8_t) __builtin_neon_vld1_dup_v(__p0, 4); \
  __ret; \
})
#define vld1_dup_p16(__p0) __extension__ ({ \
  poly16x4_t __ret; \
  __ret = (poly16x4_t) __builtin_neon_vld1_dup_v(__p0, 5); \
  __ret; \
})
#define vld1q_dup_p8(__p0) __extension__ ({ \
  poly8x16_t __ret; \
  __ret = (poly8x16_t) __builtin_neon_vld1q_dup_v(__p0, 36); \
  __ret; \
})
#define vld1q_dup_p16(__p0) __extension__ ({ \
  poly16x8_t __ret; \
  __ret = (poly16x8_t) __builtin_neon_vld1q_dup_v(__p0, 37); \
  __ret; \
})
#define vld1q_dup_u8(__p0) __extension__ ({ \
  uint8x16_t __ret; \
  __ret = (uint8x16_t) __builtin_neon_vld1q_dup_v(__p0, 48); \
  __ret; \
})
#define vld1q_dup_u32(__p0) __extension__ ({ \
  uint32x4_t __ret; \
  __ret = (uint32x4_t) __builtin_neon_vld1q_dup_v(__p0, 50); \
  __ret; \
})
#define vld1q_dup_u64(__p0) __extension__ ({ \
  uint64x2_t __ret; \
  __ret = (uint64x2_t) __builtin_neon_vld1q_dup_v(__p0, 51); \
  __ret; \
})
#define vld1q_dup_u16(__p0) __extension__ ({ \
  uint16x8_t __ret; \
  __ret = (uint16x8_t) __builtin_neon_vld1q_dup_v(__p0, 49); \
  __ret; \
})
#define vld1q_dup_s8(__p0) __extension__ ({ \
  int8x16_t __ret; \
  __ret = (int8x16_t) __builtin_neon_vld1q_dup_v(__p0, 32); \
  __ret; \
})
#define vld1q_dup_f32(__p0) __extension__ ({ \
  float32x4_t __ret; \
  __ret = (float32x4_t) __builtin_neon_vld1q_dup_v(__p0, 41); \
  __ret; \
})
#define vld1q_dup_f16(__p0) __extension__ ({ \
  float16x8_t __ret; \
  __ret = (float16x8_t) __builtin_neon_vld1q_dup_v(__p0, 40); \
  __ret; \
})
#define vld1q_dup_s32(__p0) __extension__ ({ \
  int32x4_t __ret; \
  __ret = (int32x4_t) __builtin_neon_vld1q_dup_v(__p0, 34); \
  __ret; \
})
#define vld1q_dup_s64(__p0) __extension__ ({ \
  int64x2_t __ret; \
  __ret = (int64x2_t) __builtin_neon_vld1q_dup_v(__p0, 35); \
  __ret; \
})
#define vld1q_dup_s16(__p0) __extension__ ({ \
  int16x8_t __ret; \
  __ret = (int16x8_t) __builtin_neon_vld1q_dup_v(__p0, 33); \
  __ret; \
})
#define vld1_dup_u8(__p0) __extension__ ({ \
  uint8x8_t __ret; \
  __ret = (uint8x8_t) __builtin_neon_vld1_dup_v(__p0, 16); \
  __ret; \
})
#define vld1_dup_u32(__p0) __extension__ ({ \
  uint32x2_t __ret; \
  __ret = (uint32x2_t) __builtin_neon_vld1_dup_v(__p0, 18); \
  __ret; \
})
#define vld1_dup_u64(__p0) __extension__ ({ \
  uint64x1_t __ret; \
  __ret = (uint64x1_t) __builtin_neon_vld1_dup_v(__p0, 19); \
  __ret; \
})
#define vld1_dup_u16(__p0) __extension__ ({ \
  uint16x4_t __ret; \
  __ret = (uint16x4_t) __builtin_neon_vld1_dup_v(__p0, 17); \
  __ret; \
})
#define vld1_dup_s8(__p0) __extension__ ({ \
  int8x8_t __ret; \
  __ret = (int8x8_t) __builtin_neon_vld1_dup_v(__p0, 0); \
  __ret; \
})
#define vld1_dup_f32(__p0) __extension__ ({ \
  float32x2_t __ret; \
  __ret = (float32x2_t) __builtin_neon_vld1_dup_v(__p0, 9); \
  __ret; \
})
#define vld1_dup_f16(__p0) __extension__ ({ \
  float16x4_t __ret; \
  __ret = (float16x4_t) __builtin_neon_vld1_dup_v(__p0, 8); \
  __ret; \
})
#define vld1_dup_s32(__p0) __extension__ ({ \
  int32x2_t __ret; \
  __ret = (int32x2_t) __builtin_neon_vld1_dup_v(__p0, 2); \
  __ret; \
})
#define vld1_dup_s64(__p0) __extension__ ({ \
  int64x1_t __ret; \
  __ret = (int64x1_t) __builtin_neon_vld1_dup_v(__p0, 3); \
  __ret; \
})
#define vld1_dup_s16(__p0) __extension__ ({ \
  int16x4_t __ret; \
  __ret = (int16x4_t) __builtin_neon_vld1_dup_v(__p0, 1); \
  __ret; \
})
#define vld1_lane_p8(__p0, __p1, __p2) __extension__ ({ \
  poly8x8_t __s1 = __p1; \
  poly8x8_t __ret; \
  __ret = (poly8x8_t) __builtin_neon_vld1_lane_v(__p0, (int8x8_t)__s1, __p2, 4); \
  __ret; \
})
#define vld1_lane_p16(__p0, __p1, __p2) __extension__ ({ \
  poly16x4_t __s1 = __p1; \
  poly16x4_t __ret; \
  __ret = (poly16x4_t) __builtin_neon_vld1_lane_v(__p0, (int8x8_t)__s1, __p2, 5); \
  __ret; \
})
#define vld1q_lane_p8(__p0, __p1, __p2) __extension__ ({ \
  poly8x16_t __s1 = __p1; \
  poly8x16_t __ret; \
  __ret = (poly8x16_t) __builtin_neon_vld1q_lane_v(__p0, (int8x16_t)__s1, __p2, 36); \
  __ret; \
})
#define vld1q_lane_p16(__p0, __p1, __p2) __extension__ ({ \
  poly16x8_t __s1 = __p1; \
  poly16x8_t __ret; \
  __ret = (poly16x8_t) __builtin_neon_vld1q_lane_v(__p0, (int8x16_t)__s1, __p2, 37); \
  __ret; \
})
#define vld1q_lane_u8(__p0, __p1, __p2) __extension__ ({ \
  uint8x16_t __s1 = __p1; \
  uint8x16_t __ret; \
  __ret = (uint8x16_t) __builtin_neon_vld1q_lane_v(__p0, (int8x16_t)__s1, __p2, 48); \
  __ret; \
})
#define vld1q_lane_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x4_t __s1 = __p1; \
  uint32x4_t __ret; \
  __ret = (uint32x4_t) __builtin_neon_vld1q_lane_v(__p0, (int8x16_t)__s1, __p2, 50); \
  __ret; \
})
#define vld1q_lane_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64x2_t __s1 = __p1; \
  uint64x2_t __ret; \
  __ret = (uint64x2_t) __builtin_neon_vld1q_lane_v(__p0, (int8x16_t)__s1, __p2, 51); \
  __ret; \
})
#define vld1q_lane_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x8_t __s1 = __p1; \
  uint16x8_t __ret; \
  __ret = (uint16x8_t) __builtin_neon_vld1q_lane_v(__p0, (int8x16_t)__s1, __p2, 49); \
  __ret; \
})
#define vld1q_lane_s8(__p0, __p1, __p2) __extension__ ({ \
  int8x16_t __s1 = __p1; \
  int8x16_t __ret; \
  __ret = (int8x16_t) __builtin_neon_vld1q_lane_v(__p0, (int8x16_t)__s1, __p2, 32); \
  __ret; \
})
#define vld1q_lane_f32(__p0, __p1, __p2) __extension__ ({ \
  float32x4_t __s1 = __p1; \
  float32x4_t __ret; \
  __ret = (float32x4_t) __builtin_neon_vld1q_lane_v(__p0, (int8x16_t)__s1, __p2, 41); \
  __ret; \
})
#define vld1q_lane_f16(__p0, __p1, __p2) __extension__ ({ \
  float16x8_t __s1 = __p1; \
  float16x8_t __ret; \
  __ret = (float16x8_t) __builtin_neon_vld1q_lane_v(__p0, (int8x16_t)__s1, __p2, 40); \
  __ret; \
})
#define vld1q_lane_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x4_t __s1 = __p1; \
  int32x4_t __ret; \
  __ret = (int32x4_t) __builtin_neon_vld1q_lane_v(__p0, (int8x16_t)__s1, __p2, 34); \
  __ret; \
})
#define vld1q_lane_s64(__p0, __p1, __p2) __extension__ ({ \
  int64x2_t __s1 = __p1; \
  int64x2_t __ret; \
  __ret = (int64x2_t) __builtin_neon_vld1q_lane_v(__p0, (int8x16_t)__s1, __p2, 35); \
  __ret; \
})
#define vld1q_lane_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x8_t __s1 = __p1; \
  int16x8_t __ret; \
  __ret = (int16x8_t) __builtin_neon_vld1q_lane_v(__p0, (int8x16_t)__s1, __p2, 33); \
  __ret; \
})
#define vld1_lane_u8(__p0, __p1, __p2) __extension__ ({ \
  uint8x8_t __s1 = __p1; \
  uint8x8_t __ret; \
  __ret = (uint8x8_t) __builtin_neon_vld1_lane_v(__p0, (int8x8_t)__s1, __p2, 16); \
  __ret; \
})
#define vld1_lane_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x2_t __s1 = __p1; \
  uint32x2_t __ret; \
  __ret = (uint32x2_t) __builtin_neon_vld1_lane_v(__p0, (int8x8_t)__s1, __p2, 18); \
  __ret; \
})
#define vld1_lane_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64x1_t __s1 = __p1; \
  uint64x1_t __ret; \
  __ret = (uint64x1_t) __builtin_neon_vld1_lane_v(__p0, (int8x8_t)__s1, __p2, 19); \
  __ret; \
})
#define vld1_lane_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x4_t __s1 = __p1; \
  uint16x4_t __ret; \
  __ret = (uint16x4_t) __builtin_neon_vld1_lane_v(__p0, (int8x8_t)__s1, __p2, 17); \
  __ret; \
})
#define vld1_lane_s8(__p0, __p1, __p2) __extension__ ({ \
  int8x8_t __s1 = __p1; \
  int8x8_t __ret; \
  __ret = (int8x8_t) __builtin_neon_vld1_lane_v(__p0, (int8x8_t)__s1, __p2, 0); \
  __ret; \
})
#define vld1_lane_f32(__p0, __p1, __p2) __extension__ ({ \
  float32x2_t __s1 = __p1; \
  float32x2_t __ret; \
  __ret = (float32x2_t) __builtin_neon_vld1_lane_v(__p0, (int8x8_t)__s1, __p2, 9); \
  __ret; \
})
#define vld1_lane_f16(__p0, __p1, __p2) __extension__ ({ \
  float16x4_t __s1 = __p1; \
  float16x4_t __ret; \
  __ret = (float16x4_t) __builtin_neon_vld1_lane_v(__p0, (int8x8_t)__s1, __p2, 8); \
  __ret; \
})
#define vld1_lane_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x2_t __s1 = __p1; \
  int32x2_t __ret; \
  __ret = (int32x2_t) __builtin_neon_vld1_lane_v(__p0, (int8x8_t)__s1, __p2, 2); \
  __ret; \
})
#define vld1_lane_s64(__p0, __p1, __p2) __extension__ ({ \
  int64x1_t __s1 = __p1; \
  int64x1_t __ret; \
  __ret = (int64x1_t) __builtin_neon_vld1_lane_v(__p0, (int8x8_t)__s1, __p2, 3); \
  __ret; \
})
#define vld1_lane_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x4_t __s1 = __p1; \
  int16x4_t __ret; \
  __ret = (int16x4_t) __builtin_neon_vld1_lane_v(__p0, (int8x8_t)__s1, __p2, 1); \
  __ret; \
})
#define vld2_p8(__p0) __extension__ ({ \
  poly8x8x2_t __ret; \
  __builtin_neon_vld2_v(&__ret, __p0, 4); \
  __ret; \
})
#define vld2_p16(__p0) __extension__ ({ \
  poly16x4x2_t __ret; \
  __builtin_neon_vld2_v(&__ret, __p0, 5); \
  __ret; \
})
#define vld2q_p8(__p0) __extension__ ({ \
  poly8x16x2_t __ret; \
  __builtin_neon_vld2q_v(&__ret, __p0, 36); \
  __ret; \
})
#define vld2q_p16(__p0) __extension__ ({ \
  poly16x8x2_t __ret; \
  __builtin_neon_vld2q_v(&__ret, __p0, 37); \
  __ret; \
})
#define vld2q_u8(__p0) __extension__ ({ \
  uint8x16x2_t __ret; \
  __builtin_neon_vld2q_v(&__ret, __p0, 48); \
  __ret; \
})
#define vld2q_u32(__p0) __extension__ ({ \
  uint32x4x2_t __ret; \
  __builtin_neon_vld2q_v(&__ret, __p0, 50); \
  __ret; \
})
#define vld2q_u16(__p0) __extension__ ({ \
  uint16x8x2_t __ret; \
  __builtin_neon_vld2q_v(&__ret, __p0, 49); \
  __ret; \
})
#define vld2q_s8(__p0) __extension__ ({ \
  int8x16x2_t __ret; \
  __builtin_neon_vld2q_v(&__ret, __p0, 32); \
  __ret; \
})
#define vld2q_f32(__p0) __extension__ ({ \
  float32x4x2_t __ret; \
  __builtin_neon_vld2q_v(&__ret, __p0, 41); \
  __ret; \
})
#define vld2q_f16(__p0) __extension__ ({ \
  float16x8x2_t __ret; \
  __builtin_neon_vld2q_v(&__ret, __p0, 40); \
  __ret; \
})
#define vld2q_s32(__p0) __extension__ ({ \
  int32x4x2_t __ret; \
  __builtin_neon_vld2q_v(&__ret, __p0, 34); \
  __ret; \
})
#define vld2q_s16(__p0) __extension__ ({ \
  int16x8x2_t __ret; \
  __builtin_neon_vld2q_v(&__ret, __p0, 33); \
  __ret; \
})
#define vld2_u8(__p0) __extension__ ({ \
  uint8x8x2_t __ret; \
  __builtin_neon_vld2_v(&__ret, __p0, 16); \
  __ret; \
})
#define vld2_u32(__p0) __extension__ ({ \
  uint32x2x2_t __ret; \
  __builtin_neon_vld2_v(&__ret, __p0, 18); \
  __ret; \
})
#define vld2_u64(__p0) __extension__ ({ \
  uint64x1x2_t __ret; \
  __builtin_neon_vld2_v(&__ret, __p0, 19); \
  __ret; \
})
#define vld2_u16(__p0) __extension__ ({ \
  uint16x4x2_t __ret; \
  __builtin_neon_vld2_v(&__ret, __p0, 17); \
  __ret; \
})
#define vld2_s8(__p0) __extension__ ({ \
  int8x8x2_t __ret; \
  __builtin_neon_vld2_v(&__ret, __p0, 0); \
  __ret; \
})
#define vld2_f32(__p0) __extension__ ({ \
  float32x2x2_t __ret; \
  __builtin_neon_vld2_v(&__ret, __p0, 9); \
  __ret; \
})
#define vld2_f16(__p0) __extension__ ({ \
  float16x4x2_t __ret; \
  __builtin_neon_vld2_v(&__ret, __p0, 8); \
  __ret; \
})
#define vld2_s32(__p0) __extension__ ({ \
  int32x2x2_t __ret; \
  __builtin_neon_vld2_v(&__ret, __p0, 2); \
  __ret; \
})
#define vld2_s64(__p0) __extension__ ({ \
  int64x1x2_t __ret; \
  __builtin_neon_vld2_v(&__ret, __p0, 3); \
  __ret; \
})
#define vld2_s16(__p0) __extension__ ({ \
  int16x4x2_t __ret; \
  __builtin_neon_vld2_v(&__ret, __p0, 1); \
  __ret; \
})
#define vld2_dup_p8(__p0) __extension__ ({ \
  poly8x8x2_t __ret; \
  __builtin_neon_vld2_dup_v(&__ret, __p0, 4); \
  __ret; \
})
#define vld2_dup_p16(__p0) __extension__ ({ \
  poly16x4x2_t __ret; \
  __builtin_neon_vld2_dup_v(&__ret, __p0, 5); \
  __ret; \
})
#define vld2_dup_u8(__p0) __extension__ ({ \
  uint8x8x2_t __ret; \
  __builtin_neon_vld2_dup_v(&__ret, __p0, 16); \
  __ret; \
})
#define vld2_dup_u32(__p0) __extension__ ({ \
  uint32x2x2_t __ret; \
  __builtin_neon_vld2_dup_v(&__ret, __p0, 18); \
  __ret; \
})
#define vld2_dup_u64(__p0) __extension__ ({ \
  uint64x1x2_t __ret; \
  __builtin_neon_vld2_dup_v(&__ret, __p0, 19); \
  __ret; \
})
#define vld2_dup_u16(__p0) __extension__ ({ \
  uint16x4x2_t __ret; \
  __builtin_neon_vld2_dup_v(&__ret, __p0, 17); \
  __ret; \
})
#define vld2_dup_s8(__p0) __extension__ ({ \
  int8x8x2_t __ret; \
  __builtin_neon_vld2_dup_v(&__ret, __p0, 0); \
  __ret; \
})
#define vld2_dup_f32(__p0) __extension__ ({ \
  float32x2x2_t __ret; \
  __builtin_neon_vld2_dup_v(&__ret, __p0, 9); \
  __ret; \
})
#define vld2_dup_f16(__p0) __extension__ ({ \
  float16x4x2_t __ret; \
  __builtin_neon_vld2_dup_v(&__ret, __p0, 8); \
  __ret; \
})
#define vld2_dup_s32(__p0) __extension__ ({ \
  int32x2x2_t __ret; \
  __builtin_neon_vld2_dup_v(&__ret, __p0, 2); \
  __ret; \
})
#define vld2_dup_s64(__p0) __extension__ ({ \
  int64x1x2_t __ret; \
  __builtin_neon_vld2_dup_v(&__ret, __p0, 3); \
  __ret; \
})
#define vld2_dup_s16(__p0) __extension__ ({ \
  int16x4x2_t __ret; \
  __builtin_neon_vld2_dup_v(&__ret, __p0, 1); \
  __ret; \
})
#define vld2_lane_p8(__p0, __p1, __p2) __extension__ ({ \
  poly8x8x2_t __s1 = __p1; \
  poly8x8x2_t __ret; \
  __builtin_neon_vld2_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 4); \
  __ret; \
})
#define vld2_lane_p16(__p0, __p1, __p2) __extension__ ({ \
  poly16x4x2_t __s1 = __p1; \
  poly16x4x2_t __ret; \
  __builtin_neon_vld2_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 5); \
  __ret; \
})
#define vld2q_lane_p16(__p0, __p1, __p2) __extension__ ({ \
  poly16x8x2_t __s1 = __p1; \
  poly16x8x2_t __ret; \
  __builtin_neon_vld2q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 37); \
  __ret; \
})
#define vld2q_lane_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x4x2_t __s1 = __p1; \
  uint32x4x2_t __ret; \
  __builtin_neon_vld2q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 50); \
  __ret; \
})
#define vld2q_lane_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x8x2_t __s1 = __p1; \
  uint16x8x2_t __ret; \
  __builtin_neon_vld2q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 49); \
  __ret; \
})
#define vld2q_lane_f32(__p0, __p1, __p2) __extension__ ({ \
  float32x4x2_t __s1 = __p1; \
  float32x4x2_t __ret; \
  __builtin_neon_vld2q_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __p2, 41); \
  __ret; \
})
#define vld2q_lane_f16(__p0, __p1, __p2) __extension__ ({ \
  float16x8x2_t __s1 = __p1; \
  float16x8x2_t __ret; \
  __builtin_neon_vld2q_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __p2, 40); \
  __ret; \
})
#define vld2q_lane_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x4x2_t __s1 = __p1; \
  int32x4x2_t __ret; \
  __builtin_neon_vld2q_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __p2, 34); \
  __ret; \
})
#define vld2q_lane_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x8x2_t __s1 = __p1; \
  int16x8x2_t __ret; \
  __builtin_neon_vld2q_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __p2, 33); \
  __ret; \
})
#define vld2_lane_u8(__p0, __p1, __p2) __extension__ ({ \
  uint8x8x2_t __s1 = __p1; \
  uint8x8x2_t __ret; \
  __builtin_neon_vld2_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 16); \
  __ret; \
})
#define vld2_lane_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x2x2_t __s1 = __p1; \
  uint32x2x2_t __ret; \
  __builtin_neon_vld2_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 18); \
  __ret; \
})
#define vld2_lane_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x4x2_t __s1 = __p1; \
  uint16x4x2_t __ret; \
  __builtin_neon_vld2_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 17); \
  __ret; \
})
#define vld2_lane_s8(__p0, __p1, __p2) __extension__ ({ \
  int8x8x2_t __s1 = __p1; \
  int8x8x2_t __ret; \
  __builtin_neon_vld2_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 0); \
  __ret; \
})
#define vld2_lane_f32(__p0, __p1, __p2) __extension__ ({ \
  float32x2x2_t __s1 = __p1; \
  float32x2x2_t __ret; \
  __builtin_neon_vld2_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __p2, 9); \
  __ret; \
})
#define vld2_lane_f16(__p0, __p1, __p2) __extension__ ({ \
  float16x4x2_t __s1 = __p1; \
  float16x4x2_t __ret; \
  __builtin_neon_vld2_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __p2, 8); \
  __ret; \
})
#define vld2_lane_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x2x2_t __s1 = __p1; \
  int32x2x2_t __ret; \
  __builtin_neon_vld2_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __p2, 2); \
  __ret; \
})
#define vld2_lane_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x4x2_t __s1 = __p1; \
  int16x4x2_t __ret; \
  __builtin_neon_vld2_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __p2, 1); \
  __ret; \
})
#define vld3_p8(__p0) __extension__ ({ \
  poly8x8x3_t __ret; \
  __builtin_neon_vld3_v(&__ret, __p0, 4); \
  __ret; \
})
#define vld3_p16(__p0) __extension__ ({ \
  poly16x4x3_t __ret; \
  __builtin_neon_vld3_v(&__ret, __p0, 5); \
  __ret; \
})
#define vld3q_p8(__p0) __extension__ ({ \
  poly8x16x3_t __ret; \
  __builtin_neon_vld3q_v(&__ret, __p0, 36); \
  __ret; \
})
#define vld3q_p16(__p0) __extension__ ({ \
  poly16x8x3_t __ret; \
  __builtin_neon_vld3q_v(&__ret, __p0, 37); \
  __ret; \
})
#define vld3q_u8(__p0) __extension__ ({ \
  uint8x16x3_t __ret; \
  __builtin_neon_vld3q_v(&__ret, __p0, 48); \
  __ret; \
})
#define vld3q_u32(__p0) __extension__ ({ \
  uint32x4x3_t __ret; \
  __builtin_neon_vld3q_v(&__ret, __p0, 50); \
  __ret; \
})
#define vld3q_u16(__p0) __extension__ ({ \
  uint16x8x3_t __ret; \
  __builtin_neon_vld3q_v(&__ret, __p0, 49); \
  __ret; \
})
#define vld3q_s8(__p0) __extension__ ({ \
  int8x16x3_t __ret; \
  __builtin_neon_vld3q_v(&__ret, __p0, 32); \
  __ret; \
})
#define vld3q_f32(__p0) __extension__ ({ \
  float32x4x3_t __ret; \
  __builtin_neon_vld3q_v(&__ret, __p0, 41); \
  __ret; \
})
#define vld3q_f16(__p0) __extension__ ({ \
  float16x8x3_t __ret; \
  __builtin_neon_vld3q_v(&__ret, __p0, 40); \
  __ret; \
})
#define vld3q_s32(__p0) __extension__ ({ \
  int32x4x3_t __ret; \
  __builtin_neon_vld3q_v(&__ret, __p0, 34); \
  __ret; \
})
#define vld3q_s16(__p0) __extension__ ({ \
  int16x8x3_t __ret; \
  __builtin_neon_vld3q_v(&__ret, __p0, 33); \
  __ret; \
})
#define vld3_u8(__p0) __extension__ ({ \
  uint8x8x3_t __ret; \
  __builtin_neon_vld3_v(&__ret, __p0, 16); \
  __ret; \
})
#define vld3_u32(__p0) __extension__ ({ \
  uint32x2x3_t __ret; \
  __builtin_neon_vld3_v(&__ret, __p0, 18); \
  __ret; \
})
#define vld3_u64(__p0) __extension__ ({ \
  uint64x1x3_t __ret; \
  __builtin_neon_vld3_v(&__ret, __p0, 19); \
  __ret; \
})
#define vld3_u16(__p0) __extension__ ({ \
  uint16x4x3_t __ret; \
  __builtin_neon_vld3_v(&__ret, __p0, 17); \
  __ret; \
})
#define vld3_s8(__p0) __extension__ ({ \
  int8x8x3_t __ret; \
  __builtin_neon_vld3_v(&__ret, __p0, 0); \
  __ret; \
})
#define vld3_f32(__p0) __extension__ ({ \
  float32x2x3_t __ret; \
  __builtin_neon_vld3_v(&__ret, __p0, 9); \
  __ret; \
})
#define vld3_f16(__p0) __extension__ ({ \
  float16x4x3_t __ret; \
  __builtin_neon_vld3_v(&__ret, __p0, 8); \
  __ret; \
})
#define vld3_s32(__p0) __extension__ ({ \
  int32x2x3_t __ret; \
  __builtin_neon_vld3_v(&__ret, __p0, 2); \
  __ret; \
})
#define vld3_s64(__p0) __extension__ ({ \
  int64x1x3_t __ret; \
  __builtin_neon_vld3_v(&__ret, __p0, 3); \
  __ret; \
})
#define vld3_s16(__p0) __extension__ ({ \
  int16x4x3_t __ret; \
  __builtin_neon_vld3_v(&__ret, __p0, 1); \
  __ret; \
})
#define vld3_dup_p8(__p0) __extension__ ({ \
  poly8x8x3_t __ret; \
  __builtin_neon_vld3_dup_v(&__ret, __p0, 4); \
  __ret; \
})
#define vld3_dup_p16(__p0) __extension__ ({ \
  poly16x4x3_t __ret; \
  __builtin_neon_vld3_dup_v(&__ret, __p0, 5); \
  __ret; \
})
#define vld3_dup_u8(__p0) __extension__ ({ \
  uint8x8x3_t __ret; \
  __builtin_neon_vld3_dup_v(&__ret, __p0, 16); \
  __ret; \
})
#define vld3_dup_u32(__p0) __extension__ ({ \
  uint32x2x3_t __ret; \
  __builtin_neon_vld3_dup_v(&__ret, __p0, 18); \
  __ret; \
})
#define vld3_dup_u64(__p0) __extension__ ({ \
  uint64x1x3_t __ret; \
  __builtin_neon_vld3_dup_v(&__ret, __p0, 19); \
  __ret; \
})
#define vld3_dup_u16(__p0) __extension__ ({ \
  uint16x4x3_t __ret; \
  __builtin_neon_vld3_dup_v(&__ret, __p0, 17); \
  __ret; \
})
#define vld3_dup_s8(__p0) __extension__ ({ \
  int8x8x3_t __ret; \
  __builtin_neon_vld3_dup_v(&__ret, __p0, 0); \
  __ret; \
})
#define vld3_dup_f32(__p0) __extension__ ({ \
  float32x2x3_t __ret; \
  __builtin_neon_vld3_dup_v(&__ret, __p0, 9); \
  __ret; \
})
#define vld3_dup_f16(__p0) __extension__ ({ \
  float16x4x3_t __ret; \
  __builtin_neon_vld3_dup_v(&__ret, __p0, 8); \
  __ret; \
})
#define vld3_dup_s32(__p0) __extension__ ({ \
  int32x2x3_t __ret; \
  __builtin_neon_vld3_dup_v(&__ret, __p0, 2); \
  __ret; \
})
#define vld3_dup_s64(__p0) __extension__ ({ \
  int64x1x3_t __ret; \
  __builtin_neon_vld3_dup_v(&__ret, __p0, 3); \
  __ret; \
})
#define vld3_dup_s16(__p0) __extension__ ({ \
  int16x4x3_t __ret; \
  __builtin_neon_vld3_dup_v(&__ret, __p0, 1); \
  __ret; \
})
#define vld3_lane_p8(__p0, __p1, __p2) __extension__ ({ \
  poly8x8x3_t __s1 = __p1; \
  poly8x8x3_t __ret; \
  __builtin_neon_vld3_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 4); \
  __ret; \
})
#define vld3_lane_p16(__p0, __p1, __p2) __extension__ ({ \
  poly16x4x3_t __s1 = __p1; \
  poly16x4x3_t __ret; \
  __builtin_neon_vld3_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 5); \
  __ret; \
})
#define vld3q_lane_p16(__p0, __p1, __p2) __extension__ ({ \
  poly16x8x3_t __s1 = __p1; \
  poly16x8x3_t __ret; \
  __builtin_neon_vld3q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 37); \
  __ret; \
})
#define vld3q_lane_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x4x3_t __s1 = __p1; \
  uint32x4x3_t __ret; \
  __builtin_neon_vld3q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 50); \
  __ret; \
})
#define vld3q_lane_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x8x3_t __s1 = __p1; \
  uint16x8x3_t __ret; \
  __builtin_neon_vld3q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 49); \
  __ret; \
})
#define vld3q_lane_f32(__p0, __p1, __p2) __extension__ ({ \
  float32x4x3_t __s1 = __p1; \
  float32x4x3_t __ret; \
  __builtin_neon_vld3q_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __s1.val[2], __p2, 41); \
  __ret; \
})
#define vld3q_lane_f16(__p0, __p1, __p2) __extension__ ({ \
  float16x8x3_t __s1 = __p1; \
  float16x8x3_t __ret; \
  __builtin_neon_vld3q_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __s1.val[2], __p2, 40); \
  __ret; \
})
#define vld3q_lane_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x4x3_t __s1 = __p1; \
  int32x4x3_t __ret; \
  __builtin_neon_vld3q_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __s1.val[2], __p2, 34); \
  __ret; \
})
#define vld3q_lane_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x8x3_t __s1 = __p1; \
  int16x8x3_t __ret; \
  __builtin_neon_vld3q_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __s1.val[2], __p2, 33); \
  __ret; \
})
#define vld3_lane_u8(__p0, __p1, __p2) __extension__ ({ \
  uint8x8x3_t __s1 = __p1; \
  uint8x8x3_t __ret; \
  __builtin_neon_vld3_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 16); \
  __ret; \
})
#define vld3_lane_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x2x3_t __s1 = __p1; \
  uint32x2x3_t __ret; \
  __builtin_neon_vld3_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 18); \
  __ret; \
})
#define vld3_lane_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x4x3_t __s1 = __p1; \
  uint16x4x3_t __ret; \
  __builtin_neon_vld3_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 17); \
  __ret; \
})
#define vld3_lane_s8(__p0, __p1, __p2) __extension__ ({ \
  int8x8x3_t __s1 = __p1; \
  int8x8x3_t __ret; \
  __builtin_neon_vld3_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 0); \
  __ret; \
})
#define vld3_lane_f32(__p0, __p1, __p2) __extension__ ({ \
  float32x2x3_t __s1 = __p1; \
  float32x2x3_t __ret; \
  __builtin_neon_vld3_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __s1.val[2], __p2, 9); \
  __ret; \
})
#define vld3_lane_f16(__p0, __p1, __p2) __extension__ ({ \
  float16x4x3_t __s1 = __p1; \
  float16x4x3_t __ret; \
  __builtin_neon_vld3_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __s1.val[2], __p2, 8); \
  __ret; \
})
#define vld3_lane_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x2x3_t __s1 = __p1; \
  int32x2x3_t __ret; \
  __builtin_neon_vld3_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __s1.val[2], __p2, 2); \
  __ret; \
})
#define vld3_lane_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x4x3_t __s1 = __p1; \
  int16x4x3_t __ret; \
  __builtin_neon_vld3_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __s1.val[2], __p2, 1); \
  __ret; \
})
#define vld4_p8(__p0) __extension__ ({ \
  poly8x8x4_t __ret; \
  __builtin_neon_vld4_v(&__ret, __p0, 4); \
  __ret; \
})
#define vld4_p16(__p0) __extension__ ({ \
  poly16x4x4_t __ret; \
  __builtin_neon_vld4_v(&__ret, __p0, 5); \
  __ret; \
})
#define vld4q_p8(__p0) __extension__ ({ \
  poly8x16x4_t __ret; \
  __builtin_neon_vld4q_v(&__ret, __p0, 36); \
  __ret; \
})
#define vld4q_p16(__p0) __extension__ ({ \
  poly16x8x4_t __ret; \
  __builtin_neon_vld4q_v(&__ret, __p0, 37); \
  __ret; \
})
#define vld4q_u8(__p0) __extension__ ({ \
  uint8x16x4_t __ret; \
  __builtin_neon_vld4q_v(&__ret, __p0, 48); \
  __ret; \
})
#define vld4q_u32(__p0) __extension__ ({ \
  uint32x4x4_t __ret; \
  __builtin_neon_vld4q_v(&__ret, __p0, 50); \
  __ret; \
})
#define vld4q_u16(__p0) __extension__ ({ \
  uint16x8x4_t __ret; \
  __builtin_neon_vld4q_v(&__ret, __p0, 49); \
  __ret; \
})
#define vld4q_s8(__p0) __extension__ ({ \
  int8x16x4_t __ret; \
  __builtin_neon_vld4q_v(&__ret, __p0, 32); \
  __ret; \
})
#define vld4q_f32(__p0) __extension__ ({ \
  float32x4x4_t __ret; \
  __builtin_neon_vld4q_v(&__ret, __p0, 41); \
  __ret; \
})
#define vld4q_f16(__p0) __extension__ ({ \
  float16x8x4_t __ret; \
  __builtin_neon_vld4q_v(&__ret, __p0, 40); \
  __ret; \
})
#define vld4q_s32(__p0) __extension__ ({ \
  int32x4x4_t __ret; \
  __builtin_neon_vld4q_v(&__ret, __p0, 34); \
  __ret; \
})
#define vld4q_s16(__p0) __extension__ ({ \
  int16x8x4_t __ret; \
  __builtin_neon_vld4q_v(&__ret, __p0, 33); \
  __ret; \
})
#define vld4_u8(__p0) __extension__ ({ \
  uint8x8x4_t __ret; \
  __builtin_neon_vld4_v(&__ret, __p0, 16); \
  __ret; \
})
#define vld4_u32(__p0) __extension__ ({ \
  uint32x2x4_t __ret; \
  __builtin_neon_vld4_v(&__ret, __p0, 18); \
  __ret; \
})
#define vld4_u64(__p0) __extension__ ({ \
  uint64x1x4_t __ret; \
  __builtin_neon_vld4_v(&__ret, __p0, 19); \
  __ret; \
})
#define vld4_u16(__p0) __extension__ ({ \
  uint16x4x4_t __ret; \
  __builtin_neon_vld4_v(&__ret, __p0, 17); \
  __ret; \
})
#define vld4_s8(__p0) __extension__ ({ \
  int8x8x4_t __ret; \
  __builtin_neon_vld4_v(&__ret, __p0, 0); \
  __ret; \
})
#define vld4_f32(__p0) __extension__ ({ \
  float32x2x4_t __ret; \
  __builtin_neon_vld4_v(&__ret, __p0, 9); \
  __ret; \
})
#define vld4_f16(__p0) __extension__ ({ \
  float16x4x4_t __ret; \
  __builtin_neon_vld4_v(&__ret, __p0, 8); \
  __ret; \
})
#define vld4_s32(__p0) __extension__ ({ \
  int32x2x4_t __ret; \
  __builtin_neon_vld4_v(&__ret, __p0, 2); \
  __ret; \
})
#define vld4_s64(__p0) __extension__ ({ \
  int64x1x4_t __ret; \
  __builtin_neon_vld4_v(&__ret, __p0, 3); \
  __ret; \
})
#define vld4_s16(__p0) __extension__ ({ \
  int16x4x4_t __ret; \
  __builtin_neon_vld4_v(&__ret, __p0, 1); \
  __ret; \
})
#define vld4_dup_p8(__p0) __extension__ ({ \
  poly8x8x4_t __ret; \
  __builtin_neon_vld4_dup_v(&__ret, __p0, 4); \
  __ret; \
})
#define vld4_dup_p16(__p0) __extension__ ({ \
  poly16x4x4_t __ret; \
  __builtin_neon_vld4_dup_v(&__ret, __p0, 5); \
  __ret; \
})
#define vld4_dup_u8(__p0) __extension__ ({ \
  uint8x8x4_t __ret; \
  __builtin_neon_vld4_dup_v(&__ret, __p0, 16); \
  __ret; \
})
#define vld4_dup_u32(__p0) __extension__ ({ \
  uint32x2x4_t __ret; \
  __builtin_neon_vld4_dup_v(&__ret, __p0, 18); \
  __ret; \
})
#define vld4_dup_u64(__p0) __extension__ ({ \
  uint64x1x4_t __ret; \
  __builtin_neon_vld4_dup_v(&__ret, __p0, 19); \
  __ret; \
})
#define vld4_dup_u16(__p0) __extension__ ({ \
  uint16x4x4_t __ret; \
  __builtin_neon_vld4_dup_v(&__ret, __p0, 17); \
  __ret; \
})
#define vld4_dup_s8(__p0) __extension__ ({ \
  int8x8x4_t __ret; \
  __builtin_neon_vld4_dup_v(&__ret, __p0, 0); \
  __ret; \
})
#define vld4_dup_f32(__p0) __extension__ ({ \
  float32x2x4_t __ret; \
  __builtin_neon_vld4_dup_v(&__ret, __p0, 9); \
  __ret; \
})
#define vld4_dup_f16(__p0) __extension__ ({ \
  float16x4x4_t __ret; \
  __builtin_neon_vld4_dup_v(&__ret, __p0, 8); \
  __ret; \
})
#define vld4_dup_s32(__p0) __extension__ ({ \
  int32x2x4_t __ret; \
  __builtin_neon_vld4_dup_v(&__ret, __p0, 2); \
  __ret; \
})
#define vld4_dup_s64(__p0) __extension__ ({ \
  int64x1x4_t __ret; \
  __builtin_neon_vld4_dup_v(&__ret, __p0, 3); \
  __ret; \
})
#define vld4_dup_s16(__p0) __extension__ ({ \
  int16x4x4_t __ret; \
  __builtin_neon_vld4_dup_v(&__ret, __p0, 1); \
  __ret; \
})
#define vld4_lane_p8(__p0, __p1, __p2) __extension__ ({ \
  poly8x8x4_t __s1 = __p1; \
  poly8x8x4_t __ret; \
  __builtin_neon_vld4_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 4); \
  __ret; \
})
#define vld4_lane_p16(__p0, __p1, __p2) __extension__ ({ \
  poly16x4x4_t __s1 = __p1; \
  poly16x4x4_t __ret; \
  __builtin_neon_vld4_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 5); \
  __ret; \
})
#define vld4q_lane_p16(__p0, __p1, __p2) __extension__ ({ \
  poly16x8x4_t __s1 = __p1; \
  poly16x8x4_t __ret; \
  __builtin_neon_vld4q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 37); \
  __ret; \
})
#define vld4q_lane_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x4x4_t __s1 = __p1; \
  uint32x4x4_t __ret; \
  __builtin_neon_vld4q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 50); \
  __ret; \
})
#define vld4q_lane_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x8x4_t __s1 = __p1; \
  uint16x8x4_t __ret; \
  __builtin_neon_vld4q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 49); \
  __ret; \
})
#define vld4q_lane_f32(__p0, __p1, __p2) __extension__ ({ \
  float32x4x4_t __s1 = __p1; \
  float32x4x4_t __ret; \
  __builtin_neon_vld4q_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], __p2, 41); \
  __ret; \
})
#define vld4q_lane_f16(__p0, __p1, __p2) __extension__ ({ \
  float16x8x4_t __s1 = __p1; \
  float16x8x4_t __ret; \
  __builtin_neon_vld4q_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], __p2, 40); \
  __ret; \
})
#define vld4q_lane_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x4x4_t __s1 = __p1; \
  int32x4x4_t __ret; \
  __builtin_neon_vld4q_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], __p2, 34); \
  __ret; \
})
#define vld4q_lane_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x8x4_t __s1 = __p1; \
  int16x8x4_t __ret; \
  __builtin_neon_vld4q_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], __p2, 33); \
  __ret; \
})
#define vld4_lane_u8(__p0, __p1, __p2) __extension__ ({ \
  uint8x8x4_t __s1 = __p1; \
  uint8x8x4_t __ret; \
  __builtin_neon_vld4_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 16); \
  __ret; \
})
#define vld4_lane_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x2x4_t __s1 = __p1; \
  uint32x2x4_t __ret; \
  __builtin_neon_vld4_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 18); \
  __ret; \
})
#define vld4_lane_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x4x4_t __s1 = __p1; \
  uint16x4x4_t __ret; \
  __builtin_neon_vld4_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 17); \
  __ret; \
})
#define vld4_lane_s8(__p0, __p1, __p2) __extension__ ({ \
  int8x8x4_t __s1 = __p1; \
  int8x8x4_t __ret; \
  __builtin_neon_vld4_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 0); \
  __ret; \
})
#define vld4_lane_f32(__p0, __p1, __p2) __extension__ ({ \
  float32x2x4_t __s1 = __p1; \
  float32x2x4_t __ret; \
  __builtin_neon_vld4_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], __p2, 9); \
  __ret; \
})
#define vld4_lane_f16(__p0, __p1, __p2) __extension__ ({ \
  float16x4x4_t __s1 = __p1; \
  float16x4x4_t __ret; \
  __builtin_neon_vld4_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], __p2, 8); \
  __ret; \
})
#define vld4_lane_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x2x4_t __s1 = __p1; \
  int32x2x4_t __ret; \
  __builtin_neon_vld4_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], __p2, 2); \
  __ret; \
})
#define vld4_lane_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x4x4_t __s1 = __p1; \
  int16x4x4_t __ret; \
  __builtin_neon_vld4_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], __p2, 1); \
  __ret; \
})
__ai uint8x16_t vmaxq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
__ai uint32x4_t vmaxq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
__ai uint16x8_t vmaxq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
__ai int8x16_t vmaxq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
__ai float32x4_t vmaxq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
__ai int32x4_t vmaxq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
__ai int16x8_t vmaxq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
__ai uint8x8_t vmax_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vmax_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
__ai uint32x2_t vmax_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vmax_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
__ai uint16x4_t vmax_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vmax_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
__ai int8x8_t vmax_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vmax_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
__ai float32x2_t vmax_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vmax_v((int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
__ai int32x2_t vmax_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vmax_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
__ai int16x4_t vmax_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vmax_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
__ai uint8x16_t vminq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vminq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
__ai uint32x4_t vminq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vminq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
__ai uint16x8_t vminq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vminq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
__ai int8x16_t vminq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vminq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
__ai float32x4_t vminq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vminq_v((int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
__ai int32x4_t vminq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vminq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
__ai int16x8_t vminq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vminq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
__ai uint8x8_t vmin_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vmin_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
__ai uint32x2_t vmin_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vmin_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
__ai uint16x4_t vmin_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vmin_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
__ai int8x8_t vmin_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vmin_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
__ai float32x2_t vmin_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vmin_v((int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
__ai int32x2_t vmin_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vmin_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
__ai int16x4_t vmin_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vmin_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
__ai uint8x16_t vmlaq_u8(uint8x16_t __p0, uint8x16_t __p1, uint8x16_t __p2) {
  uint8x16_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
__ai uint32x4_t vmlaq_u32(uint32x4_t __p0, uint32x4_t __p1, uint32x4_t __p2) {
  uint32x4_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
__ai uint16x8_t vmlaq_u16(uint16x8_t __p0, uint16x8_t __p1, uint16x8_t __p2) {
  uint16x8_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
__ai int8x16_t vmlaq_s8(int8x16_t __p0, int8x16_t __p1, int8x16_t __p2) {
  int8x16_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
__ai float32x4_t vmlaq_f32(float32x4_t __p0, float32x4_t __p1, float32x4_t __p2) {
  float32x4_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
__ai int32x4_t vmlaq_s32(int32x4_t __p0, int32x4_t __p1, int32x4_t __p2) {
  int32x4_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
__ai int16x8_t vmlaq_s16(int16x8_t __p0, int16x8_t __p1, int16x8_t __p2) {
  int16x8_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
__ai uint8x8_t vmla_u8(uint8x8_t __p0, uint8x8_t __p1, uint8x8_t __p2) {
  uint8x8_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
__ai uint32x2_t vmla_u32(uint32x2_t __p0, uint32x2_t __p1, uint32x2_t __p2) {
  uint32x2_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
__ai uint16x4_t vmla_u16(uint16x4_t __p0, uint16x4_t __p1, uint16x4_t __p2) {
  uint16x4_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
__ai int8x8_t vmla_s8(int8x8_t __p0, int8x8_t __p1, int8x8_t __p2) {
  int8x8_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
__ai float32x2_t vmla_f32(float32x2_t __p0, float32x2_t __p1, float32x2_t __p2) {
  float32x2_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
__ai int32x2_t vmla_s32(int32x2_t __p0, int32x2_t __p1, int32x2_t __p2) {
  int32x2_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
__ai int16x4_t vmla_s16(int16x4_t __p0, int16x4_t __p1, int16x4_t __p2) {
  int16x4_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
#define vmlaq_lane_u32(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint32x4_t __s1 = __p1; \
  uint32x2_t __s2 = __p2; \
  uint32x4_t __ret; \
  __ret = __s0 + __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3); \
  __ret; \
})
#define vmlaq_lane_u16(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint16x8_t __s0 = __p0; \
  uint16x8_t __s1 = __p1; \
  uint16x4_t __s2 = __p2; \
  uint16x8_t __ret; \
  __ret = __s0 + __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3, __p3, __p3, __p3, __p3); \
  __ret; \
})
#define vmlaq_lane_f32(__p0, __p1, __p2, __p3) __extension__ ({ \
  float32x4_t __s0 = __p0; \
  float32x4_t __s1 = __p1; \
  float32x2_t __s2 = __p2; \
  float32x4_t __ret; \
  __ret = __s0 + __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3); \
  __ret; \
})
#define vmlaq_lane_s32(__p0, __p1, __p2, __p3) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int32x4_t __s1 = __p1; \
  int32x2_t __s2 = __p2; \
  int32x4_t __ret; \
  __ret = __s0 + __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3); \
  __ret; \
})
#define vmlaq_lane_s16(__p0, __p1, __p2, __p3) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  int16x8_t __s1 = __p1; \
  int16x4_t __s2 = __p2; \
  int16x8_t __ret; \
  __ret = __s0 + __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3, __p3, __p3, __p3, __p3); \
  __ret; \
})
#define vmla_lane_u32(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint32x2_t __s0 = __p0; \
  uint32x2_t __s1 = __p1; \
  uint32x2_t __s2 = __p2; \
  uint32x2_t __ret; \
  __ret = __s0 + __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3); \
  __ret; \
})
#define vmla_lane_u16(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint16x4_t __s0 = __p0; \
  uint16x4_t __s1 = __p1; \
  uint16x4_t __s2 = __p2; \
  uint16x4_t __ret; \
  __ret = __s0 + __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3); \
  __ret; \
})
#define vmla_lane_f32(__p0, __p1, __p2, __p3) __extension__ ({ \
  float32x2_t __s0 = __p0; \
  float32x2_t __s1 = __p1; \
  float32x2_t __s2 = __p2; \
  float32x2_t __ret; \
  __ret = __s0 + __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3); \
  __ret; \
})
#define vmla_lane_s32(__p0, __p1, __p2, __p3) __extension__ ({ \
  int32x2_t __s0 = __p0; \
  int32x2_t __s1 = __p1; \
  int32x2_t __s2 = __p2; \
  int32x2_t __ret; \
  __ret = __s0 + __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3); \
  __ret; \
})
#define vmla_lane_s16(__p0, __p1, __p2, __p3) __extension__ ({ \
  int16x4_t __s0 = __p0; \
  int16x4_t __s1 = __p1; \
  int16x4_t __s2 = __p2; \
  int16x4_t __ret; \
  __ret = __s0 + __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3); \
  __ret; \
})
__ai uint32x4_t vmlaq_n_u32(uint32x4_t __p0, uint32x4_t __p1, uint32_t __p2) {
  uint32x4_t __ret;
  __ret = __p0 + __p1 * (uint32x4_t) {__p2, __p2, __p2, __p2};
  return __ret;
}
__ai uint16x8_t vmlaq_n_u16(uint16x8_t __p0, uint16x8_t __p1, uint16_t __p2) {
  uint16x8_t __ret;
  __ret = __p0 + __p1 * (uint16x8_t) {__p2, __p2, __p2, __p2, __p2, __p2, __p2, __p2};
  return __ret;
}
__ai float32x4_t vmlaq_n_f32(float32x4_t __p0, float32x4_t __p1, float32_t __p2) {
  float32x4_t __ret;
  __ret = __p0 + __p1 * (float32x4_t) {__p2, __p2, __p2, __p2};
  return __ret;
}
__ai int32x4_t vmlaq_n_s32(int32x4_t __p0, int32x4_t __p1, int32_t __p2) {
  int32x4_t __ret;
  __ret = __p0 + __p1 * (int32x4_t) {__p2, __p2, __p2, __p2};
  return __ret;
}
__ai int16x8_t vmlaq_n_s16(int16x8_t __p0, int16x8_t __p1, int16_t __p2) {
  int16x8_t __ret;
  __ret = __p0 + __p1 * (int16x8_t) {__p2, __p2, __p2, __p2, __p2, __p2, __p2, __p2};
  return __ret;
}
__ai uint32x2_t vmla_n_u32(uint32x2_t __p0, uint32x2_t __p1, uint32_t __p2) {
  uint32x2_t __ret;
  __ret = __p0 + __p1 * (uint32x2_t) {__p2, __p2};
  return __ret;
}
__ai uint16x4_t vmla_n_u16(uint16x4_t __p0, uint16x4_t __p1, uint16_t __p2) {
  uint16x4_t __ret;
  __ret = __p0 + __p1 * (uint16x4_t) {__p2, __p2, __p2, __p2};
  return __ret;
}
__ai float32x2_t vmla_n_f32(float32x2_t __p0, float32x2_t __p1, float32_t __p2) {
  float32x2_t __ret;
  __ret = __p0 + __p1 * (float32x2_t) {__p2, __p2};
  return __ret;
}
__ai int32x2_t vmla_n_s32(int32x2_t __p0, int32x2_t __p1, int32_t __p2) {
  int32x2_t __ret;
  __ret = __p0 + __p1 * (int32x2_t) {__p2, __p2};
  return __ret;
}
__ai int16x4_t vmla_n_s16(int16x4_t __p0, int16x4_t __p1, int16_t __p2) {
  int16x4_t __ret;
  __ret = __p0 + __p1 * (int16x4_t) {__p2, __p2, __p2, __p2};
  return __ret;
}
__ai uint8x16_t vmlsq_u8(uint8x16_t __p0, uint8x16_t __p1, uint8x16_t __p2) {
  uint8x16_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
__ai uint32x4_t vmlsq_u32(uint32x4_t __p0, uint32x4_t __p1, uint32x4_t __p2) {
  uint32x4_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
__ai uint16x8_t vmlsq_u16(uint16x8_t __p0, uint16x8_t __p1, uint16x8_t __p2) {
  uint16x8_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
__ai int8x16_t vmlsq_s8(int8x16_t __p0, int8x16_t __p1, int8x16_t __p2) {
  int8x16_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
__ai float32x4_t vmlsq_f32(float32x4_t __p0, float32x4_t __p1, float32x4_t __p2) {
  float32x4_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
__ai int32x4_t vmlsq_s32(int32x4_t __p0, int32x4_t __p1, int32x4_t __p2) {
  int32x4_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
__ai int16x8_t vmlsq_s16(int16x8_t __p0, int16x8_t __p1, int16x8_t __p2) {
  int16x8_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
__ai uint8x8_t vmls_u8(uint8x8_t __p0, uint8x8_t __p1, uint8x8_t __p2) {
  uint8x8_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
__ai uint32x2_t vmls_u32(uint32x2_t __p0, uint32x2_t __p1, uint32x2_t __p2) {
  uint32x2_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
__ai uint16x4_t vmls_u16(uint16x4_t __p0, uint16x4_t __p1, uint16x4_t __p2) {
  uint16x4_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
__ai int8x8_t vmls_s8(int8x8_t __p0, int8x8_t __p1, int8x8_t __p2) {
  int8x8_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
__ai float32x2_t vmls_f32(float32x2_t __p0, float32x2_t __p1, float32x2_t __p2) {
  float32x2_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
__ai int32x2_t vmls_s32(int32x2_t __p0, int32x2_t __p1, int32x2_t __p2) {
  int32x2_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
__ai int16x4_t vmls_s16(int16x4_t __p0, int16x4_t __p1, int16x4_t __p2) {
  int16x4_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
#define vmlsq_lane_u32(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint32x4_t __s1 = __p1; \
  uint32x2_t __s2 = __p2; \
  uint32x4_t __ret; \
  __ret = __s0 - __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3); \
  __ret; \
})
#define vmlsq_lane_u16(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint16x8_t __s0 = __p0; \
  uint16x8_t __s1 = __p1; \
  uint16x4_t __s2 = __p2; \
  uint16x8_t __ret; \
  __ret = __s0 - __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3, __p3, __p3, __p3, __p3); \
  __ret; \
})
#define vmlsq_lane_f32(__p0, __p1, __p2, __p3) __extension__ ({ \
  float32x4_t __s0 = __p0; \
  float32x4_t __s1 = __p1; \
  float32x2_t __s2 = __p2; \
  float32x4_t __ret; \
  __ret = __s0 - __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3); \
  __ret; \
})
#define vmlsq_lane_s32(__p0, __p1, __p2, __p3) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int32x4_t __s1 = __p1; \
  int32x2_t __s2 = __p2; \
  int32x4_t __ret; \
  __ret = __s0 - __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3); \
  __ret; \
})
#define vmlsq_lane_s16(__p0, __p1, __p2, __p3) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  int16x8_t __s1 = __p1; \
  int16x4_t __s2 = __p2; \
  int16x8_t __ret; \
  __ret = __s0 - __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3, __p3, __p3, __p3, __p3); \
  __ret; \
})
#define vmls_lane_u32(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint32x2_t __s0 = __p0; \
  uint32x2_t __s1 = __p1; \
  uint32x2_t __s2 = __p2; \
  uint32x2_t __ret; \
  __ret = __s0 - __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3); \
  __ret; \
})
#define vmls_lane_u16(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint16x4_t __s0 = __p0; \
  uint16x4_t __s1 = __p1; \
  uint16x4_t __s2 = __p2; \
  uint16x4_t __ret; \
  __ret = __s0 - __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3); \
  __ret; \
})
#define vmls_lane_f32(__p0, __p1, __p2, __p3) __extension__ ({ \
  float32x2_t __s0 = __p0; \
  float32x2_t __s1 = __p1; \
  float32x2_t __s2 = __p2; \
  float32x2_t __ret; \
  __ret = __s0 - __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3); \
  __ret; \
})
#define vmls_lane_s32(__p0, __p1, __p2, __p3) __extension__ ({ \
  int32x2_t __s0 = __p0; \
  int32x2_t __s1 = __p1; \
  int32x2_t __s2 = __p2; \
  int32x2_t __ret; \
  __ret = __s0 - __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3); \
  __ret; \
})
#define vmls_lane_s16(__p0, __p1, __p2, __p3) __extension__ ({ \
  int16x4_t __s0 = __p0; \
  int16x4_t __s1 = __p1; \
  int16x4_t __s2 = __p2; \
  int16x4_t __ret; \
  __ret = __s0 - __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3); \
  __ret; \
})
__ai uint32x4_t vmlsq_n_u32(uint32x4_t __p0, uint32x4_t __p1, uint32_t __p2) {
  uint32x4_t __ret;
  __ret = __p0 - __p1 * (uint32x4_t) {__p2, __p2, __p2, __p2};
  return __ret;
}
__ai uint16x8_t vmlsq_n_u16(uint16x8_t __p0, uint16x8_t __p1, uint16_t __p2) {
  uint16x8_t __ret;
  __ret = __p0 - __p1 * (uint16x8_t) {__p2, __p2, __p2, __p2, __p2, __p2, __p2, __p2};
  return __ret;
}
__ai float32x4_t vmlsq_n_f32(float32x4_t __p0, float32x4_t __p1, float32_t __p2) {
  float32x4_t __ret;
  __ret = __p0 - __p1 * (float32x4_t) {__p2, __p2, __p2, __p2};
  return __ret;
}
__ai int32x4_t vmlsq_n_s32(int32x4_t __p0, int32x4_t __p1, int32_t __p2) {
  int32x4_t __ret;
  __ret = __p0 - __p1 * (int32x4_t) {__p2, __p2, __p2, __p2};
  return __ret;
}
__ai int16x8_t vmlsq_n_s16(int16x8_t __p0, int16x8_t __p1, int16_t __p2) {
  int16x8_t __ret;
  __ret = __p0 - __p1 * (int16x8_t) {__p2, __p2, __p2, __p2, __p2, __p2, __p2, __p2};
  return __ret;
}
__ai uint32x2_t vmls_n_u32(uint32x2_t __p0, uint32x2_t __p1, uint32_t __p2) {
  uint32x2_t __ret;
  __ret = __p0 - __p1 * (uint32x2_t) {__p2, __p2};
  return __ret;
}
__ai uint16x4_t vmls_n_u16(uint16x4_t __p0, uint16x4_t __p1, uint16_t __p2) {
  uint16x4_t __ret;
  __ret = __p0 - __p1 * (uint16x4_t) {__p2, __p2, __p2, __p2};
  return __ret;
}
__ai float32x2_t vmls_n_f32(float32x2_t __p0, float32x2_t __p1, float32_t __p2) {
  float32x2_t __ret;
  __ret = __p0 - __p1 * (float32x2_t) {__p2, __p2};
  return __ret;
}
__ai int32x2_t vmls_n_s32(int32x2_t __p0, int32x2_t __p1, int32_t __p2) {
  int32x2_t __ret;
  __ret = __p0 - __p1 * (int32x2_t) {__p2, __p2};
  return __ret;
}
__ai int16x4_t vmls_n_s16(int16x4_t __p0, int16x4_t __p1, int16_t __p2) {
  int16x4_t __ret;
  __ret = __p0 - __p1 * (int16x4_t) {__p2, __p2, __p2, __p2};
  return __ret;
}
__ai poly8x8_t vmov_n_p8(poly8_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
__ai poly16x4_t vmov_n_p16(poly16_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t) {__p0, __p0, __p0, __p0};
  return __ret;
}
__ai poly8x16_t vmovq_n_p8(poly8_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
__ai poly16x8_t vmovq_n_p16(poly16_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
__ai uint8x16_t vmovq_n_u8(uint8_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
__ai uint32x4_t vmovq_n_u32(uint32_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) {__p0, __p0, __p0, __p0};
  return __ret;
}
__ai uint64x2_t vmovq_n_u64(uint64_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) {__p0, __p0};
  return __ret;
}
__ai uint16x8_t vmovq_n_u16(uint16_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
__ai int8x16_t vmovq_n_s8(int8_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
__ai float32x4_t vmovq_n_f32(float32_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) {__p0, __p0, __p0, __p0};
  return __ret;
}
#define vmovq_n_f16(__p0) __extension__ ({ \
  float16_t __s0 = __p0; \
  float16x8_t __ret; \
  __ret = (float16x8_t) {__s0, __s0, __s0, __s0, __s0, __s0, __s0, __s0}; \
  __ret; \
})
__ai int32x4_t vmovq_n_s32(int32_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t) {__p0, __p0, __p0, __p0};
  return __ret;
}
__ai int64x2_t vmovq_n_s64(int64_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t) {__p0, __p0};
  return __ret;
}
__ai int16x8_t vmovq_n_s16(int16_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
__ai uint8x8_t vmov_n_u8(uint8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
__ai uint32x2_t vmov_n_u32(uint32_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) {__p0, __p0};
  return __ret;
}
__ai uint64x1_t vmov_n_u64(uint64_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) {__p0};
  return __ret;
}
__ai uint16x4_t vmov_n_u16(uint16_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) {__p0, __p0, __p0, __p0};
  return __ret;
}
__ai int8x8_t vmov_n_s8(int8_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t) {__p0, __p0, __p0, __p0, __p0, __p0, __p0, __p0};
  return __ret;
}
__ai float32x2_t vmov_n_f32(float32_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) {__p0, __p0};
  return __ret;
}
#define vmov_n_f16(__p0) __extension__ ({ \
  float16_t __s0 = __p0; \
  float16x4_t __ret; \
  __ret = (float16x4_t) {__s0, __s0, __s0, __s0}; \
  __ret; \
})
__ai int32x2_t vmov_n_s32(int32_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t) {__p0, __p0};
  return __ret;
}
__ai int64x1_t vmov_n_s64(int64_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t) {__p0};
  return __ret;
}
__ai int16x4_t vmov_n_s16(int16_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t) {__p0, __p0, __p0, __p0};
  return __ret;
}
__ai uint16x8_t vmovl_u8(uint8x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vmovl_v((int8x8_t)__p0, 49);
  return __ret;
}
__ai uint64x2_t vmovl_u32(uint32x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vmovl_v((int8x8_t)__p0, 51);
  return __ret;
}
__ai uint32x4_t vmovl_u16(uint16x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vmovl_v((int8x8_t)__p0, 50);
  return __ret;
}
__ai int16x8_t vmovl_s8(int8x8_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vmovl_v((int8x8_t)__p0, 33);
  return __ret;
}
__ai int64x2_t vmovl_s32(int32x2_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vmovl_v((int8x8_t)__p0, 35);
  return __ret;
}
__ai int32x4_t vmovl_s16(int16x4_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vmovl_v((int8x8_t)__p0, 34);
  return __ret;
}
__ai uint16x4_t vmovn_u32(uint32x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vmovn_v((int8x16_t)__p0, 17);
  return __ret;
}
__ai uint32x2_t vmovn_u64(uint64x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vmovn_v((int8x16_t)__p0, 18);
  return __ret;
}
__ai uint8x8_t vmovn_u16(uint16x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vmovn_v((int8x16_t)__p0, 16);
  return __ret;
}
__ai int16x4_t vmovn_s32(int32x4_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vmovn_v((int8x16_t)__p0, 1);
  return __ret;
}
__ai int32x2_t vmovn_s64(int64x2_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vmovn_v((int8x16_t)__p0, 2);
  return __ret;
}
__ai int8x8_t vmovn_s16(int16x8_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vmovn_v((int8x16_t)__p0, 0);
  return __ret;
}
__ai uint8x16_t vmulq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
__ai uint32x4_t vmulq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
__ai uint16x8_t vmulq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
__ai int8x16_t vmulq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
__ai float32x4_t vmulq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
__ai int32x4_t vmulq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
__ai int16x8_t vmulq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
__ai uint8x8_t vmul_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
__ai uint32x2_t vmul_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
__ai uint16x4_t vmul_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
__ai int8x8_t vmul_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
__ai float32x2_t vmul_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
__ai int32x2_t vmul_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
__ai int16x4_t vmul_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
__ai poly8x8_t vmul_p8(poly8x8_t __p0, poly8x8_t __p1) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vmul_v((int8x8_t)__p0, (int8x8_t)__p1, 4);
  return __ret;
}
__ai poly8x16_t vmulq_p8(poly8x16_t __p0, poly8x16_t __p1) {
  poly8x16_t __ret;
  __ret = (poly8x16_t) __builtin_neon_vmulq_v((int8x16_t)__p0, (int8x16_t)__p1, 36);
  return __ret;
}
#define vmulq_lane_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint32x2_t __s1 = __p1; \
  uint32x4_t __ret; \
  __ret = __s0 * __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2); \
  __ret; \
})
#define vmulq_lane_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x8_t __s0 = __p0; \
  uint16x4_t __s1 = __p1; \
  uint16x8_t __ret; \
  __ret = __s0 * __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2, __p2, __p2, __p2, __p2); \
  __ret; \
})
#define vmulq_lane_f32(__p0, __p1, __p2) __extension__ ({ \
  float32x4_t __s0 = __p0; \
  float32x2_t __s1 = __p1; \
  float32x4_t __ret; \
  __ret = __s0 * __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2); \
  __ret; \
})
#define vmulq_lane_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int32x2_t __s1 = __p1; \
  int32x4_t __ret; \
  __ret = __s0 * __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2); \
  __ret; \
})
#define vmulq_lane_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  int16x4_t __s1 = __p1; \
  int16x8_t __ret; \
  __ret = __s0 * __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2, __p2, __p2, __p2, __p2); \
  __ret; \
})
#define vmul_lane_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x2_t __s0 = __p0; \
  uint32x2_t __s1 = __p1; \
  uint32x2_t __ret; \
  __ret = __s0 * __builtin_shufflevector(__s1, __s1, __p2, __p2); \
  __ret; \
})
#define vmul_lane_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x4_t __s0 = __p0; \
  uint16x4_t __s1 = __p1; \
  uint16x4_t __ret; \
  __ret = __s0 * __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2); \
  __ret; \
})
#define vmul_lane_f32(__p0, __p1, __p2) __extension__ ({ \
  float32x2_t __s0 = __p0; \
  float32x2_t __s1 = __p1; \
  float32x2_t __ret; \
  __ret = __s0 * __builtin_shufflevector(__s1, __s1, __p2, __p2); \
  __ret; \
})
#define vmul_lane_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x2_t __s0 = __p0; \
  int32x2_t __s1 = __p1; \
  int32x2_t __ret; \
  __ret = __s0 * __builtin_shufflevector(__s1, __s1, __p2, __p2); \
  __ret; \
})
#define vmul_lane_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x4_t __s0 = __p0; \
  int16x4_t __s1 = __p1; \
  int16x4_t __ret; \
  __ret = __s0 * __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2); \
  __ret; \
})
__ai uint32x4_t vmulq_n_u32(uint32x4_t __p0, uint32_t __p1) {
  uint32x4_t __ret;
  __ret = __p0 * (uint32x4_t) {__p1, __p1, __p1, __p1};
  return __ret;
}
__ai uint16x8_t vmulq_n_u16(uint16x8_t __p0, uint16_t __p1) {
  uint16x8_t __ret;
  __ret = __p0 * (uint16x8_t) {__p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1};
  return __ret;
}
__ai float32x4_t vmulq_n_f32(float32x4_t __p0, float32_t __p1) {
  float32x4_t __ret;
  __ret = __p0 * (float32x4_t) {__p1, __p1, __p1, __p1};
  return __ret;
}
__ai int32x4_t vmulq_n_s32(int32x4_t __p0, int32_t __p1) {
  int32x4_t __ret;
  __ret = __p0 * (int32x4_t) {__p1, __p1, __p1, __p1};
  return __ret;
}
__ai int16x8_t vmulq_n_s16(int16x8_t __p0, int16_t __p1) {
  int16x8_t __ret;
  __ret = __p0 * (int16x8_t) {__p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1};
  return __ret;
}
__ai uint32x2_t vmul_n_u32(uint32x2_t __p0, uint32_t __p1) {
  uint32x2_t __ret;
  __ret = __p0 * (uint32x2_t) {__p1, __p1};
  return __ret;
}
__ai uint16x4_t vmul_n_u16(uint16x4_t __p0, uint16_t __p1) {
  uint16x4_t __ret;
  __ret = __p0 * (uint16x4_t) {__p1, __p1, __p1, __p1};
  return __ret;
}
__ai float32x2_t vmul_n_f32(float32x2_t __p0, float32_t __p1) {
  float32x2_t __ret;
  __ret = __p0 * (float32x2_t) {__p1, __p1};
  return __ret;
}
__ai int32x2_t vmul_n_s32(int32x2_t __p0, int32_t __p1) {
  int32x2_t __ret;
  __ret = __p0 * (int32x2_t) {__p1, __p1};
  return __ret;
}
__ai int16x4_t vmul_n_s16(int16x4_t __p0, int16_t __p1) {
  int16x4_t __ret;
  __ret = __p0 * (int16x4_t) {__p1, __p1, __p1, __p1};
  return __ret;
}
__ai poly16x8_t vmull_p8(poly8x8_t __p0, poly8x8_t __p1) {
  poly16x8_t __ret;
  __ret = (poly16x8_t) __builtin_neon_vmull_v((int8x8_t)__p0, (int8x8_t)__p1, 37);
  return __ret;
}
__ai uint16x8_t vmull_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vmull_v((int8x8_t)__p0, (int8x8_t)__p1, 49);
  return __ret;
}
__ai uint64x2_t vmull_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vmull_v((int8x8_t)__p0, (int8x8_t)__p1, 51);
  return __ret;
}
__ai uint32x4_t vmull_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vmull_v((int8x8_t)__p0, (int8x8_t)__p1, 50);
  return __ret;
}
__ai int16x8_t vmull_s8(int8x8_t __p0, int8x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vmull_v((int8x8_t)__p0, (int8x8_t)__p1, 33);
  return __ret;
}
__ai int64x2_t vmull_s32(int32x2_t __p0, int32x2_t __p1) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vmull_v((int8x8_t)__p0, (int8x8_t)__p1, 35);
  return __ret;
}
__ai int32x4_t vmull_s16(int16x4_t __p0, int16x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vmull_v((int8x8_t)__p0, (int8x8_t)__p1, 34);
  return __ret;
}
#define vmull_lane_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x2_t __s0 = __p0; \
  uint32x2_t __s1 = __p1; \
  uint64x2_t __ret; \
  __ret = vmull_u32(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2)); \
  __ret; \
})
#define vmull_lane_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x4_t __s0 = __p0; \
  uint16x4_t __s1 = __p1; \
  uint32x4_t __ret; \
  __ret = vmull_u16(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2)); \
  __ret; \
})
#define vmull_lane_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x2_t __s0 = __p0; \
  int32x2_t __s1 = __p1; \
  int64x2_t __ret; \
  __ret = vmull_s32(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2)); \
  __ret; \
})
#define vmull_lane_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x4_t __s0 = __p0; \
  int16x4_t __s1 = __p1; \
  int32x4_t __ret; \
  __ret = vmull_s16(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2)); \
  __ret; \
})
__ai uint64x2_t vmull_n_u32(uint32x2_t __p0, uint32_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vmull_v((int8x8_t)__p0, (int8x8_t)(uint32x2_t) {__p1, __p1}, 51);
  return __ret;
}
__ai uint32x4_t vmull_n_u16(uint16x4_t __p0, uint16_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vmull_v((int8x8_t)__p0, (int8x8_t)(uint16x4_t) {__p1, __p1, __p1, __p1}, 50);
  return __ret;
}
__ai int64x2_t vmull_n_s32(int32x2_t __p0, int32_t __p1) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vmull_v((int8x8_t)__p0, (int8x8_t)(int32x2_t) {__p1, __p1}, 35);
  return __ret;
}
__ai int32x4_t vmull_n_s16(int16x4_t __p0, int16_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vmull_v((int8x8_t)__p0, (int8x8_t)(int16x4_t) {__p1, __p1, __p1, __p1}, 34);
  return __ret;
}
__ai poly8x8_t vmvn_p8(poly8x8_t __p0) {
  poly8x8_t __ret;
  __ret = ~__p0;
  return __ret;
}
__ai poly8x16_t vmvnq_p8(poly8x16_t __p0) {
  poly8x16_t __ret;
  __ret = ~__p0;
  return __ret;
}
__ai uint8x16_t vmvnq_u8(uint8x16_t __p0) {
  uint8x16_t __ret;
  __ret = ~__p0;
  return __ret;
}
__ai uint32x4_t vmvnq_u32(uint32x4_t __p0) {
  uint32x4_t __ret;
  __ret = ~__p0;
  return __ret;
}
__ai uint16x8_t vmvnq_u16(uint16x8_t __p0) {
  uint16x8_t __ret;
  __ret = ~__p0;
  return __ret;
}
__ai int8x16_t vmvnq_s8(int8x16_t __p0) {
  int8x16_t __ret;
  __ret = ~__p0;
  return __ret;
}
__ai int32x4_t vmvnq_s32(int32x4_t __p0) {
  int32x4_t __ret;
  __ret = ~__p0;
  return __ret;
}
__ai int16x8_t vmvnq_s16(int16x8_t __p0) {
  int16x8_t __ret;
  __ret = ~__p0;
  return __ret;
}
__ai uint8x8_t vmvn_u8(uint8x8_t __p0) {
  uint8x8_t __ret;
  __ret = ~__p0;
  return __ret;
}
__ai uint32x2_t vmvn_u32(uint32x2_t __p0) {
  uint32x2_t __ret;
  __ret = ~__p0;
  return __ret;
}
__ai uint16x4_t vmvn_u16(uint16x4_t __p0) {
  uint16x4_t __ret;
  __ret = ~__p0;
  return __ret;
}
__ai int8x8_t vmvn_s8(int8x8_t __p0) {
  int8x8_t __ret;
  __ret = ~__p0;
  return __ret;
}
__ai int32x2_t vmvn_s32(int32x2_t __p0) {
  int32x2_t __ret;
  __ret = ~__p0;
  return __ret;
}
__ai int16x4_t vmvn_s16(int16x4_t __p0) {
  int16x4_t __ret;
  __ret = ~__p0;
  return __ret;
}
__ai int8x16_t vnegq_s8(int8x16_t __p0) {
  int8x16_t __ret;
  __ret = -__p0;
  return __ret;
}
__ai float32x4_t vnegq_f32(float32x4_t __p0) {
  float32x4_t __ret;
  __ret = -__p0;
  return __ret;
}
__ai int32x4_t vnegq_s32(int32x4_t __p0) {
  int32x4_t __ret;
  __ret = -__p0;
  return __ret;
}
__ai int16x8_t vnegq_s16(int16x8_t __p0) {
  int16x8_t __ret;
  __ret = -__p0;
  return __ret;
}
__ai int8x8_t vneg_s8(int8x8_t __p0) {
  int8x8_t __ret;
  __ret = -__p0;
  return __ret;
}
__ai float32x2_t vneg_f32(float32x2_t __p0) {
  float32x2_t __ret;
  __ret = -__p0;
  return __ret;
}
__ai int32x2_t vneg_s32(int32x2_t __p0) {
  int32x2_t __ret;
  __ret = -__p0;
  return __ret;
}
__ai int16x4_t vneg_s16(int16x4_t __p0) {
  int16x4_t __ret;
  __ret = -__p0;
  return __ret;
}
__ai uint8x16_t vornq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}
__ai uint32x4_t vornq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}
__ai uint64x2_t vornq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}
__ai uint16x8_t vornq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}
__ai int8x16_t vornq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}
__ai int32x4_t vornq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}
__ai int64x2_t vornq_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}
__ai int16x8_t vornq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}
__ai uint8x8_t vorn_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}
__ai uint32x2_t vorn_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}
__ai uint64x1_t vorn_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x1_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}
__ai uint16x4_t vorn_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}
__ai int8x8_t vorn_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}
__ai int32x2_t vorn_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}
__ai int64x1_t vorn_s64(int64x1_t __p0, int64x1_t __p1) {
  int64x1_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}
__ai int16x4_t vorn_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = __p0 | ~__p1;
  return __ret;
}
__ai uint8x16_t vorrq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}
__ai uint32x4_t vorrq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}
__ai uint64x2_t vorrq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}
__ai uint16x8_t vorrq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}
__ai int8x16_t vorrq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}
__ai int32x4_t vorrq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}
__ai int64x2_t vorrq_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}
__ai int16x8_t vorrq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}
__ai uint8x8_t vorr_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}
__ai uint32x2_t vorr_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}
__ai uint64x1_t vorr_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x1_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}
__ai uint16x4_t vorr_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}
__ai int8x8_t vorr_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}
__ai int32x2_t vorr_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}
__ai int64x1_t vorr_s64(int64x1_t __p0, int64x1_t __p1) {
  int64x1_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}
__ai int16x4_t vorr_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = __p0 | __p1;
  return __ret;
}
__ai uint16x8_t vpadalq_u8(uint16x8_t __p0, uint8x16_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vpadalq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
__ai uint64x2_t vpadalq_u32(uint64x2_t __p0, uint32x4_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vpadalq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
__ai uint32x4_t vpadalq_u16(uint32x4_t __p0, uint16x8_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vpadalq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
__ai int16x8_t vpadalq_s8(int16x8_t __p0, int8x16_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vpadalq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
__ai int64x2_t vpadalq_s32(int64x2_t __p0, int32x4_t __p1) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vpadalq_v((int8x16_t)__p0, (int8x16_t)__p1, 35);
  return __ret;
}
__ai int32x4_t vpadalq_s16(int32x4_t __p0, int16x8_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vpadalq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
__ai uint16x4_t vpadal_u8(uint16x4_t __p0, uint8x8_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vpadal_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
__ai uint64x1_t vpadal_u32(uint64x1_t __p0, uint32x2_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vpadal_v((int8x8_t)__p0, (int8x8_t)__p1, 19);
  return __ret;
}
__ai uint32x2_t vpadal_u16(uint32x2_t __p0, uint16x4_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vpadal_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
__ai int16x4_t vpadal_s8(int16x4_t __p0, int8x8_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vpadal_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
__ai int64x1_t vpadal_s32(int64x1_t __p0, int32x2_t __p1) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vpadal_v((int8x8_t)__p0, (int8x8_t)__p1, 3);
  return __ret;
}
__ai int32x2_t vpadal_s16(int32x2_t __p0, int16x4_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vpadal_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
__ai uint8x8_t vpadd_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vpadd_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
__ai uint32x2_t vpadd_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vpadd_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
__ai uint16x4_t vpadd_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vpadd_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
__ai int8x8_t vpadd_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vpadd_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
__ai float32x2_t vpadd_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vpadd_v((int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
__ai int32x2_t vpadd_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vpadd_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
__ai int16x4_t vpadd_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vpadd_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
__ai uint16x8_t vpaddlq_u8(uint8x16_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vpaddlq_v((int8x16_t)__p0, 49);
  return __ret;
}
__ai uint64x2_t vpaddlq_u32(uint32x4_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vpaddlq_v((int8x16_t)__p0, 51);
  return __ret;
}
__ai uint32x4_t vpaddlq_u16(uint16x8_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vpaddlq_v((int8x16_t)__p0, 50);
  return __ret;
}
__ai int16x8_t vpaddlq_s8(int8x16_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vpaddlq_v((int8x16_t)__p0, 33);
  return __ret;
}
__ai int64x2_t vpaddlq_s32(int32x4_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vpaddlq_v((int8x16_t)__p0, 35);
  return __ret;
}
__ai int32x4_t vpaddlq_s16(int16x8_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vpaddlq_v((int8x16_t)__p0, 34);
  return __ret;
}
__ai uint16x4_t vpaddl_u8(uint8x8_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vpaddl_v((int8x8_t)__p0, 17);
  return __ret;
}
__ai uint64x1_t vpaddl_u32(uint32x2_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vpaddl_v((int8x8_t)__p0, 19);
  return __ret;
}
__ai uint32x2_t vpaddl_u16(uint16x4_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vpaddl_v((int8x8_t)__p0, 18);
  return __ret;
}
__ai int16x4_t vpaddl_s8(int8x8_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vpaddl_v((int8x8_t)__p0, 1);
  return __ret;
}
__ai int64x1_t vpaddl_s32(int32x2_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vpaddl_v((int8x8_t)__p0, 3);
  return __ret;
}
__ai int32x2_t vpaddl_s16(int16x4_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vpaddl_v((int8x8_t)__p0, 2);
  return __ret;
}
__ai uint8x8_t vpmax_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vpmax_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
__ai uint32x2_t vpmax_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vpmax_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
__ai uint16x4_t vpmax_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vpmax_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
__ai int8x8_t vpmax_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vpmax_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
__ai float32x2_t vpmax_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vpmax_v((int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
__ai int32x2_t vpmax_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vpmax_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
__ai int16x4_t vpmax_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vpmax_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
__ai uint8x8_t vpmin_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vpmin_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
__ai uint32x2_t vpmin_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vpmin_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
__ai uint16x4_t vpmin_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vpmin_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
__ai int8x8_t vpmin_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vpmin_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
__ai float32x2_t vpmin_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vpmin_v((int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
__ai int32x2_t vpmin_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vpmin_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
__ai int16x4_t vpmin_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vpmin_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
__ai int8x16_t vqabsq_s8(int8x16_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vqabsq_v((int8x16_t)__p0, 32);
  return __ret;
}
__ai int32x4_t vqabsq_s32(int32x4_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vqabsq_v((int8x16_t)__p0, 34);
  return __ret;
}
__ai int16x8_t vqabsq_s16(int16x8_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vqabsq_v((int8x16_t)__p0, 33);
  return __ret;
}
__ai int8x8_t vqabs_s8(int8x8_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vqabs_v((int8x8_t)__p0, 0);
  return __ret;
}
__ai int32x2_t vqabs_s32(int32x2_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vqabs_v((int8x8_t)__p0, 2);
  return __ret;
}
__ai int16x4_t vqabs_s16(int16x4_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vqabs_v((int8x8_t)__p0, 1);
  return __ret;
}
__ai uint8x16_t vqaddq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
__ai uint32x4_t vqaddq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
__ai uint64x2_t vqaddq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
__ai uint16x8_t vqaddq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
__ai int8x16_t vqaddq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
__ai int32x4_t vqaddq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
__ai int64x2_t vqaddq_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 35);
  return __ret;
}
__ai int16x8_t vqaddq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
__ai uint8x8_t vqadd_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
__ai uint32x2_t vqadd_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
__ai uint64x1_t vqadd_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 19);
  return __ret;
}
__ai uint16x4_t vqadd_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
__ai int8x8_t vqadd_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
__ai int32x2_t vqadd_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
__ai int64x1_t vqadd_s64(int64x1_t __p0, int64x1_t __p1) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 3);
  return __ret;
}
__ai int16x4_t vqadd_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
__ai int64x2_t vqdmlal_s32(int64x2_t __p0, int32x2_t __p1, int32x2_t __p2) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vqdmlal_v((int8x16_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 35);
  return __ret;
}
__ai int32x4_t vqdmlal_s16(int32x4_t __p0, int16x4_t __p1, int16x4_t __p2) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vqdmlal_v((int8x16_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 34);
  return __ret;
}
#define vqdmlal_lane_s32(__p0, __p1, __p2, __p3) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int32x2_t __s1 = __p1; \
  int32x2_t __s2 = __p2; \
  int64x2_t __ret; \
  __ret = vqdmlal_s32(__s0, __s1, __builtin_shufflevector(__s2, __s2, __p3, __p3)); \
  __ret; \
})
#define vqdmlal_lane_s16(__p0, __p1, __p2, __p3) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int16x4_t __s1 = __p1; \
  int16x4_t __s2 = __p2; \
  int32x4_t __ret; \
  __ret = vqdmlal_s16(__s0, __s1, __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3)); \
  __ret; \
})
__ai int64x2_t vqdmlal_n_s32(int64x2_t __p0, int32x2_t __p1, int32_t __p2) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vqdmlal_v((int8x16_t)__p0, (int8x8_t)__p1, (int8x8_t)(int32x2_t) {__p2, __p2}, 35);
  return __ret;
}
__ai int32x4_t vqdmlal_n_s16(int32x4_t __p0, int16x4_t __p1, int16_t __p2) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vqdmlal_v((int8x16_t)__p0, (int8x8_t)__p1, (int8x8_t)(int16x4_t) {__p2, __p2, __p2, __p2}, 34);
  return __ret;
}
__ai int64x2_t vqdmlsl_s32(int64x2_t __p0, int32x2_t __p1, int32x2_t __p2) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vqdmlsl_v((int8x16_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 35);
  return __ret;
}
__ai int32x4_t vqdmlsl_s16(int32x4_t __p0, int16x4_t __p1, int16x4_t __p2) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vqdmlsl_v((int8x16_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 34);
  return __ret;
}
#define vqdmlsl_lane_s32(__p0, __p1, __p2, __p3) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int32x2_t __s1 = __p1; \
  int32x2_t __s2 = __p2; \
  int64x2_t __ret; \
  __ret = vqdmlsl_s32(__s0, __s1, __builtin_shufflevector(__s2, __s2, __p3, __p3)); \
  __ret; \
})
#define vqdmlsl_lane_s16(__p0, __p1, __p2, __p3) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int16x4_t __s1 = __p1; \
  int16x4_t __s2 = __p2; \
  int32x4_t __ret; \
  __ret = vqdmlsl_s16(__s0, __s1, __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3)); \
  __ret; \
})
__ai int64x2_t vqdmlsl_n_s32(int64x2_t __p0, int32x2_t __p1, int32_t __p2) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vqdmlsl_v((int8x16_t)__p0, (int8x8_t)__p1, (int8x8_t)(int32x2_t) {__p2, __p2}, 35);
  return __ret;
}
__ai int32x4_t vqdmlsl_n_s16(int32x4_t __p0, int16x4_t __p1, int16_t __p2) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vqdmlsl_v((int8x16_t)__p0, (int8x8_t)__p1, (int8x8_t)(int16x4_t) {__p2, __p2, __p2, __p2}, 34);
  return __ret;
}
__ai int32x4_t vqdmulhq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vqdmulhq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
__ai int16x8_t vqdmulhq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vqdmulhq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
__ai int32x2_t vqdmulh_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vqdmulh_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
__ai int16x4_t vqdmulh_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vqdmulh_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
#define vqdmulhq_lane_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int32x2_t __s1 = __p1; \
  int32x4_t __ret; \
  __ret = vqdmulhq_s32(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2)); \
  __ret; \
})
#define vqdmulhq_lane_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  int16x4_t __s1 = __p1; \
  int16x8_t __ret; \
  __ret = vqdmulhq_s16(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2, __p2, __p2, __p2, __p2)); \
  __ret; \
})
#define vqdmulh_lane_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x2_t __s0 = __p0; \
  int32x2_t __s1 = __p1; \
  int32x2_t __ret; \
  __ret = vqdmulh_s32(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2)); \
  __ret; \
})
#define vqdmulh_lane_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x4_t __s0 = __p0; \
  int16x4_t __s1 = __p1; \
  int16x4_t __ret; \
  __ret = vqdmulh_s16(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2)); \
  __ret; \
})
__ai int32x4_t vqdmulhq_n_s32(int32x4_t __p0, int32_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vqdmulhq_v((int8x16_t)__p0, (int8x16_t)(int32x4_t) {__p1, __p1, __p1, __p1}, 34);
  return __ret;
}
__ai int16x8_t vqdmulhq_n_s16(int16x8_t __p0, int16_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vqdmulhq_v((int8x16_t)__p0, (int8x16_t)(int16x8_t) {__p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1}, 33);
  return __ret;
}
__ai int32x2_t vqdmulh_n_s32(int32x2_t __p0, int32_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vqdmulh_v((int8x8_t)__p0, (int8x8_t)(int32x2_t) {__p1, __p1}, 2);
  return __ret;
}
__ai int16x4_t vqdmulh_n_s16(int16x4_t __p0, int16_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vqdmulh_v((int8x8_t)__p0, (int8x8_t)(int16x4_t) {__p1, __p1, __p1, __p1}, 1);
  return __ret;
}
__ai int64x2_t vqdmull_s32(int32x2_t __p0, int32x2_t __p1) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vqdmull_v((int8x8_t)__p0, (int8x8_t)__p1, 35);
  return __ret;
}
__ai int32x4_t vqdmull_s16(int16x4_t __p0, int16x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vqdmull_v((int8x8_t)__p0, (int8x8_t)__p1, 34);
  return __ret;
}
#define vqdmull_lane_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x2_t __s0 = __p0; \
  int32x2_t __s1 = __p1; \
  int64x2_t __ret; \
  __ret = vqdmull_s32(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2)); \
  __ret; \
})
#define vqdmull_lane_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x4_t __s0 = __p0; \
  int16x4_t __s1 = __p1; \
  int32x4_t __ret; \
  __ret = vqdmull_s16(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2)); \
  __ret; \
})
__ai int64x2_t vqdmull_n_s32(int32x2_t __p0, int32_t __p1) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vqdmull_v((int8x8_t)__p0, (int8x8_t)(int32x2_t) {__p1, __p1}, 35);
  return __ret;
}
__ai int32x4_t vqdmull_n_s16(int16x4_t __p0, int16_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vqdmull_v((int8x8_t)__p0, (int8x8_t)(int16x4_t) {__p1, __p1, __p1, __p1}, 34);
  return __ret;
}
__ai uint16x4_t vqmovn_u32(uint32x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vqmovn_v((int8x16_t)__p0, 17);
  return __ret;
}
__ai uint32x2_t vqmovn_u64(uint64x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vqmovn_v((int8x16_t)__p0, 18);
  return __ret;
}
__ai uint8x8_t vqmovn_u16(uint16x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vqmovn_v((int8x16_t)__p0, 16);
  return __ret;
}
__ai int16x4_t vqmovn_s32(int32x4_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vqmovn_v((int8x16_t)__p0, 1);
  return __ret;
}
__ai int32x2_t vqmovn_s64(int64x2_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vqmovn_v((int8x16_t)__p0, 2);
  return __ret;
}
__ai int8x8_t vqmovn_s16(int16x8_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vqmovn_v((int8x16_t)__p0, 0);
  return __ret;
}
__ai uint16x4_t vqmovun_s32(int32x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vqmovun_v((int8x16_t)__p0, 17);
  return __ret;
}
__ai uint32x2_t vqmovun_s64(int64x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vqmovun_v((int8x16_t)__p0, 18);
  return __ret;
}
__ai uint8x8_t vqmovun_s16(int16x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vqmovun_v((int8x16_t)__p0, 16);
  return __ret;
}
__ai int8x16_t vqnegq_s8(int8x16_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vqnegq_v((int8x16_t)__p0, 32);
  return __ret;
}
__ai int32x4_t vqnegq_s32(int32x4_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vqnegq_v((int8x16_t)__p0, 34);
  return __ret;
}
__ai int16x8_t vqnegq_s16(int16x8_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vqnegq_v((int8x16_t)__p0, 33);
  return __ret;
}
__ai int8x8_t vqneg_s8(int8x8_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vqneg_v((int8x8_t)__p0, 0);
  return __ret;
}
__ai int32x2_t vqneg_s32(int32x2_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vqneg_v((int8x8_t)__p0, 2);
  return __ret;
}
__ai int16x4_t vqneg_s16(int16x4_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vqneg_v((int8x8_t)__p0, 1);
  return __ret;
}
__ai int32x4_t vqrdmulhq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vqrdmulhq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
__ai int16x8_t vqrdmulhq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vqrdmulhq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
__ai int32x2_t vqrdmulh_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vqrdmulh_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
__ai int16x4_t vqrdmulh_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vqrdmulh_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
#define vqrdmulhq_lane_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int32x2_t __s1 = __p1; \
  int32x4_t __ret; \
  __ret = vqrdmulhq_s32(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2)); \
  __ret; \
})
#define vqrdmulhq_lane_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  int16x4_t __s1 = __p1; \
  int16x8_t __ret; \
  __ret = vqrdmulhq_s16(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2, __p2, __p2, __p2, __p2)); \
  __ret; \
})
#define vqrdmulh_lane_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x2_t __s0 = __p0; \
  int32x2_t __s1 = __p1; \
  int32x2_t __ret; \
  __ret = vqrdmulh_s32(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2)); \
  __ret; \
})
#define vqrdmulh_lane_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x4_t __s0 = __p0; \
  int16x4_t __s1 = __p1; \
  int16x4_t __ret; \
  __ret = vqrdmulh_s16(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2)); \
  __ret; \
})
__ai int32x4_t vqrdmulhq_n_s32(int32x4_t __p0, int32_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vqrdmulhq_v((int8x16_t)__p0, (int8x16_t)(int32x4_t) {__p1, __p1, __p1, __p1}, 34);
  return __ret;
}
__ai int16x8_t vqrdmulhq_n_s16(int16x8_t __p0, int16_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vqrdmulhq_v((int8x16_t)__p0, (int8x16_t)(int16x8_t) {__p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1}, 33);
  return __ret;
}
__ai int32x2_t vqrdmulh_n_s32(int32x2_t __p0, int32_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vqrdmulh_v((int8x8_t)__p0, (int8x8_t)(int32x2_t) {__p1, __p1}, 2);
  return __ret;
}
__ai int16x4_t vqrdmulh_n_s16(int16x4_t __p0, int16_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vqrdmulh_v((int8x8_t)__p0, (int8x8_t)(int16x4_t) {__p1, __p1, __p1, __p1}, 1);
  return __ret;
}
__ai uint8x16_t vqrshlq_u8(uint8x16_t __p0, int8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vqrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
__ai uint32x4_t vqrshlq_u32(uint32x4_t __p0, int32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vqrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
__ai uint64x2_t vqrshlq_u64(uint64x2_t __p0, int64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vqrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
__ai uint16x8_t vqrshlq_u16(uint16x8_t __p0, int16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vqrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
__ai int8x16_t vqrshlq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vqrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
__ai int32x4_t vqrshlq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vqrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
__ai int64x2_t vqrshlq_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vqrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 35);
  return __ret;
}
__ai int16x8_t vqrshlq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vqrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
__ai uint8x8_t vqrshl_u8(uint8x8_t __p0, int8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vqrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
__ai uint32x2_t vqrshl_u32(uint32x2_t __p0, int32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vqrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
__ai uint64x1_t vqrshl_u64(uint64x1_t __p0, int64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vqrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 19);
  return __ret;
}
__ai uint16x4_t vqrshl_u16(uint16x4_t __p0, int16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vqrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
__ai int8x8_t vqrshl_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vqrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
__ai int32x2_t vqrshl_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vqrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
__ai int64x1_t vqrshl_s64(int64x1_t __p0, int64x1_t __p1) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vqrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 3);
  return __ret;
}
__ai int16x4_t vqrshl_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vqrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
#define vqrshrn_n_u32(__p0, __p1) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint16x4_t __ret; \
  __ret = (uint16x4_t) __builtin_neon_vqrshrn_n_v((int8x16_t)__s0, __p1, 17); \
  __ret; \
})
#define vqrshrn_n_u64(__p0, __p1) __extension__ ({ \
  uint64x2_t __s0 = __p0; \
  uint32x2_t __ret; \
  __ret = (uint32x2_t) __builtin_neon_vqrshrn_n_v((int8x16_t)__s0, __p1, 18); \
  __ret; \
})
#define vqrshrn_n_u16(__p0, __p1) __extension__ ({ \
  uint16x8_t __s0 = __p0; \
  uint8x8_t __ret; \
  __ret = (uint8x8_t) __builtin_neon_vqrshrn_n_v((int8x16_t)__s0, __p1, 16); \
  __ret; \
})
#define vqrshrn_n_s32(__p0, __p1) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int16x4_t __ret; \
  __ret = (int16x4_t) __builtin_neon_vqrshrn_n_v((int8x16_t)__s0, __p1, 1); \
  __ret; \
})
#define vqrshrn_n_s64(__p0, __p1) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int32x2_t __ret; \
  __ret = (int32x2_t) __builtin_neon_vqrshrn_n_v((int8x16_t)__s0, __p1, 2); \
  __ret; \
})
#define vqrshrn_n_s16(__p0, __p1) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  int8x8_t __ret; \
  __ret = (int8x8_t) __builtin_neon_vqrshrn_n_v((int8x16_t)__s0, __p1, 0); \
  __ret; \
})
#define vqrshrun_n_s32(__p0, __p1) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  uint16x4_t __ret; \
  __ret = (uint16x4_t) __builtin_neon_vqrshrun_n_v((int8x16_t)__s0, __p1, 17); \
  __ret; \
})
#define vqrshrun_n_s64(__p0, __p1) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  uint32x2_t __ret; \
  __ret = (uint32x2_t) __builtin_neon_vqrshrun_n_v((int8x16_t)__s0, __p1, 18); \
  __ret; \
})
#define vqrshrun_n_s16(__p0, __p1) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  uint8x8_t __ret; \
  __ret = (uint8x8_t) __builtin_neon_vqrshrun_n_v((int8x16_t)__s0, __p1, 16); \
  __ret; \
})
__ai uint8x16_t vqshlq_u8(uint8x16_t __p0, int8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vqshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
__ai uint32x4_t vqshlq_u32(uint32x4_t __p0, int32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vqshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
__ai uint64x2_t vqshlq_u64(uint64x2_t __p0, int64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vqshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
__ai uint16x8_t vqshlq_u16(uint16x8_t __p0, int16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vqshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
__ai int8x16_t vqshlq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vqshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
__ai int32x4_t vqshlq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vqshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
__ai int64x2_t vqshlq_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vqshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 35);
  return __ret;
}
__ai int16x8_t vqshlq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vqshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
__ai uint8x8_t vqshl_u8(uint8x8_t __p0, int8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vqshl_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
__ai uint32x2_t vqshl_u32(uint32x2_t __p0, int32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vqshl_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
__ai uint64x1_t vqshl_u64(uint64x1_t __p0, int64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vqshl_v((int8x8_t)__p0, (int8x8_t)__p1, 19);
  return __ret;
}
__ai uint16x4_t vqshl_u16(uint16x4_t __p0, int16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vqshl_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
__ai int8x8_t vqshl_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vqshl_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
__ai int32x2_t vqshl_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vqshl_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
__ai int64x1_t vqshl_s64(int64x1_t __p0, int64x1_t __p1) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vqshl_v((int8x8_t)__p0, (int8x8_t)__p1, 3);
  return __ret;
}
__ai int16x4_t vqshl_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vqshl_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
#define vqshlq_n_u8(__p0, __p1) __extension__ ({ \
  uint8x16_t __s0 = __p0; \
  uint8x16_t __ret; \
  __ret = (uint8x16_t) __builtin_neon_vqshlq_n_v((int8x16_t)__s0, __p1, 48); \
  __ret; \
})
#define vqshlq_n_u32(__p0, __p1) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint32x4_t __ret; \
  __ret = (uint32x4_t) __builtin_neon_vqshlq_n_v((int8x16_t)__s0, __p1, 50); \
  __ret; \
})
#define vqshlq_n_u64(__p0, __p1) __extension__ ({ \
  uint64x2_t __s0 = __p0; \
  uint64x2_t __ret; \
  __ret = (uint64x2_t) __builtin_neon_vqshlq_n_v((int8x16_t)__s0, __p1, 51); \
  __ret; \
})
#define vqshlq_n_u16(__p0, __p1) __extension__ ({ \
  uint16x8_t __s0 = __p0; \
  uint16x8_t __ret; \
  __ret = (uint16x8_t) __builtin_neon_vqshlq_n_v((int8x16_t)__s0, __p1, 49); \
  __ret; \
})
#define vqshlq_n_s8(__p0, __p1) __extension__ ({ \
  int8x16_t __s0 = __p0; \
  int8x16_t __ret; \
  __ret = (int8x16_t) __builtin_neon_vqshlq_n_v((int8x16_t)__s0, __p1, 32); \
  __ret; \
})
#define vqshlq_n_s32(__p0, __p1) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int32x4_t __ret; \
  __ret = (int32x4_t) __builtin_neon_vqshlq_n_v((int8x16_t)__s0, __p1, 34); \
  __ret; \
})
#define vqshlq_n_s64(__p0, __p1) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int64x2_t __ret; \
  __ret = (int64x2_t) __builtin_neon_vqshlq_n_v((int8x16_t)__s0, __p1, 35); \
  __ret; \
})
#define vqshlq_n_s16(__p0, __p1) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  int16x8_t __ret; \
  __ret = (int16x8_t) __builtin_neon_vqshlq_n_v((int8x16_t)__s0, __p1, 33); \
  __ret; \
})
#define vqshl_n_u8(__p0, __p1) __extension__ ({ \
  uint8x8_t __s0 = __p0; \
  uint8x8_t __ret; \
  __ret = (uint8x8_t) __builtin_neon_vqshl_n_v((int8x8_t)__s0, __p1, 16); \
  __ret; \
})
#define vqshl_n_u32(__p0, __p1) __extension__ ({ \
  uint32x2_t __s0 = __p0; \
  uint32x2_t __ret; \
  __ret = (uint32x2_t) __builtin_neon_vqshl_n_v((int8x8_t)__s0, __p1, 18); \
  __ret; \
})
#define vqshl_n_u64(__p0, __p1) __extension__ ({ \
  uint64x1_t __s0 = __p0; \
  uint64x1_t __ret; \
  __ret = (uint64x1_t) __builtin_neon_vqshl_n_v((int8x8_t)__s0, __p1, 19); \
  __ret; \
})
#define vqshl_n_u16(__p0, __p1) __extension__ ({ \
  uint16x4_t __s0 = __p0; \
  uint16x4_t __ret; \
  __ret = (uint16x4_t) __builtin_neon_vqshl_n_v((int8x8_t)__s0, __p1, 17); \
  __ret; \
})
#define vqshl_n_s8(__p0, __p1) __extension__ ({ \
  int8x8_t __s0 = __p0; \
  int8x8_t __ret; \
  __ret = (int8x8_t) __builtin_neon_vqshl_n_v((int8x8_t)__s0, __p1, 0); \
  __ret; \
})
#define vqshl_n_s32(__p0, __p1) __extension__ ({ \
  int32x2_t __s0 = __p0; \
  int32x2_t __ret; \
  __ret = (int32x2_t) __builtin_neon_vqshl_n_v((int8x8_t)__s0, __p1, 2); \
  __ret; \
})
#define vqshl_n_s64(__p0, __p1) __extension__ ({ \
  int64x1_t __s0 = __p0; \
  int64x1_t __ret; \
  __ret = (int64x1_t) __builtin_neon_vqshl_n_v((int8x8_t)__s0, __p1, 3); \
  __ret; \
})
#define vqshl_n_s16(__p0, __p1) __extension__ ({ \
  int16x4_t __s0 = __p0; \
  int16x4_t __ret; \
  __ret = (int16x4_t) __builtin_neon_vqshl_n_v((int8x8_t)__s0, __p1, 1); \
  __ret; \
})
#define vqshluq_n_s8(__p0, __p1) __extension__ ({ \
  int8x16_t __s0 = __p0; \
  uint8x16_t __ret; \
  __ret = (uint8x16_t) __builtin_neon_vqshluq_n_v((int8x16_t)__s0, __p1, 48); \
  __ret; \
})
#define vqshluq_n_s32(__p0, __p1) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  uint32x4_t __ret; \
  __ret = (uint32x4_t) __builtin_neon_vqshluq_n_v((int8x16_t)__s0, __p1, 50); \
  __ret; \
})
#define vqshluq_n_s64(__p0, __p1) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  uint64x2_t __ret; \
  __ret = (uint64x2_t) __builtin_neon_vqshluq_n_v((int8x16_t)__s0, __p1, 51); \
  __ret; \
})
#define vqshluq_n_s16(__p0, __p1) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  uint16x8_t __ret; \
  __ret = (uint16x8_t) __builtin_neon_vqshluq_n_v((int8x16_t)__s0, __p1, 49); \
  __ret; \
})
#define vqshlu_n_s8(__p0, __p1) __extension__ ({ \
  int8x8_t __s0 = __p0; \
  uint8x8_t __ret; \
  __ret = (uint8x8_t) __builtin_neon_vqshlu_n_v((int8x8_t)__s0, __p1, 16); \
  __ret; \
})
#define vqshlu_n_s32(__p0, __p1) __extension__ ({ \
  int32x2_t __s0 = __p0; \
  uint32x2_t __ret; \
  __ret = (uint32x2_t) __builtin_neon_vqshlu_n_v((int8x8_t)__s0, __p1, 18); \
  __ret; \
})
#define vqshlu_n_s64(__p0, __p1) __extension__ ({ \
  int64x1_t __s0 = __p0; \
  uint64x1_t __ret; \
  __ret = (uint64x1_t) __builtin_neon_vqshlu_n_v((int8x8_t)__s0, __p1, 19); \
  __ret; \
})
#define vqshlu_n_s16(__p0, __p1) __extension__ ({ \
  int16x4_t __s0 = __p0; \
  uint16x4_t __ret; \
  __ret = (uint16x4_t) __builtin_neon_vqshlu_n_v((int8x8_t)__s0, __p1, 17); \
  __ret; \
})
#define vqshrn_n_u32(__p0, __p1) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint16x4_t __ret; \
  __ret = (uint16x4_t) __builtin_neon_vqshrn_n_v((int8x16_t)__s0, __p1, 17); \
  __ret; \
})
#define vqshrn_n_u64(__p0, __p1) __extension__ ({ \
  uint64x2_t __s0 = __p0; \
  uint32x2_t __ret; \
  __ret = (uint32x2_t) __builtin_neon_vqshrn_n_v((int8x16_t)__s0, __p1, 18); \
  __ret; \
})
#define vqshrn_n_u16(__p0, __p1) __extension__ ({ \
  uint16x8_t __s0 = __p0; \
  uint8x8_t __ret; \
  __ret = (uint8x8_t) __builtin_neon_vqshrn_n_v((int8x16_t)__s0, __p1, 16); \
  __ret; \
})
#define vqshrn_n_s32(__p0, __p1) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int16x4_t __ret; \
  __ret = (int16x4_t) __builtin_neon_vqshrn_n_v((int8x16_t)__s0, __p1, 1); \
  __ret; \
})
#define vqshrn_n_s64(__p0, __p1) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int32x2_t __ret; \
  __ret = (int32x2_t) __builtin_neon_vqshrn_n_v((int8x16_t)__s0, __p1, 2); \
  __ret; \
})
#define vqshrn_n_s16(__p0, __p1) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  int8x8_t __ret; \
  __ret = (int8x8_t) __builtin_neon_vqshrn_n_v((int8x16_t)__s0, __p1, 0); \
  __ret; \
})
#define vqshrun_n_s32(__p0, __p1) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  uint16x4_t __ret; \
  __ret = (uint16x4_t) __builtin_neon_vqshrun_n_v((int8x16_t)__s0, __p1, 17); \
  __ret; \
})
#define vqshrun_n_s64(__p0, __p1) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  uint32x2_t __ret; \
  __ret = (uint32x2_t) __builtin_neon_vqshrun_n_v((int8x16_t)__s0, __p1, 18); \
  __ret; \
})
#define vqshrun_n_s16(__p0, __p1) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  uint8x8_t __ret; \
  __ret = (uint8x8_t) __builtin_neon_vqshrun_n_v((int8x16_t)__s0, __p1, 16); \
  __ret; \
})
__ai uint8x16_t vqsubq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vqsubq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
__ai uint32x4_t vqsubq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vqsubq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
__ai uint64x2_t vqsubq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vqsubq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
__ai uint16x8_t vqsubq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vqsubq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
__ai int8x16_t vqsubq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vqsubq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
__ai int32x4_t vqsubq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vqsubq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
__ai int64x2_t vqsubq_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vqsubq_v((int8x16_t)__p0, (int8x16_t)__p1, 35);
  return __ret;
}
__ai int16x8_t vqsubq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vqsubq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
__ai uint8x8_t vqsub_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vqsub_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
__ai uint32x2_t vqsub_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vqsub_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
__ai uint64x1_t vqsub_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vqsub_v((int8x8_t)__p0, (int8x8_t)__p1, 19);
  return __ret;
}
__ai uint16x4_t vqsub_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vqsub_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
__ai int8x8_t vqsub_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vqsub_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
__ai int32x2_t vqsub_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vqsub_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
__ai int64x1_t vqsub_s64(int64x1_t __p0, int64x1_t __p1) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vqsub_v((int8x8_t)__p0, (int8x8_t)__p1, 3);
  return __ret;
}
__ai int16x4_t vqsub_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vqsub_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
__ai uint16x4_t vraddhn_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vraddhn_v((int8x16_t)__p0, (int8x16_t)__p1, 17);
  return __ret;
}
__ai uint32x2_t vraddhn_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vraddhn_v((int8x16_t)__p0, (int8x16_t)__p1, 18);
  return __ret;
}
__ai uint8x8_t vraddhn_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vraddhn_v((int8x16_t)__p0, (int8x16_t)__p1, 16);
  return __ret;
}
__ai int16x4_t vraddhn_s32(int32x4_t __p0, int32x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vraddhn_v((int8x16_t)__p0, (int8x16_t)__p1, 1);
  return __ret;
}
__ai int32x2_t vraddhn_s64(int64x2_t __p0, int64x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vraddhn_v((int8x16_t)__p0, (int8x16_t)__p1, 2);
  return __ret;
}
__ai int8x8_t vraddhn_s16(int16x8_t __p0, int16x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vraddhn_v((int8x16_t)__p0, (int8x16_t)__p1, 0);
  return __ret;
}
__ai uint32x4_t vrecpeq_u32(uint32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vrecpeq_v((int8x16_t)__p0, 50);
  return __ret;
}
__ai float32x4_t vrecpeq_f32(float32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vrecpeq_v((int8x16_t)__p0, 41);
  return __ret;
}
__ai uint32x2_t vrecpe_u32(uint32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vrecpe_v((int8x8_t)__p0, 18);
  return __ret;
}
__ai float32x2_t vrecpe_f32(float32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vrecpe_v((int8x8_t)__p0, 9);
  return __ret;
}
__ai float32x4_t vrecpsq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vrecpsq_v((int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
__ai float32x2_t vrecps_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vrecps_v((int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
__ai poly8x8_t vrev16_p8(poly8x8_t __p0) {
  poly8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0, 3, 2, 5, 4, 7, 6);
  return __ret;
}
__ai poly8x16_t vrev16q_p8(poly8x16_t __p0) {
  poly8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0, 3, 2, 5, 4, 7, 6, 9, 8, 11, 10, 13, 12, 15, 14);
  return __ret;
}
__ai uint8x16_t vrev16q_u8(uint8x16_t __p0) {
  uint8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0, 3, 2, 5, 4, 7, 6, 9, 8, 11, 10, 13, 12, 15, 14);
  return __ret;
}
__ai int8x16_t vrev16q_s8(int8x16_t __p0) {
  int8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0, 3, 2, 5, 4, 7, 6, 9, 8, 11, 10, 13, 12, 15, 14);
  return __ret;
}
__ai uint8x8_t vrev16_u8(uint8x8_t __p0) {
  uint8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0, 3, 2, 5, 4, 7, 6);
  return __ret;
}
__ai int8x8_t vrev16_s8(int8x8_t __p0) {
  int8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0, 3, 2, 5, 4, 7, 6);
  return __ret;
}
__ai poly8x8_t vrev32_p8(poly8x8_t __p0) {
  poly8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 3, 2, 1, 0, 7, 6, 5, 4);
  return __ret;
}
__ai poly16x4_t vrev32_p16(poly16x4_t __p0) {
  poly16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0, 3, 2);
  return __ret;
}
__ai poly8x16_t vrev32q_p8(poly8x16_t __p0) {
  poly8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 3, 2, 1, 0, 7, 6, 5, 4, 11, 10, 9, 8, 15, 14, 13, 12);
  return __ret;
}
__ai poly16x8_t vrev32q_p16(poly16x8_t __p0) {
  poly16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0, 3, 2, 5, 4, 7, 6);
  return __ret;
}
__ai uint8x16_t vrev32q_u8(uint8x16_t __p0) {
  uint8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 3, 2, 1, 0, 7, 6, 5, 4, 11, 10, 9, 8, 15, 14, 13, 12);
  return __ret;
}
__ai uint16x8_t vrev32q_u16(uint16x8_t __p0) {
  uint16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0, 3, 2, 5, 4, 7, 6);
  return __ret;
}
__ai int8x16_t vrev32q_s8(int8x16_t __p0) {
  int8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 3, 2, 1, 0, 7, 6, 5, 4, 11, 10, 9, 8, 15, 14, 13, 12);
  return __ret;
}
__ai int16x8_t vrev32q_s16(int16x8_t __p0) {
  int16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0, 3, 2, 5, 4, 7, 6);
  return __ret;
}
__ai uint8x8_t vrev32_u8(uint8x8_t __p0) {
  uint8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 3, 2, 1, 0, 7, 6, 5, 4);
  return __ret;
}
__ai uint16x4_t vrev32_u16(uint16x4_t __p0) {
  uint16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0, 3, 2);
  return __ret;
}
__ai int8x8_t vrev32_s8(int8x8_t __p0) {
  int8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 3, 2, 1, 0, 7, 6, 5, 4);
  return __ret;
}
__ai int16x4_t vrev32_s16(int16x4_t __p0) {
  int16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0, 3, 2);
  return __ret;
}
__ai poly8x8_t vrev64_p8(poly8x8_t __p0) {
  poly8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 7, 6, 5, 4, 3, 2, 1, 0);
  return __ret;
}
__ai poly16x4_t vrev64_p16(poly16x4_t __p0) {
  poly16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 3, 2, 1, 0);
  return __ret;
}
__ai poly8x16_t vrev64q_p8(poly8x16_t __p0) {
  poly8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 7, 6, 5, 4, 3, 2, 1, 0, 15, 14, 13, 12, 11, 10, 9, 8);
  return __ret;
}
__ai poly16x8_t vrev64q_p16(poly16x8_t __p0) {
  poly16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 3, 2, 1, 0, 7, 6, 5, 4);
  return __ret;
}
__ai uint8x16_t vrev64q_u8(uint8x16_t __p0) {
  uint8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 7, 6, 5, 4, 3, 2, 1, 0, 15, 14, 13, 12, 11, 10, 9, 8);
  return __ret;
}
__ai uint32x4_t vrev64q_u32(uint32x4_t __p0) {
  uint32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0, 3, 2);
  return __ret;
}
__ai uint16x8_t vrev64q_u16(uint16x8_t __p0) {
  uint16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 3, 2, 1, 0, 7, 6, 5, 4);
  return __ret;
}
__ai int8x16_t vrev64q_s8(int8x16_t __p0) {
  int8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 7, 6, 5, 4, 3, 2, 1, 0, 15, 14, 13, 12, 11, 10, 9, 8);
  return __ret;
}
__ai float32x4_t vrev64q_f32(float32x4_t __p0) {
  float32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0, 3, 2);
  return __ret;
}
__ai int32x4_t vrev64q_s32(int32x4_t __p0) {
  int32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0, 3, 2);
  return __ret;
}
__ai int16x8_t vrev64q_s16(int16x8_t __p0) {
  int16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 3, 2, 1, 0, 7, 6, 5, 4);
  return __ret;
}
__ai uint8x8_t vrev64_u8(uint8x8_t __p0) {
  uint8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 7, 6, 5, 4, 3, 2, 1, 0);
  return __ret;
}
__ai uint32x2_t vrev64_u32(uint32x2_t __p0) {
  uint32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0);
  return __ret;
}
__ai uint16x4_t vrev64_u16(uint16x4_t __p0) {
  uint16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 3, 2, 1, 0);
  return __ret;
}
__ai int8x8_t vrev64_s8(int8x8_t __p0) {
  int8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 7, 6, 5, 4, 3, 2, 1, 0);
  return __ret;
}
__ai float32x2_t vrev64_f32(float32x2_t __p0) {
  float32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0);
  return __ret;
}
__ai int32x2_t vrev64_s32(int32x2_t __p0) {
  int32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1, 0);
  return __ret;
}
__ai int16x4_t vrev64_s16(int16x4_t __p0) {
  int16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 3, 2, 1, 0);
  return __ret;
}
__ai uint8x16_t vrhaddq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vrhaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
__ai uint32x4_t vrhaddq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vrhaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
__ai uint16x8_t vrhaddq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vrhaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
__ai int8x16_t vrhaddq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vrhaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
__ai int32x4_t vrhaddq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vrhaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
__ai int16x8_t vrhaddq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vrhaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
__ai uint8x8_t vrhadd_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vrhadd_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
__ai uint32x2_t vrhadd_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vrhadd_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
__ai uint16x4_t vrhadd_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vrhadd_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
__ai int8x8_t vrhadd_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vrhadd_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
__ai int32x2_t vrhadd_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vrhadd_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
__ai int16x4_t vrhadd_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vrhadd_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
__ai uint8x16_t vrshlq_u8(uint8x16_t __p0, int8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
__ai uint32x4_t vrshlq_u32(uint32x4_t __p0, int32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
__ai uint64x2_t vrshlq_u64(uint64x2_t __p0, int64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
__ai uint16x8_t vrshlq_u16(uint16x8_t __p0, int16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
__ai int8x16_t vrshlq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
__ai int32x4_t vrshlq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
__ai int64x2_t vrshlq_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 35);
  return __ret;
}
__ai int16x8_t vrshlq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vrshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
__ai uint8x8_t vrshl_u8(uint8x8_t __p0, int8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
__ai uint32x2_t vrshl_u32(uint32x2_t __p0, int32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
__ai uint64x1_t vrshl_u64(uint64x1_t __p0, int64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 19);
  return __ret;
}
__ai uint16x4_t vrshl_u16(uint16x4_t __p0, int16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
__ai int8x8_t vrshl_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
__ai int32x2_t vrshl_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
__ai int64x1_t vrshl_s64(int64x1_t __p0, int64x1_t __p1) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 3);
  return __ret;
}
__ai int16x4_t vrshl_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vrshl_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
#define vrshrq_n_u8(__p0, __p1) __extension__ ({ \
  uint8x16_t __s0 = __p0; \
  uint8x16_t __ret; \
  __ret = (uint8x16_t) __builtin_neon_vrshrq_n_v((int8x16_t)__s0, __p1, 48); \
  __ret; \
})
#define vrshrq_n_u32(__p0, __p1) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint32x4_t __ret; \
  __ret = (uint32x4_t) __builtin_neon_vrshrq_n_v((int8x16_t)__s0, __p1, 50); \
  __ret; \
})
#define vrshrq_n_u64(__p0, __p1) __extension__ ({ \
  uint64x2_t __s0 = __p0; \
  uint64x2_t __ret; \
  __ret = (uint64x2_t) __builtin_neon_vrshrq_n_v((int8x16_t)__s0, __p1, 51); \
  __ret; \
})
#define vrshrq_n_u16(__p0, __p1) __extension__ ({ \
  uint16x8_t __s0 = __p0; \
  uint16x8_t __ret; \
  __ret = (uint16x8_t) __builtin_neon_vrshrq_n_v((int8x16_t)__s0, __p1, 49); \
  __ret; \
})
#define vrshrq_n_s8(__p0, __p1) __extension__ ({ \
  int8x16_t __s0 = __p0; \
  int8x16_t __ret; \
  __ret = (int8x16_t) __builtin_neon_vrshrq_n_v((int8x16_t)__s0, __p1, 32); \
  __ret; \
})
#define vrshrq_n_s32(__p0, __p1) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int32x4_t __ret; \
  __ret = (int32x4_t) __builtin_neon_vrshrq_n_v((int8x16_t)__s0, __p1, 34); \
  __ret; \
})
#define vrshrq_n_s64(__p0, __p1) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int64x2_t __ret; \
  __ret = (int64x2_t) __builtin_neon_vrshrq_n_v((int8x16_t)__s0, __p1, 35); \
  __ret; \
})
#define vrshrq_n_s16(__p0, __p1) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  int16x8_t __ret; \
  __ret = (int16x8_t) __builtin_neon_vrshrq_n_v((int8x16_t)__s0, __p1, 33); \
  __ret; \
})
#define vrshr_n_u8(__p0, __p1) __extension__ ({ \
  uint8x8_t __s0 = __p0; \
  uint8x8_t __ret; \
  __ret = (uint8x8_t) __builtin_neon_vrshr_n_v((int8x8_t)__s0, __p1, 16); \
  __ret; \
})
#define vrshr_n_u32(__p0, __p1) __extension__ ({ \
  uint32x2_t __s0 = __p0; \
  uint32x2_t __ret; \
  __ret = (uint32x2_t) __builtin_neon_vrshr_n_v((int8x8_t)__s0, __p1, 18); \
  __ret; \
})
#define vrshr_n_u64(__p0, __p1) __extension__ ({ \
  uint64x1_t __s0 = __p0; \
  uint64x1_t __ret; \
  __ret = (uint64x1_t) __builtin_neon_vrshr_n_v((int8x8_t)__s0, __p1, 19); \
  __ret; \
})
#define vrshr_n_u16(__p0, __p1) __extension__ ({ \
  uint16x4_t __s0 = __p0; \
  uint16x4_t __ret; \
  __ret = (uint16x4_t) __builtin_neon_vrshr_n_v((int8x8_t)__s0, __p1, 17); \
  __ret; \
})
#define vrshr_n_s8(__p0, __p1) __extension__ ({ \
  int8x8_t __s0 = __p0; \
  int8x8_t __ret; \
  __ret = (int8x8_t) __builtin_neon_vrshr_n_v((int8x8_t)__s0, __p1, 0); \
  __ret; \
})
#define vrshr_n_s32(__p0, __p1) __extension__ ({ \
  int32x2_t __s0 = __p0; \
  int32x2_t __ret; \
  __ret = (int32x2_t) __builtin_neon_vrshr_n_v((int8x8_t)__s0, __p1, 2); \
  __ret; \
})
#define vrshr_n_s64(__p0, __p1) __extension__ ({ \
  int64x1_t __s0 = __p0; \
  int64x1_t __ret; \
  __ret = (int64x1_t) __builtin_neon_vrshr_n_v((int8x8_t)__s0, __p1, 3); \
  __ret; \
})
#define vrshr_n_s16(__p0, __p1) __extension__ ({ \
  int16x4_t __s0 = __p0; \
  int16x4_t __ret; \
  __ret = (int16x4_t) __builtin_neon_vrshr_n_v((int8x8_t)__s0, __p1, 1); \
  __ret; \
})
#define vrshrn_n_u32(__p0, __p1) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint16x4_t __ret; \
  __ret = (uint16x4_t) __builtin_neon_vrshrn_n_v((int8x16_t)__s0, __p1, 17); \
  __ret; \
})
#define vrshrn_n_u64(__p0, __p1) __extension__ ({ \
  uint64x2_t __s0 = __p0; \
  uint32x2_t __ret; \
  __ret = (uint32x2_t) __builtin_neon_vrshrn_n_v((int8x16_t)__s0, __p1, 18); \
  __ret; \
})
#define vrshrn_n_u16(__p0, __p1) __extension__ ({ \
  uint16x8_t __s0 = __p0; \
  uint8x8_t __ret; \
  __ret = (uint8x8_t) __builtin_neon_vrshrn_n_v((int8x16_t)__s0, __p1, 16); \
  __ret; \
})
#define vrshrn_n_s32(__p0, __p1) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int16x4_t __ret; \
  __ret = (int16x4_t) __builtin_neon_vrshrn_n_v((int8x16_t)__s0, __p1, 1); \
  __ret; \
})
#define vrshrn_n_s64(__p0, __p1) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int32x2_t __ret; \
  __ret = (int32x2_t) __builtin_neon_vrshrn_n_v((int8x16_t)__s0, __p1, 2); \
  __ret; \
})
#define vrshrn_n_s16(__p0, __p1) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  int8x8_t __ret; \
  __ret = (int8x8_t) __builtin_neon_vrshrn_n_v((int8x16_t)__s0, __p1, 0); \
  __ret; \
})
__ai uint32x4_t vrsqrteq_u32(uint32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vrsqrteq_v((int8x16_t)__p0, 50);
  return __ret;
}
__ai float32x4_t vrsqrteq_f32(float32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vrsqrteq_v((int8x16_t)__p0, 41);
  return __ret;
}
__ai uint32x2_t vrsqrte_u32(uint32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vrsqrte_v((int8x8_t)__p0, 18);
  return __ret;
}
__ai float32x2_t vrsqrte_f32(float32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vrsqrte_v((int8x8_t)__p0, 9);
  return __ret;
}
__ai float32x4_t vrsqrtsq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vrsqrtsq_v((int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
__ai float32x2_t vrsqrts_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vrsqrts_v((int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
#define vrsraq_n_u8(__p0, __p1, __p2) __extension__ ({ \
  uint8x16_t __s0 = __p0; \
  uint8x16_t __s1 = __p1; \
  uint8x16_t __ret; \
  __ret = (uint8x16_t) __builtin_neon_vrsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 48); \
  __ret; \
})
#define vrsraq_n_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint32x4_t __s1 = __p1; \
  uint32x4_t __ret; \
  __ret = (uint32x4_t) __builtin_neon_vrsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 50); \
  __ret; \
})
#define vrsraq_n_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64x2_t __s0 = __p0; \
  uint64x2_t __s1 = __p1; \
  uint64x2_t __ret; \
  __ret = (uint64x2_t) __builtin_neon_vrsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 51); \
  __ret; \
})
#define vrsraq_n_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x8_t __s0 = __p0; \
  uint16x8_t __s1 = __p1; \
  uint16x8_t __ret; \
  __ret = (uint16x8_t) __builtin_neon_vrsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 49); \
  __ret; \
})
#define vrsraq_n_s8(__p0, __p1, __p2) __extension__ ({ \
  int8x16_t __s0 = __p0; \
  int8x16_t __s1 = __p1; \
  int8x16_t __ret; \
  __ret = (int8x16_t) __builtin_neon_vrsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 32); \
  __ret; \
})
#define vrsraq_n_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int32x4_t __s1 = __p1; \
  int32x4_t __ret; \
  __ret = (int32x4_t) __builtin_neon_vrsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 34); \
  __ret; \
})
#define vrsraq_n_s64(__p0, __p1, __p2) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int64x2_t __s1 = __p1; \
  int64x2_t __ret; \
  __ret = (int64x2_t) __builtin_neon_vrsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 35); \
  __ret; \
})
#define vrsraq_n_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  int16x8_t __s1 = __p1; \
  int16x8_t __ret; \
  __ret = (int16x8_t) __builtin_neon_vrsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 33); \
  __ret; \
})
#define vrsra_n_u8(__p0, __p1, __p2) __extension__ ({ \
  uint8x8_t __s0 = __p0; \
  uint8x8_t __s1 = __p1; \
  uint8x8_t __ret; \
  __ret = (uint8x8_t) __builtin_neon_vrsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 16); \
  __ret; \
})
#define vrsra_n_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x2_t __s0 = __p0; \
  uint32x2_t __s1 = __p1; \
  uint32x2_t __ret; \
  __ret = (uint32x2_t) __builtin_neon_vrsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 18); \
  __ret; \
})
#define vrsra_n_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64x1_t __s0 = __p0; \
  uint64x1_t __s1 = __p1; \
  uint64x1_t __ret; \
  __ret = (uint64x1_t) __builtin_neon_vrsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 19); \
  __ret; \
})
#define vrsra_n_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x4_t __s0 = __p0; \
  uint16x4_t __s1 = __p1; \
  uint16x4_t __ret; \
  __ret = (uint16x4_t) __builtin_neon_vrsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 17); \
  __ret; \
})
#define vrsra_n_s8(__p0, __p1, __p2) __extension__ ({ \
  int8x8_t __s0 = __p0; \
  int8x8_t __s1 = __p1; \
  int8x8_t __ret; \
  __ret = (int8x8_t) __builtin_neon_vrsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 0); \
  __ret; \
})
#define vrsra_n_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x2_t __s0 = __p0; \
  int32x2_t __s1 = __p1; \
  int32x2_t __ret; \
  __ret = (int32x2_t) __builtin_neon_vrsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 2); \
  __ret; \
})
#define vrsra_n_s64(__p0, __p1, __p2) __extension__ ({ \
  int64x1_t __s0 = __p0; \
  int64x1_t __s1 = __p1; \
  int64x1_t __ret; \
  __ret = (int64x1_t) __builtin_neon_vrsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 3); \
  __ret; \
})
#define vrsra_n_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x4_t __s0 = __p0; \
  int16x4_t __s1 = __p1; \
  int16x4_t __ret; \
  __ret = (int16x4_t) __builtin_neon_vrsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 1); \
  __ret; \
})
__ai uint16x4_t vrsubhn_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vrsubhn_v((int8x16_t)__p0, (int8x16_t)__p1, 17);
  return __ret;
}
__ai uint32x2_t vrsubhn_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vrsubhn_v((int8x16_t)__p0, (int8x16_t)__p1, 18);
  return __ret;
}
__ai uint8x8_t vrsubhn_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vrsubhn_v((int8x16_t)__p0, (int8x16_t)__p1, 16);
  return __ret;
}
__ai int16x4_t vrsubhn_s32(int32x4_t __p0, int32x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vrsubhn_v((int8x16_t)__p0, (int8x16_t)__p1, 1);
  return __ret;
}
__ai int32x2_t vrsubhn_s64(int64x2_t __p0, int64x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vrsubhn_v((int8x16_t)__p0, (int8x16_t)__p1, 2);
  return __ret;
}
__ai int8x8_t vrsubhn_s16(int16x8_t __p0, int16x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vrsubhn_v((int8x16_t)__p0, (int8x16_t)__p1, 0);
  return __ret;
}
#define vset_lane_p8(__p0, __p1, __p2) __extension__ ({ \
  poly8_t __s0 = __p0; \
  poly8x8_t __s1 = __p1; \
  poly8x8_t __ret; \
  __ret = (poly8x8_t) __builtin_neon_vset_lane_i8(__s0, (int8x8_t)__s1, __p2); \
  __ret; \
})
#define vset_lane_p16(__p0, __p1, __p2) __extension__ ({ \
  poly16_t __s0 = __p0; \
  poly16x4_t __s1 = __p1; \
  poly16x4_t __ret; \
  __ret = (poly16x4_t) __builtin_neon_vset_lane_i16(__s0, (int8x8_t)__s1, __p2); \
  __ret; \
})
#define vsetq_lane_p8(__p0, __p1, __p2) __extension__ ({ \
  poly8_t __s0 = __p0; \
  poly8x16_t __s1 = __p1; \
  poly8x16_t __ret; \
  __ret = (poly8x16_t) __builtin_neon_vsetq_lane_i8(__s0, (int8x16_t)__s1, __p2); \
  __ret; \
})
#define vsetq_lane_p16(__p0, __p1, __p2) __extension__ ({ \
  poly16_t __s0 = __p0; \
  poly16x8_t __s1 = __p1; \
  poly16x8_t __ret; \
  __ret = (poly16x8_t) __builtin_neon_vsetq_lane_i16(__s0, (int8x16_t)__s1, __p2); \
  __ret; \
})
#define vsetq_lane_u8(__p0, __p1, __p2) __extension__ ({ \
  uint8_t __s0 = __p0; \
  uint8x16_t __s1 = __p1; \
  uint8x16_t __ret; \
  __ret = (uint8x16_t) __builtin_neon_vsetq_lane_i8(__s0, (int8x16_t)__s1, __p2); \
  __ret; \
})
#define vsetq_lane_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32_t __s0 = __p0; \
  uint32x4_t __s1 = __p1; \
  uint32x4_t __ret; \
  __ret = (uint32x4_t) __builtin_neon_vsetq_lane_i32(__s0, (int8x16_t)__s1, __p2); \
  __ret; \
})
#define vsetq_lane_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64_t __s0 = __p0; \
  uint64x2_t __s1 = __p1; \
  uint64x2_t __ret; \
  __ret = (uint64x2_t) __builtin_neon_vsetq_lane_i64(__s0, (int8x16_t)__s1, __p2); \
  __ret; \
})
#define vsetq_lane_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16_t __s0 = __p0; \
  uint16x8_t __s1 = __p1; \
  uint16x8_t __ret; \
  __ret = (uint16x8_t) __builtin_neon_vsetq_lane_i16(__s0, (int8x16_t)__s1, __p2); \
  __ret; \
})
#define vsetq_lane_s8(__p0, __p1, __p2) __extension__ ({ \
  int8_t __s0 = __p0; \
  int8x16_t __s1 = __p1; \
  int8x16_t __ret; \
  __ret = (int8x16_t) __builtin_neon_vsetq_lane_i8(__s0, (int8x16_t)__s1, __p2); \
  __ret; \
})
#define vsetq_lane_f32(__p0, __p1, __p2) __extension__ ({ \
  float32_t __s0 = __p0; \
  float32x4_t __s1 = __p1; \
  float32x4_t __ret; \
  __ret = (float32x4_t) __builtin_neon_vsetq_lane_f32(__s0, (int8x16_t)__s1, __p2); \
  __ret; \
})
#define vsetq_lane_s32(__p0, __p1, __p2) __extension__ ({ \
  int32_t __s0 = __p0; \
  int32x4_t __s1 = __p1; \
  int32x4_t __ret; \
  __ret = (int32x4_t) __builtin_neon_vsetq_lane_i32(__s0, (int8x16_t)__s1, __p2); \
  __ret; \
})
#define vsetq_lane_s64(__p0, __p1, __p2) __extension__ ({ \
  int64_t __s0 = __p0; \
  int64x2_t __s1 = __p1; \
  int64x2_t __ret; \
  __ret = (int64x2_t) __builtin_neon_vsetq_lane_i64(__s0, (int8x16_t)__s1, __p2); \
  __ret; \
})
#define vsetq_lane_s16(__p0, __p1, __p2) __extension__ ({ \
  int16_t __s0 = __p0; \
  int16x8_t __s1 = __p1; \
  int16x8_t __ret; \
  __ret = (int16x8_t) __builtin_neon_vsetq_lane_i16(__s0, (int8x16_t)__s1, __p2); \
  __ret; \
})
#define vset_lane_u8(__p0, __p1, __p2) __extension__ ({ \
  uint8_t __s0 = __p0; \
  uint8x8_t __s1 = __p1; \
  uint8x8_t __ret; \
  __ret = (uint8x8_t) __builtin_neon_vset_lane_i8(__s0, (int8x8_t)__s1, __p2); \
  __ret; \
})
#define vset_lane_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32_t __s0 = __p0; \
  uint32x2_t __s1 = __p1; \
  uint32x2_t __ret; \
  __ret = (uint32x2_t) __builtin_neon_vset_lane_i32(__s0, (int8x8_t)__s1, __p2); \
  __ret; \
})
#define vset_lane_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64_t __s0 = __p0; \
  uint64x1_t __s1 = __p1; \
  uint64x1_t __ret; \
  __ret = (uint64x1_t) __builtin_neon_vset_lane_i64(__s0, (int8x8_t)__s1, __p2); \
  __ret; \
})
#define vset_lane_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16_t __s0 = __p0; \
  uint16x4_t __s1 = __p1; \
  uint16x4_t __ret; \
  __ret = (uint16x4_t) __builtin_neon_vset_lane_i16(__s0, (int8x8_t)__s1, __p2); \
  __ret; \
})
#define vset_lane_s8(__p0, __p1, __p2) __extension__ ({ \
  int8_t __s0 = __p0; \
  int8x8_t __s1 = __p1; \
  int8x8_t __ret; \
  __ret = (int8x8_t) __builtin_neon_vset_lane_i8(__s0, (int8x8_t)__s1, __p2); \
  __ret; \
})
#define vset_lane_f32(__p0, __p1, __p2) __extension__ ({ \
  float32_t __s0 = __p0; \
  float32x2_t __s1 = __p1; \
  float32x2_t __ret; \
  __ret = (float32x2_t) __builtin_neon_vset_lane_f32(__s0, (int8x8_t)__s1, __p2); \
  __ret; \
})
#define vset_lane_s32(__p0, __p1, __p2) __extension__ ({ \
  int32_t __s0 = __p0; \
  int32x2_t __s1 = __p1; \
  int32x2_t __ret; \
  __ret = (int32x2_t) __builtin_neon_vset_lane_i32(__s0, (int8x8_t)__s1, __p2); \
  __ret; \
})
#define vset_lane_s64(__p0, __p1, __p2) __extension__ ({ \
  int64_t __s0 = __p0; \
  int64x1_t __s1 = __p1; \
  int64x1_t __ret; \
  __ret = (int64x1_t) __builtin_neon_vset_lane_i64(__s0, (int8x8_t)__s1, __p2); \
  __ret; \
})
#define vset_lane_s16(__p0, __p1, __p2) __extension__ ({ \
  int16_t __s0 = __p0; \
  int16x4_t __s1 = __p1; \
  int16x4_t __ret; \
  __ret = (int16x4_t) __builtin_neon_vset_lane_i16(__s0, (int8x8_t)__s1, __p2); \
  __ret; \
})
__ai uint8x16_t vshlq_u8(uint8x16_t __p0, int8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
__ai uint32x4_t vshlq_u32(uint32x4_t __p0, int32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
__ai uint64x2_t vshlq_u64(uint64x2_t __p0, int64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
__ai uint16x8_t vshlq_u16(uint16x8_t __p0, int16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
__ai int8x16_t vshlq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
__ai int32x4_t vshlq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
__ai int64x2_t vshlq_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 35);
  return __ret;
}
__ai int16x8_t vshlq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vshlq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
__ai uint8x8_t vshl_u8(uint8x8_t __p0, int8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vshl_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
__ai uint32x2_t vshl_u32(uint32x2_t __p0, int32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vshl_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
__ai uint64x1_t vshl_u64(uint64x1_t __p0, int64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vshl_v((int8x8_t)__p0, (int8x8_t)__p1, 19);
  return __ret;
}
__ai uint16x4_t vshl_u16(uint16x4_t __p0, int16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vshl_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
__ai int8x8_t vshl_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vshl_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
__ai int32x2_t vshl_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vshl_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
__ai int64x1_t vshl_s64(int64x1_t __p0, int64x1_t __p1) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vshl_v((int8x8_t)__p0, (int8x8_t)__p1, 3);
  return __ret;
}
__ai int16x4_t vshl_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vshl_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
#define vshlq_n_u8(__p0, __p1) __extension__ ({ \
  uint8x16_t __s0 = __p0; \
  uint8x16_t __ret; \
  __ret = (uint8x16_t) __builtin_neon_vshlq_n_v((int8x16_t)__s0, __p1, 48); \
  __ret; \
})
#define vshlq_n_u32(__p0, __p1) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint32x4_t __ret; \
  __ret = (uint32x4_t) __builtin_neon_vshlq_n_v((int8x16_t)__s0, __p1, 50); \
  __ret; \
})
#define vshlq_n_u64(__p0, __p1) __extension__ ({ \
  uint64x2_t __s0 = __p0; \
  uint64x2_t __ret; \
  __ret = (uint64x2_t) __builtin_neon_vshlq_n_v((int8x16_t)__s0, __p1, 51); \
  __ret; \
})
#define vshlq_n_u16(__p0, __p1) __extension__ ({ \
  uint16x8_t __s0 = __p0; \
  uint16x8_t __ret; \
  __ret = (uint16x8_t) __builtin_neon_vshlq_n_v((int8x16_t)__s0, __p1, 49); \
  __ret; \
})
#define vshlq_n_s8(__p0, __p1) __extension__ ({ \
  int8x16_t __s0 = __p0; \
  int8x16_t __ret; \
  __ret = (int8x16_t) __builtin_neon_vshlq_n_v((int8x16_t)__s0, __p1, 32); \
  __ret; \
})
#define vshlq_n_s32(__p0, __p1) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int32x4_t __ret; \
  __ret = (int32x4_t) __builtin_neon_vshlq_n_v((int8x16_t)__s0, __p1, 34); \
  __ret; \
})
#define vshlq_n_s64(__p0, __p1) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int64x2_t __ret; \
  __ret = (int64x2_t) __builtin_neon_vshlq_n_v((int8x16_t)__s0, __p1, 35); \
  __ret; \
})
#define vshlq_n_s16(__p0, __p1) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  int16x8_t __ret; \
  __ret = (int16x8_t) __builtin_neon_vshlq_n_v((int8x16_t)__s0, __p1, 33); \
  __ret; \
})
#define vshl_n_u8(__p0, __p1) __extension__ ({ \
  uint8x8_t __s0 = __p0; \
  uint8x8_t __ret; \
  __ret = (uint8x8_t) __builtin_neon_vshl_n_v((int8x8_t)__s0, __p1, 16); \
  __ret; \
})
#define vshl_n_u32(__p0, __p1) __extension__ ({ \
  uint32x2_t __s0 = __p0; \
  uint32x2_t __ret; \
  __ret = (uint32x2_t) __builtin_neon_vshl_n_v((int8x8_t)__s0, __p1, 18); \
  __ret; \
})
#define vshl_n_u64(__p0, __p1) __extension__ ({ \
  uint64x1_t __s0 = __p0; \
  uint64x1_t __ret; \
  __ret = (uint64x1_t) __builtin_neon_vshl_n_v((int8x8_t)__s0, __p1, 19); \
  __ret; \
})
#define vshl_n_u16(__p0, __p1) __extension__ ({ \
  uint16x4_t __s0 = __p0; \
  uint16x4_t __ret; \
  __ret = (uint16x4_t) __builtin_neon_vshl_n_v((int8x8_t)__s0, __p1, 17); \
  __ret; \
})
#define vshl_n_s8(__p0, __p1) __extension__ ({ \
  int8x8_t __s0 = __p0; \
  int8x8_t __ret; \
  __ret = (int8x8_t) __builtin_neon_vshl_n_v((int8x8_t)__s0, __p1, 0); \
  __ret; \
})
#define vshl_n_s32(__p0, __p1) __extension__ ({ \
  int32x2_t __s0 = __p0; \
  int32x2_t __ret; \
  __ret = (int32x2_t) __builtin_neon_vshl_n_v((int8x8_t)__s0, __p1, 2); \
  __ret; \
})
#define vshl_n_s64(__p0, __p1) __extension__ ({ \
  int64x1_t __s0 = __p0; \
  int64x1_t __ret; \
  __ret = (int64x1_t) __builtin_neon_vshl_n_v((int8x8_t)__s0, __p1, 3); \
  __ret; \
})
#define vshl_n_s16(__p0, __p1) __extension__ ({ \
  int16x4_t __s0 = __p0; \
  int16x4_t __ret; \
  __ret = (int16x4_t) __builtin_neon_vshl_n_v((int8x8_t)__s0, __p1, 1); \
  __ret; \
})
#define vshll_n_u8(__p0, __p1) __extension__ ({ \
  uint8x8_t __s0 = __p0; \
  uint16x8_t __ret; \
  __ret = (uint16x8_t) __builtin_neon_vshll_n_v((int8x8_t)__s0, __p1, 49); \
  __ret; \
})
#define vshll_n_u32(__p0, __p1) __extension__ ({ \
  uint32x2_t __s0 = __p0; \
  uint64x2_t __ret; \
  __ret = (uint64x2_t) __builtin_neon_vshll_n_v((int8x8_t)__s0, __p1, 51); \
  __ret; \
})
#define vshll_n_u16(__p0, __p1) __extension__ ({ \
  uint16x4_t __s0 = __p0; \
  uint32x4_t __ret; \
  __ret = (uint32x4_t) __builtin_neon_vshll_n_v((int8x8_t)__s0, __p1, 50); \
  __ret; \
})
#define vshll_n_s8(__p0, __p1) __extension__ ({ \
  int8x8_t __s0 = __p0; \
  int16x8_t __ret; \
  __ret = (int16x8_t) __builtin_neon_vshll_n_v((int8x8_t)__s0, __p1, 33); \
  __ret; \
})
#define vshll_n_s32(__p0, __p1) __extension__ ({ \
  int32x2_t __s0 = __p0; \
  int64x2_t __ret; \
  __ret = (int64x2_t) __builtin_neon_vshll_n_v((int8x8_t)__s0, __p1, 35); \
  __ret; \
})
#define vshll_n_s16(__p0, __p1) __extension__ ({ \
  int16x4_t __s0 = __p0; \
  int32x4_t __ret; \
  __ret = (int32x4_t) __builtin_neon_vshll_n_v((int8x8_t)__s0, __p1, 34); \
  __ret; \
})
#define vshrq_n_u8(__p0, __p1) __extension__ ({ \
  uint8x16_t __s0 = __p0; \
  uint8x16_t __ret; \
  __ret = (uint8x16_t) __builtin_neon_vshrq_n_v((int8x16_t)__s0, __p1, 48); \
  __ret; \
})
#define vshrq_n_u32(__p0, __p1) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint32x4_t __ret; \
  __ret = (uint32x4_t) __builtin_neon_vshrq_n_v((int8x16_t)__s0, __p1, 50); \
  __ret; \
})
#define vshrq_n_u64(__p0, __p1) __extension__ ({ \
  uint64x2_t __s0 = __p0; \
  uint64x2_t __ret; \
  __ret = (uint64x2_t) __builtin_neon_vshrq_n_v((int8x16_t)__s0, __p1, 51); \
  __ret; \
})
#define vshrq_n_u16(__p0, __p1) __extension__ ({ \
  uint16x8_t __s0 = __p0; \
  uint16x8_t __ret; \
  __ret = (uint16x8_t) __builtin_neon_vshrq_n_v((int8x16_t)__s0, __p1, 49); \
  __ret; \
})
#define vshrq_n_s8(__p0, __p1) __extension__ ({ \
  int8x16_t __s0 = __p0; \
  int8x16_t __ret; \
  __ret = (int8x16_t) __builtin_neon_vshrq_n_v((int8x16_t)__s0, __p1, 32); \
  __ret; \
})
#define vshrq_n_s32(__p0, __p1) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int32x4_t __ret; \
  __ret = (int32x4_t) __builtin_neon_vshrq_n_v((int8x16_t)__s0, __p1, 34); \
  __ret; \
})
#define vshrq_n_s64(__p0, __p1) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int64x2_t __ret; \
  __ret = (int64x2_t) __builtin_neon_vshrq_n_v((int8x16_t)__s0, __p1, 35); \
  __ret; \
})
#define vshrq_n_s16(__p0, __p1) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  int16x8_t __ret; \
  __ret = (int16x8_t) __builtin_neon_vshrq_n_v((int8x16_t)__s0, __p1, 33); \
  __ret; \
})
#define vshr_n_u8(__p0, __p1) __extension__ ({ \
  uint8x8_t __s0 = __p0; \
  uint8x8_t __ret; \
  __ret = (uint8x8_t) __builtin_neon_vshr_n_v((int8x8_t)__s0, __p1, 16); \
  __ret; \
})
#define vshr_n_u32(__p0, __p1) __extension__ ({ \
  uint32x2_t __s0 = __p0; \
  uint32x2_t __ret; \
  __ret = (uint32x2_t) __builtin_neon_vshr_n_v((int8x8_t)__s0, __p1, 18); \
  __ret; \
})
#define vshr_n_u64(__p0, __p1) __extension__ ({ \
  uint64x1_t __s0 = __p0; \
  uint64x1_t __ret; \
  __ret = (uint64x1_t) __builtin_neon_vshr_n_v((int8x8_t)__s0, __p1, 19); \
  __ret; \
})
#define vshr_n_u16(__p0, __p1) __extension__ ({ \
  uint16x4_t __s0 = __p0; \
  uint16x4_t __ret; \
  __ret = (uint16x4_t) __builtin_neon_vshr_n_v((int8x8_t)__s0, __p1, 17); \
  __ret; \
})
#define vshr_n_s8(__p0, __p1) __extension__ ({ \
  int8x8_t __s0 = __p0; \
  int8x8_t __ret; \
  __ret = (int8x8_t) __builtin_neon_vshr_n_v((int8x8_t)__s0, __p1, 0); \
  __ret; \
})
#define vshr_n_s32(__p0, __p1) __extension__ ({ \
  int32x2_t __s0 = __p0; \
  int32x2_t __ret; \
  __ret = (int32x2_t) __builtin_neon_vshr_n_v((int8x8_t)__s0, __p1, 2); \
  __ret; \
})
#define vshr_n_s64(__p0, __p1) __extension__ ({ \
  int64x1_t __s0 = __p0; \
  int64x1_t __ret; \
  __ret = (int64x1_t) __builtin_neon_vshr_n_v((int8x8_t)__s0, __p1, 3); \
  __ret; \
})
#define vshr_n_s16(__p0, __p1) __extension__ ({ \
  int16x4_t __s0 = __p0; \
  int16x4_t __ret; \
  __ret = (int16x4_t) __builtin_neon_vshr_n_v((int8x8_t)__s0, __p1, 1); \
  __ret; \
})
#define vshrn_n_u32(__p0, __p1) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint16x4_t __ret; \
  __ret = (uint16x4_t) __builtin_neon_vshrn_n_v((int8x16_t)__s0, __p1, 17); \
  __ret; \
})
#define vshrn_n_u64(__p0, __p1) __extension__ ({ \
  uint64x2_t __s0 = __p0; \
  uint32x2_t __ret; \
  __ret = (uint32x2_t) __builtin_neon_vshrn_n_v((int8x16_t)__s0, __p1, 18); \
  __ret; \
})
#define vshrn_n_u16(__p0, __p1) __extension__ ({ \
  uint16x8_t __s0 = __p0; \
  uint8x8_t __ret; \
  __ret = (uint8x8_t) __builtin_neon_vshrn_n_v((int8x16_t)__s0, __p1, 16); \
  __ret; \
})
#define vshrn_n_s32(__p0, __p1) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int16x4_t __ret; \
  __ret = (int16x4_t) __builtin_neon_vshrn_n_v((int8x16_t)__s0, __p1, 1); \
  __ret; \
})
#define vshrn_n_s64(__p0, __p1) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int32x2_t __ret; \
  __ret = (int32x2_t) __builtin_neon_vshrn_n_v((int8x16_t)__s0, __p1, 2); \
  __ret; \
})
#define vshrn_n_s16(__p0, __p1) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  int8x8_t __ret; \
  __ret = (int8x8_t) __builtin_neon_vshrn_n_v((int8x16_t)__s0, __p1, 0); \
  __ret; \
})
#define vsli_n_p8(__p0, __p1, __p2) __extension__ ({ \
  poly8x8_t __s0 = __p0; \
  poly8x8_t __s1 = __p1; \
  poly8x8_t __ret; \
  __ret = (poly8x8_t) __builtin_neon_vsli_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 4); \
  __ret; \
})
#define vsli_n_p16(__p0, __p1, __p2) __extension__ ({ \
  poly16x4_t __s0 = __p0; \
  poly16x4_t __s1 = __p1; \
  poly16x4_t __ret; \
  __ret = (poly16x4_t) __builtin_neon_vsli_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 5); \
  __ret; \
})
#define vsliq_n_p8(__p0, __p1, __p2) __extension__ ({ \
  poly8x16_t __s0 = __p0; \
  poly8x16_t __s1 = __p1; \
  poly8x16_t __ret; \
  __ret = (poly8x16_t) __builtin_neon_vsliq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 36); \
  __ret; \
})
#define vsliq_n_p16(__p0, __p1, __p2) __extension__ ({ \
  poly16x8_t __s0 = __p0; \
  poly16x8_t __s1 = __p1; \
  poly16x8_t __ret; \
  __ret = (poly16x8_t) __builtin_neon_vsliq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 37); \
  __ret; \
})
#define vsliq_n_u8(__p0, __p1, __p2) __extension__ ({ \
  uint8x16_t __s0 = __p0; \
  uint8x16_t __s1 = __p1; \
  uint8x16_t __ret; \
  __ret = (uint8x16_t) __builtin_neon_vsliq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 48); \
  __ret; \
})
#define vsliq_n_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint32x4_t __s1 = __p1; \
  uint32x4_t __ret; \
  __ret = (uint32x4_t) __builtin_neon_vsliq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 50); \
  __ret; \
})
#define vsliq_n_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64x2_t __s0 = __p0; \
  uint64x2_t __s1 = __p1; \
  uint64x2_t __ret; \
  __ret = (uint64x2_t) __builtin_neon_vsliq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 51); \
  __ret; \
})
#define vsliq_n_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x8_t __s0 = __p0; \
  uint16x8_t __s1 = __p1; \
  uint16x8_t __ret; \
  __ret = (uint16x8_t) __builtin_neon_vsliq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 49); \
  __ret; \
})
#define vsliq_n_s8(__p0, __p1, __p2) __extension__ ({ \
  int8x16_t __s0 = __p0; \
  int8x16_t __s1 = __p1; \
  int8x16_t __ret; \
  __ret = (int8x16_t) __builtin_neon_vsliq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 32); \
  __ret; \
})
#define vsliq_n_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int32x4_t __s1 = __p1; \
  int32x4_t __ret; \
  __ret = (int32x4_t) __builtin_neon_vsliq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 34); \
  __ret; \
})
#define vsliq_n_s64(__p0, __p1, __p2) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int64x2_t __s1 = __p1; \
  int64x2_t __ret; \
  __ret = (int64x2_t) __builtin_neon_vsliq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 35); \
  __ret; \
})
#define vsliq_n_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  int16x8_t __s1 = __p1; \
  int16x8_t __ret; \
  __ret = (int16x8_t) __builtin_neon_vsliq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 33); \
  __ret; \
})
#define vsli_n_u8(__p0, __p1, __p2) __extension__ ({ \
  uint8x8_t __s0 = __p0; \
  uint8x8_t __s1 = __p1; \
  uint8x8_t __ret; \
  __ret = (uint8x8_t) __builtin_neon_vsli_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 16); \
  __ret; \
})
#define vsli_n_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x2_t __s0 = __p0; \
  uint32x2_t __s1 = __p1; \
  uint32x2_t __ret; \
  __ret = (uint32x2_t) __builtin_neon_vsli_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 18); \
  __ret; \
})
#define vsli_n_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64x1_t __s0 = __p0; \
  uint64x1_t __s1 = __p1; \
  uint64x1_t __ret; \
  __ret = (uint64x1_t) __builtin_neon_vsli_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 19); \
  __ret; \
})
#define vsli_n_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x4_t __s0 = __p0; \
  uint16x4_t __s1 = __p1; \
  uint16x4_t __ret; \
  __ret = (uint16x4_t) __builtin_neon_vsli_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 17); \
  __ret; \
})
#define vsli_n_s8(__p0, __p1, __p2) __extension__ ({ \
  int8x8_t __s0 = __p0; \
  int8x8_t __s1 = __p1; \
  int8x8_t __ret; \
  __ret = (int8x8_t) __builtin_neon_vsli_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 0); \
  __ret; \
})
#define vsli_n_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x2_t __s0 = __p0; \
  int32x2_t __s1 = __p1; \
  int32x2_t __ret; \
  __ret = (int32x2_t) __builtin_neon_vsli_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 2); \
  __ret; \
})
#define vsli_n_s64(__p0, __p1, __p2) __extension__ ({ \
  int64x1_t __s0 = __p0; \
  int64x1_t __s1 = __p1; \
  int64x1_t __ret; \
  __ret = (int64x1_t) __builtin_neon_vsli_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 3); \
  __ret; \
})
#define vsli_n_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x4_t __s0 = __p0; \
  int16x4_t __s1 = __p1; \
  int16x4_t __ret; \
  __ret = (int16x4_t) __builtin_neon_vsli_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 1); \
  __ret; \
})
#define vsraq_n_u8(__p0, __p1, __p2) __extension__ ({ \
  uint8x16_t __s0 = __p0; \
  uint8x16_t __s1 = __p1; \
  uint8x16_t __ret; \
  __ret = (uint8x16_t) __builtin_neon_vsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 48); \
  __ret; \
})
#define vsraq_n_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint32x4_t __s1 = __p1; \
  uint32x4_t __ret; \
  __ret = (uint32x4_t) __builtin_neon_vsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 50); \
  __ret; \
})
#define vsraq_n_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64x2_t __s0 = __p0; \
  uint64x2_t __s1 = __p1; \
  uint64x2_t __ret; \
  __ret = (uint64x2_t) __builtin_neon_vsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 51); \
  __ret; \
})
#define vsraq_n_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x8_t __s0 = __p0; \
  uint16x8_t __s1 = __p1; \
  uint16x8_t __ret; \
  __ret = (uint16x8_t) __builtin_neon_vsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 49); \
  __ret; \
})
#define vsraq_n_s8(__p0, __p1, __p2) __extension__ ({ \
  int8x16_t __s0 = __p0; \
  int8x16_t __s1 = __p1; \
  int8x16_t __ret; \
  __ret = (int8x16_t) __builtin_neon_vsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 32); \
  __ret; \
})
#define vsraq_n_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int32x4_t __s1 = __p1; \
  int32x4_t __ret; \
  __ret = (int32x4_t) __builtin_neon_vsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 34); \
  __ret; \
})
#define vsraq_n_s64(__p0, __p1, __p2) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int64x2_t __s1 = __p1; \
  int64x2_t __ret; \
  __ret = (int64x2_t) __builtin_neon_vsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 35); \
  __ret; \
})
#define vsraq_n_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  int16x8_t __s1 = __p1; \
  int16x8_t __ret; \
  __ret = (int16x8_t) __builtin_neon_vsraq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 33); \
  __ret; \
})
#define vsra_n_u8(__p0, __p1, __p2) __extension__ ({ \
  uint8x8_t __s0 = __p0; \
  uint8x8_t __s1 = __p1; \
  uint8x8_t __ret; \
  __ret = (uint8x8_t) __builtin_neon_vsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 16); \
  __ret; \
})
#define vsra_n_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x2_t __s0 = __p0; \
  uint32x2_t __s1 = __p1; \
  uint32x2_t __ret; \
  __ret = (uint32x2_t) __builtin_neon_vsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 18); \
  __ret; \
})
#define vsra_n_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64x1_t __s0 = __p0; \
  uint64x1_t __s1 = __p1; \
  uint64x1_t __ret; \
  __ret = (uint64x1_t) __builtin_neon_vsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 19); \
  __ret; \
})
#define vsra_n_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x4_t __s0 = __p0; \
  uint16x4_t __s1 = __p1; \
  uint16x4_t __ret; \
  __ret = (uint16x4_t) __builtin_neon_vsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 17); \
  __ret; \
})
#define vsra_n_s8(__p0, __p1, __p2) __extension__ ({ \
  int8x8_t __s0 = __p0; \
  int8x8_t __s1 = __p1; \
  int8x8_t __ret; \
  __ret = (int8x8_t) __builtin_neon_vsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 0); \
  __ret; \
})
#define vsra_n_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x2_t __s0 = __p0; \
  int32x2_t __s1 = __p1; \
  int32x2_t __ret; \
  __ret = (int32x2_t) __builtin_neon_vsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 2); \
  __ret; \
})
#define vsra_n_s64(__p0, __p1, __p2) __extension__ ({ \
  int64x1_t __s0 = __p0; \
  int64x1_t __s1 = __p1; \
  int64x1_t __ret; \
  __ret = (int64x1_t) __builtin_neon_vsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 3); \
  __ret; \
})
#define vsra_n_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x4_t __s0 = __p0; \
  int16x4_t __s1 = __p1; \
  int16x4_t __ret; \
  __ret = (int16x4_t) __builtin_neon_vsra_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 1); \
  __ret; \
})
#define vsri_n_p8(__p0, __p1, __p2) __extension__ ({ \
  poly8x8_t __s0 = __p0; \
  poly8x8_t __s1 = __p1; \
  poly8x8_t __ret; \
  __ret = (poly8x8_t) __builtin_neon_vsri_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 4); \
  __ret; \
})
#define vsri_n_p16(__p0, __p1, __p2) __extension__ ({ \
  poly16x4_t __s0 = __p0; \
  poly16x4_t __s1 = __p1; \
  poly16x4_t __ret; \
  __ret = (poly16x4_t) __builtin_neon_vsri_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 5); \
  __ret; \
})
#define vsriq_n_p8(__p0, __p1, __p2) __extension__ ({ \
  poly8x16_t __s0 = __p0; \
  poly8x16_t __s1 = __p1; \
  poly8x16_t __ret; \
  __ret = (poly8x16_t) __builtin_neon_vsriq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 36); \
  __ret; \
})
#define vsriq_n_p16(__p0, __p1, __p2) __extension__ ({ \
  poly16x8_t __s0 = __p0; \
  poly16x8_t __s1 = __p1; \
  poly16x8_t __ret; \
  __ret = (poly16x8_t) __builtin_neon_vsriq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 37); \
  __ret; \
})
#define vsriq_n_u8(__p0, __p1, __p2) __extension__ ({ \
  uint8x16_t __s0 = __p0; \
  uint8x16_t __s1 = __p1; \
  uint8x16_t __ret; \
  __ret = (uint8x16_t) __builtin_neon_vsriq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 48); \
  __ret; \
})
#define vsriq_n_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint32x4_t __s1 = __p1; \
  uint32x4_t __ret; \
  __ret = (uint32x4_t) __builtin_neon_vsriq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 50); \
  __ret; \
})
#define vsriq_n_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64x2_t __s0 = __p0; \
  uint64x2_t __s1 = __p1; \
  uint64x2_t __ret; \
  __ret = (uint64x2_t) __builtin_neon_vsriq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 51); \
  __ret; \
})
#define vsriq_n_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x8_t __s0 = __p0; \
  uint16x8_t __s1 = __p1; \
  uint16x8_t __ret; \
  __ret = (uint16x8_t) __builtin_neon_vsriq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 49); \
  __ret; \
})
#define vsriq_n_s8(__p0, __p1, __p2) __extension__ ({ \
  int8x16_t __s0 = __p0; \
  int8x16_t __s1 = __p1; \
  int8x16_t __ret; \
  __ret = (int8x16_t) __builtin_neon_vsriq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 32); \
  __ret; \
})
#define vsriq_n_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int32x4_t __s1 = __p1; \
  int32x4_t __ret; \
  __ret = (int32x4_t) __builtin_neon_vsriq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 34); \
  __ret; \
})
#define vsriq_n_s64(__p0, __p1, __p2) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int64x2_t __s1 = __p1; \
  int64x2_t __ret; \
  __ret = (int64x2_t) __builtin_neon_vsriq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 35); \
  __ret; \
})
#define vsriq_n_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  int16x8_t __s1 = __p1; \
  int16x8_t __ret; \
  __ret = (int16x8_t) __builtin_neon_vsriq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 33); \
  __ret; \
})
#define vsri_n_u8(__p0, __p1, __p2) __extension__ ({ \
  uint8x8_t __s0 = __p0; \
  uint8x8_t __s1 = __p1; \
  uint8x8_t __ret; \
  __ret = (uint8x8_t) __builtin_neon_vsri_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 16); \
  __ret; \
})
#define vsri_n_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x2_t __s0 = __p0; \
  uint32x2_t __s1 = __p1; \
  uint32x2_t __ret; \
  __ret = (uint32x2_t) __builtin_neon_vsri_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 18); \
  __ret; \
})
#define vsri_n_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64x1_t __s0 = __p0; \
  uint64x1_t __s1 = __p1; \
  uint64x1_t __ret; \
  __ret = (uint64x1_t) __builtin_neon_vsri_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 19); \
  __ret; \
})
#define vsri_n_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x4_t __s0 = __p0; \
  uint16x4_t __s1 = __p1; \
  uint16x4_t __ret; \
  __ret = (uint16x4_t) __builtin_neon_vsri_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 17); \
  __ret; \
})
#define vsri_n_s8(__p0, __p1, __p2) __extension__ ({ \
  int8x8_t __s0 = __p0; \
  int8x8_t __s1 = __p1; \
  int8x8_t __ret; \
  __ret = (int8x8_t) __builtin_neon_vsri_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 0); \
  __ret; \
})
#define vsri_n_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x2_t __s0 = __p0; \
  int32x2_t __s1 = __p1; \
  int32x2_t __ret; \
  __ret = (int32x2_t) __builtin_neon_vsri_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 2); \
  __ret; \
})
#define vsri_n_s64(__p0, __p1, __p2) __extension__ ({ \
  int64x1_t __s0 = __p0; \
  int64x1_t __s1 = __p1; \
  int64x1_t __ret; \
  __ret = (int64x1_t) __builtin_neon_vsri_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 3); \
  __ret; \
})
#define vsri_n_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x4_t __s0 = __p0; \
  int16x4_t __s1 = __p1; \
  int16x4_t __ret; \
  __ret = (int16x4_t) __builtin_neon_vsri_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 1); \
  __ret; \
})
#define vst1_p8(__p0, __p1) __extension__ ({ \
  poly8x8_t __s1 = __p1; \
  __builtin_neon_vst1_v(__p0, (int8x8_t)__s1, 4); \
})
#define vst1_p16(__p0, __p1) __extension__ ({ \
  poly16x4_t __s1 = __p1; \
  __builtin_neon_vst1_v(__p0, (int8x8_t)__s1, 5); \
})
#define vst1q_p8(__p0, __p1) __extension__ ({ \
  poly8x16_t __s1 = __p1; \
  __builtin_neon_vst1q_v(__p0, (int8x16_t)__s1, 36); \
})
#define vst1q_p16(__p0, __p1) __extension__ ({ \
  poly16x8_t __s1 = __p1; \
  __builtin_neon_vst1q_v(__p0, (int8x16_t)__s1, 37); \
})
#define vst1q_u8(__p0, __p1) __extension__ ({ \
  uint8x16_t __s1 = __p1; \
  __builtin_neon_vst1q_v(__p0, (int8x16_t)__s1, 48); \
})
#define vst1q_u32(__p0, __p1) __extension__ ({ \
  uint32x4_t __s1 = __p1; \
  __builtin_neon_vst1q_v(__p0, (int8x16_t)__s1, 50); \
})
#define vst1q_u64(__p0, __p1) __extension__ ({ \
  uint64x2_t __s1 = __p1; \
  __builtin_neon_vst1q_v(__p0, (int8x16_t)__s1, 51); \
})
#define vst1q_u16(__p0, __p1) __extension__ ({ \
  uint16x8_t __s1 = __p1; \
  __builtin_neon_vst1q_v(__p0, (int8x16_t)__s1, 49); \
})
#define vst1q_s8(__p0, __p1) __extension__ ({ \
  int8x16_t __s1 = __p1; \
  __builtin_neon_vst1q_v(__p0, (int8x16_t)__s1, 32); \
})
#define vst1q_f32(__p0, __p1) __extension__ ({ \
  float32x4_t __s1 = __p1; \
  __builtin_neon_vst1q_v(__p0, (int8x16_t)__s1, 41); \
})
#define vst1q_f16(__p0, __p1) __extension__ ({ \
  float16x8_t __s1 = __p1; \
  __builtin_neon_vst1q_v(__p0, (int8x16_t)__s1, 40); \
})
#define vst1q_s32(__p0, __p1) __extension__ ({ \
  int32x4_t __s1 = __p1; \
  __builtin_neon_vst1q_v(__p0, (int8x16_t)__s1, 34); \
})
#define vst1q_s64(__p0, __p1) __extension__ ({ \
  int64x2_t __s1 = __p1; \
  __builtin_neon_vst1q_v(__p0, (int8x16_t)__s1, 35); \
})
#define vst1q_s16(__p0, __p1) __extension__ ({ \
  int16x8_t __s1 = __p1; \
  __builtin_neon_vst1q_v(__p0, (int8x16_t)__s1, 33); \
})
#define vst1_u8(__p0, __p1) __extension__ ({ \
  uint8x8_t __s1 = __p1; \
  __builtin_neon_vst1_v(__p0, (int8x8_t)__s1, 16); \
})
#define vst1_u32(__p0, __p1) __extension__ ({ \
  uint32x2_t __s1 = __p1; \
  __builtin_neon_vst1_v(__p0, (int8x8_t)__s1, 18); \
})
#define vst1_u64(__p0, __p1) __extension__ ({ \
  uint64x1_t __s1 = __p1; \
  __builtin_neon_vst1_v(__p0, (int8x8_t)__s1, 19); \
})
#define vst1_u16(__p0, __p1) __extension__ ({ \
  uint16x4_t __s1 = __p1; \
  __builtin_neon_vst1_v(__p0, (int8x8_t)__s1, 17); \
})
#define vst1_s8(__p0, __p1) __extension__ ({ \
  int8x8_t __s1 = __p1; \
  __builtin_neon_vst1_v(__p0, (int8x8_t)__s1, 0); \
})
#define vst1_f32(__p0, __p1) __extension__ ({ \
  float32x2_t __s1 = __p1; \
  __builtin_neon_vst1_v(__p0, (int8x8_t)__s1, 9); \
})
#define vst1_f16(__p0, __p1) __extension__ ({ \
  float16x4_t __s1 = __p1; \
  __builtin_neon_vst1_v(__p0, (int8x8_t)__s1, 8); \
})
#define vst1_s32(__p0, __p1) __extension__ ({ \
  int32x2_t __s1 = __p1; \
  __builtin_neon_vst1_v(__p0, (int8x8_t)__s1, 2); \
})
#define vst1_s64(__p0, __p1) __extension__ ({ \
  int64x1_t __s1 = __p1; \
  __builtin_neon_vst1_v(__p0, (int8x8_t)__s1, 3); \
})
#define vst1_s16(__p0, __p1) __extension__ ({ \
  int16x4_t __s1 = __p1; \
  __builtin_neon_vst1_v(__p0, (int8x8_t)__s1, 1); \
})
#define vst1_lane_p8(__p0, __p1, __p2) __extension__ ({ \
  poly8x8_t __s1 = __p1; \
  __builtin_neon_vst1_lane_v(__p0, (int8x8_t)__s1, __p2, 4); \
})
#define vst1_lane_p16(__p0, __p1, __p2) __extension__ ({ \
  poly16x4_t __s1 = __p1; \
  __builtin_neon_vst1_lane_v(__p0, (int8x8_t)__s1, __p2, 5); \
})
#define vst1q_lane_p8(__p0, __p1, __p2) __extension__ ({ \
  poly8x16_t __s1 = __p1; \
  __builtin_neon_vst1q_lane_v(__p0, (int8x16_t)__s1, __p2, 36); \
})
#define vst1q_lane_p16(__p0, __p1, __p2) __extension__ ({ \
  poly16x8_t __s1 = __p1; \
  __builtin_neon_vst1q_lane_v(__p0, (int8x16_t)__s1, __p2, 37); \
})
#define vst1q_lane_u8(__p0, __p1, __p2) __extension__ ({ \
  uint8x16_t __s1 = __p1; \
  __builtin_neon_vst1q_lane_v(__p0, (int8x16_t)__s1, __p2, 48); \
})
#define vst1q_lane_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x4_t __s1 = __p1; \
  __builtin_neon_vst1q_lane_v(__p0, (int8x16_t)__s1, __p2, 50); \
})
#define vst1q_lane_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64x2_t __s1 = __p1; \
  __builtin_neon_vst1q_lane_v(__p0, (int8x16_t)__s1, __p2, 51); \
})
#define vst1q_lane_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x8_t __s1 = __p1; \
  __builtin_neon_vst1q_lane_v(__p0, (int8x16_t)__s1, __p2, 49); \
})
#define vst1q_lane_s8(__p0, __p1, __p2) __extension__ ({ \
  int8x16_t __s1 = __p1; \
  __builtin_neon_vst1q_lane_v(__p0, (int8x16_t)__s1, __p2, 32); \
})
#define vst1q_lane_f32(__p0, __p1, __p2) __extension__ ({ \
  float32x4_t __s1 = __p1; \
  __builtin_neon_vst1q_lane_v(__p0, (int8x16_t)__s1, __p2, 41); \
})
#define vst1q_lane_f16(__p0, __p1, __p2) __extension__ ({ \
  float16x8_t __s1 = __p1; \
  __builtin_neon_vst1q_lane_v(__p0, (int8x16_t)__s1, __p2, 40); \
})
#define vst1q_lane_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x4_t __s1 = __p1; \
  __builtin_neon_vst1q_lane_v(__p0, (int8x16_t)__s1, __p2, 34); \
})
#define vst1q_lane_s64(__p0, __p1, __p2) __extension__ ({ \
  int64x2_t __s1 = __p1; \
  __builtin_neon_vst1q_lane_v(__p0, (int8x16_t)__s1, __p2, 35); \
})
#define vst1q_lane_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x8_t __s1 = __p1; \
  __builtin_neon_vst1q_lane_v(__p0, (int8x16_t)__s1, __p2, 33); \
})
#define vst1_lane_u8(__p0, __p1, __p2) __extension__ ({ \
  uint8x8_t __s1 = __p1; \
  __builtin_neon_vst1_lane_v(__p0, (int8x8_t)__s1, __p2, 16); \
})
#define vst1_lane_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x2_t __s1 = __p1; \
  __builtin_neon_vst1_lane_v(__p0, (int8x8_t)__s1, __p2, 18); \
})
#define vst1_lane_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64x1_t __s1 = __p1; \
  __builtin_neon_vst1_lane_v(__p0, (int8x8_t)__s1, __p2, 19); \
})
#define vst1_lane_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x4_t __s1 = __p1; \
  __builtin_neon_vst1_lane_v(__p0, (int8x8_t)__s1, __p2, 17); \
})
#define vst1_lane_s8(__p0, __p1, __p2) __extension__ ({ \
  int8x8_t __s1 = __p1; \
  __builtin_neon_vst1_lane_v(__p0, (int8x8_t)__s1, __p2, 0); \
})
#define vst1_lane_f32(__p0, __p1, __p2) __extension__ ({ \
  float32x2_t __s1 = __p1; \
  __builtin_neon_vst1_lane_v(__p0, (int8x8_t)__s1, __p2, 9); \
})
#define vst1_lane_f16(__p0, __p1, __p2) __extension__ ({ \
  float16x4_t __s1 = __p1; \
  __builtin_neon_vst1_lane_v(__p0, (int8x8_t)__s1, __p2, 8); \
})
#define vst1_lane_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x2_t __s1 = __p1; \
  __builtin_neon_vst1_lane_v(__p0, (int8x8_t)__s1, __p2, 2); \
})
#define vst1_lane_s64(__p0, __p1, __p2) __extension__ ({ \
  int64x1_t __s1 = __p1; \
  __builtin_neon_vst1_lane_v(__p0, (int8x8_t)__s1, __p2, 3); \
})
#define vst1_lane_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x4_t __s1 = __p1; \
  __builtin_neon_vst1_lane_v(__p0, (int8x8_t)__s1, __p2, 1); \
})
#define vst2_p8(__p0, __p1) __extension__ ({ \
  poly8x8x2_t __s1 = __p1; \
  __builtin_neon_vst2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 4); \
})
#define vst2_p16(__p0, __p1) __extension__ ({ \
  poly16x4x2_t __s1 = __p1; \
  __builtin_neon_vst2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 5); \
})
#define vst2q_p8(__p0, __p1) __extension__ ({ \
  poly8x16x2_t __s1 = __p1; \
  __builtin_neon_vst2q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 36); \
})
#define vst2q_p16(__p0, __p1) __extension__ ({ \
  poly16x8x2_t __s1 = __p1; \
  __builtin_neon_vst2q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 37); \
})
#define vst2q_u8(__p0, __p1) __extension__ ({ \
  uint8x16x2_t __s1 = __p1; \
  __builtin_neon_vst2q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 48); \
})
#define vst2q_u32(__p0, __p1) __extension__ ({ \
  uint32x4x2_t __s1 = __p1; \
  __builtin_neon_vst2q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 50); \
})
#define vst2q_u16(__p0, __p1) __extension__ ({ \
  uint16x8x2_t __s1 = __p1; \
  __builtin_neon_vst2q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 49); \
})
#define vst2q_s8(__p0, __p1) __extension__ ({ \
  int8x16x2_t __s1 = __p1; \
  __builtin_neon_vst2q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 32); \
})
#define vst2q_f32(__p0, __p1) __extension__ ({ \
  float32x4x2_t __s1 = __p1; \
  __builtin_neon_vst2q_v(__p0, __s1.val[0], __s1.val[1], 41); \
})
#define vst2q_f16(__p0, __p1) __extension__ ({ \
  float16x8x2_t __s1 = __p1; \
  __builtin_neon_vst2q_v(__p0, __s1.val[0], __s1.val[1], 40); \
})
#define vst2q_s32(__p0, __p1) __extension__ ({ \
  int32x4x2_t __s1 = __p1; \
  __builtin_neon_vst2q_v(__p0, __s1.val[0], __s1.val[1], 34); \
})
#define vst2q_s16(__p0, __p1) __extension__ ({ \
  int16x8x2_t __s1 = __p1; \
  __builtin_neon_vst2q_v(__p0, __s1.val[0], __s1.val[1], 33); \
})
#define vst2_u8(__p0, __p1) __extension__ ({ \
  uint8x8x2_t __s1 = __p1; \
  __builtin_neon_vst2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 16); \
})
#define vst2_u32(__p0, __p1) __extension__ ({ \
  uint32x2x2_t __s1 = __p1; \
  __builtin_neon_vst2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 18); \
})
#define vst2_u64(__p0, __p1) __extension__ ({ \
  uint64x1x2_t __s1 = __p1; \
  __builtin_neon_vst2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 19); \
})
#define vst2_u16(__p0, __p1) __extension__ ({ \
  uint16x4x2_t __s1 = __p1; \
  __builtin_neon_vst2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 17); \
})
#define vst2_s8(__p0, __p1) __extension__ ({ \
  int8x8x2_t __s1 = __p1; \
  __builtin_neon_vst2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 0); \
})
#define vst2_f32(__p0, __p1) __extension__ ({ \
  float32x2x2_t __s1 = __p1; \
  __builtin_neon_vst2_v(__p0, __s1.val[0], __s1.val[1], 9); \
})
#define vst2_f16(__p0, __p1) __extension__ ({ \
  float16x4x2_t __s1 = __p1; \
  __builtin_neon_vst2_v(__p0, __s1.val[0], __s1.val[1], 8); \
})
#define vst2_s32(__p0, __p1) __extension__ ({ \
  int32x2x2_t __s1 = __p1; \
  __builtin_neon_vst2_v(__p0, __s1.val[0], __s1.val[1], 2); \
})
#define vst2_s64(__p0, __p1) __extension__ ({ \
  int64x1x2_t __s1 = __p1; \
  __builtin_neon_vst2_v(__p0, __s1.val[0], __s1.val[1], 3); \
})
#define vst2_s16(__p0, __p1) __extension__ ({ \
  int16x4x2_t __s1 = __p1; \
  __builtin_neon_vst2_v(__p0, __s1.val[0], __s1.val[1], 1); \
})
#define vst2_lane_p8(__p0, __p1, __p2) __extension__ ({ \
  poly8x8x2_t __s1 = __p1; \
  __builtin_neon_vst2_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 4); \
})
#define vst2_lane_p16(__p0, __p1, __p2) __extension__ ({ \
  poly16x4x2_t __s1 = __p1; \
  __builtin_neon_vst2_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 5); \
})
#define vst2q_lane_p16(__p0, __p1, __p2) __extension__ ({ \
  poly16x8x2_t __s1 = __p1; \
  __builtin_neon_vst2q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 37); \
})
#define vst2q_lane_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x4x2_t __s1 = __p1; \
  __builtin_neon_vst2q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 50); \
})
#define vst2q_lane_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x8x2_t __s1 = __p1; \
  __builtin_neon_vst2q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 49); \
})
#define vst2q_lane_f32(__p0, __p1, __p2) __extension__ ({ \
  float32x4x2_t __s1 = __p1; \
  __builtin_neon_vst2q_lane_v(__p0, __s1.val[0], __s1.val[1], __p2, 41); \
})
#define vst2q_lane_f16(__p0, __p1, __p2) __extension__ ({ \
  float16x8x2_t __s1 = __p1; \
  __builtin_neon_vst2q_lane_v(__p0, __s1.val[0], __s1.val[1], __p2, 40); \
})
#define vst2q_lane_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x4x2_t __s1 = __p1; \
  __builtin_neon_vst2q_lane_v(__p0, __s1.val[0], __s1.val[1], __p2, 34); \
})
#define vst2q_lane_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x8x2_t __s1 = __p1; \
  __builtin_neon_vst2q_lane_v(__p0, __s1.val[0], __s1.val[1], __p2, 33); \
})
#define vst2_lane_u8(__p0, __p1, __p2) __extension__ ({ \
  uint8x8x2_t __s1 = __p1; \
  __builtin_neon_vst2_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 16); \
})
#define vst2_lane_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x2x2_t __s1 = __p1; \
  __builtin_neon_vst2_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 18); \
})
#define vst2_lane_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x4x2_t __s1 = __p1; \
  __builtin_neon_vst2_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 17); \
})
#define vst2_lane_s8(__p0, __p1, __p2) __extension__ ({ \
  int8x8x2_t __s1 = __p1; \
  __builtin_neon_vst2_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 0); \
})
#define vst2_lane_f32(__p0, __p1, __p2) __extension__ ({ \
  float32x2x2_t __s1 = __p1; \
  __builtin_neon_vst2_lane_v(__p0, __s1.val[0], __s1.val[1], __p2, 9); \
})
#define vst2_lane_f16(__p0, __p1, __p2) __extension__ ({ \
  float16x4x2_t __s1 = __p1; \
  __builtin_neon_vst2_lane_v(__p0, __s1.val[0], __s1.val[1], __p2, 8); \
})
#define vst2_lane_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x2x2_t __s1 = __p1; \
  __builtin_neon_vst2_lane_v(__p0, __s1.val[0], __s1.val[1], __p2, 2); \
})
#define vst2_lane_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x4x2_t __s1 = __p1; \
  __builtin_neon_vst2_lane_v(__p0, __s1.val[0], __s1.val[1], __p2, 1); \
})
#define vst3_p8(__p0, __p1) __extension__ ({ \
  poly8x8x3_t __s1 = __p1; \
  __builtin_neon_vst3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 4); \
})
#define vst3_p16(__p0, __p1) __extension__ ({ \
  poly16x4x3_t __s1 = __p1; \
  __builtin_neon_vst3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 5); \
})
#define vst3q_p8(__p0, __p1) __extension__ ({ \
  poly8x16x3_t __s1 = __p1; \
  __builtin_neon_vst3q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 36); \
})
#define vst3q_p16(__p0, __p1) __extension__ ({ \
  poly16x8x3_t __s1 = __p1; \
  __builtin_neon_vst3q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 37); \
})
#define vst3q_u8(__p0, __p1) __extension__ ({ \
  uint8x16x3_t __s1 = __p1; \
  __builtin_neon_vst3q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 48); \
})
#define vst3q_u32(__p0, __p1) __extension__ ({ \
  uint32x4x3_t __s1 = __p1; \
  __builtin_neon_vst3q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 50); \
})
#define vst3q_u16(__p0, __p1) __extension__ ({ \
  uint16x8x3_t __s1 = __p1; \
  __builtin_neon_vst3q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 49); \
})
#define vst3q_s8(__p0, __p1) __extension__ ({ \
  int8x16x3_t __s1 = __p1; \
  __builtin_neon_vst3q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 32); \
})
#define vst3q_f32(__p0, __p1) __extension__ ({ \
  float32x4x3_t __s1 = __p1; \
  __builtin_neon_vst3q_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], 41); \
})
#define vst3q_f16(__p0, __p1) __extension__ ({ \
  float16x8x3_t __s1 = __p1; \
  __builtin_neon_vst3q_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], 40); \
})
#define vst3q_s32(__p0, __p1) __extension__ ({ \
  int32x4x3_t __s1 = __p1; \
  __builtin_neon_vst3q_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], 34); \
})
#define vst3q_s16(__p0, __p1) __extension__ ({ \
  int16x8x3_t __s1 = __p1; \
  __builtin_neon_vst3q_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], 33); \
})
#define vst3_u8(__p0, __p1) __extension__ ({ \
  uint8x8x3_t __s1 = __p1; \
  __builtin_neon_vst3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 16); \
})
#define vst3_u32(__p0, __p1) __extension__ ({ \
  uint32x2x3_t __s1 = __p1; \
  __builtin_neon_vst3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 18); \
})
#define vst3_u64(__p0, __p1) __extension__ ({ \
  uint64x1x3_t __s1 = __p1; \
  __builtin_neon_vst3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 19); \
})
#define vst3_u16(__p0, __p1) __extension__ ({ \
  uint16x4x3_t __s1 = __p1; \
  __builtin_neon_vst3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 17); \
})
#define vst3_s8(__p0, __p1) __extension__ ({ \
  int8x8x3_t __s1 = __p1; \
  __builtin_neon_vst3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 0); \
})
#define vst3_f32(__p0, __p1) __extension__ ({ \
  float32x2x3_t __s1 = __p1; \
  __builtin_neon_vst3_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], 9); \
})
#define vst3_f16(__p0, __p1) __extension__ ({ \
  float16x4x3_t __s1 = __p1; \
  __builtin_neon_vst3_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], 8); \
})
#define vst3_s32(__p0, __p1) __extension__ ({ \
  int32x2x3_t __s1 = __p1; \
  __builtin_neon_vst3_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], 2); \
})
#define vst3_s64(__p0, __p1) __extension__ ({ \
  int64x1x3_t __s1 = __p1; \
  __builtin_neon_vst3_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], 3); \
})
#define vst3_s16(__p0, __p1) __extension__ ({ \
  int16x4x3_t __s1 = __p1; \
  __builtin_neon_vst3_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], 1); \
})
#define vst3_lane_p8(__p0, __p1, __p2) __extension__ ({ \
  poly8x8x3_t __s1 = __p1; \
  __builtin_neon_vst3_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 4); \
})
#define vst3_lane_p16(__p0, __p1, __p2) __extension__ ({ \
  poly16x4x3_t __s1 = __p1; \
  __builtin_neon_vst3_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 5); \
})
#define vst3q_lane_p16(__p0, __p1, __p2) __extension__ ({ \
  poly16x8x3_t __s1 = __p1; \
  __builtin_neon_vst3q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 37); \
})
#define vst3q_lane_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x4x3_t __s1 = __p1; \
  __builtin_neon_vst3q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 50); \
})
#define vst3q_lane_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x8x3_t __s1 = __p1; \
  __builtin_neon_vst3q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 49); \
})
#define vst3q_lane_f32(__p0, __p1, __p2) __extension__ ({ \
  float32x4x3_t __s1 = __p1; \
  __builtin_neon_vst3q_lane_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __p2, 41); \
})
#define vst3q_lane_f16(__p0, __p1, __p2) __extension__ ({ \
  float16x8x3_t __s1 = __p1; \
  __builtin_neon_vst3q_lane_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __p2, 40); \
})
#define vst3q_lane_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x4x3_t __s1 = __p1; \
  __builtin_neon_vst3q_lane_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __p2, 34); \
})
#define vst3q_lane_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x8x3_t __s1 = __p1; \
  __builtin_neon_vst3q_lane_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __p2, 33); \
})
#define vst3_lane_u8(__p0, __p1, __p2) __extension__ ({ \
  uint8x8x3_t __s1 = __p1; \
  __builtin_neon_vst3_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 16); \
})
#define vst3_lane_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x2x3_t __s1 = __p1; \
  __builtin_neon_vst3_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 18); \
})
#define vst3_lane_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x4x3_t __s1 = __p1; \
  __builtin_neon_vst3_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 17); \
})
#define vst3_lane_s8(__p0, __p1, __p2) __extension__ ({ \
  int8x8x3_t __s1 = __p1; \
  __builtin_neon_vst3_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 0); \
})
#define vst3_lane_f32(__p0, __p1, __p2) __extension__ ({ \
  float32x2x3_t __s1 = __p1; \
  __builtin_neon_vst3_lane_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __p2, 9); \
})
#define vst3_lane_f16(__p0, __p1, __p2) __extension__ ({ \
  float16x4x3_t __s1 = __p1; \
  __builtin_neon_vst3_lane_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __p2, 8); \
})
#define vst3_lane_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x2x3_t __s1 = __p1; \
  __builtin_neon_vst3_lane_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __p2, 2); \
})
#define vst3_lane_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x4x3_t __s1 = __p1; \
  __builtin_neon_vst3_lane_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __p2, 1); \
})
#define vst4_p8(__p0, __p1) __extension__ ({ \
  poly8x8x4_t __s1 = __p1; \
  __builtin_neon_vst4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 4); \
})
#define vst4_p16(__p0, __p1) __extension__ ({ \
  poly16x4x4_t __s1 = __p1; \
  __builtin_neon_vst4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 5); \
})
#define vst4q_p8(__p0, __p1) __extension__ ({ \
  poly8x16x4_t __s1 = __p1; \
  __builtin_neon_vst4q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 36); \
})
#define vst4q_p16(__p0, __p1) __extension__ ({ \
  poly16x8x4_t __s1 = __p1; \
  __builtin_neon_vst4q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 37); \
})
#define vst4q_u8(__p0, __p1) __extension__ ({ \
  uint8x16x4_t __s1 = __p1; \
  __builtin_neon_vst4q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 48); \
})
#define vst4q_u32(__p0, __p1) __extension__ ({ \
  uint32x4x4_t __s1 = __p1; \
  __builtin_neon_vst4q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 50); \
})
#define vst4q_u16(__p0, __p1) __extension__ ({ \
  uint16x8x4_t __s1 = __p1; \
  __builtin_neon_vst4q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 49); \
})
#define vst4q_s8(__p0, __p1) __extension__ ({ \
  int8x16x4_t __s1 = __p1; \
  __builtin_neon_vst4q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 32); \
})
#define vst4q_f32(__p0, __p1) __extension__ ({ \
  float32x4x4_t __s1 = __p1; \
  __builtin_neon_vst4q_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], 41); \
})
#define vst4q_f16(__p0, __p1) __extension__ ({ \
  float16x8x4_t __s1 = __p1; \
  __builtin_neon_vst4q_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], 40); \
})
#define vst4q_s32(__p0, __p1) __extension__ ({ \
  int32x4x4_t __s1 = __p1; \
  __builtin_neon_vst4q_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], 34); \
})
#define vst4q_s16(__p0, __p1) __extension__ ({ \
  int16x8x4_t __s1 = __p1; \
  __builtin_neon_vst4q_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], 33); \
})
#define vst4_u8(__p0, __p1) __extension__ ({ \
  uint8x8x4_t __s1 = __p1; \
  __builtin_neon_vst4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 16); \
})
#define vst4_u32(__p0, __p1) __extension__ ({ \
  uint32x2x4_t __s1 = __p1; \
  __builtin_neon_vst4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 18); \
})
#define vst4_u64(__p0, __p1) __extension__ ({ \
  uint64x1x4_t __s1 = __p1; \
  __builtin_neon_vst4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 19); \
})
#define vst4_u16(__p0, __p1) __extension__ ({ \
  uint16x4x4_t __s1 = __p1; \
  __builtin_neon_vst4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 17); \
})
#define vst4_s8(__p0, __p1) __extension__ ({ \
  int8x8x4_t __s1 = __p1; \
  __builtin_neon_vst4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 0); \
})
#define vst4_f32(__p0, __p1) __extension__ ({ \
  float32x2x4_t __s1 = __p1; \
  __builtin_neon_vst4_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], 9); \
})
#define vst4_f16(__p0, __p1) __extension__ ({ \
  float16x4x4_t __s1 = __p1; \
  __builtin_neon_vst4_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], 8); \
})
#define vst4_s32(__p0, __p1) __extension__ ({ \
  int32x2x4_t __s1 = __p1; \
  __builtin_neon_vst4_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], 2); \
})
#define vst4_s64(__p0, __p1) __extension__ ({ \
  int64x1x4_t __s1 = __p1; \
  __builtin_neon_vst4_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], 3); \
})
#define vst4_s16(__p0, __p1) __extension__ ({ \
  int16x4x4_t __s1 = __p1; \
  __builtin_neon_vst4_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], 1); \
})
#define vst4_lane_p8(__p0, __p1, __p2) __extension__ ({ \
  poly8x8x4_t __s1 = __p1; \
  __builtin_neon_vst4_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 4); \
})
#define vst4_lane_p16(__p0, __p1, __p2) __extension__ ({ \
  poly16x4x4_t __s1 = __p1; \
  __builtin_neon_vst4_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 5); \
})
#define vst4q_lane_p16(__p0, __p1, __p2) __extension__ ({ \
  poly16x8x4_t __s1 = __p1; \
  __builtin_neon_vst4q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 37); \
})
#define vst4q_lane_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x4x4_t __s1 = __p1; \
  __builtin_neon_vst4q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 50); \
})
#define vst4q_lane_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x8x4_t __s1 = __p1; \
  __builtin_neon_vst4q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 49); \
})
#define vst4q_lane_f32(__p0, __p1, __p2) __extension__ ({ \
  float32x4x4_t __s1 = __p1; \
  __builtin_neon_vst4q_lane_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], __p2, 41); \
})
#define vst4q_lane_f16(__p0, __p1, __p2) __extension__ ({ \
  float16x8x4_t __s1 = __p1; \
  __builtin_neon_vst4q_lane_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], __p2, 40); \
})
#define vst4q_lane_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x4x4_t __s1 = __p1; \
  __builtin_neon_vst4q_lane_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], __p2, 34); \
})
#define vst4q_lane_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x8x4_t __s1 = __p1; \
  __builtin_neon_vst4q_lane_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], __p2, 33); \
})
#define vst4_lane_u8(__p0, __p1, __p2) __extension__ ({ \
  uint8x8x4_t __s1 = __p1; \
  __builtin_neon_vst4_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 16); \
})
#define vst4_lane_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x2x4_t __s1 = __p1; \
  __builtin_neon_vst4_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 18); \
})
#define vst4_lane_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x4x4_t __s1 = __p1; \
  __builtin_neon_vst4_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 17); \
})
#define vst4_lane_s8(__p0, __p1, __p2) __extension__ ({ \
  int8x8x4_t __s1 = __p1; \
  __builtin_neon_vst4_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 0); \
})
#define vst4_lane_f32(__p0, __p1, __p2) __extension__ ({ \
  float32x2x4_t __s1 = __p1; \
  __builtin_neon_vst4_lane_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], __p2, 9); \
})
#define vst4_lane_f16(__p0, __p1, __p2) __extension__ ({ \
  float16x4x4_t __s1 = __p1; \
  __builtin_neon_vst4_lane_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], __p2, 8); \
})
#define vst4_lane_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x2x4_t __s1 = __p1; \
  __builtin_neon_vst4_lane_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], __p2, 2); \
})
#define vst4_lane_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x4x4_t __s1 = __p1; \
  __builtin_neon_vst4_lane_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], __p2, 1); \
})
__ai uint8x16_t vsubq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
__ai uint32x4_t vsubq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
__ai uint64x2_t vsubq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
__ai uint16x8_t vsubq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
__ai int8x16_t vsubq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
__ai float32x4_t vsubq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
__ai int32x4_t vsubq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
__ai int64x2_t vsubq_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
__ai int16x8_t vsubq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
__ai uint8x8_t vsub_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
__ai uint32x2_t vsub_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
__ai uint64x1_t vsub_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x1_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
__ai uint16x4_t vsub_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
__ai int8x8_t vsub_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
__ai float32x2_t vsub_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
__ai int32x2_t vsub_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
__ai int64x1_t vsub_s64(int64x1_t __p0, int64x1_t __p1) {
  int64x1_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
__ai int16x4_t vsub_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
__ai uint16x4_t vsubhn_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vsubhn_v((int8x16_t)__p0, (int8x16_t)__p1, 17);
  return __ret;
}
__ai uint32x2_t vsubhn_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vsubhn_v((int8x16_t)__p0, (int8x16_t)__p1, 18);
  return __ret;
}
__ai uint8x8_t vsubhn_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vsubhn_v((int8x16_t)__p0, (int8x16_t)__p1, 16);
  return __ret;
}
__ai int16x4_t vsubhn_s32(int32x4_t __p0, int32x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vsubhn_v((int8x16_t)__p0, (int8x16_t)__p1, 1);
  return __ret;
}
__ai int32x2_t vsubhn_s64(int64x2_t __p0, int64x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vsubhn_v((int8x16_t)__p0, (int8x16_t)__p1, 2);
  return __ret;
}
__ai int8x8_t vsubhn_s16(int16x8_t __p0, int16x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vsubhn_v((int8x16_t)__p0, (int8x16_t)__p1, 0);
  return __ret;
}
__ai uint16x8_t vsubl_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint16x8_t __ret;
  __ret = vmovl_u8(__p0) - vmovl_u8(__p1);
  return __ret;
}
__ai uint64x2_t vsubl_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint64x2_t __ret;
  __ret = vmovl_u32(__p0) - vmovl_u32(__p1);
  return __ret;
}
__ai uint32x4_t vsubl_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint32x4_t __ret;
  __ret = vmovl_u16(__p0) - vmovl_u16(__p1);
  return __ret;
}
__ai int16x8_t vsubl_s8(int8x8_t __p0, int8x8_t __p1) {
  int16x8_t __ret;
  __ret = vmovl_s8(__p0) - vmovl_s8(__p1);
  return __ret;
}
__ai int64x2_t vsubl_s32(int32x2_t __p0, int32x2_t __p1) {
  int64x2_t __ret;
  __ret = vmovl_s32(__p0) - vmovl_s32(__p1);
  return __ret;
}
__ai int32x4_t vsubl_s16(int16x4_t __p0, int16x4_t __p1) {
  int32x4_t __ret;
  __ret = vmovl_s16(__p0) - vmovl_s16(__p1);
  return __ret;
}
__ai uint16x8_t vsubw_u8(uint16x8_t __p0, uint8x8_t __p1) {
  uint16x8_t __ret;
  __ret = __p0 - vmovl_u8(__p1);
  return __ret;
}
__ai uint64x2_t vsubw_u32(uint64x2_t __p0, uint32x2_t __p1) {
  uint64x2_t __ret;
  __ret = __p0 - vmovl_u32(__p1);
  return __ret;
}
__ai uint32x4_t vsubw_u16(uint32x4_t __p0, uint16x4_t __p1) {
  uint32x4_t __ret;
  __ret = __p0 - vmovl_u16(__p1);
  return __ret;
}
__ai int16x8_t vsubw_s8(int16x8_t __p0, int8x8_t __p1) {
  int16x8_t __ret;
  __ret = __p0 - vmovl_s8(__p1);
  return __ret;
}
__ai int64x2_t vsubw_s32(int64x2_t __p0, int32x2_t __p1) {
  int64x2_t __ret;
  __ret = __p0 - vmovl_s32(__p1);
  return __ret;
}
__ai int32x4_t vsubw_s16(int32x4_t __p0, int16x4_t __p1) {
  int32x4_t __ret;
  __ret = __p0 - vmovl_s16(__p1);
  return __ret;
}
__ai poly8x8_t vtbl1_p8(poly8x8_t __p0, uint8x8_t __p1) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vtbl1_v((int8x8_t)__p0, (int8x8_t)__p1, 4);
  return __ret;
}
__ai uint8x8_t vtbl1_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vtbl1_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
__ai int8x8_t vtbl1_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vtbl1_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
__ai poly8x8_t vtbl2_p8(poly8x8x2_t __p0, uint8x8_t __p1) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vtbl2_v((int8x8_t)__p0.val[0], (int8x8_t)__p0.val[1], (int8x8_t)__p1, 4);
  return __ret;
}
__ai uint8x8_t vtbl2_u8(uint8x8x2_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vtbl2_v((int8x8_t)__p0.val[0], (int8x8_t)__p0.val[1], (int8x8_t)__p1, 16);
  return __ret;
}
__ai int8x8_t vtbl2_s8(int8x8x2_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vtbl2_v((int8x8_t)__p0.val[0], (int8x8_t)__p0.val[1], (int8x8_t)__p1, 0);
  return __ret;
}
__ai poly8x8_t vtbl3_p8(poly8x8x3_t __p0, uint8x8_t __p1) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vtbl3_v((int8x8_t)__p0.val[0], (int8x8_t)__p0.val[1], (int8x8_t)__p0.val[2], (int8x8_t)__p1, 4);
  return __ret;
}
__ai uint8x8_t vtbl3_u8(uint8x8x3_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vtbl3_v((int8x8_t)__p0.val[0], (int8x8_t)__p0.val[1], (int8x8_t)__p0.val[2], (int8x8_t)__p1, 16);
  return __ret;
}
__ai int8x8_t vtbl3_s8(int8x8x3_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vtbl3_v((int8x8_t)__p0.val[0], (int8x8_t)__p0.val[1], (int8x8_t)__p0.val[2], (int8x8_t)__p1, 0);
  return __ret;
}
__ai poly8x8_t vtbl4_p8(poly8x8x4_t __p0, uint8x8_t __p1) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vtbl4_v((int8x8_t)__p0.val[0], (int8x8_t)__p0.val[1], (int8x8_t)__p0.val[2], (int8x8_t)__p0.val[3], (int8x8_t)__p1, 4);
  return __ret;
}
__ai uint8x8_t vtbl4_u8(uint8x8x4_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vtbl4_v((int8x8_t)__p0.val[0], (int8x8_t)__p0.val[1], (int8x8_t)__p0.val[2], (int8x8_t)__p0.val[3], (int8x8_t)__p1, 16);
  return __ret;
}
__ai int8x8_t vtbl4_s8(int8x8x4_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vtbl4_v((int8x8_t)__p0.val[0], (int8x8_t)__p0.val[1], (int8x8_t)__p0.val[2], (int8x8_t)__p0.val[3], (int8x8_t)__p1, 0);
  return __ret;
}
__ai poly8x8_t vtbx1_p8(poly8x8_t __p0, poly8x8_t __p1, uint8x8_t __p2) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vtbx1_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 4);
  return __ret;
}
__ai uint8x8_t vtbx1_u8(uint8x8_t __p0, uint8x8_t __p1, uint8x8_t __p2) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vtbx1_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 16);
  return __ret;
}
__ai int8x8_t vtbx1_s8(int8x8_t __p0, int8x8_t __p1, int8x8_t __p2) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vtbx1_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 0);
  return __ret;
}
__ai poly8x8_t vtbx2_p8(poly8x8_t __p0, poly8x8x2_t __p1, uint8x8_t __p2) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vtbx2_v((int8x8_t)__p0, (int8x8_t)__p1.val[0], (int8x8_t)__p1.val[1], (int8x8_t)__p2, 4);
  return __ret;
}
__ai uint8x8_t vtbx2_u8(uint8x8_t __p0, uint8x8x2_t __p1, uint8x8_t __p2) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vtbx2_v((int8x8_t)__p0, (int8x8_t)__p1.val[0], (int8x8_t)__p1.val[1], (int8x8_t)__p2, 16);
  return __ret;
}
__ai int8x8_t vtbx2_s8(int8x8_t __p0, int8x8x2_t __p1, int8x8_t __p2) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vtbx2_v((int8x8_t)__p0, (int8x8_t)__p1.val[0], (int8x8_t)__p1.val[1], (int8x8_t)__p2, 0);
  return __ret;
}
__ai poly8x8_t vtbx3_p8(poly8x8_t __p0, poly8x8x3_t __p1, uint8x8_t __p2) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vtbx3_v((int8x8_t)__p0, (int8x8_t)__p1.val[0], (int8x8_t)__p1.val[1], (int8x8_t)__p1.val[2], (int8x8_t)__p2, 4);
  return __ret;
}
__ai uint8x8_t vtbx3_u8(uint8x8_t __p0, uint8x8x3_t __p1, uint8x8_t __p2) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vtbx3_v((int8x8_t)__p0, (int8x8_t)__p1.val[0], (int8x8_t)__p1.val[1], (int8x8_t)__p1.val[2], (int8x8_t)__p2, 16);
  return __ret;
}
__ai int8x8_t vtbx3_s8(int8x8_t __p0, int8x8x3_t __p1, int8x8_t __p2) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vtbx3_v((int8x8_t)__p0, (int8x8_t)__p1.val[0], (int8x8_t)__p1.val[1], (int8x8_t)__p1.val[2], (int8x8_t)__p2, 0);
  return __ret;
}
__ai poly8x8_t vtbx4_p8(poly8x8_t __p0, poly8x8x4_t __p1, uint8x8_t __p2) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vtbx4_v((int8x8_t)__p0, (int8x8_t)__p1.val[0], (int8x8_t)__p1.val[1], (int8x8_t)__p1.val[2], (int8x8_t)__p1.val[3], (int8x8_t)__p2, 4);
  return __ret;
}
__ai uint8x8_t vtbx4_u8(uint8x8_t __p0, uint8x8x4_t __p1, uint8x8_t __p2) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vtbx4_v((int8x8_t)__p0, (int8x8_t)__p1.val[0], (int8x8_t)__p1.val[1], (int8x8_t)__p1.val[2], (int8x8_t)__p1.val[3], (int8x8_t)__p2, 16);
  return __ret;
}
__ai int8x8_t vtbx4_s8(int8x8_t __p0, int8x8x4_t __p1, int8x8_t __p2) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vtbx4_v((int8x8_t)__p0, (int8x8_t)__p1.val[0], (int8x8_t)__p1.val[1], (int8x8_t)__p1.val[2], (int8x8_t)__p1.val[3], (int8x8_t)__p2, 0);
  return __ret;
}
__ai poly8x8x2_t vtrn_p8(poly8x8_t __p0, poly8x8_t __p1) {
  poly8x8x2_t __ret;
  __builtin_neon_vtrn_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 4);
  return __ret;
}
__ai poly16x4x2_t vtrn_p16(poly16x4_t __p0, poly16x4_t __p1) {
  poly16x4x2_t __ret;
  __builtin_neon_vtrn_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 5);
  return __ret;
}
__ai poly8x16x2_t vtrnq_p8(poly8x16_t __p0, poly8x16_t __p1) {
  poly8x16x2_t __ret;
  __builtin_neon_vtrnq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 36);
  return __ret;
}
__ai poly16x8x2_t vtrnq_p16(poly16x8_t __p0, poly16x8_t __p1) {
  poly16x8x2_t __ret;
  __builtin_neon_vtrnq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 37);
  return __ret;
}
__ai uint8x16x2_t vtrnq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16x2_t __ret;
  __builtin_neon_vtrnq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
__ai uint32x4x2_t vtrnq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4x2_t __ret;
  __builtin_neon_vtrnq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
__ai uint16x8x2_t vtrnq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8x2_t __ret;
  __builtin_neon_vtrnq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
__ai int8x16x2_t vtrnq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16x2_t __ret;
  __builtin_neon_vtrnq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
__ai float32x4x2_t vtrnq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4x2_t __ret;
  __builtin_neon_vtrnq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
__ai int32x4x2_t vtrnq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4x2_t __ret;
  __builtin_neon_vtrnq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
__ai int16x8x2_t vtrnq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8x2_t __ret;
  __builtin_neon_vtrnq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
__ai uint8x8x2_t vtrn_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8x2_t __ret;
  __builtin_neon_vtrn_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
__ai uint32x2x2_t vtrn_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2x2_t __ret;
  __builtin_neon_vtrn_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
__ai uint16x4x2_t vtrn_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4x2_t __ret;
  __builtin_neon_vtrn_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
__ai int8x8x2_t vtrn_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8x2_t __ret;
  __builtin_neon_vtrn_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
__ai float32x2x2_t vtrn_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2x2_t __ret;
  __builtin_neon_vtrn_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
__ai int32x2x2_t vtrn_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2x2_t __ret;
  __builtin_neon_vtrn_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
__ai int16x4x2_t vtrn_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4x2_t __ret;
  __builtin_neon_vtrn_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
__ai uint8x8_t vtst_p8(poly8x8_t __p0, poly8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vtst_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
__ai uint16x4_t vtst_p16(poly16x4_t __p0, poly16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vtst_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
__ai uint8x16_t vtstq_p8(poly8x16_t __p0, poly8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vtstq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
__ai uint16x8_t vtstq_p16(poly16x8_t __p0, poly16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vtstq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
__ai uint8x16_t vtstq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vtstq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
__ai uint32x4_t vtstq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vtstq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
__ai uint16x8_t vtstq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vtstq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
__ai uint8x16_t vtstq_s8(int8x16_t __p0, int8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vtstq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
__ai uint32x4_t vtstq_s32(int32x4_t __p0, int32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vtstq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
__ai uint16x8_t vtstq_s16(int16x8_t __p0, int16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vtstq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
__ai uint8x8_t vtst_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vtst_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
__ai uint32x2_t vtst_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vtst_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
__ai uint16x4_t vtst_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vtst_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
__ai uint8x8_t vtst_s8(int8x8_t __p0, int8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vtst_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
__ai uint32x2_t vtst_s32(int32x2_t __p0, int32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vtst_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
__ai uint16x4_t vtst_s16(int16x4_t __p0, int16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vtst_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
__ai poly8x8x2_t vuzp_p8(poly8x8_t __p0, poly8x8_t __p1) {
  poly8x8x2_t __ret;
  __builtin_neon_vuzp_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 4);
  return __ret;
}
__ai poly16x4x2_t vuzp_p16(poly16x4_t __p0, poly16x4_t __p1) {
  poly16x4x2_t __ret;
  __builtin_neon_vuzp_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 5);
  return __ret;
}
__ai poly8x16x2_t vuzpq_p8(poly8x16_t __p0, poly8x16_t __p1) {
  poly8x16x2_t __ret;
  __builtin_neon_vuzpq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 36);
  return __ret;
}
__ai poly16x8x2_t vuzpq_p16(poly16x8_t __p0, poly16x8_t __p1) {
  poly16x8x2_t __ret;
  __builtin_neon_vuzpq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 37);
  return __ret;
}
__ai uint8x16x2_t vuzpq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16x2_t __ret;
  __builtin_neon_vuzpq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
__ai uint32x4x2_t vuzpq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4x2_t __ret;
  __builtin_neon_vuzpq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
__ai uint16x8x2_t vuzpq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8x2_t __ret;
  __builtin_neon_vuzpq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
__ai int8x16x2_t vuzpq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16x2_t __ret;
  __builtin_neon_vuzpq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
__ai float32x4x2_t vuzpq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4x2_t __ret;
  __builtin_neon_vuzpq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
__ai int32x4x2_t vuzpq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4x2_t __ret;
  __builtin_neon_vuzpq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
__ai int16x8x2_t vuzpq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8x2_t __ret;
  __builtin_neon_vuzpq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
__ai uint8x8x2_t vuzp_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8x2_t __ret;
  __builtin_neon_vuzp_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
__ai uint32x2x2_t vuzp_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2x2_t __ret;
  __builtin_neon_vuzp_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
__ai uint16x4x2_t vuzp_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4x2_t __ret;
  __builtin_neon_vuzp_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
__ai int8x8x2_t vuzp_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8x2_t __ret;
  __builtin_neon_vuzp_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
__ai float32x2x2_t vuzp_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2x2_t __ret;
  __builtin_neon_vuzp_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
__ai int32x2x2_t vuzp_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2x2_t __ret;
  __builtin_neon_vuzp_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
__ai int16x4x2_t vuzp_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4x2_t __ret;
  __builtin_neon_vuzp_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
__ai poly8x8x2_t vzip_p8(poly8x8_t __p0, poly8x8_t __p1) {
  poly8x8x2_t __ret;
  __builtin_neon_vzip_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 4);
  return __ret;
}
__ai poly16x4x2_t vzip_p16(poly16x4_t __p0, poly16x4_t __p1) {
  poly16x4x2_t __ret;
  __builtin_neon_vzip_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 5);
  return __ret;
}
__ai poly8x16x2_t vzipq_p8(poly8x16_t __p0, poly8x16_t __p1) {
  poly8x16x2_t __ret;
  __builtin_neon_vzipq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 36);
  return __ret;
}
__ai poly16x8x2_t vzipq_p16(poly16x8_t __p0, poly16x8_t __p1) {
  poly16x8x2_t __ret;
  __builtin_neon_vzipq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 37);
  return __ret;
}
__ai uint8x16x2_t vzipq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16x2_t __ret;
  __builtin_neon_vzipq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
__ai uint32x4x2_t vzipq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4x2_t __ret;
  __builtin_neon_vzipq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
__ai uint16x8x2_t vzipq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8x2_t __ret;
  __builtin_neon_vzipq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
__ai int8x16x2_t vzipq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16x2_t __ret;
  __builtin_neon_vzipq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
__ai float32x4x2_t vzipq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4x2_t __ret;
  __builtin_neon_vzipq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
__ai int32x4x2_t vzipq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4x2_t __ret;
  __builtin_neon_vzipq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
__ai int16x8x2_t vzipq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8x2_t __ret;
  __builtin_neon_vzipq_v(&__ret, (int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
__ai uint8x8x2_t vzip_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8x2_t __ret;
  __builtin_neon_vzip_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
__ai uint32x2x2_t vzip_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2x2_t __ret;
  __builtin_neon_vzip_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
__ai uint16x4x2_t vzip_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4x2_t __ret;
  __builtin_neon_vzip_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
__ai int8x8x2_t vzip_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8x2_t __ret;
  __builtin_neon_vzip_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
__ai float32x2x2_t vzip_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2x2_t __ret;
  __builtin_neon_vzip_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
__ai int32x2x2_t vzip_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2x2_t __ret;
  __builtin_neon_vzip_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
__ai int16x4x2_t vzip_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4x2_t __ret;
  __builtin_neon_vzip_v(&__ret, (int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
#if !defined(__aarch64__)
__ai poly8x8_t vreinterpret_p8_p16(poly16x4_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
__ai poly8x8_t vreinterpret_p8_u8(uint8x8_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
__ai poly8x8_t vreinterpret_p8_u32(uint32x2_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
__ai poly8x8_t vreinterpret_p8_u64(uint64x1_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
__ai poly8x8_t vreinterpret_p8_u16(uint16x4_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
__ai poly8x8_t vreinterpret_p8_s8(int8x8_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
__ai poly8x8_t vreinterpret_p8_f32(float32x2_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
__ai poly8x8_t vreinterpret_p8_f16(float16x4_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
__ai poly8x8_t vreinterpret_p8_s32(int32x2_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
__ai poly8x8_t vreinterpret_p8_s64(int64x1_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
__ai poly8x8_t vreinterpret_p8_s16(int16x4_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
__ai poly16x4_t vreinterpret_p16_p8(poly8x8_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
__ai poly16x4_t vreinterpret_p16_u8(uint8x8_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
__ai poly16x4_t vreinterpret_p16_u32(uint32x2_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
__ai poly16x4_t vreinterpret_p16_u64(uint64x1_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
__ai poly16x4_t vreinterpret_p16_u16(uint16x4_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
__ai poly16x4_t vreinterpret_p16_s8(int8x8_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
__ai poly16x4_t vreinterpret_p16_f32(float32x2_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
__ai poly16x4_t vreinterpret_p16_f16(float16x4_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
__ai poly16x4_t vreinterpret_p16_s32(int32x2_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
__ai poly16x4_t vreinterpret_p16_s64(int64x1_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
__ai poly16x4_t vreinterpret_p16_s16(int16x4_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
__ai poly8x16_t vreinterpretq_p8_p16(poly16x8_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
__ai poly8x16_t vreinterpretq_p8_u8(uint8x16_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
__ai poly8x16_t vreinterpretq_p8_u32(uint32x4_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
__ai poly8x16_t vreinterpretq_p8_u64(uint64x2_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
__ai poly8x16_t vreinterpretq_p8_u16(uint16x8_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
__ai poly8x16_t vreinterpretq_p8_s8(int8x16_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
__ai poly8x16_t vreinterpretq_p8_f32(float32x4_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
__ai poly8x16_t vreinterpretq_p8_f16(float16x8_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
__ai poly8x16_t vreinterpretq_p8_s32(int32x4_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
__ai poly8x16_t vreinterpretq_p8_s64(int64x2_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
__ai poly8x16_t vreinterpretq_p8_s16(int16x8_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
__ai poly16x8_t vreinterpretq_p16_p8(poly8x16_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
__ai poly16x8_t vreinterpretq_p16_u8(uint8x16_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
__ai poly16x8_t vreinterpretq_p16_u32(uint32x4_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
__ai poly16x8_t vreinterpretq_p16_u64(uint64x2_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
__ai poly16x8_t vreinterpretq_p16_u16(uint16x8_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
__ai poly16x8_t vreinterpretq_p16_s8(int8x16_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
__ai poly16x8_t vreinterpretq_p16_f32(float32x4_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
__ai poly16x8_t vreinterpretq_p16_f16(float16x8_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
__ai poly16x8_t vreinterpretq_p16_s32(int32x4_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
__ai poly16x8_t vreinterpretq_p16_s64(int64x2_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
__ai poly16x8_t vreinterpretq_p16_s16(int16x8_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
__ai uint8x16_t vreinterpretq_u8_p8(poly8x16_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
__ai uint8x16_t vreinterpretq_u8_p16(poly16x8_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
__ai uint8x16_t vreinterpretq_u8_u32(uint32x4_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
__ai uint8x16_t vreinterpretq_u8_u64(uint64x2_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
__ai uint8x16_t vreinterpretq_u8_u16(uint16x8_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
__ai uint8x16_t vreinterpretq_u8_s8(int8x16_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
__ai uint8x16_t vreinterpretq_u8_f32(float32x4_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
__ai uint8x16_t vreinterpretq_u8_f16(float16x8_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
__ai uint8x16_t vreinterpretq_u8_s32(int32x4_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
__ai uint8x16_t vreinterpretq_u8_s64(int64x2_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
__ai uint8x16_t vreinterpretq_u8_s16(int16x8_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
__ai uint32x4_t vreinterpretq_u32_p8(poly8x16_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
__ai uint32x4_t vreinterpretq_u32_p16(poly16x8_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
__ai uint32x4_t vreinterpretq_u32_u8(uint8x16_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
__ai uint32x4_t vreinterpretq_u32_u64(uint64x2_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
__ai uint32x4_t vreinterpretq_u32_u16(uint16x8_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
__ai uint32x4_t vreinterpretq_u32_s8(int8x16_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
__ai uint32x4_t vreinterpretq_u32_f32(float32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
__ai uint32x4_t vreinterpretq_u32_f16(float16x8_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
__ai uint32x4_t vreinterpretq_u32_s32(int32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
__ai uint32x4_t vreinterpretq_u32_s64(int64x2_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
__ai uint32x4_t vreinterpretq_u32_s16(int16x8_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
__ai uint64x2_t vreinterpretq_u64_p8(poly8x16_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
__ai uint64x2_t vreinterpretq_u64_p16(poly16x8_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
__ai uint64x2_t vreinterpretq_u64_u8(uint8x16_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
__ai uint64x2_t vreinterpretq_u64_u32(uint32x4_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
__ai uint64x2_t vreinterpretq_u64_u16(uint16x8_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
__ai uint64x2_t vreinterpretq_u64_s8(int8x16_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
__ai uint64x2_t vreinterpretq_u64_f32(float32x4_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
__ai uint64x2_t vreinterpretq_u64_f16(float16x8_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
__ai uint64x2_t vreinterpretq_u64_s32(int32x4_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
__ai uint64x2_t vreinterpretq_u64_s64(int64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
__ai uint64x2_t vreinterpretq_u64_s16(int16x8_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
__ai uint16x8_t vreinterpretq_u16_p8(poly8x16_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
__ai uint16x8_t vreinterpretq_u16_p16(poly16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
__ai uint16x8_t vreinterpretq_u16_u8(uint8x16_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
__ai uint16x8_t vreinterpretq_u16_u32(uint32x4_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
__ai uint16x8_t vreinterpretq_u16_u64(uint64x2_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
__ai uint16x8_t vreinterpretq_u16_s8(int8x16_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
__ai uint16x8_t vreinterpretq_u16_f32(float32x4_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
__ai uint16x8_t vreinterpretq_u16_f16(float16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
__ai uint16x8_t vreinterpretq_u16_s32(int32x4_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
__ai uint16x8_t vreinterpretq_u16_s64(int64x2_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
__ai uint16x8_t vreinterpretq_u16_s16(int16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
__ai int8x16_t vreinterpretq_s8_p8(poly8x16_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
__ai int8x16_t vreinterpretq_s8_p16(poly16x8_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
__ai int8x16_t vreinterpretq_s8_u8(uint8x16_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
__ai int8x16_t vreinterpretq_s8_u32(uint32x4_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
__ai int8x16_t vreinterpretq_s8_u64(uint64x2_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
__ai int8x16_t vreinterpretq_s8_u16(uint16x8_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
__ai int8x16_t vreinterpretq_s8_f32(float32x4_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
__ai int8x16_t vreinterpretq_s8_f16(float16x8_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
__ai int8x16_t vreinterpretq_s8_s32(int32x4_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
__ai int8x16_t vreinterpretq_s8_s64(int64x2_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
__ai int8x16_t vreinterpretq_s8_s16(int16x8_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
__ai float32x4_t vreinterpretq_f32_p8(poly8x16_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
__ai float32x4_t vreinterpretq_f32_p16(poly16x8_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
__ai float32x4_t vreinterpretq_f32_u8(uint8x16_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
__ai float32x4_t vreinterpretq_f32_u32(uint32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
__ai float32x4_t vreinterpretq_f32_u64(uint64x2_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
__ai float32x4_t vreinterpretq_f32_u16(uint16x8_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
__ai float32x4_t vreinterpretq_f32_s8(int8x16_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
__ai float32x4_t vreinterpretq_f32_f16(float16x8_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
__ai float32x4_t vreinterpretq_f32_s32(int32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
__ai float32x4_t vreinterpretq_f32_s64(int64x2_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
__ai float32x4_t vreinterpretq_f32_s16(int16x8_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
__ai float16x8_t vreinterpretq_f16_p8(poly8x16_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
__ai float16x8_t vreinterpretq_f16_p16(poly16x8_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
__ai float16x8_t vreinterpretq_f16_u8(uint8x16_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
__ai float16x8_t vreinterpretq_f16_u32(uint32x4_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
__ai float16x8_t vreinterpretq_f16_u64(uint64x2_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
__ai float16x8_t vreinterpretq_f16_u16(uint16x8_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
__ai float16x8_t vreinterpretq_f16_s8(int8x16_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
__ai float16x8_t vreinterpretq_f16_f32(float32x4_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
__ai float16x8_t vreinterpretq_f16_s32(int32x4_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
__ai float16x8_t vreinterpretq_f16_s64(int64x2_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
__ai float16x8_t vreinterpretq_f16_s16(int16x8_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
__ai int32x4_t vreinterpretq_s32_p8(poly8x16_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
__ai int32x4_t vreinterpretq_s32_p16(poly16x8_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
__ai int32x4_t vreinterpretq_s32_u8(uint8x16_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
__ai int32x4_t vreinterpretq_s32_u32(uint32x4_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
__ai int32x4_t vreinterpretq_s32_u64(uint64x2_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
__ai int32x4_t vreinterpretq_s32_u16(uint16x8_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
__ai int32x4_t vreinterpretq_s32_s8(int8x16_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
__ai int32x4_t vreinterpretq_s32_f32(float32x4_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
__ai int32x4_t vreinterpretq_s32_f16(float16x8_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
__ai int32x4_t vreinterpretq_s32_s64(int64x2_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
__ai int32x4_t vreinterpretq_s32_s16(int16x8_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
__ai int64x2_t vreinterpretq_s64_p8(poly8x16_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
__ai int64x2_t vreinterpretq_s64_p16(poly16x8_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
__ai int64x2_t vreinterpretq_s64_u8(uint8x16_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
__ai int64x2_t vreinterpretq_s64_u32(uint32x4_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
__ai int64x2_t vreinterpretq_s64_u64(uint64x2_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
__ai int64x2_t vreinterpretq_s64_u16(uint16x8_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
__ai int64x2_t vreinterpretq_s64_s8(int8x16_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
__ai int64x2_t vreinterpretq_s64_f32(float32x4_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
__ai int64x2_t vreinterpretq_s64_f16(float16x8_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
__ai int64x2_t vreinterpretq_s64_s32(int32x4_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
__ai int64x2_t vreinterpretq_s64_s16(int16x8_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
__ai int16x8_t vreinterpretq_s16_p8(poly8x16_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
__ai int16x8_t vreinterpretq_s16_p16(poly16x8_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
__ai int16x8_t vreinterpretq_s16_u8(uint8x16_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
__ai int16x8_t vreinterpretq_s16_u32(uint32x4_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
__ai int16x8_t vreinterpretq_s16_u64(uint64x2_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
__ai int16x8_t vreinterpretq_s16_u16(uint16x8_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
__ai int16x8_t vreinterpretq_s16_s8(int8x16_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
__ai int16x8_t vreinterpretq_s16_f32(float32x4_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
__ai int16x8_t vreinterpretq_s16_f16(float16x8_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
__ai int16x8_t vreinterpretq_s16_s32(int32x4_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
__ai int16x8_t vreinterpretq_s16_s64(int64x2_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
__ai uint8x8_t vreinterpret_u8_p8(poly8x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
__ai uint8x8_t vreinterpret_u8_p16(poly16x4_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
__ai uint8x8_t vreinterpret_u8_u32(uint32x2_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
__ai uint8x8_t vreinterpret_u8_u64(uint64x1_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
__ai uint8x8_t vreinterpret_u8_u16(uint16x4_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
__ai uint8x8_t vreinterpret_u8_s8(int8x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
__ai uint8x8_t vreinterpret_u8_f32(float32x2_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
__ai uint8x8_t vreinterpret_u8_f16(float16x4_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
__ai uint8x8_t vreinterpret_u8_s32(int32x2_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
__ai uint8x8_t vreinterpret_u8_s64(int64x1_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
__ai uint8x8_t vreinterpret_u8_s16(int16x4_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
__ai uint32x2_t vreinterpret_u32_p8(poly8x8_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
__ai uint32x2_t vreinterpret_u32_p16(poly16x4_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
__ai uint32x2_t vreinterpret_u32_u8(uint8x8_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
__ai uint32x2_t vreinterpret_u32_u64(uint64x1_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
__ai uint32x2_t vreinterpret_u32_u16(uint16x4_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
__ai uint32x2_t vreinterpret_u32_s8(int8x8_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
__ai uint32x2_t vreinterpret_u32_f32(float32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
__ai uint32x2_t vreinterpret_u32_f16(float16x4_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
__ai uint32x2_t vreinterpret_u32_s32(int32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
__ai uint32x2_t vreinterpret_u32_s64(int64x1_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
__ai uint32x2_t vreinterpret_u32_s16(int16x4_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
__ai uint64x1_t vreinterpret_u64_p8(poly8x8_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
__ai uint64x1_t vreinterpret_u64_p16(poly16x4_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
__ai uint64x1_t vreinterpret_u64_u8(uint8x8_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
__ai uint64x1_t vreinterpret_u64_u32(uint32x2_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
__ai uint64x1_t vreinterpret_u64_u16(uint16x4_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
__ai uint64x1_t vreinterpret_u64_s8(int8x8_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
__ai uint64x1_t vreinterpret_u64_f32(float32x2_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
__ai uint64x1_t vreinterpret_u64_f16(float16x4_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
__ai uint64x1_t vreinterpret_u64_s32(int32x2_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
__ai uint64x1_t vreinterpret_u64_s64(int64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
__ai uint64x1_t vreinterpret_u64_s16(int16x4_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
__ai uint16x4_t vreinterpret_u16_p8(poly8x8_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
__ai uint16x4_t vreinterpret_u16_p16(poly16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
__ai uint16x4_t vreinterpret_u16_u8(uint8x8_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
__ai uint16x4_t vreinterpret_u16_u32(uint32x2_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
__ai uint16x4_t vreinterpret_u16_u64(uint64x1_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
__ai uint16x4_t vreinterpret_u16_s8(int8x8_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
__ai uint16x4_t vreinterpret_u16_f32(float32x2_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
__ai uint16x4_t vreinterpret_u16_f16(float16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
__ai uint16x4_t vreinterpret_u16_s32(int32x2_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
__ai uint16x4_t vreinterpret_u16_s64(int64x1_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
__ai uint16x4_t vreinterpret_u16_s16(int16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
__ai int8x8_t vreinterpret_s8_p8(poly8x8_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
__ai int8x8_t vreinterpret_s8_p16(poly16x4_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
__ai int8x8_t vreinterpret_s8_u8(uint8x8_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
__ai int8x8_t vreinterpret_s8_u32(uint32x2_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
__ai int8x8_t vreinterpret_s8_u64(uint64x1_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
__ai int8x8_t vreinterpret_s8_u16(uint16x4_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
__ai int8x8_t vreinterpret_s8_f32(float32x2_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
__ai int8x8_t vreinterpret_s8_f16(float16x4_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
__ai int8x8_t vreinterpret_s8_s32(int32x2_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
__ai int8x8_t vreinterpret_s8_s64(int64x1_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
__ai int8x8_t vreinterpret_s8_s16(int16x4_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
__ai float32x2_t vreinterpret_f32_p8(poly8x8_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
__ai float32x2_t vreinterpret_f32_p16(poly16x4_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
__ai float32x2_t vreinterpret_f32_u8(uint8x8_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
__ai float32x2_t vreinterpret_f32_u32(uint32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
__ai float32x2_t vreinterpret_f32_u64(uint64x1_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
__ai float32x2_t vreinterpret_f32_u16(uint16x4_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
__ai float32x2_t vreinterpret_f32_s8(int8x8_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
__ai float32x2_t vreinterpret_f32_f16(float16x4_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
__ai float32x2_t vreinterpret_f32_s32(int32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
__ai float32x2_t vreinterpret_f32_s64(int64x1_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
__ai float32x2_t vreinterpret_f32_s16(int16x4_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
__ai float16x4_t vreinterpret_f16_p8(poly8x8_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
__ai float16x4_t vreinterpret_f16_p16(poly16x4_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
__ai float16x4_t vreinterpret_f16_u8(uint8x8_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
__ai float16x4_t vreinterpret_f16_u32(uint32x2_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
__ai float16x4_t vreinterpret_f16_u64(uint64x1_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
__ai float16x4_t vreinterpret_f16_u16(uint16x4_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
__ai float16x4_t vreinterpret_f16_s8(int8x8_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
__ai float16x4_t vreinterpret_f16_f32(float32x2_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
__ai float16x4_t vreinterpret_f16_s32(int32x2_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
__ai float16x4_t vreinterpret_f16_s64(int64x1_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
__ai float16x4_t vreinterpret_f16_s16(int16x4_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
__ai int32x2_t vreinterpret_s32_p8(poly8x8_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
__ai int32x2_t vreinterpret_s32_p16(poly16x4_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
__ai int32x2_t vreinterpret_s32_u8(uint8x8_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
__ai int32x2_t vreinterpret_s32_u32(uint32x2_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
__ai int32x2_t vreinterpret_s32_u64(uint64x1_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
__ai int32x2_t vreinterpret_s32_u16(uint16x4_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
__ai int32x2_t vreinterpret_s32_s8(int8x8_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
__ai int32x2_t vreinterpret_s32_f32(float32x2_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
__ai int32x2_t vreinterpret_s32_f16(float16x4_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
__ai int32x2_t vreinterpret_s32_s64(int64x1_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
__ai int32x2_t vreinterpret_s32_s16(int16x4_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
__ai int64x1_t vreinterpret_s64_p8(poly8x8_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
__ai int64x1_t vreinterpret_s64_p16(poly16x4_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
__ai int64x1_t vreinterpret_s64_u8(uint8x8_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
__ai int64x1_t vreinterpret_s64_u32(uint32x2_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
__ai int64x1_t vreinterpret_s64_u64(uint64x1_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
__ai int64x1_t vreinterpret_s64_u16(uint16x4_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
__ai int64x1_t vreinterpret_s64_s8(int8x8_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
__ai int64x1_t vreinterpret_s64_f32(float32x2_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
__ai int64x1_t vreinterpret_s64_f16(float16x4_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
__ai int64x1_t vreinterpret_s64_s32(int32x2_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
__ai int64x1_t vreinterpret_s64_s16(int16x4_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
__ai int16x4_t vreinterpret_s16_p8(poly8x8_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
__ai int16x4_t vreinterpret_s16_p16(poly16x4_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
__ai int16x4_t vreinterpret_s16_u8(uint8x8_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
__ai int16x4_t vreinterpret_s16_u32(uint32x2_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
__ai int16x4_t vreinterpret_s16_u64(uint64x1_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
__ai int16x4_t vreinterpret_s16_u16(uint16x4_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
__ai int16x4_t vreinterpret_s16_s8(int8x8_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
__ai int16x4_t vreinterpret_s16_f32(float32x2_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
__ai int16x4_t vreinterpret_s16_f16(float16x4_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
__ai int16x4_t vreinterpret_s16_s32(int32x2_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
__ai int16x4_t vreinterpret_s16_s64(int64x1_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
#endif
#if __ARM_ARCH >= 8
__ai int32x4_t vcvtaq_s32_f32(float32x4_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vcvtaq_s32_v((int8x16_t)__p0, 34);
  return __ret;
}
__ai int32x2_t vcvta_s32_f32(float32x2_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vcvta_s32_v((int8x8_t)__p0, 2);
  return __ret;
}
__ai uint32x4_t vcvtaq_u32_f32(float32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vcvtaq_u32_v((int8x16_t)__p0, 50);
  return __ret;
}
__ai uint32x2_t vcvta_u32_f32(float32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vcvta_u32_v((int8x8_t)__p0, 18);
  return __ret;
}
__ai int32x4_t vcvtmq_s32_f32(float32x4_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vcvtmq_s32_v((int8x16_t)__p0, 34);
  return __ret;
}
__ai int32x2_t vcvtm_s32_f32(float32x2_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vcvtm_s32_v((int8x8_t)__p0, 2);
  return __ret;
}
__ai uint32x4_t vcvtmq_u32_f32(float32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vcvtmq_u32_v((int8x16_t)__p0, 50);
  return __ret;
}
__ai uint32x2_t vcvtm_u32_f32(float32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vcvtm_u32_v((int8x8_t)__p0, 18);
  return __ret;
}
__ai int32x4_t vcvtnq_s32_f32(float32x4_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vcvtnq_s32_v((int8x16_t)__p0, 34);
  return __ret;
}
__ai int32x2_t vcvtn_s32_f32(float32x2_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vcvtn_s32_v((int8x8_t)__p0, 2);
  return __ret;
}
__ai uint32x4_t vcvtnq_u32_f32(float32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vcvtnq_u32_v((int8x16_t)__p0, 50);
  return __ret;
}
__ai uint32x2_t vcvtn_u32_f32(float32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vcvtn_u32_v((int8x8_t)__p0, 18);
  return __ret;
}
__ai int32x4_t vcvtpq_s32_f32(float32x4_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vcvtpq_s32_v((int8x16_t)__p0, 34);
  return __ret;
}
__ai int32x2_t vcvtp_s32_f32(float32x2_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vcvtp_s32_v((int8x8_t)__p0, 2);
  return __ret;
}
__ai uint32x4_t vcvtpq_u32_f32(float32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vcvtpq_u32_v((int8x16_t)__p0, 50);
  return __ret;
}
__ai uint32x2_t vcvtp_u32_f32(float32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vcvtp_u32_v((int8x8_t)__p0, 18);
  return __ret;
}
#endif
#if __ARM_ARCH >= 8 && defined(__aarch64__)
__ai int64x2_t vcvtaq_s64_f64(float64x2_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vcvtaq_s64_v((int8x16_t)__p0, 35);
  return __ret;
}
__ai int64x1_t vcvta_s64_f64(float64x1_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vcvta_s64_v((int8x8_t)__p0, 3);
  return __ret;
}
__ai uint64x2_t vcvtaq_u64_f64(float64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vcvtaq_u64_v((int8x16_t)__p0, 51);
  return __ret;
}
__ai uint64x1_t vcvta_u64_f64(float64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vcvta_u64_v((int8x8_t)__p0, 19);
  return __ret;
}
__ai int64x2_t vcvtmq_s64_f64(float64x2_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vcvtmq_s64_v((int8x16_t)__p0, 35);
  return __ret;
}
__ai int64x1_t vcvtm_s64_f64(float64x1_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vcvtm_s64_v((int8x8_t)__p0, 3);
  return __ret;
}
__ai uint64x2_t vcvtmq_u64_f64(float64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vcvtmq_u64_v((int8x16_t)__p0, 51);
  return __ret;
}
__ai uint64x1_t vcvtm_u64_f64(float64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vcvtm_u64_v((int8x8_t)__p0, 19);
  return __ret;
}
__ai int64x2_t vcvtnq_s64_f64(float64x2_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vcvtnq_s64_v((int8x16_t)__p0, 35);
  return __ret;
}
__ai int64x1_t vcvtn_s64_f64(float64x1_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vcvtn_s64_v((int8x8_t)__p0, 3);
  return __ret;
}
__ai uint64x2_t vcvtnq_u64_f64(float64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vcvtnq_u64_v((int8x16_t)__p0, 51);
  return __ret;
}
__ai uint64x1_t vcvtn_u64_f64(float64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vcvtn_u64_v((int8x8_t)__p0, 19);
  return __ret;
}
__ai int64x2_t vcvtpq_s64_f64(float64x2_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vcvtpq_s64_v((int8x16_t)__p0, 35);
  return __ret;
}
__ai int64x1_t vcvtp_s64_f64(float64x1_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vcvtp_s64_v((int8x8_t)__p0, 3);
  return __ret;
}
__ai uint64x2_t vcvtpq_u64_f64(float64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vcvtpq_u64_v((int8x16_t)__p0, 51);
  return __ret;
}
__ai uint64x1_t vcvtp_u64_f64(float64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vcvtp_u64_v((int8x8_t)__p0, 19);
  return __ret;
}
__ai poly8x8_t vreinterpret_p8_p64(poly64x1_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
__ai poly8x8_t vreinterpret_p8_p16(poly16x4_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
__ai poly8x8_t vreinterpret_p8_u8(uint8x8_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
__ai poly8x8_t vreinterpret_p8_u32(uint32x2_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
__ai poly8x8_t vreinterpret_p8_u64(uint64x1_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
__ai poly8x8_t vreinterpret_p8_u16(uint16x4_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
__ai poly8x8_t vreinterpret_p8_s8(int8x8_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
__ai poly8x8_t vreinterpret_p8_f64(float64x1_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
__ai poly8x8_t vreinterpret_p8_f32(float32x2_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
__ai poly8x8_t vreinterpret_p8_f16(float16x4_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
__ai poly8x8_t vreinterpret_p8_s32(int32x2_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
__ai poly8x8_t vreinterpret_p8_s64(int64x1_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
__ai poly8x8_t vreinterpret_p8_s16(int16x4_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t)(__p0);
  return __ret;
}
__ai poly64x1_t vreinterpret_p64_p8(poly8x8_t __p0) {
  poly64x1_t __ret;
  __ret = (poly64x1_t)(__p0);
  return __ret;
}
__ai poly64x1_t vreinterpret_p64_p16(poly16x4_t __p0) {
  poly64x1_t __ret;
  __ret = (poly64x1_t)(__p0);
  return __ret;
}
__ai poly64x1_t vreinterpret_p64_u8(uint8x8_t __p0) {
  poly64x1_t __ret;
  __ret = (poly64x1_t)(__p0);
  return __ret;
}
__ai poly64x1_t vreinterpret_p64_u32(uint32x2_t __p0) {
  poly64x1_t __ret;
  __ret = (poly64x1_t)(__p0);
  return __ret;
}
__ai poly64x1_t vreinterpret_p64_u64(uint64x1_t __p0) {
  poly64x1_t __ret;
  __ret = (poly64x1_t)(__p0);
  return __ret;
}
__ai poly64x1_t vreinterpret_p64_u16(uint16x4_t __p0) {
  poly64x1_t __ret;
  __ret = (poly64x1_t)(__p0);
  return __ret;
}
__ai poly64x1_t vreinterpret_p64_s8(int8x8_t __p0) {
  poly64x1_t __ret;
  __ret = (poly64x1_t)(__p0);
  return __ret;
}
__ai poly64x1_t vreinterpret_p64_f64(float64x1_t __p0) {
  poly64x1_t __ret;
  __ret = (poly64x1_t)(__p0);
  return __ret;
}
__ai poly64x1_t vreinterpret_p64_f32(float32x2_t __p0) {
  poly64x1_t __ret;
  __ret = (poly64x1_t)(__p0);
  return __ret;
}
__ai poly64x1_t vreinterpret_p64_f16(float16x4_t __p0) {
  poly64x1_t __ret;
  __ret = (poly64x1_t)(__p0);
  return __ret;
}
__ai poly64x1_t vreinterpret_p64_s32(int32x2_t __p0) {
  poly64x1_t __ret;
  __ret = (poly64x1_t)(__p0);
  return __ret;
}
__ai poly64x1_t vreinterpret_p64_s64(int64x1_t __p0) {
  poly64x1_t __ret;
  __ret = (poly64x1_t)(__p0);
  return __ret;
}
__ai poly64x1_t vreinterpret_p64_s16(int16x4_t __p0) {
  poly64x1_t __ret;
  __ret = (poly64x1_t)(__p0);
  return __ret;
}
__ai poly16x4_t vreinterpret_p16_p8(poly8x8_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
__ai poly16x4_t vreinterpret_p16_p64(poly64x1_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
__ai poly16x4_t vreinterpret_p16_u8(uint8x8_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
__ai poly16x4_t vreinterpret_p16_u32(uint32x2_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
__ai poly16x4_t vreinterpret_p16_u64(uint64x1_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
__ai poly16x4_t vreinterpret_p16_u16(uint16x4_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
__ai poly16x4_t vreinterpret_p16_s8(int8x8_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
__ai poly16x4_t vreinterpret_p16_f64(float64x1_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
__ai poly16x4_t vreinterpret_p16_f32(float32x2_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
__ai poly16x4_t vreinterpret_p16_f16(float16x4_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
__ai poly16x4_t vreinterpret_p16_s32(int32x2_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
__ai poly16x4_t vreinterpret_p16_s64(int64x1_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
__ai poly16x4_t vreinterpret_p16_s16(int16x4_t __p0) {
  poly16x4_t __ret;
  __ret = (poly16x4_t)(__p0);
  return __ret;
}
__ai poly8x16_t vreinterpretq_p8_p128(poly128_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
__ai poly8x16_t vreinterpretq_p8_p64(poly64x2_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
__ai poly8x16_t vreinterpretq_p8_p16(poly16x8_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
__ai poly8x16_t vreinterpretq_p8_u8(uint8x16_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
__ai poly8x16_t vreinterpretq_p8_u32(uint32x4_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
__ai poly8x16_t vreinterpretq_p8_u64(uint64x2_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
__ai poly8x16_t vreinterpretq_p8_u16(uint16x8_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
__ai poly8x16_t vreinterpretq_p8_s8(int8x16_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
__ai poly8x16_t vreinterpretq_p8_f64(float64x2_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
__ai poly8x16_t vreinterpretq_p8_f32(float32x4_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
__ai poly8x16_t vreinterpretq_p8_f16(float16x8_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
__ai poly8x16_t vreinterpretq_p8_s32(int32x4_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
__ai poly8x16_t vreinterpretq_p8_s64(int64x2_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
__ai poly8x16_t vreinterpretq_p8_s16(int16x8_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t)(__p0);
  return __ret;
}
__ai poly128_t vreinterpretq_p128_p8(poly8x16_t __p0) {
  poly128_t __ret;
  __ret = (poly128_t)(__p0);
  return __ret;
}
__ai poly128_t vreinterpretq_p128_p64(poly64x2_t __p0) {
  poly128_t __ret;
  __ret = (poly128_t)(__p0);
  return __ret;
}
__ai poly128_t vreinterpretq_p128_p16(poly16x8_t __p0) {
  poly128_t __ret;
  __ret = (poly128_t)(__p0);
  return __ret;
}
__ai poly128_t vreinterpretq_p128_u8(uint8x16_t __p0) {
  poly128_t __ret;
  __ret = (poly128_t)(__p0);
  return __ret;
}
__ai poly128_t vreinterpretq_p128_u32(uint32x4_t __p0) {
  poly128_t __ret;
  __ret = (poly128_t)(__p0);
  return __ret;
}
__ai poly128_t vreinterpretq_p128_u64(uint64x2_t __p0) {
  poly128_t __ret;
  __ret = (poly128_t)(__p0);
  return __ret;
}
__ai poly128_t vreinterpretq_p128_u16(uint16x8_t __p0) {
  poly128_t __ret;
  __ret = (poly128_t)(__p0);
  return __ret;
}
__ai poly128_t vreinterpretq_p128_s8(int8x16_t __p0) {
  poly128_t __ret;
  __ret = (poly128_t)(__p0);
  return __ret;
}
__ai poly128_t vreinterpretq_p128_f64(float64x2_t __p0) {
  poly128_t __ret;
  __ret = (poly128_t)(__p0);
  return __ret;
}
__ai poly128_t vreinterpretq_p128_f32(float32x4_t __p0) {
  poly128_t __ret;
  __ret = (poly128_t)(__p0);
  return __ret;
}
__ai poly128_t vreinterpretq_p128_f16(float16x8_t __p0) {
  poly128_t __ret;
  __ret = (poly128_t)(__p0);
  return __ret;
}
__ai poly128_t vreinterpretq_p128_s32(int32x4_t __p0) {
  poly128_t __ret;
  __ret = (poly128_t)(__p0);
  return __ret;
}
__ai poly128_t vreinterpretq_p128_s64(int64x2_t __p0) {
  poly128_t __ret;
  __ret = (poly128_t)(__p0);
  return __ret;
}
__ai poly128_t vreinterpretq_p128_s16(int16x8_t __p0) {
  poly128_t __ret;
  __ret = (poly128_t)(__p0);
  return __ret;
}
__ai poly64x2_t vreinterpretq_p64_p8(poly8x16_t __p0) {
  poly64x2_t __ret;
  __ret = (poly64x2_t)(__p0);
  return __ret;
}
__ai poly64x2_t vreinterpretq_p64_p128(poly128_t __p0) {
  poly64x2_t __ret;
  __ret = (poly64x2_t)(__p0);
  return __ret;
}
__ai poly64x2_t vreinterpretq_p64_p16(poly16x8_t __p0) {
  poly64x2_t __ret;
  __ret = (poly64x2_t)(__p0);
  return __ret;
}
__ai poly64x2_t vreinterpretq_p64_u8(uint8x16_t __p0) {
  poly64x2_t __ret;
  __ret = (poly64x2_t)(__p0);
  return __ret;
}
__ai poly64x2_t vreinterpretq_p64_u32(uint32x4_t __p0) {
  poly64x2_t __ret;
  __ret = (poly64x2_t)(__p0);
  return __ret;
}
__ai poly64x2_t vreinterpretq_p64_u64(uint64x2_t __p0) {
  poly64x2_t __ret;
  __ret = (poly64x2_t)(__p0);
  return __ret;
}
__ai poly64x2_t vreinterpretq_p64_u16(uint16x8_t __p0) {
  poly64x2_t __ret;
  __ret = (poly64x2_t)(__p0);
  return __ret;
}
__ai poly64x2_t vreinterpretq_p64_s8(int8x16_t __p0) {
  poly64x2_t __ret;
  __ret = (poly64x2_t)(__p0);
  return __ret;
}
__ai poly64x2_t vreinterpretq_p64_f64(float64x2_t __p0) {
  poly64x2_t __ret;
  __ret = (poly64x2_t)(__p0);
  return __ret;
}
__ai poly64x2_t vreinterpretq_p64_f32(float32x4_t __p0) {
  poly64x2_t __ret;
  __ret = (poly64x2_t)(__p0);
  return __ret;
}
__ai poly64x2_t vreinterpretq_p64_f16(float16x8_t __p0) {
  poly64x2_t __ret;
  __ret = (poly64x2_t)(__p0);
  return __ret;
}
__ai poly64x2_t vreinterpretq_p64_s32(int32x4_t __p0) {
  poly64x2_t __ret;
  __ret = (poly64x2_t)(__p0);
  return __ret;
}
__ai poly64x2_t vreinterpretq_p64_s64(int64x2_t __p0) {
  poly64x2_t __ret;
  __ret = (poly64x2_t)(__p0);
  return __ret;
}
__ai poly64x2_t vreinterpretq_p64_s16(int16x8_t __p0) {
  poly64x2_t __ret;
  __ret = (poly64x2_t)(__p0);
  return __ret;
}
__ai poly16x8_t vreinterpretq_p16_p8(poly8x16_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
__ai poly16x8_t vreinterpretq_p16_p128(poly128_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
__ai poly16x8_t vreinterpretq_p16_p64(poly64x2_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
__ai poly16x8_t vreinterpretq_p16_u8(uint8x16_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
__ai poly16x8_t vreinterpretq_p16_u32(uint32x4_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
__ai poly16x8_t vreinterpretq_p16_u64(uint64x2_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
__ai poly16x8_t vreinterpretq_p16_u16(uint16x8_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
__ai poly16x8_t vreinterpretq_p16_s8(int8x16_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
__ai poly16x8_t vreinterpretq_p16_f64(float64x2_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
__ai poly16x8_t vreinterpretq_p16_f32(float32x4_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
__ai poly16x8_t vreinterpretq_p16_f16(float16x8_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
__ai poly16x8_t vreinterpretq_p16_s32(int32x4_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
__ai poly16x8_t vreinterpretq_p16_s64(int64x2_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
__ai poly16x8_t vreinterpretq_p16_s16(int16x8_t __p0) {
  poly16x8_t __ret;
  __ret = (poly16x8_t)(__p0);
  return __ret;
}
__ai uint8x16_t vreinterpretq_u8_p8(poly8x16_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
__ai uint8x16_t vreinterpretq_u8_p128(poly128_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
__ai uint8x16_t vreinterpretq_u8_p64(poly64x2_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
__ai uint8x16_t vreinterpretq_u8_p16(poly16x8_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
__ai uint8x16_t vreinterpretq_u8_u32(uint32x4_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
__ai uint8x16_t vreinterpretq_u8_u64(uint64x2_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
__ai uint8x16_t vreinterpretq_u8_u16(uint16x8_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
__ai uint8x16_t vreinterpretq_u8_s8(int8x16_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
__ai uint8x16_t vreinterpretq_u8_f64(float64x2_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
__ai uint8x16_t vreinterpretq_u8_f32(float32x4_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
__ai uint8x16_t vreinterpretq_u8_f16(float16x8_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
__ai uint8x16_t vreinterpretq_u8_s32(int32x4_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
__ai uint8x16_t vreinterpretq_u8_s64(int64x2_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
__ai uint8x16_t vreinterpretq_u8_s16(int16x8_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t)(__p0);
  return __ret;
}
__ai uint32x4_t vreinterpretq_u32_p8(poly8x16_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
__ai uint32x4_t vreinterpretq_u32_p128(poly128_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
__ai uint32x4_t vreinterpretq_u32_p64(poly64x2_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
__ai uint32x4_t vreinterpretq_u32_p16(poly16x8_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
__ai uint32x4_t vreinterpretq_u32_u8(uint8x16_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
__ai uint32x4_t vreinterpretq_u32_u64(uint64x2_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
__ai uint32x4_t vreinterpretq_u32_u16(uint16x8_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
__ai uint32x4_t vreinterpretq_u32_s8(int8x16_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
__ai uint32x4_t vreinterpretq_u32_f64(float64x2_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
__ai uint32x4_t vreinterpretq_u32_f32(float32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
__ai uint32x4_t vreinterpretq_u32_f16(float16x8_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
__ai uint32x4_t vreinterpretq_u32_s32(int32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
__ai uint32x4_t vreinterpretq_u32_s64(int64x2_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
__ai uint32x4_t vreinterpretq_u32_s16(int16x8_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(__p0);
  return __ret;
}
__ai uint64x2_t vreinterpretq_u64_p8(poly8x16_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
__ai uint64x2_t vreinterpretq_u64_p128(poly128_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
__ai uint64x2_t vreinterpretq_u64_p64(poly64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
__ai uint64x2_t vreinterpretq_u64_p16(poly16x8_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
__ai uint64x2_t vreinterpretq_u64_u8(uint8x16_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
__ai uint64x2_t vreinterpretq_u64_u32(uint32x4_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
__ai uint64x2_t vreinterpretq_u64_u16(uint16x8_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
__ai uint64x2_t vreinterpretq_u64_s8(int8x16_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
__ai uint64x2_t vreinterpretq_u64_f64(float64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
__ai uint64x2_t vreinterpretq_u64_f32(float32x4_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
__ai uint64x2_t vreinterpretq_u64_f16(float16x8_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
__ai uint64x2_t vreinterpretq_u64_s32(int32x4_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
__ai uint64x2_t vreinterpretq_u64_s64(int64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
__ai uint64x2_t vreinterpretq_u64_s16(int16x8_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0);
  return __ret;
}
__ai uint16x8_t vreinterpretq_u16_p8(poly8x16_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
__ai uint16x8_t vreinterpretq_u16_p128(poly128_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
__ai uint16x8_t vreinterpretq_u16_p64(poly64x2_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
__ai uint16x8_t vreinterpretq_u16_p16(poly16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
__ai uint16x8_t vreinterpretq_u16_u8(uint8x16_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
__ai uint16x8_t vreinterpretq_u16_u32(uint32x4_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
__ai uint16x8_t vreinterpretq_u16_u64(uint64x2_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
__ai uint16x8_t vreinterpretq_u16_s8(int8x16_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
__ai uint16x8_t vreinterpretq_u16_f64(float64x2_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
__ai uint16x8_t vreinterpretq_u16_f32(float32x4_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
__ai uint16x8_t vreinterpretq_u16_f16(float16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
__ai uint16x8_t vreinterpretq_u16_s32(int32x4_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
__ai uint16x8_t vreinterpretq_u16_s64(int64x2_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
__ai uint16x8_t vreinterpretq_u16_s16(int16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(__p0);
  return __ret;
}
__ai int8x16_t vreinterpretq_s8_p8(poly8x16_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
__ai int8x16_t vreinterpretq_s8_p128(poly128_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
__ai int8x16_t vreinterpretq_s8_p64(poly64x2_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
__ai int8x16_t vreinterpretq_s8_p16(poly16x8_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
__ai int8x16_t vreinterpretq_s8_u8(uint8x16_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
__ai int8x16_t vreinterpretq_s8_u32(uint32x4_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
__ai int8x16_t vreinterpretq_s8_u64(uint64x2_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
__ai int8x16_t vreinterpretq_s8_u16(uint16x8_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
__ai int8x16_t vreinterpretq_s8_f64(float64x2_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
__ai int8x16_t vreinterpretq_s8_f32(float32x4_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
__ai int8x16_t vreinterpretq_s8_f16(float16x8_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
__ai int8x16_t vreinterpretq_s8_s32(int32x4_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
__ai int8x16_t vreinterpretq_s8_s64(int64x2_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
__ai int8x16_t vreinterpretq_s8_s16(int16x8_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t)(__p0);
  return __ret;
}
__ai float64x2_t vreinterpretq_f64_p8(poly8x16_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t)(__p0);
  return __ret;
}
__ai float64x2_t vreinterpretq_f64_p128(poly128_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t)(__p0);
  return __ret;
}
__ai float64x2_t vreinterpretq_f64_p64(poly64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t)(__p0);
  return __ret;
}
__ai float64x2_t vreinterpretq_f64_p16(poly16x8_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t)(__p0);
  return __ret;
}
__ai float64x2_t vreinterpretq_f64_u8(uint8x16_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t)(__p0);
  return __ret;
}
__ai float64x2_t vreinterpretq_f64_u32(uint32x4_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t)(__p0);
  return __ret;
}
__ai float64x2_t vreinterpretq_f64_u64(uint64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t)(__p0);
  return __ret;
}
__ai float64x2_t vreinterpretq_f64_u16(uint16x8_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t)(__p0);
  return __ret;
}
__ai float64x2_t vreinterpretq_f64_s8(int8x16_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t)(__p0);
  return __ret;
}
__ai float64x2_t vreinterpretq_f64_f32(float32x4_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t)(__p0);
  return __ret;
}
__ai float64x2_t vreinterpretq_f64_f16(float16x8_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t)(__p0);
  return __ret;
}
__ai float64x2_t vreinterpretq_f64_s32(int32x4_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t)(__p0);
  return __ret;
}
__ai float64x2_t vreinterpretq_f64_s64(int64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t)(__p0);
  return __ret;
}
__ai float64x2_t vreinterpretq_f64_s16(int16x8_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t)(__p0);
  return __ret;
}
__ai float32x4_t vreinterpretq_f32_p8(poly8x16_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
__ai float32x4_t vreinterpretq_f32_p128(poly128_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
__ai float32x4_t vreinterpretq_f32_p64(poly64x2_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
__ai float32x4_t vreinterpretq_f32_p16(poly16x8_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
__ai float32x4_t vreinterpretq_f32_u8(uint8x16_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
__ai float32x4_t vreinterpretq_f32_u32(uint32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
__ai float32x4_t vreinterpretq_f32_u64(uint64x2_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
__ai float32x4_t vreinterpretq_f32_u16(uint16x8_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
__ai float32x4_t vreinterpretq_f32_s8(int8x16_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
__ai float32x4_t vreinterpretq_f32_f64(float64x2_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
__ai float32x4_t vreinterpretq_f32_f16(float16x8_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
__ai float32x4_t vreinterpretq_f32_s32(int32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
__ai float32x4_t vreinterpretq_f32_s64(int64x2_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
__ai float32x4_t vreinterpretq_f32_s16(int16x8_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t)(__p0);
  return __ret;
}
__ai float16x8_t vreinterpretq_f16_p8(poly8x16_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
__ai float16x8_t vreinterpretq_f16_p128(poly128_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
__ai float16x8_t vreinterpretq_f16_p64(poly64x2_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
__ai float16x8_t vreinterpretq_f16_p16(poly16x8_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
__ai float16x8_t vreinterpretq_f16_u8(uint8x16_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
__ai float16x8_t vreinterpretq_f16_u32(uint32x4_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
__ai float16x8_t vreinterpretq_f16_u64(uint64x2_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
__ai float16x8_t vreinterpretq_f16_u16(uint16x8_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
__ai float16x8_t vreinterpretq_f16_s8(int8x16_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
__ai float16x8_t vreinterpretq_f16_f64(float64x2_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
__ai float16x8_t vreinterpretq_f16_f32(float32x4_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
__ai float16x8_t vreinterpretq_f16_s32(int32x4_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
__ai float16x8_t vreinterpretq_f16_s64(int64x2_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
__ai float16x8_t vreinterpretq_f16_s16(int16x8_t __p0) {
  float16x8_t __ret;
  __ret = (float16x8_t)(__p0);
  return __ret;
}
__ai int32x4_t vreinterpretq_s32_p8(poly8x16_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
__ai int32x4_t vreinterpretq_s32_p128(poly128_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
__ai int32x4_t vreinterpretq_s32_p64(poly64x2_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
__ai int32x4_t vreinterpretq_s32_p16(poly16x8_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
__ai int32x4_t vreinterpretq_s32_u8(uint8x16_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
__ai int32x4_t vreinterpretq_s32_u32(uint32x4_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
__ai int32x4_t vreinterpretq_s32_u64(uint64x2_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
__ai int32x4_t vreinterpretq_s32_u16(uint16x8_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
__ai int32x4_t vreinterpretq_s32_s8(int8x16_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
__ai int32x4_t vreinterpretq_s32_f64(float64x2_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
__ai int32x4_t vreinterpretq_s32_f32(float32x4_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
__ai int32x4_t vreinterpretq_s32_f16(float16x8_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
__ai int32x4_t vreinterpretq_s32_s64(int64x2_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
__ai int32x4_t vreinterpretq_s32_s16(int16x8_t __p0) {
  int32x4_t __ret;
  __ret = (int32x4_t)(__p0);
  return __ret;
}
__ai int64x2_t vreinterpretq_s64_p8(poly8x16_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
__ai int64x2_t vreinterpretq_s64_p128(poly128_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
__ai int64x2_t vreinterpretq_s64_p64(poly64x2_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
__ai int64x2_t vreinterpretq_s64_p16(poly16x8_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
__ai int64x2_t vreinterpretq_s64_u8(uint8x16_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
__ai int64x2_t vreinterpretq_s64_u32(uint32x4_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
__ai int64x2_t vreinterpretq_s64_u64(uint64x2_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
__ai int64x2_t vreinterpretq_s64_u16(uint16x8_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
__ai int64x2_t vreinterpretq_s64_s8(int8x16_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
__ai int64x2_t vreinterpretq_s64_f64(float64x2_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
__ai int64x2_t vreinterpretq_s64_f32(float32x4_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
__ai int64x2_t vreinterpretq_s64_f16(float16x8_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
__ai int64x2_t vreinterpretq_s64_s32(int32x4_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
__ai int64x2_t vreinterpretq_s64_s16(int16x8_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t)(__p0);
  return __ret;
}
__ai int16x8_t vreinterpretq_s16_p8(poly8x16_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
__ai int16x8_t vreinterpretq_s16_p128(poly128_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
__ai int16x8_t vreinterpretq_s16_p64(poly64x2_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
__ai int16x8_t vreinterpretq_s16_p16(poly16x8_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
__ai int16x8_t vreinterpretq_s16_u8(uint8x16_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
__ai int16x8_t vreinterpretq_s16_u32(uint32x4_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
__ai int16x8_t vreinterpretq_s16_u64(uint64x2_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
__ai int16x8_t vreinterpretq_s16_u16(uint16x8_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
__ai int16x8_t vreinterpretq_s16_s8(int8x16_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
__ai int16x8_t vreinterpretq_s16_f64(float64x2_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
__ai int16x8_t vreinterpretq_s16_f32(float32x4_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
__ai int16x8_t vreinterpretq_s16_f16(float16x8_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
__ai int16x8_t vreinterpretq_s16_s32(int32x4_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
__ai int16x8_t vreinterpretq_s16_s64(int64x2_t __p0) {
  int16x8_t __ret;
  __ret = (int16x8_t)(__p0);
  return __ret;
}
__ai uint8x8_t vreinterpret_u8_p8(poly8x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
__ai uint8x8_t vreinterpret_u8_p64(poly64x1_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
__ai uint8x8_t vreinterpret_u8_p16(poly16x4_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
__ai uint8x8_t vreinterpret_u8_u32(uint32x2_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
__ai uint8x8_t vreinterpret_u8_u64(uint64x1_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
__ai uint8x8_t vreinterpret_u8_u16(uint16x4_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
__ai uint8x8_t vreinterpret_u8_s8(int8x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
__ai uint8x8_t vreinterpret_u8_f64(float64x1_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
__ai uint8x8_t vreinterpret_u8_f32(float32x2_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
__ai uint8x8_t vreinterpret_u8_f16(float16x4_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
__ai uint8x8_t vreinterpret_u8_s32(int32x2_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
__ai uint8x8_t vreinterpret_u8_s64(int64x1_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
__ai uint8x8_t vreinterpret_u8_s16(int16x4_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t)(__p0);
  return __ret;
}
__ai uint32x2_t vreinterpret_u32_p8(poly8x8_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
__ai uint32x2_t vreinterpret_u32_p64(poly64x1_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
__ai uint32x2_t vreinterpret_u32_p16(poly16x4_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
__ai uint32x2_t vreinterpret_u32_u8(uint8x8_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
__ai uint32x2_t vreinterpret_u32_u64(uint64x1_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
__ai uint32x2_t vreinterpret_u32_u16(uint16x4_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
__ai uint32x2_t vreinterpret_u32_s8(int8x8_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
__ai uint32x2_t vreinterpret_u32_f64(float64x1_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
__ai uint32x2_t vreinterpret_u32_f32(float32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
__ai uint32x2_t vreinterpret_u32_f16(float16x4_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
__ai uint32x2_t vreinterpret_u32_s32(int32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
__ai uint32x2_t vreinterpret_u32_s64(int64x1_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
__ai uint32x2_t vreinterpret_u32_s16(int16x4_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t)(__p0);
  return __ret;
}
__ai uint64x1_t vreinterpret_u64_p8(poly8x8_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
__ai uint64x1_t vreinterpret_u64_p64(poly64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
__ai uint64x1_t vreinterpret_u64_p16(poly16x4_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
__ai uint64x1_t vreinterpret_u64_u8(uint8x8_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
__ai uint64x1_t vreinterpret_u64_u32(uint32x2_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
__ai uint64x1_t vreinterpret_u64_u16(uint16x4_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
__ai uint64x1_t vreinterpret_u64_s8(int8x8_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
__ai uint64x1_t vreinterpret_u64_f64(float64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
__ai uint64x1_t vreinterpret_u64_f32(float32x2_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
__ai uint64x1_t vreinterpret_u64_f16(float16x4_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
__ai uint64x1_t vreinterpret_u64_s32(int32x2_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
__ai uint64x1_t vreinterpret_u64_s64(int64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
__ai uint64x1_t vreinterpret_u64_s16(int16x4_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0);
  return __ret;
}
__ai uint16x4_t vreinterpret_u16_p8(poly8x8_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
__ai uint16x4_t vreinterpret_u16_p64(poly64x1_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
__ai uint16x4_t vreinterpret_u16_p16(poly16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
__ai uint16x4_t vreinterpret_u16_u8(uint8x8_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
__ai uint16x4_t vreinterpret_u16_u32(uint32x2_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
__ai uint16x4_t vreinterpret_u16_u64(uint64x1_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
__ai uint16x4_t vreinterpret_u16_s8(int8x8_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
__ai uint16x4_t vreinterpret_u16_f64(float64x1_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
__ai uint16x4_t vreinterpret_u16_f32(float32x2_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
__ai uint16x4_t vreinterpret_u16_f16(float16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
__ai uint16x4_t vreinterpret_u16_s32(int32x2_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
__ai uint16x4_t vreinterpret_u16_s64(int64x1_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
__ai uint16x4_t vreinterpret_u16_s16(int16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t)(__p0);
  return __ret;
}
__ai int8x8_t vreinterpret_s8_p8(poly8x8_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
__ai int8x8_t vreinterpret_s8_p64(poly64x1_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
__ai int8x8_t vreinterpret_s8_p16(poly16x4_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
__ai int8x8_t vreinterpret_s8_u8(uint8x8_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
__ai int8x8_t vreinterpret_s8_u32(uint32x2_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
__ai int8x8_t vreinterpret_s8_u64(uint64x1_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
__ai int8x8_t vreinterpret_s8_u16(uint16x4_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
__ai int8x8_t vreinterpret_s8_f64(float64x1_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
__ai int8x8_t vreinterpret_s8_f32(float32x2_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
__ai int8x8_t vreinterpret_s8_f16(float16x4_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
__ai int8x8_t vreinterpret_s8_s32(int32x2_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
__ai int8x8_t vreinterpret_s8_s64(int64x1_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
__ai int8x8_t vreinterpret_s8_s16(int16x4_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t)(__p0);
  return __ret;
}
__ai float64x1_t vreinterpret_f64_p8(poly8x8_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t)(__p0);
  return __ret;
}
__ai float64x1_t vreinterpret_f64_p64(poly64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t)(__p0);
  return __ret;
}
__ai float64x1_t vreinterpret_f64_p16(poly16x4_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t)(__p0);
  return __ret;
}
__ai float64x1_t vreinterpret_f64_u8(uint8x8_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t)(__p0);
  return __ret;
}
__ai float64x1_t vreinterpret_f64_u32(uint32x2_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t)(__p0);
  return __ret;
}
__ai float64x1_t vreinterpret_f64_u64(uint64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t)(__p0);
  return __ret;
}
__ai float64x1_t vreinterpret_f64_u16(uint16x4_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t)(__p0);
  return __ret;
}
__ai float64x1_t vreinterpret_f64_s8(int8x8_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t)(__p0);
  return __ret;
}
__ai float64x1_t vreinterpret_f64_f32(float32x2_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t)(__p0);
  return __ret;
}
__ai float64x1_t vreinterpret_f64_f16(float16x4_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t)(__p0);
  return __ret;
}
__ai float64x1_t vreinterpret_f64_s32(int32x2_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t)(__p0);
  return __ret;
}
__ai float64x1_t vreinterpret_f64_s64(int64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t)(__p0);
  return __ret;
}
__ai float64x1_t vreinterpret_f64_s16(int16x4_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t)(__p0);
  return __ret;
}
__ai float32x2_t vreinterpret_f32_p8(poly8x8_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
__ai float32x2_t vreinterpret_f32_p64(poly64x1_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
__ai float32x2_t vreinterpret_f32_p16(poly16x4_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
__ai float32x2_t vreinterpret_f32_u8(uint8x8_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
__ai float32x2_t vreinterpret_f32_u32(uint32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
__ai float32x2_t vreinterpret_f32_u64(uint64x1_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
__ai float32x2_t vreinterpret_f32_u16(uint16x4_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
__ai float32x2_t vreinterpret_f32_s8(int8x8_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
__ai float32x2_t vreinterpret_f32_f64(float64x1_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
__ai float32x2_t vreinterpret_f32_f16(float16x4_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
__ai float32x2_t vreinterpret_f32_s32(int32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
__ai float32x2_t vreinterpret_f32_s64(int64x1_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
__ai float32x2_t vreinterpret_f32_s16(int16x4_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t)(__p0);
  return __ret;
}
__ai float16x4_t vreinterpret_f16_p8(poly8x8_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
__ai float16x4_t vreinterpret_f16_p64(poly64x1_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
__ai float16x4_t vreinterpret_f16_p16(poly16x4_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
__ai float16x4_t vreinterpret_f16_u8(uint8x8_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
__ai float16x4_t vreinterpret_f16_u32(uint32x2_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
__ai float16x4_t vreinterpret_f16_u64(uint64x1_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
__ai float16x4_t vreinterpret_f16_u16(uint16x4_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
__ai float16x4_t vreinterpret_f16_s8(int8x8_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
__ai float16x4_t vreinterpret_f16_f64(float64x1_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
__ai float16x4_t vreinterpret_f16_f32(float32x2_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
__ai float16x4_t vreinterpret_f16_s32(int32x2_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
__ai float16x4_t vreinterpret_f16_s64(int64x1_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
__ai float16x4_t vreinterpret_f16_s16(int16x4_t __p0) {
  float16x4_t __ret;
  __ret = (float16x4_t)(__p0);
  return __ret;
}
__ai int32x2_t vreinterpret_s32_p8(poly8x8_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
__ai int32x2_t vreinterpret_s32_p64(poly64x1_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
__ai int32x2_t vreinterpret_s32_p16(poly16x4_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
__ai int32x2_t vreinterpret_s32_u8(uint8x8_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
__ai int32x2_t vreinterpret_s32_u32(uint32x2_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
__ai int32x2_t vreinterpret_s32_u64(uint64x1_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
__ai int32x2_t vreinterpret_s32_u16(uint16x4_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
__ai int32x2_t vreinterpret_s32_s8(int8x8_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
__ai int32x2_t vreinterpret_s32_f64(float64x1_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
__ai int32x2_t vreinterpret_s32_f32(float32x2_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
__ai int32x2_t vreinterpret_s32_f16(float16x4_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
__ai int32x2_t vreinterpret_s32_s64(int64x1_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
__ai int32x2_t vreinterpret_s32_s16(int16x4_t __p0) {
  int32x2_t __ret;
  __ret = (int32x2_t)(__p0);
  return __ret;
}
__ai int64x1_t vreinterpret_s64_p8(poly8x8_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
__ai int64x1_t vreinterpret_s64_p64(poly64x1_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
__ai int64x1_t vreinterpret_s64_p16(poly16x4_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
__ai int64x1_t vreinterpret_s64_u8(uint8x8_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
__ai int64x1_t vreinterpret_s64_u32(uint32x2_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
__ai int64x1_t vreinterpret_s64_u64(uint64x1_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
__ai int64x1_t vreinterpret_s64_u16(uint16x4_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
__ai int64x1_t vreinterpret_s64_s8(int8x8_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
__ai int64x1_t vreinterpret_s64_f64(float64x1_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
__ai int64x1_t vreinterpret_s64_f32(float32x2_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
__ai int64x1_t vreinterpret_s64_f16(float16x4_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
__ai int64x1_t vreinterpret_s64_s32(int32x2_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
__ai int64x1_t vreinterpret_s64_s16(int16x4_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t)(__p0);
  return __ret;
}
__ai int16x4_t vreinterpret_s16_p8(poly8x8_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
__ai int16x4_t vreinterpret_s16_p64(poly64x1_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
__ai int16x4_t vreinterpret_s16_p16(poly16x4_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
__ai int16x4_t vreinterpret_s16_u8(uint8x8_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
__ai int16x4_t vreinterpret_s16_u32(uint32x2_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
__ai int16x4_t vreinterpret_s16_u64(uint64x1_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
__ai int16x4_t vreinterpret_s16_u16(uint16x4_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
__ai int16x4_t vreinterpret_s16_s8(int8x8_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
__ai int16x4_t vreinterpret_s16_f64(float64x1_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
__ai int16x4_t vreinterpret_s16_f32(float32x2_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
__ai int16x4_t vreinterpret_s16_f16(float16x4_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
__ai int16x4_t vreinterpret_s16_s32(int32x2_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
__ai int16x4_t vreinterpret_s16_s64(int64x1_t __p0) {
  int16x4_t __ret;
  __ret = (int16x4_t)(__p0);
  return __ret;
}
#endif
#if __ARM_FEATURE_CRYPTO
__ai uint8x16_t vaesdq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vaesdq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
__ai uint8x16_t vaeseq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vaeseq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
__ai uint8x16_t vaesimcq_u8(uint8x16_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vaesimcq_v((int8x16_t)__p0, 48);
  return __ret;
}
__ai uint8x16_t vaesmcq_u8(uint8x16_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vaesmcq_v((int8x16_t)__p0, 48);
  return __ret;
}
__ai uint32x4_t vsha1cq_u32(uint32x4_t __p0, uint32_t __p1, uint32x4_t __p2) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vsha1cq_u32((int8x16_t)__p0, __p1, (int8x16_t)__p2);
  return __ret;
}
__ai uint32_t vsha1h_u32(uint32_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vsha1h_u32(__p0);
  return __ret;
}
__ai uint32x4_t vsha1mq_u32(uint32x4_t __p0, uint32_t __p1, uint32x4_t __p2) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vsha1mq_u32((int8x16_t)__p0, __p1, (int8x16_t)__p2);
  return __ret;
}
__ai uint32x4_t vsha1pq_u32(uint32x4_t __p0, uint32_t __p1, uint32x4_t __p2) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vsha1pq_u32((int8x16_t)__p0, __p1, (int8x16_t)__p2);
  return __ret;
}
__ai uint32x4_t vsha1su0q_u32(uint32x4_t __p0, uint32x4_t __p1, uint32x4_t __p2) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vsha1su0q_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 50);
  return __ret;
}
__ai uint32x4_t vsha1su1q_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vsha1su1q_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
__ai uint32x4_t vsha256hq_u32(uint32x4_t __p0, uint32x4_t __p1, uint32x4_t __p2) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vsha256hq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 50);
  return __ret;
}
__ai uint32x4_t vsha256h2q_u32(uint32x4_t __p0, uint32x4_t __p1, uint32x4_t __p2) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vsha256h2q_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 50);
  return __ret;
}
__ai uint32x4_t vsha256su0q_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vsha256su0q_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
__ai uint32x4_t vsha256su1q_u32(uint32x4_t __p0, uint32x4_t __p1, uint32x4_t __p2) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vsha256su1q_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 50);
  return __ret;
}
#endif
#if defined(__aarch64__)
__ai float64x2_t vabdq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vabdq_v((int8x16_t)__p0, (int8x16_t)__p1, 42);
  return __ret;
}
__ai float64x1_t vabd_f64(float64x1_t __p0, float64x1_t __p1) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vabd_v((int8x8_t)__p0, (int8x8_t)__p1, 10);
  return __ret;
}
__ai float64_t vabdd_f64(float64_t __p0, float64_t __p1) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vabdd_f64(__p0, __p1);
  return __ret;
}
__ai float32_t vabds_f32(float32_t __p0, float32_t __p1) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vabds_f32(__p0, __p1);
  return __ret;
}
__ai float64x2_t vabsq_f64(float64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vabsq_v((int8x16_t)__p0, 42);
  return __ret;
}
__ai int64x2_t vabsq_s64(int64x2_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vabsq_v((int8x16_t)__p0, 35);
  return __ret;
}
__ai float64x1_t vabs_f64(float64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vabs_v((int8x8_t)__p0, 10);
  return __ret;
}
__ai int64x1_t vabs_s64(int64x1_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vabs_v((int8x8_t)__p0, 3);
  return __ret;
}
__ai int64_t vabsd_s64(int64_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vabsd_s64(__p0);
  return __ret;
}
__ai float64x2_t vaddq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
__ai float64x1_t vadd_f64(float64x1_t __p0, float64x1_t __p1) {
  float64x1_t __ret;
  __ret = __p0 + __p1;
  return __ret;
}
__ai uint64_t vaddd_u64(uint64_t __p0, uint64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vaddd_u64(__p0, __p1);
  return __ret;
}
__ai int64_t vaddd_s64(int64_t __p0, int64_t __p1) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vaddd_s64(__p0, __p1);
  return __ret;
}
__ai uint16x8_t vaddhn_high_u32(uint16x4_t __p0, uint32x4_t __p1, uint32x4_t __p2) {
  uint16x8_t __ret;
  __ret = vcombine_u16(__p0, vaddhn_u32(__p1, __p2));
  return __ret;
}
__ai uint32x4_t vaddhn_high_u64(uint32x2_t __p0, uint64x2_t __p1, uint64x2_t __p2) {
  uint32x4_t __ret;
  __ret = vcombine_u32(__p0, vaddhn_u64(__p1, __p2));
  return __ret;
}
__ai uint8x16_t vaddhn_high_u16(uint8x8_t __p0, uint16x8_t __p1, uint16x8_t __p2) {
  uint8x16_t __ret;
  __ret = vcombine_u8(__p0, vaddhn_u16(__p1, __p2));
  return __ret;
}
__ai int16x8_t vaddhn_high_s32(int16x4_t __p0, int32x4_t __p1, int32x4_t __p2) {
  int16x8_t __ret;
  __ret = vcombine_s16(__p0, vaddhn_s32(__p1, __p2));
  return __ret;
}
__ai int32x4_t vaddhn_high_s64(int32x2_t __p0, int64x2_t __p1, int64x2_t __p2) {
  int32x4_t __ret;
  __ret = vcombine_s32(__p0, vaddhn_s64(__p1, __p2));
  return __ret;
}
__ai int8x16_t vaddhn_high_s16(int8x8_t __p0, int16x8_t __p1, int16x8_t __p2) {
  int8x16_t __ret;
  __ret = vcombine_s8(__p0, vaddhn_s16(__p1, __p2));
  return __ret;
}
__ai uint16_t vaddlvq_u8(uint8x16_t __p0) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vaddlvq_u8((int8x16_t)__p0);
  return __ret;
}
__ai uint64_t vaddlvq_u32(uint32x4_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vaddlvq_u32((int8x16_t)__p0);
  return __ret;
}
__ai uint32_t vaddlvq_u16(uint16x8_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vaddlvq_u16((int8x16_t)__p0);
  return __ret;
}
__ai int16_t vaddlvq_s8(int8x16_t __p0) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vaddlvq_s8((int8x16_t)__p0);
  return __ret;
}
__ai int64_t vaddlvq_s32(int32x4_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vaddlvq_s32((int8x16_t)__p0);
  return __ret;
}
__ai int32_t vaddlvq_s16(int16x8_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vaddlvq_s16((int8x16_t)__p0);
  return __ret;
}
__ai uint16_t vaddlv_u8(uint8x8_t __p0) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vaddlv_u8((int8x8_t)__p0);
  return __ret;
}
__ai uint64_t vaddlv_u32(uint32x2_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vaddlv_u32((int8x8_t)__p0);
  return __ret;
}
__ai uint32_t vaddlv_u16(uint16x4_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vaddlv_u16((int8x8_t)__p0);
  return __ret;
}
__ai int16_t vaddlv_s8(int8x8_t __p0) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vaddlv_s8((int8x8_t)__p0);
  return __ret;
}
__ai int64_t vaddlv_s32(int32x2_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vaddlv_s32((int8x8_t)__p0);
  return __ret;
}
__ai int32_t vaddlv_s16(int16x4_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vaddlv_s16((int8x8_t)__p0);
  return __ret;
}
__ai uint8_t vaddvq_u8(uint8x16_t __p0) {
  uint8_t __ret;
  __ret = (uint8_t) __builtin_neon_vaddvq_u8((int8x16_t)__p0);
  return __ret;
}
__ai uint32_t vaddvq_u32(uint32x4_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vaddvq_u32((int8x16_t)__p0);
  return __ret;
}
__ai uint64_t vaddvq_u64(uint64x2_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vaddvq_u64((int8x16_t)__p0);
  return __ret;
}
__ai uint16_t vaddvq_u16(uint16x8_t __p0) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vaddvq_u16((int8x16_t)__p0);
  return __ret;
}
__ai int8_t vaddvq_s8(int8x16_t __p0) {
  int8_t __ret;
  __ret = (int8_t) __builtin_neon_vaddvq_s8((int8x16_t)__p0);
  return __ret;
}
__ai float64_t vaddvq_f64(float64x2_t __p0) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vaddvq_f64((int8x16_t)__p0);
  return __ret;
}
__ai float32_t vaddvq_f32(float32x4_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vaddvq_f32((int8x16_t)__p0);
  return __ret;
}
__ai int32_t vaddvq_s32(int32x4_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vaddvq_s32((int8x16_t)__p0);
  return __ret;
}
__ai int64_t vaddvq_s64(int64x2_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vaddvq_s64((int8x16_t)__p0);
  return __ret;
}
__ai int16_t vaddvq_s16(int16x8_t __p0) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vaddvq_s16((int8x16_t)__p0);
  return __ret;
}
__ai uint8_t vaddv_u8(uint8x8_t __p0) {
  uint8_t __ret;
  __ret = (uint8_t) __builtin_neon_vaddv_u8((int8x8_t)__p0);
  return __ret;
}
__ai uint32_t vaddv_u32(uint32x2_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vaddv_u32((int8x8_t)__p0);
  return __ret;
}
__ai uint16_t vaddv_u16(uint16x4_t __p0) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vaddv_u16((int8x8_t)__p0);
  return __ret;
}
__ai int8_t vaddv_s8(int8x8_t __p0) {
  int8_t __ret;
  __ret = (int8_t) __builtin_neon_vaddv_s8((int8x8_t)__p0);
  return __ret;
}
__ai float32_t vaddv_f32(float32x2_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vaddv_f32((int8x8_t)__p0);
  return __ret;
}
__ai int32_t vaddv_s32(int32x2_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vaddv_s32((int8x8_t)__p0);
  return __ret;
}
__ai int16_t vaddv_s16(int16x4_t __p0) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vaddv_s16((int8x8_t)__p0);
  return __ret;
}
__ai poly64x1_t vbsl_p64(uint64x1_t __p0, poly64x1_t __p1, poly64x1_t __p2) {
  poly64x1_t __ret;
  __ret = (poly64x1_t) __builtin_neon_vbsl_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 6);
  return __ret;
}
__ai poly64x2_t vbslq_p64(uint64x2_t __p0, poly64x2_t __p1, poly64x2_t __p2) {
  poly64x2_t __ret;
  __ret = (poly64x2_t) __builtin_neon_vbslq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 38);
  return __ret;
}
__ai float64x2_t vbslq_f64(uint64x2_t __p0, float64x2_t __p1, float64x2_t __p2) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vbslq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 42);
  return __ret;
}
__ai float64x1_t vbsl_f64(uint64x1_t __p0, float64x1_t __p1, float64x1_t __p2) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vbsl_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 10);
  return __ret;
}
__ai uint64x2_t vcageq_f64(float64x2_t __p0, float64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vcageq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
__ai uint64x1_t vcage_f64(float64x1_t __p0, float64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vcage_v((int8x8_t)__p0, (int8x8_t)__p1, 19);
  return __ret;
}
__ai uint64_t vcaged_f64(float64_t __p0, float64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcaged_f64(__p0, __p1);
  return __ret;
}
__ai uint32_t vcages_f32(float32_t __p0, float32_t __p1) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcages_f32(__p0, __p1);
  return __ret;
}
__ai uint64x2_t vcagtq_f64(float64x2_t __p0, float64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vcagtq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
__ai uint64x1_t vcagt_f64(float64x1_t __p0, float64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vcagt_v((int8x8_t)__p0, (int8x8_t)__p1, 19);
  return __ret;
}
__ai uint64_t vcagtd_f64(float64_t __p0, float64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcagtd_f64(__p0, __p1);
  return __ret;
}
__ai uint32_t vcagts_f32(float32_t __p0, float32_t __p1) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcagts_f32(__p0, __p1);
  return __ret;
}
__ai uint64x2_t vcaleq_f64(float64x2_t __p0, float64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vcaleq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
__ai uint64x1_t vcale_f64(float64x1_t __p0, float64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vcale_v((int8x8_t)__p0, (int8x8_t)__p1, 19);
  return __ret;
}
__ai uint64_t vcaled_f64(float64_t __p0, float64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcaled_f64(__p0, __p1);
  return __ret;
}
__ai uint32_t vcales_f32(float32_t __p0, float32_t __p1) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcales_f32(__p0, __p1);
  return __ret;
}
__ai uint64x2_t vcaltq_f64(float64x2_t __p0, float64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vcaltq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
__ai uint64x1_t vcalt_f64(float64x1_t __p0, float64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vcalt_v((int8x8_t)__p0, (int8x8_t)__p1, 19);
  return __ret;
}
__ai uint64_t vcaltd_f64(float64_t __p0, float64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcaltd_f64(__p0, __p1);
  return __ret;
}
__ai uint32_t vcalts_f32(float32_t __p0, float32_t __p1) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcalts_f32(__p0, __p1);
  return __ret;
}
__ai uint64x1_t vceq_p64(poly64x1_t __p0, poly64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 == __p1);
  return __ret;
}
__ai uint64x2_t vceqq_p64(poly64x2_t __p0, poly64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 == __p1);
  return __ret;
}
__ai uint64x2_t vceqq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 == __p1);
  return __ret;
}
__ai uint64x2_t vceqq_f64(float64x2_t __p0, float64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 == __p1);
  return __ret;
}
__ai uint64x2_t vceqq_s64(int64x2_t __p0, int64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 == __p1);
  return __ret;
}
__ai uint64x1_t vceq_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 == __p1);
  return __ret;
}
__ai uint64x1_t vceq_f64(float64x1_t __p0, float64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 == __p1);
  return __ret;
}
__ai uint64x1_t vceq_s64(int64x1_t __p0, int64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 == __p1);
  return __ret;
}
__ai uint64_t vceqd_u64(uint64_t __p0, uint64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vceqd_u64(__p0, __p1);
  return __ret;
}
__ai int64_t vceqd_s64(int64_t __p0, int64_t __p1) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vceqd_s64(__p0, __p1);
  return __ret;
}
__ai uint64_t vceqd_f64(float64_t __p0, float64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vceqd_f64(__p0, __p1);
  return __ret;
}
__ai uint32_t vceqs_f32(float32_t __p0, float32_t __p1) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vceqs_f32(__p0, __p1);
  return __ret;
}
__ai uint8x8_t vceqz_p8(poly8x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vceqz_v((int8x8_t)__p0, 16);
  return __ret;
}
__ai uint64x1_t vceqz_p64(poly64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vceqz_v((int8x8_t)__p0, 19);
  return __ret;
}
__ai uint16x4_t vceqz_p16(poly16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vceqz_v((int8x8_t)__p0, 17);
  return __ret;
}
__ai uint8x16_t vceqzq_p8(poly8x16_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vceqzq_v((int8x16_t)__p0, 48);
  return __ret;
}
__ai uint64x2_t vceqzq_p64(poly64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vceqzq_v((int8x16_t)__p0, 51);
  return __ret;
}
__ai uint16x8_t vceqzq_p16(poly16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vceqzq_v((int8x16_t)__p0, 49);
  return __ret;
}
__ai uint8x16_t vceqzq_u8(uint8x16_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vceqzq_v((int8x16_t)__p0, 48);
  return __ret;
}
__ai uint32x4_t vceqzq_u32(uint32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vceqzq_v((int8x16_t)__p0, 50);
  return __ret;
}
__ai uint64x2_t vceqzq_u64(uint64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vceqzq_v((int8x16_t)__p0, 51);
  return __ret;
}
__ai uint16x8_t vceqzq_u16(uint16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vceqzq_v((int8x16_t)__p0, 49);
  return __ret;
}
__ai uint8x16_t vceqzq_s8(int8x16_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vceqzq_v((int8x16_t)__p0, 48);
  return __ret;
}
__ai uint64x2_t vceqzq_f64(float64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vceqzq_v((int8x16_t)__p0, 51);
  return __ret;
}
__ai uint32x4_t vceqzq_f32(float32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vceqzq_v((int8x16_t)__p0, 50);
  return __ret;
}
__ai uint32x4_t vceqzq_s32(int32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vceqzq_v((int8x16_t)__p0, 50);
  return __ret;
}
__ai uint64x2_t vceqzq_s64(int64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vceqzq_v((int8x16_t)__p0, 51);
  return __ret;
}
__ai uint16x8_t vceqzq_s16(int16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vceqzq_v((int8x16_t)__p0, 49);
  return __ret;
}
__ai uint8x8_t vceqz_u8(uint8x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vceqz_v((int8x8_t)__p0, 16);
  return __ret;
}
__ai uint32x2_t vceqz_u32(uint32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vceqz_v((int8x8_t)__p0, 18);
  return __ret;
}
__ai uint64x1_t vceqz_u64(uint64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vceqz_v((int8x8_t)__p0, 19);
  return __ret;
}
__ai uint16x4_t vceqz_u16(uint16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vceqz_v((int8x8_t)__p0, 17);
  return __ret;
}
__ai uint8x8_t vceqz_s8(int8x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vceqz_v((int8x8_t)__p0, 16);
  return __ret;
}
__ai uint64x1_t vceqz_f64(float64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vceqz_v((int8x8_t)__p0, 19);
  return __ret;
}
__ai uint32x2_t vceqz_f32(float32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vceqz_v((int8x8_t)__p0, 18);
  return __ret;
}
__ai uint32x2_t vceqz_s32(int32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vceqz_v((int8x8_t)__p0, 18);
  return __ret;
}
__ai uint64x1_t vceqz_s64(int64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vceqz_v((int8x8_t)__p0, 19);
  return __ret;
}
__ai uint16x4_t vceqz_s16(int16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vceqz_v((int8x8_t)__p0, 17);
  return __ret;
}
__ai uint64_t vceqzd_u64(uint64_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vceqzd_u64(__p0);
  return __ret;
}
__ai int64_t vceqzd_s64(int64_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vceqzd_s64(__p0);
  return __ret;
}
__ai uint64_t vceqzd_f64(float64_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vceqzd_f64(__p0);
  return __ret;
}
__ai uint32_t vceqzs_f32(float32_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vceqzs_f32(__p0);
  return __ret;
}
__ai uint64x2_t vcgeq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 >= __p1);
  return __ret;
}
__ai uint64x2_t vcgeq_f64(float64x2_t __p0, float64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 >= __p1);
  return __ret;
}
__ai uint64x2_t vcgeq_s64(int64x2_t __p0, int64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 >= __p1);
  return __ret;
}
__ai uint64x1_t vcge_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 >= __p1);
  return __ret;
}
__ai uint64x1_t vcge_f64(float64x1_t __p0, float64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 >= __p1);
  return __ret;
}
__ai uint64x1_t vcge_s64(int64x1_t __p0, int64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 >= __p1);
  return __ret;
}
__ai int64_t vcged_s64(int64_t __p0, int64_t __p1) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vcged_s64(__p0, __p1);
  return __ret;
}
__ai uint64_t vcged_u64(uint64_t __p0, uint64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcged_u64(__p0, __p1);
  return __ret;
}
__ai uint64_t vcged_f64(float64_t __p0, float64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcged_f64(__p0, __p1);
  return __ret;
}
__ai uint32_t vcges_f32(float32_t __p0, float32_t __p1) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcges_f32(__p0, __p1);
  return __ret;
}
__ai uint8x16_t vcgezq_s8(int8x16_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vcgezq_v((int8x16_t)__p0, 48);
  return __ret;
}
__ai uint64x2_t vcgezq_f64(float64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vcgezq_v((int8x16_t)__p0, 51);
  return __ret;
}
__ai uint32x4_t vcgezq_f32(float32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vcgezq_v((int8x16_t)__p0, 50);
  return __ret;
}
__ai uint32x4_t vcgezq_s32(int32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vcgezq_v((int8x16_t)__p0, 50);
  return __ret;
}
__ai uint64x2_t vcgezq_s64(int64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vcgezq_v((int8x16_t)__p0, 51);
  return __ret;
}
__ai uint16x8_t vcgezq_s16(int16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vcgezq_v((int8x16_t)__p0, 49);
  return __ret;
}
__ai uint8x8_t vcgez_s8(int8x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vcgez_v((int8x8_t)__p0, 16);
  return __ret;
}
__ai uint64x1_t vcgez_f64(float64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vcgez_v((int8x8_t)__p0, 19);
  return __ret;
}
__ai uint32x2_t vcgez_f32(float32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vcgez_v((int8x8_t)__p0, 18);
  return __ret;
}
__ai uint32x2_t vcgez_s32(int32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vcgez_v((int8x8_t)__p0, 18);
  return __ret;
}
__ai uint64x1_t vcgez_s64(int64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vcgez_v((int8x8_t)__p0, 19);
  return __ret;
}
__ai uint16x4_t vcgez_s16(int16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vcgez_v((int8x8_t)__p0, 17);
  return __ret;
}
__ai int64_t vcgezd_s64(int64_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vcgezd_s64(__p0);
  return __ret;
}
__ai uint64_t vcgezd_f64(float64_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcgezd_f64(__p0);
  return __ret;
}
__ai uint32_t vcgezs_f32(float32_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcgezs_f32(__p0);
  return __ret;
}
__ai uint64x2_t vcgtq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 > __p1);
  return __ret;
}
__ai uint64x2_t vcgtq_f64(float64x2_t __p0, float64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 > __p1);
  return __ret;
}
__ai uint64x2_t vcgtq_s64(int64x2_t __p0, int64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 > __p1);
  return __ret;
}
__ai uint64x1_t vcgt_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 > __p1);
  return __ret;
}
__ai uint64x1_t vcgt_f64(float64x1_t __p0, float64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 > __p1);
  return __ret;
}
__ai uint64x1_t vcgt_s64(int64x1_t __p0, int64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 > __p1);
  return __ret;
}
__ai int64_t vcgtd_s64(int64_t __p0, int64_t __p1) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vcgtd_s64(__p0, __p1);
  return __ret;
}
__ai uint64_t vcgtd_u64(uint64_t __p0, uint64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcgtd_u64(__p0, __p1);
  return __ret;
}
__ai uint64_t vcgtd_f64(float64_t __p0, float64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcgtd_f64(__p0, __p1);
  return __ret;
}
__ai uint32_t vcgts_f32(float32_t __p0, float32_t __p1) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcgts_f32(__p0, __p1);
  return __ret;
}
__ai uint8x16_t vcgtzq_s8(int8x16_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vcgtzq_v((int8x16_t)__p0, 48);
  return __ret;
}
__ai uint64x2_t vcgtzq_f64(float64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vcgtzq_v((int8x16_t)__p0, 51);
  return __ret;
}
__ai uint32x4_t vcgtzq_f32(float32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vcgtzq_v((int8x16_t)__p0, 50);
  return __ret;
}
__ai uint32x4_t vcgtzq_s32(int32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vcgtzq_v((int8x16_t)__p0, 50);
  return __ret;
}
__ai uint64x2_t vcgtzq_s64(int64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vcgtzq_v((int8x16_t)__p0, 51);
  return __ret;
}
__ai uint16x8_t vcgtzq_s16(int16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vcgtzq_v((int8x16_t)__p0, 49);
  return __ret;
}
__ai uint8x8_t vcgtz_s8(int8x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vcgtz_v((int8x8_t)__p0, 16);
  return __ret;
}
__ai uint64x1_t vcgtz_f64(float64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vcgtz_v((int8x8_t)__p0, 19);
  return __ret;
}
__ai uint32x2_t vcgtz_f32(float32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vcgtz_v((int8x8_t)__p0, 18);
  return __ret;
}
__ai uint32x2_t vcgtz_s32(int32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vcgtz_v((int8x8_t)__p0, 18);
  return __ret;
}
__ai uint64x1_t vcgtz_s64(int64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vcgtz_v((int8x8_t)__p0, 19);
  return __ret;
}
__ai uint16x4_t vcgtz_s16(int16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vcgtz_v((int8x8_t)__p0, 17);
  return __ret;
}
__ai int64_t vcgtzd_s64(int64_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vcgtzd_s64(__p0);
  return __ret;
}
__ai uint64_t vcgtzd_f64(float64_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcgtzd_f64(__p0);
  return __ret;
}
__ai uint32_t vcgtzs_f32(float32_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcgtzs_f32(__p0);
  return __ret;
}
__ai uint64x2_t vcleq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 <= __p1);
  return __ret;
}
__ai uint64x2_t vcleq_f64(float64x2_t __p0, float64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 <= __p1);
  return __ret;
}
__ai uint64x2_t vcleq_s64(int64x2_t __p0, int64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 <= __p1);
  return __ret;
}
__ai uint64x1_t vcle_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 <= __p1);
  return __ret;
}
__ai uint64x1_t vcle_f64(float64x1_t __p0, float64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 <= __p1);
  return __ret;
}
__ai uint64x1_t vcle_s64(int64x1_t __p0, int64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 <= __p1);
  return __ret;
}
__ai uint64_t vcled_u64(uint64_t __p0, uint64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcled_u64(__p0, __p1);
  return __ret;
}
__ai int64_t vcled_s64(int64_t __p0, int64_t __p1) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vcled_s64(__p0, __p1);
  return __ret;
}
__ai uint64_t vcled_f64(float64_t __p0, float64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcled_f64(__p0, __p1);
  return __ret;
}
__ai uint32_t vcles_f32(float32_t __p0, float32_t __p1) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcles_f32(__p0, __p1);
  return __ret;
}
__ai uint8x16_t vclezq_s8(int8x16_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vclezq_v((int8x16_t)__p0, 48);
  return __ret;
}
__ai uint64x2_t vclezq_f64(float64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vclezq_v((int8x16_t)__p0, 51);
  return __ret;
}
__ai uint32x4_t vclezq_f32(float32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vclezq_v((int8x16_t)__p0, 50);
  return __ret;
}
__ai uint32x4_t vclezq_s32(int32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vclezq_v((int8x16_t)__p0, 50);
  return __ret;
}
__ai uint64x2_t vclezq_s64(int64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vclezq_v((int8x16_t)__p0, 51);
  return __ret;
}
__ai uint16x8_t vclezq_s16(int16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vclezq_v((int8x16_t)__p0, 49);
  return __ret;
}
__ai uint8x8_t vclez_s8(int8x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vclez_v((int8x8_t)__p0, 16);
  return __ret;
}
__ai uint64x1_t vclez_f64(float64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vclez_v((int8x8_t)__p0, 19);
  return __ret;
}
__ai uint32x2_t vclez_f32(float32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vclez_v((int8x8_t)__p0, 18);
  return __ret;
}
__ai uint32x2_t vclez_s32(int32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vclez_v((int8x8_t)__p0, 18);
  return __ret;
}
__ai uint64x1_t vclez_s64(int64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vclez_v((int8x8_t)__p0, 19);
  return __ret;
}
__ai uint16x4_t vclez_s16(int16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vclez_v((int8x8_t)__p0, 17);
  return __ret;
}
__ai int64_t vclezd_s64(int64_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vclezd_s64(__p0);
  return __ret;
}
__ai uint64_t vclezd_f64(float64_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vclezd_f64(__p0);
  return __ret;
}
__ai uint32_t vclezs_f32(float32_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vclezs_f32(__p0);
  return __ret;
}
__ai uint64x2_t vcltq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 < __p1);
  return __ret;
}
__ai uint64x2_t vcltq_f64(float64x2_t __p0, float64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 < __p1);
  return __ret;
}
__ai uint64x2_t vcltq_s64(int64x2_t __p0, int64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(__p0 < __p1);
  return __ret;
}
__ai uint64x1_t vclt_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 < __p1);
  return __ret;
}
__ai uint64x1_t vclt_f64(float64x1_t __p0, float64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 < __p1);
  return __ret;
}
__ai uint64x1_t vclt_s64(int64x1_t __p0, int64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t)(__p0 < __p1);
  return __ret;
}
__ai uint64_t vcltd_u64(uint64_t __p0, uint64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcltd_u64(__p0, __p1);
  return __ret;
}
__ai int64_t vcltd_s64(int64_t __p0, int64_t __p1) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vcltd_s64(__p0, __p1);
  return __ret;
}
__ai uint64_t vcltd_f64(float64_t __p0, float64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcltd_f64(__p0, __p1);
  return __ret;
}
__ai uint32_t vclts_f32(float32_t __p0, float32_t __p1) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vclts_f32(__p0, __p1);
  return __ret;
}
__ai uint8x16_t vcltzq_s8(int8x16_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vcltzq_v((int8x16_t)__p0, 48);
  return __ret;
}
__ai uint64x2_t vcltzq_f64(float64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vcltzq_v((int8x16_t)__p0, 51);
  return __ret;
}
__ai uint32x4_t vcltzq_f32(float32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vcltzq_v((int8x16_t)__p0, 50);
  return __ret;
}
__ai uint32x4_t vcltzq_s32(int32x4_t __p0) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vcltzq_v((int8x16_t)__p0, 50);
  return __ret;
}
__ai uint64x2_t vcltzq_s64(int64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vcltzq_v((int8x16_t)__p0, 51);
  return __ret;
}
__ai uint16x8_t vcltzq_s16(int16x8_t __p0) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vcltzq_v((int8x16_t)__p0, 49);
  return __ret;
}
__ai uint8x8_t vcltz_s8(int8x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vcltz_v((int8x8_t)__p0, 16);
  return __ret;
}
__ai uint64x1_t vcltz_f64(float64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vcltz_v((int8x8_t)__p0, 19);
  return __ret;
}
__ai uint32x2_t vcltz_f32(float32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vcltz_v((int8x8_t)__p0, 18);
  return __ret;
}
__ai uint32x2_t vcltz_s32(int32x2_t __p0) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vcltz_v((int8x8_t)__p0, 18);
  return __ret;
}
__ai uint64x1_t vcltz_s64(int64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vcltz_v((int8x8_t)__p0, 19);
  return __ret;
}
__ai uint16x4_t vcltz_s16(int16x4_t __p0) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vcltz_v((int8x8_t)__p0, 17);
  return __ret;
}
__ai int64_t vcltzd_s64(int64_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vcltzd_s64(__p0);
  return __ret;
}
__ai uint64_t vcltzd_f64(float64_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcltzd_f64(__p0);
  return __ret;
}
__ai uint32_t vcltzs_f32(float32_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcltzs_f32(__p0);
  return __ret;
}
__ai poly64x2_t vcombine_p64(poly64x1_t __p0, poly64x1_t __p1) {
  poly64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 1);
  return __ret;
}
__ai float64x2_t vcombine_f64(float64x1_t __p0, float64x1_t __p1) {
  float64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 1);
  return __ret;
}
#define vcopyq_lane_p8(__p0_0, __p1_0, __p2_0, __p3_0) __extension__ ({ \
  poly8x16_t __s0_0 = __p0_0; \
  poly8x8_t __s2_0 = __p2_0; \
  poly8x16_t __ret_0; \
  __ret_0 = vsetq_lane_p8(vget_lane_p8(__s2_0, __p3_0), __s0_0, __p1_0); \
  __ret_0; \
})
#define vcopyq_lane_p16(__p0_1, __p1_1, __p2_1, __p3_1) __extension__ ({ \
  poly16x8_t __s0_1 = __p0_1; \
  poly16x4_t __s2_1 = __p2_1; \
  poly16x8_t __ret_1; \
  __ret_1 = vsetq_lane_p16(vget_lane_p16(__s2_1, __p3_1), __s0_1, __p1_1); \
  __ret_1; \
})
#define vcopyq_lane_u8(__p0_2, __p1_2, __p2_2, __p3_2) __extension__ ({ \
  uint8x16_t __s0_2 = __p0_2; \
  uint8x8_t __s2_2 = __p2_2; \
  uint8x16_t __ret_2; \
  __ret_2 = vsetq_lane_u8(vget_lane_u8(__s2_2, __p3_2), __s0_2, __p1_2); \
  __ret_2; \
})
#define vcopyq_lane_u32(__p0_3, __p1_3, __p2_3, __p3_3) __extension__ ({ \
  uint32x4_t __s0_3 = __p0_3; \
  uint32x2_t __s2_3 = __p2_3; \
  uint32x4_t __ret_3; \
  __ret_3 = vsetq_lane_u32(vget_lane_u32(__s2_3, __p3_3), __s0_3, __p1_3); \
  __ret_3; \
})
#define vcopyq_lane_u64(__p0_4, __p1_4, __p2_4, __p3_4) __extension__ ({ \
  uint64x2_t __s0_4 = __p0_4; \
  uint64x1_t __s2_4 = __p2_4; \
  uint64x2_t __ret_4; \
  __ret_4 = vsetq_lane_u64(vget_lane_u64(__s2_4, __p3_4), __s0_4, __p1_4); \
  __ret_4; \
})
#define vcopyq_lane_u16(__p0_5, __p1_5, __p2_5, __p3_5) __extension__ ({ \
  uint16x8_t __s0_5 = __p0_5; \
  uint16x4_t __s2_5 = __p2_5; \
  uint16x8_t __ret_5; \
  __ret_5 = vsetq_lane_u16(vget_lane_u16(__s2_5, __p3_5), __s0_5, __p1_5); \
  __ret_5; \
})
#define vcopyq_lane_s8(__p0_6, __p1_6, __p2_6, __p3_6) __extension__ ({ \
  int8x16_t __s0_6 = __p0_6; \
  int8x8_t __s2_6 = __p2_6; \
  int8x16_t __ret_6; \
  __ret_6 = vsetq_lane_s8(vget_lane_s8(__s2_6, __p3_6), __s0_6, __p1_6); \
  __ret_6; \
})
#define vcopyq_lane_f32(__p0_7, __p1_7, __p2_7, __p3_7) __extension__ ({ \
  float32x4_t __s0_7 = __p0_7; \
  float32x2_t __s2_7 = __p2_7; \
  float32x4_t __ret_7; \
  __ret_7 = vsetq_lane_f32(vget_lane_f32(__s2_7, __p3_7), __s0_7, __p1_7); \
  __ret_7; \
})
#define vcopyq_lane_s32(__p0_8, __p1_8, __p2_8, __p3_8) __extension__ ({ \
  int32x4_t __s0_8 = __p0_8; \
  int32x2_t __s2_8 = __p2_8; \
  int32x4_t __ret_8; \
  __ret_8 = vsetq_lane_s32(vget_lane_s32(__s2_8, __p3_8), __s0_8, __p1_8); \
  __ret_8; \
})
#define vcopyq_lane_s64(__p0_9, __p1_9, __p2_9, __p3_9) __extension__ ({ \
  int64x2_t __s0_9 = __p0_9; \
  int64x1_t __s2_9 = __p2_9; \
  int64x2_t __ret_9; \
  __ret_9 = vsetq_lane_s64(vget_lane_s64(__s2_9, __p3_9), __s0_9, __p1_9); \
  __ret_9; \
})
#define vcopyq_lane_s16(__p0_10, __p1_10, __p2_10, __p3_10) __extension__ ({ \
  int16x8_t __s0_10 = __p0_10; \
  int16x4_t __s2_10 = __p2_10; \
  int16x8_t __ret_10; \
  __ret_10 = vsetq_lane_s16(vget_lane_s16(__s2_10, __p3_10), __s0_10, __p1_10); \
  __ret_10; \
})
#define vcopy_lane_p8(__p0_11, __p1_11, __p2_11, __p3_11) __extension__ ({ \
  poly8x8_t __s0_11 = __p0_11; \
  poly8x8_t __s2_11 = __p2_11; \
  poly8x8_t __ret_11; \
  __ret_11 = vset_lane_p8(vget_lane_p8(__s2_11, __p3_11), __s0_11, __p1_11); \
  __ret_11; \
})
#define vcopy_lane_p16(__p0_12, __p1_12, __p2_12, __p3_12) __extension__ ({ \
  poly16x4_t __s0_12 = __p0_12; \
  poly16x4_t __s2_12 = __p2_12; \
  poly16x4_t __ret_12; \
  __ret_12 = vset_lane_p16(vget_lane_p16(__s2_12, __p3_12), __s0_12, __p1_12); \
  __ret_12; \
})
#define vcopy_lane_u8(__p0_13, __p1_13, __p2_13, __p3_13) __extension__ ({ \
  uint8x8_t __s0_13 = __p0_13; \
  uint8x8_t __s2_13 = __p2_13; \
  uint8x8_t __ret_13; \
  __ret_13 = vset_lane_u8(vget_lane_u8(__s2_13, __p3_13), __s0_13, __p1_13); \
  __ret_13; \
})
#define vcopy_lane_u32(__p0_14, __p1_14, __p2_14, __p3_14) __extension__ ({ \
  uint32x2_t __s0_14 = __p0_14; \
  uint32x2_t __s2_14 = __p2_14; \
  uint32x2_t __ret_14; \
  __ret_14 = vset_lane_u32(vget_lane_u32(__s2_14, __p3_14), __s0_14, __p1_14); \
  __ret_14; \
})
#define vcopy_lane_u64(__p0_15, __p1_15, __p2_15, __p3_15) __extension__ ({ \
  uint64x1_t __s0_15 = __p0_15; \
  uint64x1_t __s2_15 = __p2_15; \
  uint64x1_t __ret_15; \
  __ret_15 = vset_lane_u64(vget_lane_u64(__s2_15, __p3_15), __s0_15, __p1_15); \
  __ret_15; \
})
#define vcopy_lane_u16(__p0_16, __p1_16, __p2_16, __p3_16) __extension__ ({ \
  uint16x4_t __s0_16 = __p0_16; \
  uint16x4_t __s2_16 = __p2_16; \
  uint16x4_t __ret_16; \
  __ret_16 = vset_lane_u16(vget_lane_u16(__s2_16, __p3_16), __s0_16, __p1_16); \
  __ret_16; \
})
#define vcopy_lane_s8(__p0_17, __p1_17, __p2_17, __p3_17) __extension__ ({ \
  int8x8_t __s0_17 = __p0_17; \
  int8x8_t __s2_17 = __p2_17; \
  int8x8_t __ret_17; \
  __ret_17 = vset_lane_s8(vget_lane_s8(__s2_17, __p3_17), __s0_17, __p1_17); \
  __ret_17; \
})
#define vcopy_lane_f32(__p0_18, __p1_18, __p2_18, __p3_18) __extension__ ({ \
  float32x2_t __s0_18 = __p0_18; \
  float32x2_t __s2_18 = __p2_18; \
  float32x2_t __ret_18; \
  __ret_18 = vset_lane_f32(vget_lane_f32(__s2_18, __p3_18), __s0_18, __p1_18); \
  __ret_18; \
})
#define vcopy_lane_s32(__p0_19, __p1_19, __p2_19, __p3_19) __extension__ ({ \
  int32x2_t __s0_19 = __p0_19; \
  int32x2_t __s2_19 = __p2_19; \
  int32x2_t __ret_19; \
  __ret_19 = vset_lane_s32(vget_lane_s32(__s2_19, __p3_19), __s0_19, __p1_19); \
  __ret_19; \
})
#define vcopy_lane_s64(__p0_20, __p1_20, __p2_20, __p3_20) __extension__ ({ \
  int64x1_t __s0_20 = __p0_20; \
  int64x1_t __s2_20 = __p2_20; \
  int64x1_t __ret_20; \
  __ret_20 = vset_lane_s64(vget_lane_s64(__s2_20, __p3_20), __s0_20, __p1_20); \
  __ret_20; \
})
#define vcopy_lane_s16(__p0_21, __p1_21, __p2_21, __p3_21) __extension__ ({ \
  int16x4_t __s0_21 = __p0_21; \
  int16x4_t __s2_21 = __p2_21; \
  int16x4_t __ret_21; \
  __ret_21 = vset_lane_s16(vget_lane_s16(__s2_21, __p3_21), __s0_21, __p1_21); \
  __ret_21; \
})
#define vcopyq_laneq_p8(__p0_22, __p1_22, __p2_22, __p3_22) __extension__ ({ \
  poly8x16_t __s0_22 = __p0_22; \
  poly8x16_t __s2_22 = __p2_22; \
  poly8x16_t __ret_22; \
  __ret_22 = vsetq_lane_p8(vgetq_lane_p8(__s2_22, __p3_22), __s0_22, __p1_22); \
  __ret_22; \
})
#define vcopyq_laneq_p16(__p0_23, __p1_23, __p2_23, __p3_23) __extension__ ({ \
  poly16x8_t __s0_23 = __p0_23; \
  poly16x8_t __s2_23 = __p2_23; \
  poly16x8_t __ret_23; \
  __ret_23 = vsetq_lane_p16(vgetq_lane_p16(__s2_23, __p3_23), __s0_23, __p1_23); \
  __ret_23; \
})
#define vcopyq_laneq_u8(__p0_24, __p1_24, __p2_24, __p3_24) __extension__ ({ \
  uint8x16_t __s0_24 = __p0_24; \
  uint8x16_t __s2_24 = __p2_24; \
  uint8x16_t __ret_24; \
  __ret_24 = vsetq_lane_u8(vgetq_lane_u8(__s2_24, __p3_24), __s0_24, __p1_24); \
  __ret_24; \
})
#define vcopyq_laneq_u32(__p0_25, __p1_25, __p2_25, __p3_25) __extension__ ({ \
  uint32x4_t __s0_25 = __p0_25; \
  uint32x4_t __s2_25 = __p2_25; \
  uint32x4_t __ret_25; \
  __ret_25 = vsetq_lane_u32(vgetq_lane_u32(__s2_25, __p3_25), __s0_25, __p1_25); \
  __ret_25; \
})
#define vcopyq_laneq_u64(__p0_26, __p1_26, __p2_26, __p3_26) __extension__ ({ \
  uint64x2_t __s0_26 = __p0_26; \
  uint64x2_t __s2_26 = __p2_26; \
  uint64x2_t __ret_26; \
  __ret_26 = vsetq_lane_u64(vgetq_lane_u64(__s2_26, __p3_26), __s0_26, __p1_26); \
  __ret_26; \
})
#define vcopyq_laneq_u16(__p0_27, __p1_27, __p2_27, __p3_27) __extension__ ({ \
  uint16x8_t __s0_27 = __p0_27; \
  uint16x8_t __s2_27 = __p2_27; \
  uint16x8_t __ret_27; \
  __ret_27 = vsetq_lane_u16(vgetq_lane_u16(__s2_27, __p3_27), __s0_27, __p1_27); \
  __ret_27; \
})
#define vcopyq_laneq_s8(__p0_28, __p1_28, __p2_28, __p3_28) __extension__ ({ \
  int8x16_t __s0_28 = __p0_28; \
  int8x16_t __s2_28 = __p2_28; \
  int8x16_t __ret_28; \
  __ret_28 = vsetq_lane_s8(vgetq_lane_s8(__s2_28, __p3_28), __s0_28, __p1_28); \
  __ret_28; \
})
#define vcopyq_laneq_f32(__p0_29, __p1_29, __p2_29, __p3_29) __extension__ ({ \
  float32x4_t __s0_29 = __p0_29; \
  float32x4_t __s2_29 = __p2_29; \
  float32x4_t __ret_29; \
  __ret_29 = vsetq_lane_f32(vgetq_lane_f32(__s2_29, __p3_29), __s0_29, __p1_29); \
  __ret_29; \
})
#define vcopyq_laneq_s32(__p0_30, __p1_30, __p2_30, __p3_30) __extension__ ({ \
  int32x4_t __s0_30 = __p0_30; \
  int32x4_t __s2_30 = __p2_30; \
  int32x4_t __ret_30; \
  __ret_30 = vsetq_lane_s32(vgetq_lane_s32(__s2_30, __p3_30), __s0_30, __p1_30); \
  __ret_30; \
})
#define vcopyq_laneq_s64(__p0_31, __p1_31, __p2_31, __p3_31) __extension__ ({ \
  int64x2_t __s0_31 = __p0_31; \
  int64x2_t __s2_31 = __p2_31; \
  int64x2_t __ret_31; \
  __ret_31 = vsetq_lane_s64(vgetq_lane_s64(__s2_31, __p3_31), __s0_31, __p1_31); \
  __ret_31; \
})
#define vcopyq_laneq_s16(__p0_32, __p1_32, __p2_32, __p3_32) __extension__ ({ \
  int16x8_t __s0_32 = __p0_32; \
  int16x8_t __s2_32 = __p2_32; \
  int16x8_t __ret_32; \
  __ret_32 = vsetq_lane_s16(vgetq_lane_s16(__s2_32, __p3_32), __s0_32, __p1_32); \
  __ret_32; \
})
#define vcopy_laneq_p8(__p0_33, __p1_33, __p2_33, __p3_33) __extension__ ({ \
  poly8x8_t __s0_33 = __p0_33; \
  poly8x16_t __s2_33 = __p2_33; \
  poly8x8_t __ret_33; \
  __ret_33 = vset_lane_p8(vgetq_lane_p8(__s2_33, __p3_33), __s0_33, __p1_33); \
  __ret_33; \
})
#define vcopy_laneq_p16(__p0_34, __p1_34, __p2_34, __p3_34) __extension__ ({ \
  poly16x4_t __s0_34 = __p0_34; \
  poly16x8_t __s2_34 = __p2_34; \
  poly16x4_t __ret_34; \
  __ret_34 = vset_lane_p16(vgetq_lane_p16(__s2_34, __p3_34), __s0_34, __p1_34); \
  __ret_34; \
})
#define vcopy_laneq_u8(__p0_35, __p1_35, __p2_35, __p3_35) __extension__ ({ \
  uint8x8_t __s0_35 = __p0_35; \
  uint8x16_t __s2_35 = __p2_35; \
  uint8x8_t __ret_35; \
  __ret_35 = vset_lane_u8(vgetq_lane_u8(__s2_35, __p3_35), __s0_35, __p1_35); \
  __ret_35; \
})
#define vcopy_laneq_u32(__p0_36, __p1_36, __p2_36, __p3_36) __extension__ ({ \
  uint32x2_t __s0_36 = __p0_36; \
  uint32x4_t __s2_36 = __p2_36; \
  uint32x2_t __ret_36; \
  __ret_36 = vset_lane_u32(vgetq_lane_u32(__s2_36, __p3_36), __s0_36, __p1_36); \
  __ret_36; \
})
#define vcopy_laneq_u64(__p0_37, __p1_37, __p2_37, __p3_37) __extension__ ({ \
  uint64x1_t __s0_37 = __p0_37; \
  uint64x2_t __s2_37 = __p2_37; \
  uint64x1_t __ret_37; \
  __ret_37 = vset_lane_u64(vgetq_lane_u64(__s2_37, __p3_37), __s0_37, __p1_37); \
  __ret_37; \
})
#define vcopy_laneq_u16(__p0_38, __p1_38, __p2_38, __p3_38) __extension__ ({ \
  uint16x4_t __s0_38 = __p0_38; \
  uint16x8_t __s2_38 = __p2_38; \
  uint16x4_t __ret_38; \
  __ret_38 = vset_lane_u16(vgetq_lane_u16(__s2_38, __p3_38), __s0_38, __p1_38); \
  __ret_38; \
})
#define vcopy_laneq_s8(__p0_39, __p1_39, __p2_39, __p3_39) __extension__ ({ \
  int8x8_t __s0_39 = __p0_39; \
  int8x16_t __s2_39 = __p2_39; \
  int8x8_t __ret_39; \
  __ret_39 = vset_lane_s8(vgetq_lane_s8(__s2_39, __p3_39), __s0_39, __p1_39); \
  __ret_39; \
})
#define vcopy_laneq_f32(__p0_40, __p1_40, __p2_40, __p3_40) __extension__ ({ \
  float32x2_t __s0_40 = __p0_40; \
  float32x4_t __s2_40 = __p2_40; \
  float32x2_t __ret_40; \
  __ret_40 = vset_lane_f32(vgetq_lane_f32(__s2_40, __p3_40), __s0_40, __p1_40); \
  __ret_40; \
})
#define vcopy_laneq_s32(__p0_41, __p1_41, __p2_41, __p3_41) __extension__ ({ \
  int32x2_t __s0_41 = __p0_41; \
  int32x4_t __s2_41 = __p2_41; \
  int32x2_t __ret_41; \
  __ret_41 = vset_lane_s32(vgetq_lane_s32(__s2_41, __p3_41), __s0_41, __p1_41); \
  __ret_41; \
})
#define vcopy_laneq_s64(__p0_42, __p1_42, __p2_42, __p3_42) __extension__ ({ \
  int64x1_t __s0_42 = __p0_42; \
  int64x2_t __s2_42 = __p2_42; \
  int64x1_t __ret_42; \
  __ret_42 = vset_lane_s64(vgetq_lane_s64(__s2_42, __p3_42), __s0_42, __p1_42); \
  __ret_42; \
})
#define vcopy_laneq_s16(__p0_43, __p1_43, __p2_43, __p3_43) __extension__ ({ \
  int16x4_t __s0_43 = __p0_43; \
  int16x8_t __s2_43 = __p2_43; \
  int16x4_t __ret_43; \
  __ret_43 = vset_lane_s16(vgetq_lane_s16(__s2_43, __p3_43), __s0_43, __p1_43); \
  __ret_43; \
})
__ai poly64x1_t vcreate_p64(uint64_t __p0) {
  poly64x1_t __ret;
  __ret = (poly64x1_t)(__p0);
  return __ret;
}
__ai float64x1_t vcreate_f64(uint64_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t)(__p0);
  return __ret;
}
__ai float32_t vcvts_f32_s32(int32_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vcvts_f32_s32(__p0);
  return __ret;
}
__ai float32_t vcvts_f32_u32(uint32_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vcvts_f32_u32(__p0);
  return __ret;
}
__ai float32x2_t vcvt_f32_f64(float64x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vcvt_f32_f64((int8x16_t)__p0, 9);
  return __ret;
}
__ai float64_t vcvtd_f64_s64(int64_t __p0) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vcvtd_f64_s64(__p0);
  return __ret;
}
__ai float64_t vcvtd_f64_u64(uint64_t __p0) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vcvtd_f64_u64(__p0);
  return __ret;
}
__ai float64x2_t vcvtq_f64_u64(uint64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vcvtq_f64_v((int8x16_t)__p0, 51);
  return __ret;
}
__ai float64x2_t vcvtq_f64_s64(int64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vcvtq_f64_v((int8x16_t)__p0, 35);
  return __ret;
}
__ai float64x1_t vcvt_f64_u64(uint64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vcvt_f64_v((int8x8_t)__p0, 19);
  return __ret;
}
__ai float64x1_t vcvt_f64_s64(int64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vcvt_f64_v((int8x8_t)__p0, 3);
  return __ret;
}
__ai float64x2_t vcvt_f64_f32(float32x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vcvt_f64_f32((int8x8_t)__p0, 42);
  return __ret;
}
__ai float16x8_t vcvt_high_f16_f32(float16x4_t __p0, float32x4_t __p1) {
  float16x8_t __ret;
  __ret = vcombine_f16(__p0, vcvt_f16_f32(__p1));
  return __ret;
}
__ai float32x4_t vcvt_high_f32_f16(float16x8_t __p0) {
  float32x4_t __ret;
  __ret = vcvt_f32_f16(vget_high_f16(__p0));
  return __ret;
}
__ai float32x4_t vcvt_high_f32_f64(float32x2_t __p0, float64x2_t __p1) {
  float32x4_t __ret;
  __ret = vcombine_f32(__p0, vcvt_f32_f64(__p1));
  return __ret;
}
__ai float64x2_t vcvt_high_f64_f32(float32x4_t __p0) {
  float64x2_t __ret;
  __ret = vcvt_f64_f32(vget_high_f32(__p0));
  return __ret;
}
#define vcvts_n_f32_u32(__p0, __p1) __extension__ ({ \
  uint32_t __s0 = __p0; \
  float32_t __ret; \
  __ret = (float32_t) __builtin_neon_vcvts_n_f32_u32(__s0, __p1); \
  __ret; \
})
#define vcvts_n_f32_s32(__p0, __p1) __extension__ ({ \
  int32_t __s0 = __p0; \
  float32_t __ret; \
  __ret = (float32_t) __builtin_neon_vcvts_n_f32_s32(__s0, __p1); \
  __ret; \
})
#define vcvtq_n_f64_u64(__p0, __p1) __extension__ ({ \
  uint64x2_t __s0 = __p0; \
  float64x2_t __ret; \
  __ret = (float64x2_t) __builtin_neon_vcvtq_n_f64_v((int8x16_t)__s0, __p1, 51); \
  __ret; \
})
#define vcvtq_n_f64_s64(__p0, __p1) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  float64x2_t __ret; \
  __ret = (float64x2_t) __builtin_neon_vcvtq_n_f64_v((int8x16_t)__s0, __p1, 35); \
  __ret; \
})
#define vcvt_n_f64_u64(__p0, __p1) __extension__ ({ \
  uint64x1_t __s0 = __p0; \
  float64x1_t __ret; \
  __ret = (float64x1_t) __builtin_neon_vcvt_n_f64_v((int8x8_t)__s0, __p1, 19); \
  __ret; \
})
#define vcvt_n_f64_s64(__p0, __p1) __extension__ ({ \
  int64x1_t __s0 = __p0; \
  float64x1_t __ret; \
  __ret = (float64x1_t) __builtin_neon_vcvt_n_f64_v((int8x8_t)__s0, __p1, 3); \
  __ret; \
})
#define vcvtd_n_f64_u64(__p0, __p1) __extension__ ({ \
  uint64_t __s0 = __p0; \
  float64_t __ret; \
  __ret = (float64_t) __builtin_neon_vcvtd_n_f64_u64(__s0, __p1); \
  __ret; \
})
#define vcvtd_n_f64_s64(__p0, __p1) __extension__ ({ \
  int64_t __s0 = __p0; \
  float64_t __ret; \
  __ret = (float64_t) __builtin_neon_vcvtd_n_f64_s64(__s0, __p1); \
  __ret; \
})
#define vcvts_n_s32_f32(__p0, __p1) __extension__ ({ \
  float32_t __s0 = __p0; \
  int32_t __ret; \
  __ret = (int32_t) __builtin_neon_vcvts_n_s32_f32(__s0, __p1); \
  __ret; \
})
#define vcvtq_n_s64_f64(__p0, __p1) __extension__ ({ \
  float64x2_t __s0 = __p0; \
  int64x2_t __ret; \
  __ret = (int64x2_t) __builtin_neon_vcvtq_n_s64_v((int8x16_t)__s0, __p1, 35); \
  __ret; \
})
#define vcvt_n_s64_f64(__p0, __p1) __extension__ ({ \
  float64x1_t __s0 = __p0; \
  int64x1_t __ret; \
  __ret = (int64x1_t) __builtin_neon_vcvt_n_s64_v((int8x8_t)__s0, __p1, 3); \
  __ret; \
})
#define vcvtd_n_s64_f64(__p0, __p1) __extension__ ({ \
  float64_t __s0 = __p0; \
  int64_t __ret; \
  __ret = (int64_t) __builtin_neon_vcvtd_n_s64_f64(__s0, __p1); \
  __ret; \
})
#define vcvts_n_u32_f32(__p0, __p1) __extension__ ({ \
  float32_t __s0 = __p0; \
  uint32_t __ret; \
  __ret = (uint32_t) __builtin_neon_vcvts_n_u32_f32(__s0, __p1); \
  __ret; \
})
#define vcvtq_n_u64_f64(__p0, __p1) __extension__ ({ \
  float64x2_t __s0 = __p0; \
  uint64x2_t __ret; \
  __ret = (uint64x2_t) __builtin_neon_vcvtq_n_u64_v((int8x16_t)__s0, __p1, 51); \
  __ret; \
})
#define vcvt_n_u64_f64(__p0, __p1) __extension__ ({ \
  float64x1_t __s0 = __p0; \
  uint64x1_t __ret; \
  __ret = (uint64x1_t) __builtin_neon_vcvt_n_u64_v((int8x8_t)__s0, __p1, 19); \
  __ret; \
})
#define vcvtd_n_u64_f64(__p0, __p1) __extension__ ({ \
  float64_t __s0 = __p0; \
  uint64_t __ret; \
  __ret = (uint64_t) __builtin_neon_vcvtd_n_u64_f64(__s0, __p1); \
  __ret; \
})
__ai int32_t vcvts_s32_f32(float32_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vcvts_s32_f32(__p0);
  return __ret;
}
__ai int64_t vcvtd_s64_f64(float64_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vcvtd_s64_f64(__p0);
  return __ret;
}
__ai int64x2_t vcvtq_s64_f64(float64x2_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vcvtq_s64_v((int8x16_t)__p0, 35);
  return __ret;
}
__ai int64x1_t vcvt_s64_f64(float64x1_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vcvt_s64_v((int8x8_t)__p0, 3);
  return __ret;
}
__ai uint32_t vcvts_u32_f32(float32_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcvts_u32_f32(__p0);
  return __ret;
}
__ai uint64_t vcvtd_u64_f64(float64_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcvtd_u64_f64(__p0);
  return __ret;
}
__ai uint64x2_t vcvtq_u64_f64(float64x2_t __p0) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vcvtq_u64_v((int8x16_t)__p0, 51);
  return __ret;
}
__ai uint64x1_t vcvt_u64_f64(float64x1_t __p0) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vcvt_u64_v((int8x8_t)__p0, 19);
  return __ret;
}
__ai int32_t vcvtas_s32_f32(float32_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vcvtas_s32_f32(__p0);
  return __ret;
}
__ai int64_t vcvtad_s64_f64(float64_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vcvtad_s64_f64(__p0);
  return __ret;
}
__ai uint32_t vcvtas_u32_f32(float32_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcvtas_u32_f32(__p0);
  return __ret;
}
__ai uint64_t vcvtad_u64_f64(float64_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcvtad_u64_f64(__p0);
  return __ret;
}
__ai int32_t vcvtms_s32_f32(float32_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vcvtms_s32_f32(__p0);
  return __ret;
}
__ai int64_t vcvtmd_s64_f64(float64_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vcvtmd_s64_f64(__p0);
  return __ret;
}
__ai uint32_t vcvtms_u32_f32(float32_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcvtms_u32_f32(__p0);
  return __ret;
}
__ai uint64_t vcvtmd_u64_f64(float64_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcvtmd_u64_f64(__p0);
  return __ret;
}
__ai int32_t vcvtns_s32_f32(float32_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vcvtns_s32_f32(__p0);
  return __ret;
}
__ai int64_t vcvtnd_s64_f64(float64_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vcvtnd_s64_f64(__p0);
  return __ret;
}
__ai uint32_t vcvtns_u32_f32(float32_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcvtns_u32_f32(__p0);
  return __ret;
}
__ai uint64_t vcvtnd_u64_f64(float64_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcvtnd_u64_f64(__p0);
  return __ret;
}
__ai int32_t vcvtps_s32_f32(float32_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vcvtps_s32_f32(__p0);
  return __ret;
}
__ai int64_t vcvtpd_s64_f64(float64_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vcvtpd_s64_f64(__p0);
  return __ret;
}
__ai uint32_t vcvtps_u32_f32(float32_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vcvtps_u32_f32(__p0);
  return __ret;
}
__ai uint64_t vcvtpd_u64_f64(float64_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vcvtpd_u64_f64(__p0);
  return __ret;
}
__ai float32_t vcvtxd_f32_f64(float64_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vcvtxd_f32_f64(__p0);
  return __ret;
}
__ai float32x2_t vcvtx_f32_f64(float64x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vcvtx_f32_v((int8x16_t)__p0, 42);
  return __ret;
}
__ai float32x4_t vcvtx_high_f32_f64(float32x2_t __p0, float64x2_t __p1) {
  float32x4_t __ret;
  __ret = vcombine_f32(__p0, vcvtx_f32_f64(__p1));
  return __ret;
}
__ai float64x2_t vdivq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = __p0 / __p1;
  return __ret;
}
__ai float32x4_t vdivq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = __p0 / __p1;
  return __ret;
}
__ai float64x1_t vdiv_f64(float64x1_t __p0, float64x1_t __p1) {
  float64x1_t __ret;
  __ret = __p0 / __p1;
  return __ret;
}
__ai float32x2_t vdiv_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = __p0 / __p1;
  return __ret;
}
#define vdupb_lane_p8(__p0, __p1) __extension__ ({ \
  poly8x8_t __s0 = __p0; \
  poly8_t __ret; \
  __ret = (poly8_t) __builtin_neon_vdupb_lane_i8((int8x8_t)__s0, __p1); \
  __ret; \
})
#define vduph_lane_p16(__p0, __p1) __extension__ ({ \
  poly16x4_t __s0 = __p0; \
  poly16_t __ret; \
  __ret = (poly16_t) __builtin_neon_vduph_lane_i16((int8x8_t)__s0, __p1); \
  __ret; \
})
#define vdupb_lane_u8(__p0, __p1) __extension__ ({ \
  uint8x8_t __s0 = __p0; \
  uint8_t __ret; \
  __ret = (uint8_t) __builtin_neon_vdupb_lane_i8((int8x8_t)__s0, __p1); \
  __ret; \
})
#define vdups_lane_u32(__p0, __p1) __extension__ ({ \
  uint32x2_t __s0 = __p0; \
  uint32_t __ret; \
  __ret = (uint32_t) __builtin_neon_vdups_lane_i32((int8x8_t)__s0, __p1); \
  __ret; \
})
#define vdupd_lane_u64(__p0, __p1) __extension__ ({ \
  uint64x1_t __s0 = __p0; \
  uint64_t __ret; \
  __ret = (uint64_t) __builtin_neon_vdupd_lane_i64((int8x8_t)__s0, __p1); \
  __ret; \
})
#define vduph_lane_u16(__p0, __p1) __extension__ ({ \
  uint16x4_t __s0 = __p0; \
  uint16_t __ret; \
  __ret = (uint16_t) __builtin_neon_vduph_lane_i16((int8x8_t)__s0, __p1); \
  __ret; \
})
#define vdupb_lane_s8(__p0, __p1) __extension__ ({ \
  int8x8_t __s0 = __p0; \
  int8_t __ret; \
  __ret = (int8_t) __builtin_neon_vdupb_lane_i8((int8x8_t)__s0, __p1); \
  __ret; \
})
#define vdupd_lane_f64(__p0, __p1) __extension__ ({ \
  float64x1_t __s0 = __p0; \
  float64_t __ret; \
  __ret = (float64_t) __builtin_neon_vdupd_lane_f64((int8x8_t)__s0, __p1); \
  __ret; \
})
#define vdups_lane_f32(__p0, __p1) __extension__ ({ \
  float32x2_t __s0 = __p0; \
  float32_t __ret; \
  __ret = (float32_t) __builtin_neon_vdups_lane_f32((int8x8_t)__s0, __p1); \
  __ret; \
})
#define vdups_lane_s32(__p0, __p1) __extension__ ({ \
  int32x2_t __s0 = __p0; \
  int32_t __ret; \
  __ret = (int32_t) __builtin_neon_vdups_lane_i32((int8x8_t)__s0, __p1); \
  __ret; \
})
#define vdupd_lane_s64(__p0, __p1) __extension__ ({ \
  int64x1_t __s0 = __p0; \
  int64_t __ret; \
  __ret = (int64_t) __builtin_neon_vdupd_lane_i64((int8x8_t)__s0, __p1); \
  __ret; \
})
#define vduph_lane_s16(__p0, __p1) __extension__ ({ \
  int16x4_t __s0 = __p0; \
  int16_t __ret; \
  __ret = (int16_t) __builtin_neon_vduph_lane_i16((int8x8_t)__s0, __p1); \
  __ret; \
})
#define vdup_lane_p64(__p0, __p1) __extension__ ({ \
  poly64x1_t __s0 = __p0; \
  poly64x1_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1); \
  __ret; \
})
#define vdupq_lane_p64(__p0, __p1) __extension__ ({ \
  poly64x1_t __s0 = __p0; \
  poly64x2_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1); \
  __ret; \
})
#define vdupq_lane_f64(__p0, __p1) __extension__ ({ \
  float64x1_t __s0 = __p0; \
  float64x2_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1); \
  __ret; \
})
#define vdupq_lane_f16(__p0, __p1) __extension__ ({ \
  float16x4_t __s0 = __p0; \
  float16x8_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdup_lane_f64(__p0, __p1) __extension__ ({ \
  float64x1_t __s0 = __p0; \
  float64x1_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1); \
  __ret; \
})
#define vdup_lane_f16(__p0, __p1) __extension__ ({ \
  float16x4_t __s0 = __p0; \
  float16x4_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdupb_laneq_p8(__p0, __p1) __extension__ ({ \
  poly8x16_t __s0 = __p0; \
  poly8_t __ret; \
  __ret = (poly8_t) __builtin_neon_vdupb_laneq_i8((int8x16_t)__s0, __p1); \
  __ret; \
})
#define vduph_laneq_p16(__p0, __p1) __extension__ ({ \
  poly16x8_t __s0 = __p0; \
  poly16_t __ret; \
  __ret = (poly16_t) __builtin_neon_vduph_laneq_i16((int8x16_t)__s0, __p1); \
  __ret; \
})
#define vdupb_laneq_u8(__p0, __p1) __extension__ ({ \
  uint8x16_t __s0 = __p0; \
  uint8_t __ret; \
  __ret = (uint8_t) __builtin_neon_vdupb_laneq_i8((int8x16_t)__s0, __p1); \
  __ret; \
})
#define vdups_laneq_u32(__p0, __p1) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint32_t __ret; \
  __ret = (uint32_t) __builtin_neon_vdups_laneq_i32((int8x16_t)__s0, __p1); \
  __ret; \
})
#define vdupd_laneq_u64(__p0, __p1) __extension__ ({ \
  uint64x2_t __s0 = __p0; \
  uint64_t __ret; \
  __ret = (uint64_t) __builtin_neon_vdupd_laneq_i64((int8x16_t)__s0, __p1); \
  __ret; \
})
#define vduph_laneq_u16(__p0, __p1) __extension__ ({ \
  uint16x8_t __s0 = __p0; \
  uint16_t __ret; \
  __ret = (uint16_t) __builtin_neon_vduph_laneq_i16((int8x16_t)__s0, __p1); \
  __ret; \
})
#define vdupb_laneq_s8(__p0, __p1) __extension__ ({ \
  int8x16_t __s0 = __p0; \
  int8_t __ret; \
  __ret = (int8_t) __builtin_neon_vdupb_laneq_i8((int8x16_t)__s0, __p1); \
  __ret; \
})
#define vdupd_laneq_f64(__p0, __p1) __extension__ ({ \
  float64x2_t __s0 = __p0; \
  float64_t __ret; \
  __ret = (float64_t) __builtin_neon_vdupd_laneq_f64((int8x16_t)__s0, __p1); \
  __ret; \
})
#define vdups_laneq_f32(__p0, __p1) __extension__ ({ \
  float32x4_t __s0 = __p0; \
  float32_t __ret; \
  __ret = (float32_t) __builtin_neon_vdups_laneq_f32((int8x16_t)__s0, __p1); \
  __ret; \
})
#define vdups_laneq_s32(__p0, __p1) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int32_t __ret; \
  __ret = (int32_t) __builtin_neon_vdups_laneq_i32((int8x16_t)__s0, __p1); \
  __ret; \
})
#define vdupd_laneq_s64(__p0, __p1) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int64_t __ret; \
  __ret = (int64_t) __builtin_neon_vdupd_laneq_i64((int8x16_t)__s0, __p1); \
  __ret; \
})
#define vduph_laneq_s16(__p0, __p1) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  int16_t __ret; \
  __ret = (int16_t) __builtin_neon_vduph_laneq_i16((int8x16_t)__s0, __p1); \
  __ret; \
})
#define vdup_laneq_p8(__p0, __p1) __extension__ ({ \
  poly8x16_t __s0 = __p0; \
  poly8x8_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdup_laneq_p64(__p0, __p1) __extension__ ({ \
  poly64x2_t __s0 = __p0; \
  poly64x1_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1); \
  __ret; \
})
#define vdup_laneq_p16(__p0, __p1) __extension__ ({ \
  poly16x8_t __s0 = __p0; \
  poly16x4_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdupq_laneq_p8(__p0, __p1) __extension__ ({ \
  poly8x16_t __s0 = __p0; \
  poly8x16_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdupq_laneq_p64(__p0, __p1) __extension__ ({ \
  poly64x2_t __s0 = __p0; \
  poly64x2_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1); \
  __ret; \
})
#define vdupq_laneq_p16(__p0, __p1) __extension__ ({ \
  poly16x8_t __s0 = __p0; \
  poly16x8_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdupq_laneq_u8(__p0, __p1) __extension__ ({ \
  uint8x16_t __s0 = __p0; \
  uint8x16_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdupq_laneq_u32(__p0, __p1) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint32x4_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdupq_laneq_u64(__p0, __p1) __extension__ ({ \
  uint64x2_t __s0 = __p0; \
  uint64x2_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1); \
  __ret; \
})
#define vdupq_laneq_u16(__p0, __p1) __extension__ ({ \
  uint16x8_t __s0 = __p0; \
  uint16x8_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdupq_laneq_s8(__p0, __p1) __extension__ ({ \
  int8x16_t __s0 = __p0; \
  int8x16_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdupq_laneq_f64(__p0, __p1) __extension__ ({ \
  float64x2_t __s0 = __p0; \
  float64x2_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1); \
  __ret; \
})
#define vdupq_laneq_f32(__p0, __p1) __extension__ ({ \
  float32x4_t __s0 = __p0; \
  float32x4_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdupq_laneq_f16(__p0, __p1) __extension__ ({ \
  float16x8_t __s0 = __p0; \
  float16x8_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdupq_laneq_s32(__p0, __p1) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int32x4_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdupq_laneq_s64(__p0, __p1) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int64x2_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1); \
  __ret; \
})
#define vdupq_laneq_s16(__p0, __p1) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  int16x8_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdup_laneq_u8(__p0, __p1) __extension__ ({ \
  uint8x16_t __s0 = __p0; \
  uint8x8_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdup_laneq_u32(__p0, __p1) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint32x2_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1); \
  __ret; \
})
#define vdup_laneq_u64(__p0, __p1) __extension__ ({ \
  uint64x2_t __s0 = __p0; \
  uint64x1_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1); \
  __ret; \
})
#define vdup_laneq_u16(__p0, __p1) __extension__ ({ \
  uint16x8_t __s0 = __p0; \
  uint16x4_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdup_laneq_s8(__p0, __p1) __extension__ ({ \
  int8x16_t __s0 = __p0; \
  int8x8_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdup_laneq_f64(__p0, __p1) __extension__ ({ \
  float64x2_t __s0 = __p0; \
  float64x1_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1); \
  __ret; \
})
#define vdup_laneq_f32(__p0, __p1) __extension__ ({ \
  float32x4_t __s0 = __p0; \
  float32x2_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1); \
  __ret; \
})
#define vdup_laneq_f16(__p0, __p1) __extension__ ({ \
  float16x8_t __s0 = __p0; \
  float16x4_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1); \
  __ret; \
})
#define vdup_laneq_s32(__p0, __p1) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int32x2_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1); \
  __ret; \
})
#define vdup_laneq_s64(__p0, __p1) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int64x1_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1); \
  __ret; \
})
#define vdup_laneq_s16(__p0, __p1) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  int16x4_t __ret; \
  __ret = __builtin_shufflevector(__s0, __s0, __p1, __p1, __p1, __p1); \
  __ret; \
})
__ai poly64x1_t vdup_n_p64(poly64_t __p0) {
  poly64x1_t __ret;
  __ret = (poly64x1_t) {__p0};
  return __ret;
}
__ai poly64x2_t vdupq_n_p64(poly64_t __p0) {
  poly64x2_t __ret;
  __ret = (poly64x2_t) {__p0, __p0};
  return __ret;
}
__ai float64x2_t vdupq_n_f64(float64_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) {__p0, __p0};
  return __ret;
}
__ai float64x1_t vdup_n_f64(float64_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t) {__p0};
  return __ret;
}
#define vext_p64(__p0, __p1, __p2) __extension__ ({ \
  poly64x1_t __s0 = __p0; \
  poly64x1_t __s1 = __p1; \
  poly64x1_t __ret; \
  __ret = (poly64x1_t) __builtin_neon_vext_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 6); \
  __ret; \
})
#define vextq_p64(__p0, __p1, __p2) __extension__ ({ \
  poly64x2_t __s0 = __p0; \
  poly64x2_t __s1 = __p1; \
  poly64x2_t __ret; \
  __ret = (poly64x2_t) __builtin_neon_vextq_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 38); \
  __ret; \
})
#define vextq_f64(__p0, __p1, __p2) __extension__ ({ \
  float64x2_t __s0 = __p0; \
  float64x2_t __s1 = __p1; \
  float64x2_t __ret; \
  __ret = (float64x2_t) __builtin_neon_vextq_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 42); \
  __ret; \
})
#define vext_f64(__p0, __p1, __p2) __extension__ ({ \
  float64x1_t __s0 = __p0; \
  float64x1_t __s1 = __p1; \
  float64x1_t __ret; \
  __ret = (float64x1_t) __builtin_neon_vext_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 10); \
  __ret; \
})
__ai float64x2_t vfmaq_f64(float64x2_t __p0, float64x2_t __p1, float64x2_t __p2) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vfmaq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 42);
  return __ret;
}
__ai float64x1_t vfma_f64(float64x1_t __p0, float64x1_t __p1, float64x1_t __p2) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vfma_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 10);
  return __ret;
}
#define vfmad_lane_f64(__p0, __p1, __p2, __p3) __extension__ ({ \
  float64_t __s0 = __p0; \
  float64_t __s1 = __p1; \
  float64x1_t __s2 = __p2; \
  float64_t __ret; \
  __ret = (float64_t) __builtin_neon_vfmad_lane_f64(__s0, __s1, (int8x8_t)__s2, __p3); \
  __ret; \
})
#define vfmas_lane_f32(__p0, __p1, __p2, __p3) __extension__ ({ \
  float32_t __s0 = __p0; \
  float32_t __s1 = __p1; \
  float32x2_t __s2 = __p2; \
  float32_t __ret; \
  __ret = (float32_t) __builtin_neon_vfmas_lane_f32(__s0, __s1, (int8x8_t)__s2, __p3); \
  __ret; \
})
#define vfmaq_lane_f64(__p0, __p1, __p2, __p3) __extension__ ({ \
  float64x2_t __s0 = __p0; \
  float64x2_t __s1 = __p1; \
  float64x1_t __s2 = __p2; \
  float64x2_t __ret; \
  __ret = (float64x2_t) __builtin_neon_vfmaq_lane_v((int8x16_t)__s0, (int8x16_t)__s1, (int8x8_t)__s2, __p3, 42); \
  __ret; \
})
#define vfmaq_lane_f32(__p0, __p1, __p2, __p3) __extension__ ({ \
  float32x4_t __s0 = __p0; \
  float32x4_t __s1 = __p1; \
  float32x2_t __s2 = __p2; \
  float32x4_t __ret; \
  __ret = (float32x4_t) __builtin_neon_vfmaq_lane_v((int8x16_t)__s0, (int8x16_t)__s1, (int8x8_t)__s2, __p3, 41); \
  __ret; \
})
#define vfma_lane_f64(__p0, __p1, __p2, __p3) __extension__ ({ \
  float64x1_t __s0 = __p0; \
  float64x1_t __s1 = __p1; \
  float64x1_t __s2 = __p2; \
  float64x1_t __ret; \
  __ret = (float64x1_t) __builtin_neon_vfma_lane_v((int8x8_t)__s0, (int8x8_t)__s1, (int8x8_t)__s2, __p3, 10); \
  __ret; \
})
#define vfma_lane_f32(__p0, __p1, __p2, __p3) __extension__ ({ \
  float32x2_t __s0 = __p0; \
  float32x2_t __s1 = __p1; \
  float32x2_t __s2 = __p2; \
  float32x2_t __ret; \
  __ret = (float32x2_t) __builtin_neon_vfma_lane_v((int8x8_t)__s0, (int8x8_t)__s1, (int8x8_t)__s2, __p3, 9); \
  __ret; \
})
#define vfmad_laneq_f64(__p0, __p1, __p2, __p3) __extension__ ({ \
  float64_t __s0 = __p0; \
  float64_t __s1 = __p1; \
  float64x2_t __s2 = __p2; \
  float64_t __ret; \
  __ret = (float64_t) __builtin_neon_vfmad_laneq_f64(__s0, __s1, (int8x16_t)__s2, __p3); \
  __ret; \
})
#define vfmas_laneq_f32(__p0, __p1, __p2, __p3) __extension__ ({ \
  float32_t __s0 = __p0; \
  float32_t __s1 = __p1; \
  float32x4_t __s2 = __p2; \
  float32_t __ret; \
  __ret = (float32_t) __builtin_neon_vfmas_laneq_f32(__s0, __s1, (int8x16_t)__s2, __p3); \
  __ret; \
})
#define vfmaq_laneq_f64(__p0, __p1, __p2, __p3) __extension__ ({ \
  float64x2_t __s0 = __p0; \
  float64x2_t __s1 = __p1; \
  float64x2_t __s2 = __p2; \
  float64x2_t __ret; \
  __ret = (float64x2_t) __builtin_neon_vfmaq_laneq_v((int8x16_t)__s0, (int8x16_t)__s1, (int8x16_t)__s2, __p3, 42); \
  __ret; \
})
#define vfmaq_laneq_f32(__p0, __p1, __p2, __p3) __extension__ ({ \
  float32x4_t __s0 = __p0; \
  float32x4_t __s1 = __p1; \
  float32x4_t __s2 = __p2; \
  float32x4_t __ret; \
  __ret = (float32x4_t) __builtin_neon_vfmaq_laneq_v((int8x16_t)__s0, (int8x16_t)__s1, (int8x16_t)__s2, __p3, 41); \
  __ret; \
})
#define vfma_laneq_f64(__p0, __p1, __p2, __p3) __extension__ ({ \
  float64x1_t __s0 = __p0; \
  float64x1_t __s1 = __p1; \
  float64x2_t __s2 = __p2; \
  float64x1_t __ret; \
  __ret = (float64x1_t) __builtin_neon_vfma_laneq_v((int8x8_t)__s0, (int8x8_t)__s1, (int8x16_t)__s2, __p3, 10); \
  __ret; \
})
#define vfma_laneq_f32(__p0, __p1, __p2, __p3) __extension__ ({ \
  float32x2_t __s0 = __p0; \
  float32x2_t __s1 = __p1; \
  float32x4_t __s2 = __p2; \
  float32x2_t __ret; \
  __ret = (float32x2_t) __builtin_neon_vfma_laneq_v((int8x8_t)__s0, (int8x8_t)__s1, (int8x16_t)__s2, __p3, 9); \
  __ret; \
})
__ai float64x2_t vfmaq_n_f64(float64x2_t __p0, float64x2_t __p1, float64_t __p2) {
  float64x2_t __ret;
  __ret = vfmaq_f64(__p0, __p1, (float64x2_t) {__p2, __p2});
  return __ret;
}
__ai float32x4_t vfmaq_n_f32(float32x4_t __p0, float32x4_t __p1, float32_t __p2) {
  float32x4_t __ret;
  __ret = vfmaq_f32(__p0, __p1, (float32x4_t) {__p2, __p2, __p2, __p2});
  return __ret;
}
__ai float32x2_t vfma_n_f32(float32x2_t __p0, float32x2_t __p1, float32_t __p2) {
  float32x2_t __ret;
  __ret = vfma_f32(__p0, __p1, (float32x2_t) {__p2, __p2});
  return __ret;
}
__ai float64x2_t vfmsq_f64(float64x2_t __p0, float64x2_t __p1, float64x2_t __p2) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vfmsq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 42);
  return __ret;
}
__ai float32x4_t vfmsq_f32(float32x4_t __p0, float32x4_t __p1, float32x4_t __p2) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vfmsq_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 41);
  return __ret;
}
__ai float64x1_t vfms_f64(float64x1_t __p0, float64x1_t __p1, float64x1_t __p2) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vfms_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 10);
  return __ret;
}
__ai float32x2_t vfms_f32(float32x2_t __p0, float32x2_t __p1, float32x2_t __p2) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vfms_v((int8x8_t)__p0, (int8x8_t)__p1, (int8x8_t)__p2, 9);
  return __ret;
}
#define vfmsd_lane_f64(__p0_44, __p1_44, __p2_44, __p3_44) __extension__ ({ \
  float64_t __s0_44 = __p0_44; \
  float64_t __s1_44 = __p1_44; \
  float64x1_t __s2_44 = __p2_44; \
  float64_t __ret_44; \
  __ret_44 = vfmad_lane_f64(__s0_44, __s1_44, -__s2_44, __p3_44); \
  __ret_44; \
})
#define vfmss_lane_f32(__p0_45, __p1_45, __p2_45, __p3_45) __extension__ ({ \
  float32_t __s0_45 = __p0_45; \
  float32_t __s1_45 = __p1_45; \
  float32x2_t __s2_45 = __p2_45; \
  float32_t __ret_45; \
  __ret_45 = vfmas_lane_f32(__s0_45, __s1_45, -__s2_45, __p3_45); \
  __ret_45; \
})
#define vfmsq_lane_f64(__p0_46, __p1_46, __p2_46, __p3_46) __extension__ ({ \
  float64x2_t __s0_46 = __p0_46; \
  float64x2_t __s1_46 = __p1_46; \
  float64x1_t __s2_46 = __p2_46; \
  float64x2_t __ret_46; \
  __ret_46 = vfmaq_lane_f64(__s0_46, __s1_46, -__s2_46, __p3_46); \
  __ret_46; \
})
#define vfmsq_lane_f32(__p0_47, __p1_47, __p2_47, __p3_47) __extension__ ({ \
  float32x4_t __s0_47 = __p0_47; \
  float32x4_t __s1_47 = __p1_47; \
  float32x2_t __s2_47 = __p2_47; \
  float32x4_t __ret_47; \
  __ret_47 = vfmaq_lane_f32(__s0_47, __s1_47, -__s2_47, __p3_47); \
  __ret_47; \
})
#define vfms_lane_f64(__p0_48, __p1_48, __p2_48, __p3_48) __extension__ ({ \
  float64x1_t __s0_48 = __p0_48; \
  float64x1_t __s1_48 = __p1_48; \
  float64x1_t __s2_48 = __p2_48; \
  float64x1_t __ret_48; \
  __ret_48 = vfma_lane_f64(__s0_48, __s1_48, -__s2_48, __p3_48); \
  __ret_48; \
})
#define vfms_lane_f32(__p0_49, __p1_49, __p2_49, __p3_49) __extension__ ({ \
  float32x2_t __s0_49 = __p0_49; \
  float32x2_t __s1_49 = __p1_49; \
  float32x2_t __s2_49 = __p2_49; \
  float32x2_t __ret_49; \
  __ret_49 = vfma_lane_f32(__s0_49, __s1_49, -__s2_49, __p3_49); \
  __ret_49; \
})
#define vfmsd_laneq_f64(__p0_50, __p1_50, __p2_50, __p3_50) __extension__ ({ \
  float64_t __s0_50 = __p0_50; \
  float64_t __s1_50 = __p1_50; \
  float64x2_t __s2_50 = __p2_50; \
  float64_t __ret_50; \
  __ret_50 = vfmad_laneq_f64(__s0_50, __s1_50, -__s2_50, __p3_50); \
  __ret_50; \
})
#define vfmss_laneq_f32(__p0_51, __p1_51, __p2_51, __p3_51) __extension__ ({ \
  float32_t __s0_51 = __p0_51; \
  float32_t __s1_51 = __p1_51; \
  float32x4_t __s2_51 = __p2_51; \
  float32_t __ret_51; \
  __ret_51 = vfmas_laneq_f32(__s0_51, __s1_51, -__s2_51, __p3_51); \
  __ret_51; \
})
#define vfmsq_laneq_f64(__p0_52, __p1_52, __p2_52, __p3_52) __extension__ ({ \
  float64x2_t __s0_52 = __p0_52; \
  float64x2_t __s1_52 = __p1_52; \
  float64x2_t __s2_52 = __p2_52; \
  float64x2_t __ret_52; \
  __ret_52 = vfmaq_laneq_f64(__s0_52, __s1_52, -__s2_52, __p3_52); \
  __ret_52; \
})
#define vfmsq_laneq_f32(__p0_53, __p1_53, __p2_53, __p3_53) __extension__ ({ \
  float32x4_t __s0_53 = __p0_53; \
  float32x4_t __s1_53 = __p1_53; \
  float32x4_t __s2_53 = __p2_53; \
  float32x4_t __ret_53; \
  __ret_53 = vfmaq_laneq_f32(__s0_53, __s1_53, -__s2_53, __p3_53); \
  __ret_53; \
})
#define vfms_laneq_f64(__p0_54, __p1_54, __p2_54, __p3_54) __extension__ ({ \
  float64x1_t __s0_54 = __p0_54; \
  float64x1_t __s1_54 = __p1_54; \
  float64x2_t __s2_54 = __p2_54; \
  float64x1_t __ret_54; \
  __ret_54 = vfma_laneq_f64(__s0_54, __s1_54, -__s2_54, __p3_54); \
  __ret_54; \
})
#define vfms_laneq_f32(__p0_55, __p1_55, __p2_55, __p3_55) __extension__ ({ \
  float32x2_t __s0_55 = __p0_55; \
  float32x2_t __s1_55 = __p1_55; \
  float32x4_t __s2_55 = __p2_55; \
  float32x2_t __ret_55; \
  __ret_55 = vfma_laneq_f32(__s0_55, __s1_55, -__s2_55, __p3_55); \
  __ret_55; \
})
__ai float64x2_t vfmsq_n_f64(float64x2_t __p0, float64x2_t __p1, float64_t __p2) {
  float64x2_t __ret;
  __ret = vfmsq_f64(__p0, __p1, (float64x2_t) {__p2, __p2});
  return __ret;
}
__ai float32x4_t vfmsq_n_f32(float32x4_t __p0, float32x4_t __p1, float32_t __p2) {
  float32x4_t __ret;
  __ret = vfmsq_f32(__p0, __p1, (float32x4_t) {__p2, __p2, __p2, __p2});
  return __ret;
}
__ai float32x2_t vfms_n_f32(float32x2_t __p0, float32x2_t __p1, float32_t __p2) {
  float32x2_t __ret;
  __ret = vfms_f32(__p0, __p1, (float32x2_t) {__p2, __p2});
  return __ret;
}
__ai poly64x1_t vget_high_p64(poly64x2_t __p0) {
  poly64x1_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1);
  return __ret;
}
__ai float64x1_t vget_high_f64(float64x2_t __p0) {
  float64x1_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 1);
  return __ret;
}
#define vget_lane_p64(__p0, __p1) __extension__ ({ \
  poly64x1_t __s0 = __p0; \
  poly64_t __ret; \
  __ret = (poly64_t) __builtin_neon_vget_lane_i64((int8x8_t)__s0, __p1); \
  __ret; \
})
#define vgetq_lane_p64(__p0, __p1) __extension__ ({ \
  poly64x2_t __s0 = __p0; \
  poly64_t __ret; \
  __ret = (poly64_t) __builtin_neon_vgetq_lane_i64((int8x16_t)__s0, __p1); \
  __ret; \
})
#define vgetq_lane_f64(__p0, __p1) __extension__ ({ \
  float64x2_t __s0 = __p0; \
  float64_t __ret; \
  __ret = (float64_t) __builtin_neon_vgetq_lane_f64((int8x16_t)__s0, __p1); \
  __ret; \
})
#define vget_lane_f64(__p0, __p1) __extension__ ({ \
  float64x1_t __s0 = __p0; \
  float64_t __ret; \
  __ret = (float64_t) __builtin_neon_vget_lane_f64((int8x8_t)__s0, __p1); \
  __ret; \
})
#define vget_lane_f16(__p0_56, __p1_56) __extension__ ({ \
  float16x4_t __s0_56 = __p0_56; \
  float16_t __ret_56; \
float16x4_t __reint_56 = __s0_56; \
int16_t __reint1_56 = vget_lane_s16(*(int16x4_t *) &__reint_56, __p1_56); \
  __ret_56 = *(float16_t *) &__reint1_56; \
  __ret_56; \
})
#define vgetq_lane_f16(__p0_57, __p1_57) __extension__ ({ \
  float16x8_t __s0_57 = __p0_57; \
  float16_t __ret_57; \
float16x8_t __reint_57 = __s0_57; \
int16_t __reint1_57 = vgetq_lane_s16(*(int16x8_t *) &__reint_57, __p1_57); \
  __ret_57 = *(float16_t *) &__reint1_57; \
  __ret_57; \
})
__ai poly64x1_t vget_low_p64(poly64x2_t __p0) {
  poly64x1_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 0);
  return __ret;
}
__ai float64x1_t vget_low_f64(float64x2_t __p0) {
  float64x1_t __ret;
  __ret = __builtin_shufflevector(__p0, __p0, 0);
  return __ret;
}
#define vld1_p64(__p0) __extension__ ({ \
  poly64x1_t __ret; \
  __ret = (poly64x1_t) __builtin_neon_vld1_v(__p0, 6); \
  __ret; \
})
#define vld1q_p64(__p0) __extension__ ({ \
  poly64x2_t __ret; \
  __ret = (poly64x2_t) __builtin_neon_vld1q_v(__p0, 38); \
  __ret; \
})
#define vld1q_f64(__p0) __extension__ ({ \
  float64x2_t __ret; \
  __ret = (float64x2_t) __builtin_neon_vld1q_v(__p0, 42); \
  __ret; \
})
#define vld1_f64(__p0) __extension__ ({ \
  float64x1_t __ret; \
  __ret = (float64x1_t) __builtin_neon_vld1_v(__p0, 10); \
  __ret; \
})
#define vld1_dup_p64(__p0) __extension__ ({ \
  poly64x1_t __ret; \
  __ret = (poly64x1_t) __builtin_neon_vld1_dup_v(__p0, 6); \
  __ret; \
})
#define vld1q_dup_p64(__p0) __extension__ ({ \
  poly64x2_t __ret; \
  __ret = (poly64x2_t) __builtin_neon_vld1q_dup_v(__p0, 38); \
  __ret; \
})
#define vld1q_dup_f64(__p0) __extension__ ({ \
  float64x2_t __ret; \
  __ret = (float64x2_t) __builtin_neon_vld1q_dup_v(__p0, 42); \
  __ret; \
})
#define vld1_dup_f64(__p0) __extension__ ({ \
  float64x1_t __ret; \
  __ret = (float64x1_t) __builtin_neon_vld1_dup_v(__p0, 10); \
  __ret; \
})
#define vld1_lane_p64(__p0, __p1, __p2) __extension__ ({ \
  poly64x1_t __s1 = __p1; \
  poly64x1_t __ret; \
  __ret = (poly64x1_t) __builtin_neon_vld1_lane_v(__p0, (int8x8_t)__s1, __p2, 6); \
  __ret; \
})
#define vld1q_lane_p64(__p0, __p1, __p2) __extension__ ({ \
  poly64x2_t __s1 = __p1; \
  poly64x2_t __ret; \
  __ret = (poly64x2_t) __builtin_neon_vld1q_lane_v(__p0, (int8x16_t)__s1, __p2, 38); \
  __ret; \
})
#define vld1q_lane_f64(__p0, __p1, __p2) __extension__ ({ \
  float64x2_t __s1 = __p1; \
  float64x2_t __ret; \
  __ret = (float64x2_t) __builtin_neon_vld1q_lane_v(__p0, (int8x16_t)__s1, __p2, 42); \
  __ret; \
})
#define vld1_lane_f64(__p0, __p1, __p2) __extension__ ({ \
  float64x1_t __s1 = __p1; \
  float64x1_t __ret; \
  __ret = (float64x1_t) __builtin_neon_vld1_lane_v(__p0, (int8x8_t)__s1, __p2, 10); \
  __ret; \
})
#define vld1_p8_x2(__p0) __extension__ ({ \
  poly8x8x2_t __ret; \
  __builtin_neon_vld1_x2_v(&__ret, __p0, 4); \
  __ret; \
})
#define vld1_p64_x2(__p0) __extension__ ({ \
  poly64x1x2_t __ret; \
  __builtin_neon_vld1_x2_v(&__ret, __p0, 6); \
  __ret; \
})
#define vld1_p16_x2(__p0) __extension__ ({ \
  poly16x4x2_t __ret; \
  __builtin_neon_vld1_x2_v(&__ret, __p0, 5); \
  __ret; \
})
#define vld1q_p8_x2(__p0) __extension__ ({ \
  poly8x16x2_t __ret; \
  __builtin_neon_vld1q_x2_v(&__ret, __p0, 36); \
  __ret; \
})
#define vld1q_p64_x2(__p0) __extension__ ({ \
  poly64x2x2_t __ret; \
  __builtin_neon_vld1q_x2_v(&__ret, __p0, 38); \
  __ret; \
})
#define vld1q_p16_x2(__p0) __extension__ ({ \
  poly16x8x2_t __ret; \
  __builtin_neon_vld1q_x2_v(&__ret, __p0, 37); \
  __ret; \
})
#define vld1q_u8_x2(__p0) __extension__ ({ \
  uint8x16x2_t __ret; \
  __builtin_neon_vld1q_x2_v(&__ret, __p0, 48); \
  __ret; \
})
#define vld1q_u32_x2(__p0) __extension__ ({ \
  uint32x4x2_t __ret; \
  __builtin_neon_vld1q_x2_v(&__ret, __p0, 50); \
  __ret; \
})
#define vld1q_u64_x2(__p0) __extension__ ({ \
  uint64x2x2_t __ret; \
  __builtin_neon_vld1q_x2_v(&__ret, __p0, 51); \
  __ret; \
})
#define vld1q_u16_x2(__p0) __extension__ ({ \
  uint16x8x2_t __ret; \
  __builtin_neon_vld1q_x2_v(&__ret, __p0, 49); \
  __ret; \
})
#define vld1q_s8_x2(__p0) __extension__ ({ \
  int8x16x2_t __ret; \
  __builtin_neon_vld1q_x2_v(&__ret, __p0, 32); \
  __ret; \
})
#define vld1q_f64_x2(__p0) __extension__ ({ \
  float64x2x2_t __ret; \
  __builtin_neon_vld1q_x2_v(&__ret, __p0, 42); \
  __ret; \
})
#define vld1q_f32_x2(__p0) __extension__ ({ \
  float32x4x2_t __ret; \
  __builtin_neon_vld1q_x2_v(&__ret, __p0, 41); \
  __ret; \
})
#define vld1q_f16_x2(__p0) __extension__ ({ \
  float16x8x2_t __ret; \
  __builtin_neon_vld1q_x2_v(&__ret, __p0, 40); \
  __ret; \
})
#define vld1q_s32_x2(__p0) __extension__ ({ \
  int32x4x2_t __ret; \
  __builtin_neon_vld1q_x2_v(&__ret, __p0, 34); \
  __ret; \
})
#define vld1q_s64_x2(__p0) __extension__ ({ \
  int64x2x2_t __ret; \
  __builtin_neon_vld1q_x2_v(&__ret, __p0, 35); \
  __ret; \
})
#define vld1q_s16_x2(__p0) __extension__ ({ \
  int16x8x2_t __ret; \
  __builtin_neon_vld1q_x2_v(&__ret, __p0, 33); \
  __ret; \
})
#define vld1_u8_x2(__p0) __extension__ ({ \
  uint8x8x2_t __ret; \
  __builtin_neon_vld1_x2_v(&__ret, __p0, 16); \
  __ret; \
})
#define vld1_u32_x2(__p0) __extension__ ({ \
  uint32x2x2_t __ret; \
  __builtin_neon_vld1_x2_v(&__ret, __p0, 18); \
  __ret; \
})
#define vld1_u64_x2(__p0) __extension__ ({ \
  uint64x1x2_t __ret; \
  __builtin_neon_vld1_x2_v(&__ret, __p0, 19); \
  __ret; \
})
#define vld1_u16_x2(__p0) __extension__ ({ \
  uint16x4x2_t __ret; \
  __builtin_neon_vld1_x2_v(&__ret, __p0, 17); \
  __ret; \
})
#define vld1_s8_x2(__p0) __extension__ ({ \
  int8x8x2_t __ret; \
  __builtin_neon_vld1_x2_v(&__ret, __p0, 0); \
  __ret; \
})
#define vld1_f64_x2(__p0) __extension__ ({ \
  float64x1x2_t __ret; \
  __builtin_neon_vld1_x2_v(&__ret, __p0, 10); \
  __ret; \
})
#define vld1_f32_x2(__p0) __extension__ ({ \
  float32x2x2_t __ret; \
  __builtin_neon_vld1_x2_v(&__ret, __p0, 9); \
  __ret; \
})
#define vld1_f16_x2(__p0) __extension__ ({ \
  float16x4x2_t __ret; \
  __builtin_neon_vld1_x2_v(&__ret, __p0, 8); \
  __ret; \
})
#define vld1_s32_x2(__p0) __extension__ ({ \
  int32x2x2_t __ret; \
  __builtin_neon_vld1_x2_v(&__ret, __p0, 2); \
  __ret; \
})
#define vld1_s64_x2(__p0) __extension__ ({ \
  int64x1x2_t __ret; \
  __builtin_neon_vld1_x2_v(&__ret, __p0, 3); \
  __ret; \
})
#define vld1_s16_x2(__p0) __extension__ ({ \
  int16x4x2_t __ret; \
  __builtin_neon_vld1_x2_v(&__ret, __p0, 1); \
  __ret; \
})
#define vld1_p8_x3(__p0) __extension__ ({ \
  poly8x8x3_t __ret; \
  __builtin_neon_vld1_x3_v(&__ret, __p0, 4); \
  __ret; \
})
#define vld1_p64_x3(__p0) __extension__ ({ \
  poly64x1x3_t __ret; \
  __builtin_neon_vld1_x3_v(&__ret, __p0, 6); \
  __ret; \
})
#define vld1_p16_x3(__p0) __extension__ ({ \
  poly16x4x3_t __ret; \
  __builtin_neon_vld1_x3_v(&__ret, __p0, 5); \
  __ret; \
})
#define vld1q_p8_x3(__p0) __extension__ ({ \
  poly8x16x3_t __ret; \
  __builtin_neon_vld1q_x3_v(&__ret, __p0, 36); \
  __ret; \
})
#define vld1q_p64_x3(__p0) __extension__ ({ \
  poly64x2x3_t __ret; \
  __builtin_neon_vld1q_x3_v(&__ret, __p0, 38); \
  __ret; \
})
#define vld1q_p16_x3(__p0) __extension__ ({ \
  poly16x8x3_t __ret; \
  __builtin_neon_vld1q_x3_v(&__ret, __p0, 37); \
  __ret; \
})
#define vld1q_u8_x3(__p0) __extension__ ({ \
  uint8x16x3_t __ret; \
  __builtin_neon_vld1q_x3_v(&__ret, __p0, 48); \
  __ret; \
})
#define vld1q_u32_x3(__p0) __extension__ ({ \
  uint32x4x3_t __ret; \
  __builtin_neon_vld1q_x3_v(&__ret, __p0, 50); \
  __ret; \
})
#define vld1q_u64_x3(__p0) __extension__ ({ \
  uint64x2x3_t __ret; \
  __builtin_neon_vld1q_x3_v(&__ret, __p0, 51); \
  __ret; \
})
#define vld1q_u16_x3(__p0) __extension__ ({ \
  uint16x8x3_t __ret; \
  __builtin_neon_vld1q_x3_v(&__ret, __p0, 49); \
  __ret; \
})
#define vld1q_s8_x3(__p0) __extension__ ({ \
  int8x16x3_t __ret; \
  __builtin_neon_vld1q_x3_v(&__ret, __p0, 32); \
  __ret; \
})
#define vld1q_f64_x3(__p0) __extension__ ({ \
  float64x2x3_t __ret; \
  __builtin_neon_vld1q_x3_v(&__ret, __p0, 42); \
  __ret; \
})
#define vld1q_f32_x3(__p0) __extension__ ({ \
  float32x4x3_t __ret; \
  __builtin_neon_vld1q_x3_v(&__ret, __p0, 41); \
  __ret; \
})
#define vld1q_f16_x3(__p0) __extension__ ({ \
  float16x8x3_t __ret; \
  __builtin_neon_vld1q_x3_v(&__ret, __p0, 40); \
  __ret; \
})
#define vld1q_s32_x3(__p0) __extension__ ({ \
  int32x4x3_t __ret; \
  __builtin_neon_vld1q_x3_v(&__ret, __p0, 34); \
  __ret; \
})
#define vld1q_s64_x3(__p0) __extension__ ({ \
  int64x2x3_t __ret; \
  __builtin_neon_vld1q_x3_v(&__ret, __p0, 35); \
  __ret; \
})
#define vld1q_s16_x3(__p0) __extension__ ({ \
  int16x8x3_t __ret; \
  __builtin_neon_vld1q_x3_v(&__ret, __p0, 33); \
  __ret; \
})
#define vld1_u8_x3(__p0) __extension__ ({ \
  uint8x8x3_t __ret; \
  __builtin_neon_vld1_x3_v(&__ret, __p0, 16); \
  __ret; \
})
#define vld1_u32_x3(__p0) __extension__ ({ \
  uint32x2x3_t __ret; \
  __builtin_neon_vld1_x3_v(&__ret, __p0, 18); \
  __ret; \
})
#define vld1_u64_x3(__p0) __extension__ ({ \
  uint64x1x3_t __ret; \
  __builtin_neon_vld1_x3_v(&__ret, __p0, 19); \
  __ret; \
})
#define vld1_u16_x3(__p0) __extension__ ({ \
  uint16x4x3_t __ret; \
  __builtin_neon_vld1_x3_v(&__ret, __p0, 17); \
  __ret; \
})
#define vld1_s8_x3(__p0) __extension__ ({ \
  int8x8x3_t __ret; \
  __builtin_neon_vld1_x3_v(&__ret, __p0, 0); \
  __ret; \
})
#define vld1_f64_x3(__p0) __extension__ ({ \
  float64x1x3_t __ret; \
  __builtin_neon_vld1_x3_v(&__ret, __p0, 10); \
  __ret; \
})
#define vld1_f32_x3(__p0) __extension__ ({ \
  float32x2x3_t __ret; \
  __builtin_neon_vld1_x3_v(&__ret, __p0, 9); \
  __ret; \
})
#define vld1_f16_x3(__p0) __extension__ ({ \
  float16x4x3_t __ret; \
  __builtin_neon_vld1_x3_v(&__ret, __p0, 8); \
  __ret; \
})
#define vld1_s32_x3(__p0) __extension__ ({ \
  int32x2x3_t __ret; \
  __builtin_neon_vld1_x3_v(&__ret, __p0, 2); \
  __ret; \
})
#define vld1_s64_x3(__p0) __extension__ ({ \
  int64x1x3_t __ret; \
  __builtin_neon_vld1_x3_v(&__ret, __p0, 3); \
  __ret; \
})
#define vld1_s16_x3(__p0) __extension__ ({ \
  int16x4x3_t __ret; \
  __builtin_neon_vld1_x3_v(&__ret, __p0, 1); \
  __ret; \
})
#define vld1_p8_x4(__p0) __extension__ ({ \
  poly8x8x4_t __ret; \
  __builtin_neon_vld1_x4_v(&__ret, __p0, 4); \
  __ret; \
})
#define vld1_p64_x4(__p0) __extension__ ({ \
  poly64x1x4_t __ret; \
  __builtin_neon_vld1_x4_v(&__ret, __p0, 6); \
  __ret; \
})
#define vld1_p16_x4(__p0) __extension__ ({ \
  poly16x4x4_t __ret; \
  __builtin_neon_vld1_x4_v(&__ret, __p0, 5); \
  __ret; \
})
#define vld1q_p8_x4(__p0) __extension__ ({ \
  poly8x16x4_t __ret; \
  __builtin_neon_vld1q_x4_v(&__ret, __p0, 36); \
  __ret; \
})
#define vld1q_p64_x4(__p0) __extension__ ({ \
  poly64x2x4_t __ret; \
  __builtin_neon_vld1q_x4_v(&__ret, __p0, 38); \
  __ret; \
})
#define vld1q_p16_x4(__p0) __extension__ ({ \
  poly16x8x4_t __ret; \
  __builtin_neon_vld1q_x4_v(&__ret, __p0, 37); \
  __ret; \
})
#define vld1q_u8_x4(__p0) __extension__ ({ \
  uint8x16x4_t __ret; \
  __builtin_neon_vld1q_x4_v(&__ret, __p0, 48); \
  __ret; \
})
#define vld1q_u32_x4(__p0) __extension__ ({ \
  uint32x4x4_t __ret; \
  __builtin_neon_vld1q_x4_v(&__ret, __p0, 50); \
  __ret; \
})
#define vld1q_u64_x4(__p0) __extension__ ({ \
  uint64x2x4_t __ret; \
  __builtin_neon_vld1q_x4_v(&__ret, __p0, 51); \
  __ret; \
})
#define vld1q_u16_x4(__p0) __extension__ ({ \
  uint16x8x4_t __ret; \
  __builtin_neon_vld1q_x4_v(&__ret, __p0, 49); \
  __ret; \
})
#define vld1q_s8_x4(__p0) __extension__ ({ \
  int8x16x4_t __ret; \
  __builtin_neon_vld1q_x4_v(&__ret, __p0, 32); \
  __ret; \
})
#define vld1q_f64_x4(__p0) __extension__ ({ \
  float64x2x4_t __ret; \
  __builtin_neon_vld1q_x4_v(&__ret, __p0, 42); \
  __ret; \
})
#define vld1q_f32_x4(__p0) __extension__ ({ \
  float32x4x4_t __ret; \
  __builtin_neon_vld1q_x4_v(&__ret, __p0, 41); \
  __ret; \
})
#define vld1q_f16_x4(__p0) __extension__ ({ \
  float16x8x4_t __ret; \
  __builtin_neon_vld1q_x4_v(&__ret, __p0, 40); \
  __ret; \
})
#define vld1q_s32_x4(__p0) __extension__ ({ \
  int32x4x4_t __ret; \
  __builtin_neon_vld1q_x4_v(&__ret, __p0, 34); \
  __ret; \
})
#define vld1q_s64_x4(__p0) __extension__ ({ \
  int64x2x4_t __ret; \
  __builtin_neon_vld1q_x4_v(&__ret, __p0, 35); \
  __ret; \
})
#define vld1q_s16_x4(__p0) __extension__ ({ \
  int16x8x4_t __ret; \
  __builtin_neon_vld1q_x4_v(&__ret, __p0, 33); \
  __ret; \
})
#define vld1_u8_x4(__p0) __extension__ ({ \
  uint8x8x4_t __ret; \
  __builtin_neon_vld1_x4_v(&__ret, __p0, 16); \
  __ret; \
})
#define vld1_u32_x4(__p0) __extension__ ({ \
  uint32x2x4_t __ret; \
  __builtin_neon_vld1_x4_v(&__ret, __p0, 18); \
  __ret; \
})
#define vld1_u64_x4(__p0) __extension__ ({ \
  uint64x1x4_t __ret; \
  __builtin_neon_vld1_x4_v(&__ret, __p0, 19); \
  __ret; \
})
#define vld1_u16_x4(__p0) __extension__ ({ \
  uint16x4x4_t __ret; \
  __builtin_neon_vld1_x4_v(&__ret, __p0, 17); \
  __ret; \
})
#define vld1_s8_x4(__p0) __extension__ ({ \
  int8x8x4_t __ret; \
  __builtin_neon_vld1_x4_v(&__ret, __p0, 0); \
  __ret; \
})
#define vld1_f64_x4(__p0) __extension__ ({ \
  float64x1x4_t __ret; \
  __builtin_neon_vld1_x4_v(&__ret, __p0, 10); \
  __ret; \
})
#define vld1_f32_x4(__p0) __extension__ ({ \
  float32x2x4_t __ret; \
  __builtin_neon_vld1_x4_v(&__ret, __p0, 9); \
  __ret; \
})
#define vld1_f16_x4(__p0) __extension__ ({ \
  float16x4x4_t __ret; \
  __builtin_neon_vld1_x4_v(&__ret, __p0, 8); \
  __ret; \
})
#define vld1_s32_x4(__p0) __extension__ ({ \
  int32x2x4_t __ret; \
  __builtin_neon_vld1_x4_v(&__ret, __p0, 2); \
  __ret; \
})
#define vld1_s64_x4(__p0) __extension__ ({ \
  int64x1x4_t __ret; \
  __builtin_neon_vld1_x4_v(&__ret, __p0, 3); \
  __ret; \
})
#define vld1_s16_x4(__p0) __extension__ ({ \
  int16x4x4_t __ret; \
  __builtin_neon_vld1_x4_v(&__ret, __p0, 1); \
  __ret; \
})
#define vld2_p64(__p0) __extension__ ({ \
  poly64x1x2_t __ret; \
  __builtin_neon_vld2_v(&__ret, __p0, 6); \
  __ret; \
})
#define vld2q_p64(__p0) __extension__ ({ \
  poly64x2x2_t __ret; \
  __builtin_neon_vld2q_v(&__ret, __p0, 38); \
  __ret; \
})
#define vld2q_u64(__p0) __extension__ ({ \
  uint64x2x2_t __ret; \
  __builtin_neon_vld2q_v(&__ret, __p0, 51); \
  __ret; \
})
#define vld2q_f64(__p0) __extension__ ({ \
  float64x2x2_t __ret; \
  __builtin_neon_vld2q_v(&__ret, __p0, 42); \
  __ret; \
})
#define vld2q_s64(__p0) __extension__ ({ \
  int64x2x2_t __ret; \
  __builtin_neon_vld2q_v(&__ret, __p0, 35); \
  __ret; \
})
#define vld2_f64(__p0) __extension__ ({ \
  float64x1x2_t __ret; \
  __builtin_neon_vld2_v(&__ret, __p0, 10); \
  __ret; \
})
#define vld2_dup_p64(__p0) __extension__ ({ \
  poly64x1x2_t __ret; \
  __builtin_neon_vld2_dup_v(&__ret, __p0, 6); \
  __ret; \
})
#define vld2q_dup_p8(__p0) __extension__ ({ \
  poly8x16x2_t __ret; \
  __builtin_neon_vld2q_dup_v(&__ret, __p0, 36); \
  __ret; \
})
#define vld2q_dup_p64(__p0) __extension__ ({ \
  poly64x2x2_t __ret; \
  __builtin_neon_vld2q_dup_v(&__ret, __p0, 38); \
  __ret; \
})
#define vld2q_dup_p16(__p0) __extension__ ({ \
  poly16x8x2_t __ret; \
  __builtin_neon_vld2q_dup_v(&__ret, __p0, 37); \
  __ret; \
})
#define vld2q_dup_u8(__p0) __extension__ ({ \
  uint8x16x2_t __ret; \
  __builtin_neon_vld2q_dup_v(&__ret, __p0, 48); \
  __ret; \
})
#define vld2q_dup_u32(__p0) __extension__ ({ \
  uint32x4x2_t __ret; \
  __builtin_neon_vld2q_dup_v(&__ret, __p0, 50); \
  __ret; \
})
#define vld2q_dup_u64(__p0) __extension__ ({ \
  uint64x2x2_t __ret; \
  __builtin_neon_vld2q_dup_v(&__ret, __p0, 51); \
  __ret; \
})
#define vld2q_dup_u16(__p0) __extension__ ({ \
  uint16x8x2_t __ret; \
  __builtin_neon_vld2q_dup_v(&__ret, __p0, 49); \
  __ret; \
})
#define vld2q_dup_s8(__p0) __extension__ ({ \
  int8x16x2_t __ret; \
  __builtin_neon_vld2q_dup_v(&__ret, __p0, 32); \
  __ret; \
})
#define vld2q_dup_f64(__p0) __extension__ ({ \
  float64x2x2_t __ret; \
  __builtin_neon_vld2q_dup_v(&__ret, __p0, 42); \
  __ret; \
})
#define vld2q_dup_f32(__p0) __extension__ ({ \
  float32x4x2_t __ret; \
  __builtin_neon_vld2q_dup_v(&__ret, __p0, 41); \
  __ret; \
})
#define vld2q_dup_f16(__p0) __extension__ ({ \
  float16x8x2_t __ret; \
  __builtin_neon_vld2q_dup_v(&__ret, __p0, 40); \
  __ret; \
})
#define vld2q_dup_s32(__p0) __extension__ ({ \
  int32x4x2_t __ret; \
  __builtin_neon_vld2q_dup_v(&__ret, __p0, 34); \
  __ret; \
})
#define vld2q_dup_s64(__p0) __extension__ ({ \
  int64x2x2_t __ret; \
  __builtin_neon_vld2q_dup_v(&__ret, __p0, 35); \
  __ret; \
})
#define vld2q_dup_s16(__p0) __extension__ ({ \
  int16x8x2_t __ret; \
  __builtin_neon_vld2q_dup_v(&__ret, __p0, 33); \
  __ret; \
})
#define vld2_dup_f64(__p0) __extension__ ({ \
  float64x1x2_t __ret; \
  __builtin_neon_vld2_dup_v(&__ret, __p0, 10); \
  __ret; \
})
#define vld2_lane_p64(__p0, __p1, __p2) __extension__ ({ \
  poly64x1x2_t __s1 = __p1; \
  poly64x1x2_t __ret; \
  __builtin_neon_vld2_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 6); \
  __ret; \
})
#define vld2q_lane_p8(__p0, __p1, __p2) __extension__ ({ \
  poly8x16x2_t __s1 = __p1; \
  poly8x16x2_t __ret; \
  __builtin_neon_vld2q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 36); \
  __ret; \
})
#define vld2q_lane_p64(__p0, __p1, __p2) __extension__ ({ \
  poly64x2x2_t __s1 = __p1; \
  poly64x2x2_t __ret; \
  __builtin_neon_vld2q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 38); \
  __ret; \
})
#define vld2q_lane_u8(__p0, __p1, __p2) __extension__ ({ \
  uint8x16x2_t __s1 = __p1; \
  uint8x16x2_t __ret; \
  __builtin_neon_vld2q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 48); \
  __ret; \
})
#define vld2q_lane_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64x2x2_t __s1 = __p1; \
  uint64x2x2_t __ret; \
  __builtin_neon_vld2q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 51); \
  __ret; \
})
#define vld2q_lane_s8(__p0, __p1, __p2) __extension__ ({ \
  int8x16x2_t __s1 = __p1; \
  int8x16x2_t __ret; \
  __builtin_neon_vld2q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 32); \
  __ret; \
})
#define vld2q_lane_f64(__p0, __p1, __p2) __extension__ ({ \
  float64x2x2_t __s1 = __p1; \
  float64x2x2_t __ret; \
  __builtin_neon_vld2q_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __p2, 42); \
  __ret; \
})
#define vld2q_lane_s64(__p0, __p1, __p2) __extension__ ({ \
  int64x2x2_t __s1 = __p1; \
  int64x2x2_t __ret; \
  __builtin_neon_vld2q_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __p2, 35); \
  __ret; \
})
#define vld2_lane_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64x1x2_t __s1 = __p1; \
  uint64x1x2_t __ret; \
  __builtin_neon_vld2_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 19); \
  __ret; \
})
#define vld2_lane_f64(__p0, __p1, __p2) __extension__ ({ \
  float64x1x2_t __s1 = __p1; \
  float64x1x2_t __ret; \
  __builtin_neon_vld2_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __p2, 10); \
  __ret; \
})
#define vld2_lane_s64(__p0, __p1, __p2) __extension__ ({ \
  int64x1x2_t __s1 = __p1; \
  int64x1x2_t __ret; \
  __builtin_neon_vld2_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __p2, 3); \
  __ret; \
})
#define vld3_p64(__p0) __extension__ ({ \
  poly64x1x3_t __ret; \
  __builtin_neon_vld3_v(&__ret, __p0, 6); \
  __ret; \
})
#define vld3q_p64(__p0) __extension__ ({ \
  poly64x2x3_t __ret; \
  __builtin_neon_vld3q_v(&__ret, __p0, 38); \
  __ret; \
})
#define vld3q_u64(__p0) __extension__ ({ \
  uint64x2x3_t __ret; \
  __builtin_neon_vld3q_v(&__ret, __p0, 51); \
  __ret; \
})
#define vld3q_f64(__p0) __extension__ ({ \
  float64x2x3_t __ret; \
  __builtin_neon_vld3q_v(&__ret, __p0, 42); \
  __ret; \
})
#define vld3q_s64(__p0) __extension__ ({ \
  int64x2x3_t __ret; \
  __builtin_neon_vld3q_v(&__ret, __p0, 35); \
  __ret; \
})
#define vld3_f64(__p0) __extension__ ({ \
  float64x1x3_t __ret; \
  __builtin_neon_vld3_v(&__ret, __p0, 10); \
  __ret; \
})
#define vld3_dup_p64(__p0) __extension__ ({ \
  poly64x1x3_t __ret; \
  __builtin_neon_vld3_dup_v(&__ret, __p0, 6); \
  __ret; \
})
#define vld3q_dup_p8(__p0) __extension__ ({ \
  poly8x16x3_t __ret; \
  __builtin_neon_vld3q_dup_v(&__ret, __p0, 36); \
  __ret; \
})
#define vld3q_dup_p64(__p0) __extension__ ({ \
  poly64x2x3_t __ret; \
  __builtin_neon_vld3q_dup_v(&__ret, __p0, 38); \
  __ret; \
})
#define vld3q_dup_p16(__p0) __extension__ ({ \
  poly16x8x3_t __ret; \
  __builtin_neon_vld3q_dup_v(&__ret, __p0, 37); \
  __ret; \
})
#define vld3q_dup_u8(__p0) __extension__ ({ \
  uint8x16x3_t __ret; \
  __builtin_neon_vld3q_dup_v(&__ret, __p0, 48); \
  __ret; \
})
#define vld3q_dup_u32(__p0) __extension__ ({ \
  uint32x4x3_t __ret; \
  __builtin_neon_vld3q_dup_v(&__ret, __p0, 50); \
  __ret; \
})
#define vld3q_dup_u64(__p0) __extension__ ({ \
  uint64x2x3_t __ret; \
  __builtin_neon_vld3q_dup_v(&__ret, __p0, 51); \
  __ret; \
})
#define vld3q_dup_u16(__p0) __extension__ ({ \
  uint16x8x3_t __ret; \
  __builtin_neon_vld3q_dup_v(&__ret, __p0, 49); \
  __ret; \
})
#define vld3q_dup_s8(__p0) __extension__ ({ \
  int8x16x3_t __ret; \
  __builtin_neon_vld3q_dup_v(&__ret, __p0, 32); \
  __ret; \
})
#define vld3q_dup_f64(__p0) __extension__ ({ \
  float64x2x3_t __ret; \
  __builtin_neon_vld3q_dup_v(&__ret, __p0, 42); \
  __ret; \
})
#define vld3q_dup_f32(__p0) __extension__ ({ \
  float32x4x3_t __ret; \
  __builtin_neon_vld3q_dup_v(&__ret, __p0, 41); \
  __ret; \
})
#define vld3q_dup_f16(__p0) __extension__ ({ \
  float16x8x3_t __ret; \
  __builtin_neon_vld3q_dup_v(&__ret, __p0, 40); \
  __ret; \
})
#define vld3q_dup_s32(__p0) __extension__ ({ \
  int32x4x3_t __ret; \
  __builtin_neon_vld3q_dup_v(&__ret, __p0, 34); \
  __ret; \
})
#define vld3q_dup_s64(__p0) __extension__ ({ \
  int64x2x3_t __ret; \
  __builtin_neon_vld3q_dup_v(&__ret, __p0, 35); \
  __ret; \
})
#define vld3q_dup_s16(__p0) __extension__ ({ \
  int16x8x3_t __ret; \
  __builtin_neon_vld3q_dup_v(&__ret, __p0, 33); \
  __ret; \
})
#define vld3_dup_f64(__p0) __extension__ ({ \
  float64x1x3_t __ret; \
  __builtin_neon_vld3_dup_v(&__ret, __p0, 10); \
  __ret; \
})
#define vld3_lane_p64(__p0, __p1, __p2) __extension__ ({ \
  poly64x1x3_t __s1 = __p1; \
  poly64x1x3_t __ret; \
  __builtin_neon_vld3_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 6); \
  __ret; \
})
#define vld3q_lane_p8(__p0, __p1, __p2) __extension__ ({ \
  poly8x16x3_t __s1 = __p1; \
  poly8x16x3_t __ret; \
  __builtin_neon_vld3q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 36); \
  __ret; \
})
#define vld3q_lane_p64(__p0, __p1, __p2) __extension__ ({ \
  poly64x2x3_t __s1 = __p1; \
  poly64x2x3_t __ret; \
  __builtin_neon_vld3q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 38); \
  __ret; \
})
#define vld3q_lane_u8(__p0, __p1, __p2) __extension__ ({ \
  uint8x16x3_t __s1 = __p1; \
  uint8x16x3_t __ret; \
  __builtin_neon_vld3q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 48); \
  __ret; \
})
#define vld3q_lane_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64x2x3_t __s1 = __p1; \
  uint64x2x3_t __ret; \
  __builtin_neon_vld3q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 51); \
  __ret; \
})
#define vld3q_lane_s8(__p0, __p1, __p2) __extension__ ({ \
  int8x16x3_t __s1 = __p1; \
  int8x16x3_t __ret; \
  __builtin_neon_vld3q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 32); \
  __ret; \
})
#define vld3q_lane_f64(__p0, __p1, __p2) __extension__ ({ \
  float64x2x3_t __s1 = __p1; \
  float64x2x3_t __ret; \
  __builtin_neon_vld3q_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __s1.val[2], __p2, 42); \
  __ret; \
})
#define vld3q_lane_s64(__p0, __p1, __p2) __extension__ ({ \
  int64x2x3_t __s1 = __p1; \
  int64x2x3_t __ret; \
  __builtin_neon_vld3q_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __s1.val[2], __p2, 35); \
  __ret; \
})
#define vld3_lane_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64x1x3_t __s1 = __p1; \
  uint64x1x3_t __ret; \
  __builtin_neon_vld3_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 19); \
  __ret; \
})
#define vld3_lane_f64(__p0, __p1, __p2) __extension__ ({ \
  float64x1x3_t __s1 = __p1; \
  float64x1x3_t __ret; \
  __builtin_neon_vld3_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __s1.val[2], __p2, 10); \
  __ret; \
})
#define vld3_lane_s64(__p0, __p1, __p2) __extension__ ({ \
  int64x1x3_t __s1 = __p1; \
  int64x1x3_t __ret; \
  __builtin_neon_vld3_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __s1.val[2], __p2, 3); \
  __ret; \
})
#define vld4_p64(__p0) __extension__ ({ \
  poly64x1x4_t __ret; \
  __builtin_neon_vld4_v(&__ret, __p0, 6); \
  __ret; \
})
#define vld4q_p64(__p0) __extension__ ({ \
  poly64x2x4_t __ret; \
  __builtin_neon_vld4q_v(&__ret, __p0, 38); \
  __ret; \
})
#define vld4q_u64(__p0) __extension__ ({ \
  uint64x2x4_t __ret; \
  __builtin_neon_vld4q_v(&__ret, __p0, 51); \
  __ret; \
})
#define vld4q_f64(__p0) __extension__ ({ \
  float64x2x4_t __ret; \
  __builtin_neon_vld4q_v(&__ret, __p0, 42); \
  __ret; \
})
#define vld4q_s64(__p0) __extension__ ({ \
  int64x2x4_t __ret; \
  __builtin_neon_vld4q_v(&__ret, __p0, 35); \
  __ret; \
})
#define vld4_f64(__p0) __extension__ ({ \
  float64x1x4_t __ret; \
  __builtin_neon_vld4_v(&__ret, __p0, 10); \
  __ret; \
})
#define vld4_dup_p64(__p0) __extension__ ({ \
  poly64x1x4_t __ret; \
  __builtin_neon_vld4_dup_v(&__ret, __p0, 6); \
  __ret; \
})
#define vld4q_dup_p8(__p0) __extension__ ({ \
  poly8x16x4_t __ret; \
  __builtin_neon_vld4q_dup_v(&__ret, __p0, 36); \
  __ret; \
})
#define vld4q_dup_p64(__p0) __extension__ ({ \
  poly64x2x4_t __ret; \
  __builtin_neon_vld4q_dup_v(&__ret, __p0, 38); \
  __ret; \
})
#define vld4q_dup_p16(__p0) __extension__ ({ \
  poly16x8x4_t __ret; \
  __builtin_neon_vld4q_dup_v(&__ret, __p0, 37); \
  __ret; \
})
#define vld4q_dup_u8(__p0) __extension__ ({ \
  uint8x16x4_t __ret; \
  __builtin_neon_vld4q_dup_v(&__ret, __p0, 48); \
  __ret; \
})
#define vld4q_dup_u32(__p0) __extension__ ({ \
  uint32x4x4_t __ret; \
  __builtin_neon_vld4q_dup_v(&__ret, __p0, 50); \
  __ret; \
})
#define vld4q_dup_u64(__p0) __extension__ ({ \
  uint64x2x4_t __ret; \
  __builtin_neon_vld4q_dup_v(&__ret, __p0, 51); \
  __ret; \
})
#define vld4q_dup_u16(__p0) __extension__ ({ \
  uint16x8x4_t __ret; \
  __builtin_neon_vld4q_dup_v(&__ret, __p0, 49); \
  __ret; \
})
#define vld4q_dup_s8(__p0) __extension__ ({ \
  int8x16x4_t __ret; \
  __builtin_neon_vld4q_dup_v(&__ret, __p0, 32); \
  __ret; \
})
#define vld4q_dup_f64(__p0) __extension__ ({ \
  float64x2x4_t __ret; \
  __builtin_neon_vld4q_dup_v(&__ret, __p0, 42); \
  __ret; \
})
#define vld4q_dup_f32(__p0) __extension__ ({ \
  float32x4x4_t __ret; \
  __builtin_neon_vld4q_dup_v(&__ret, __p0, 41); \
  __ret; \
})
#define vld4q_dup_f16(__p0) __extension__ ({ \
  float16x8x4_t __ret; \
  __builtin_neon_vld4q_dup_v(&__ret, __p0, 40); \
  __ret; \
})
#define vld4q_dup_s32(__p0) __extension__ ({ \
  int32x4x4_t __ret; \
  __builtin_neon_vld4q_dup_v(&__ret, __p0, 34); \
  __ret; \
})
#define vld4q_dup_s64(__p0) __extension__ ({ \
  int64x2x4_t __ret; \
  __builtin_neon_vld4q_dup_v(&__ret, __p0, 35); \
  __ret; \
})
#define vld4q_dup_s16(__p0) __extension__ ({ \
  int16x8x4_t __ret; \
  __builtin_neon_vld4q_dup_v(&__ret, __p0, 33); \
  __ret; \
})
#define vld4_dup_f64(__p0) __extension__ ({ \
  float64x1x4_t __ret; \
  __builtin_neon_vld4_dup_v(&__ret, __p0, 10); \
  __ret; \
})
#define vld4_lane_p64(__p0, __p1, __p2) __extension__ ({ \
  poly64x1x4_t __s1 = __p1; \
  poly64x1x4_t __ret; \
  __builtin_neon_vld4_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 6); \
  __ret; \
})
#define vld4q_lane_p8(__p0, __p1, __p2) __extension__ ({ \
  poly8x16x4_t __s1 = __p1; \
  poly8x16x4_t __ret; \
  __builtin_neon_vld4q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 36); \
  __ret; \
})
#define vld4q_lane_p64(__p0, __p1, __p2) __extension__ ({ \
  poly64x2x4_t __s1 = __p1; \
  poly64x2x4_t __ret; \
  __builtin_neon_vld4q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 38); \
  __ret; \
})
#define vld4q_lane_u8(__p0, __p1, __p2) __extension__ ({ \
  uint8x16x4_t __s1 = __p1; \
  uint8x16x4_t __ret; \
  __builtin_neon_vld4q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 48); \
  __ret; \
})
#define vld4q_lane_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64x2x4_t __s1 = __p1; \
  uint64x2x4_t __ret; \
  __builtin_neon_vld4q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 51); \
  __ret; \
})
#define vld4q_lane_s8(__p0, __p1, __p2) __extension__ ({ \
  int8x16x4_t __s1 = __p1; \
  int8x16x4_t __ret; \
  __builtin_neon_vld4q_lane_v(&__ret, __p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 32); \
  __ret; \
})
#define vld4q_lane_f64(__p0, __p1, __p2) __extension__ ({ \
  float64x2x4_t __s1 = __p1; \
  float64x2x4_t __ret; \
  __builtin_neon_vld4q_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], __p2, 42); \
  __ret; \
})
#define vld4q_lane_s64(__p0, __p1, __p2) __extension__ ({ \
  int64x2x4_t __s1 = __p1; \
  int64x2x4_t __ret; \
  __builtin_neon_vld4q_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], __p2, 35); \
  __ret; \
})
#define vld4_lane_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64x1x4_t __s1 = __p1; \
  uint64x1x4_t __ret; \
  __builtin_neon_vld4_lane_v(&__ret, __p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 19); \
  __ret; \
})
#define vld4_lane_f64(__p0, __p1, __p2) __extension__ ({ \
  float64x1x4_t __s1 = __p1; \
  float64x1x4_t __ret; \
  __builtin_neon_vld4_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], __p2, 10); \
  __ret; \
})
#define vld4_lane_s64(__p0, __p1, __p2) __extension__ ({ \
  int64x1x4_t __s1 = __p1; \
  int64x1x4_t __ret; \
  __builtin_neon_vld4_lane_v(&__ret, __p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], __p2, 3); \
  __ret; \
})
#define vldrq_p128(__p0) __extension__ ({ \
  poly128_t __ret; \
  __ret = (poly128_t) __builtin_neon_vldrq_p128(__p0); \
  __ret; \
})
__ai float64x2_t vmaxq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 42);
  return __ret;
}
__ai float64x1_t vmax_f64(float64x1_t __p0, float64x1_t __p1) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vmax_v((int8x8_t)__p0, (int8x8_t)__p1, 10);
  return __ret;
}
__ai float64x2_t vmaxnmq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vmaxnmq_v((int8x16_t)__p0, (int8x16_t)__p1, 42);
  return __ret;
}
__ai float32x4_t vmaxnmq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vmaxnmq_v((int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
__ai float64x1_t vmaxnm_f64(float64x1_t __p0, float64x1_t __p1) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vmaxnm_v((int8x8_t)__p0, (int8x8_t)__p1, 10);
  return __ret;
}
__ai float32x2_t vmaxnm_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vmaxnm_v((int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
__ai float64_t vmaxnmvq_f64(float64x2_t __p0) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vmaxnmvq_f64((int8x16_t)__p0);
  return __ret;
}
__ai float32_t vmaxnmvq_f32(float32x4_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vmaxnmvq_f32((int8x16_t)__p0);
  return __ret;
}
__ai float32_t vmaxnmv_f32(float32x2_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vmaxnmv_f32((int8x8_t)__p0);
  return __ret;
}
__ai uint8_t vmaxvq_u8(uint8x16_t __p0) {
  uint8_t __ret;
  __ret = (uint8_t) __builtin_neon_vmaxvq_u8((int8x16_t)__p0);
  return __ret;
}
__ai uint32_t vmaxvq_u32(uint32x4_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vmaxvq_u32((int8x16_t)__p0);
  return __ret;
}
__ai uint16_t vmaxvq_u16(uint16x8_t __p0) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vmaxvq_u16((int8x16_t)__p0);
  return __ret;
}
__ai int8_t vmaxvq_s8(int8x16_t __p0) {
  int8_t __ret;
  __ret = (int8_t) __builtin_neon_vmaxvq_s8((int8x16_t)__p0);
  return __ret;
}
__ai float64_t vmaxvq_f64(float64x2_t __p0) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vmaxvq_f64((int8x16_t)__p0);
  return __ret;
}
__ai float32_t vmaxvq_f32(float32x4_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vmaxvq_f32((int8x16_t)__p0);
  return __ret;
}
__ai int32_t vmaxvq_s32(int32x4_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vmaxvq_s32((int8x16_t)__p0);
  return __ret;
}
__ai int16_t vmaxvq_s16(int16x8_t __p0) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vmaxvq_s16((int8x16_t)__p0);
  return __ret;
}
__ai uint8_t vmaxv_u8(uint8x8_t __p0) {
  uint8_t __ret;
  __ret = (uint8_t) __builtin_neon_vmaxv_u8((int8x8_t)__p0);
  return __ret;
}
__ai uint32_t vmaxv_u32(uint32x2_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vmaxv_u32((int8x8_t)__p0);
  return __ret;
}
__ai uint16_t vmaxv_u16(uint16x4_t __p0) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vmaxv_u16((int8x8_t)__p0);
  return __ret;
}
__ai int8_t vmaxv_s8(int8x8_t __p0) {
  int8_t __ret;
  __ret = (int8_t) __builtin_neon_vmaxv_s8((int8x8_t)__p0);
  return __ret;
}
__ai float32_t vmaxv_f32(float32x2_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vmaxv_f32((int8x8_t)__p0);
  return __ret;
}
__ai int32_t vmaxv_s32(int32x2_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vmaxv_s32((int8x8_t)__p0);
  return __ret;
}
__ai int16_t vmaxv_s16(int16x4_t __p0) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vmaxv_s16((int8x8_t)__p0);
  return __ret;
}
__ai float64x2_t vminq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vminq_v((int8x16_t)__p0, (int8x16_t)__p1, 42);
  return __ret;
}
__ai float64x1_t vmin_f64(float64x1_t __p0, float64x1_t __p1) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vmin_v((int8x8_t)__p0, (int8x8_t)__p1, 10);
  return __ret;
}
__ai float64x2_t vminnmq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vminnmq_v((int8x16_t)__p0, (int8x16_t)__p1, 42);
  return __ret;
}
__ai float32x4_t vminnmq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vminnmq_v((int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
__ai float64x1_t vminnm_f64(float64x1_t __p0, float64x1_t __p1) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vminnm_v((int8x8_t)__p0, (int8x8_t)__p1, 10);
  return __ret;
}
__ai float32x2_t vminnm_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vminnm_v((int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
__ai float64_t vminnmvq_f64(float64x2_t __p0) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vminnmvq_f64((int8x16_t)__p0);
  return __ret;
}
__ai float32_t vminnmvq_f32(float32x4_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vminnmvq_f32((int8x16_t)__p0);
  return __ret;
}
__ai float32_t vminnmv_f32(float32x2_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vminnmv_f32((int8x8_t)__p0);
  return __ret;
}
__ai uint8_t vminvq_u8(uint8x16_t __p0) {
  uint8_t __ret;
  __ret = (uint8_t) __builtin_neon_vminvq_u8((int8x16_t)__p0);
  return __ret;
}
__ai uint32_t vminvq_u32(uint32x4_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vminvq_u32((int8x16_t)__p0);
  return __ret;
}
__ai uint16_t vminvq_u16(uint16x8_t __p0) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vminvq_u16((int8x16_t)__p0);
  return __ret;
}
__ai int8_t vminvq_s8(int8x16_t __p0) {
  int8_t __ret;
  __ret = (int8_t) __builtin_neon_vminvq_s8((int8x16_t)__p0);
  return __ret;
}
__ai float64_t vminvq_f64(float64x2_t __p0) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vminvq_f64((int8x16_t)__p0);
  return __ret;
}
__ai float32_t vminvq_f32(float32x4_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vminvq_f32((int8x16_t)__p0);
  return __ret;
}
__ai int32_t vminvq_s32(int32x4_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vminvq_s32((int8x16_t)__p0);
  return __ret;
}
__ai int16_t vminvq_s16(int16x8_t __p0) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vminvq_s16((int8x16_t)__p0);
  return __ret;
}
__ai uint8_t vminv_u8(uint8x8_t __p0) {
  uint8_t __ret;
  __ret = (uint8_t) __builtin_neon_vminv_u8((int8x8_t)__p0);
  return __ret;
}
__ai uint32_t vminv_u32(uint32x2_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vminv_u32((int8x8_t)__p0);
  return __ret;
}
__ai uint16_t vminv_u16(uint16x4_t __p0) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vminv_u16((int8x8_t)__p0);
  return __ret;
}
__ai int8_t vminv_s8(int8x8_t __p0) {
  int8_t __ret;
  __ret = (int8_t) __builtin_neon_vminv_s8((int8x8_t)__p0);
  return __ret;
}
__ai float32_t vminv_f32(float32x2_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vminv_f32((int8x8_t)__p0);
  return __ret;
}
__ai int32_t vminv_s32(int32x2_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vminv_s32((int8x8_t)__p0);
  return __ret;
}
__ai int16_t vminv_s16(int16x4_t __p0) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vminv_s16((int8x8_t)__p0);
  return __ret;
}
__ai float64x2_t vmlaq_f64(float64x2_t __p0, float64x2_t __p1, float64x2_t __p2) {
  float64x2_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
__ai float64x1_t vmla_f64(float64x1_t __p0, float64x1_t __p1, float64x1_t __p2) {
  float64x1_t __ret;
  __ret = __p0 + __p1 * __p2;
  return __ret;
}
#define vmlaq_laneq_u32(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint32x4_t __s1 = __p1; \
  uint32x4_t __s2 = __p2; \
  uint32x4_t __ret; \
  __ret = __s0 + __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3); \
  __ret; \
})
#define vmlaq_laneq_u16(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint16x8_t __s0 = __p0; \
  uint16x8_t __s1 = __p1; \
  uint16x8_t __s2 = __p2; \
  uint16x8_t __ret; \
  __ret = __s0 + __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3, __p3, __p3, __p3, __p3); \
  __ret; \
})
#define vmlaq_laneq_f32(__p0, __p1, __p2, __p3) __extension__ ({ \
  float32x4_t __s0 = __p0; \
  float32x4_t __s1 = __p1; \
  float32x4_t __s2 = __p2; \
  float32x4_t __ret; \
  __ret = __s0 + __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3); \
  __ret; \
})
#define vmlaq_laneq_s32(__p0, __p1, __p2, __p3) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int32x4_t __s1 = __p1; \
  int32x4_t __s2 = __p2; \
  int32x4_t __ret; \
  __ret = __s0 + __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3); \
  __ret; \
})
#define vmlaq_laneq_s16(__p0, __p1, __p2, __p3) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  int16x8_t __s1 = __p1; \
  int16x8_t __s2 = __p2; \
  int16x8_t __ret; \
  __ret = __s0 + __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3, __p3, __p3, __p3, __p3); \
  __ret; \
})
#define vmla_laneq_u32(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint32x2_t __s0 = __p0; \
  uint32x2_t __s1 = __p1; \
  uint32x4_t __s2 = __p2; \
  uint32x2_t __ret; \
  __ret = __s0 + __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3); \
  __ret; \
})
#define vmla_laneq_u16(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint16x4_t __s0 = __p0; \
  uint16x4_t __s1 = __p1; \
  uint16x8_t __s2 = __p2; \
  uint16x4_t __ret; \
  __ret = __s0 + __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3); \
  __ret; \
})
#define vmla_laneq_f32(__p0, __p1, __p2, __p3) __extension__ ({ \
  float32x2_t __s0 = __p0; \
  float32x2_t __s1 = __p1; \
  float32x4_t __s2 = __p2; \
  float32x2_t __ret; \
  __ret = __s0 + __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3); \
  __ret; \
})
#define vmla_laneq_s32(__p0, __p1, __p2, __p3) __extension__ ({ \
  int32x2_t __s0 = __p0; \
  int32x2_t __s1 = __p1; \
  int32x4_t __s2 = __p2; \
  int32x2_t __ret; \
  __ret = __s0 + __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3); \
  __ret; \
})
#define vmla_laneq_s16(__p0, __p1, __p2, __p3) __extension__ ({ \
  int16x4_t __s0 = __p0; \
  int16x4_t __s1 = __p1; \
  int16x8_t __s2 = __p2; \
  int16x4_t __ret; \
  __ret = __s0 + __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3); \
  __ret; \
})
__ai float64x2_t vmlaq_n_f64(float64x2_t __p0, float64x2_t __p1, float64_t __p2) {
  float64x2_t __ret;
  __ret = __p0 + __p1 * (float64x2_t) {__p2, __p2};
  return __ret;
}
#define vmlal_high_lane_u32(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint64x2_t __s0 = __p0; \
  uint32x4_t __s1 = __p1; \
  uint32x2_t __s2 = __p2; \
  uint64x2_t __ret; \
  __ret = __s0 + vmull_u32(vget_high_u32(__s1), __builtin_shufflevector(__s2, __s2, __p3, __p3)); \
  __ret; \
})
#define vmlal_high_lane_u16(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint16x8_t __s1 = __p1; \
  uint16x4_t __s2 = __p2; \
  uint32x4_t __ret; \
  __ret = __s0 + vmull_u16(vget_high_u16(__s1), __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3)); \
  __ret; \
})
#define vmlal_high_lane_s32(__p0, __p1, __p2, __p3) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int32x4_t __s1 = __p1; \
  int32x2_t __s2 = __p2; \
  int64x2_t __ret; \
  __ret = __s0 + vmull_s32(vget_high_s32(__s1), __builtin_shufflevector(__s2, __s2, __p3, __p3)); \
  __ret; \
})
#define vmlal_high_lane_s16(__p0, __p1, __p2, __p3) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int16x8_t __s1 = __p1; \
  int16x4_t __s2 = __p2; \
  int32x4_t __ret; \
  __ret = __s0 + vmull_s16(vget_high_s16(__s1), __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3)); \
  __ret; \
})
#define vmlal_high_laneq_u32(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint64x2_t __s0 = __p0; \
  uint32x4_t __s1 = __p1; \
  uint32x4_t __s2 = __p2; \
  uint64x2_t __ret; \
  __ret = __s0 + vmull_u32(vget_high_u32(__s1), __builtin_shufflevector(__s2, __s2, __p3, __p3)); \
  __ret; \
})
#define vmlal_high_laneq_u16(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint16x8_t __s1 = __p1; \
  uint16x8_t __s2 = __p2; \
  uint32x4_t __ret; \
  __ret = __s0 + vmull_u16(vget_high_u16(__s1), __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3)); \
  __ret; \
})
#define vmlal_high_laneq_s32(__p0, __p1, __p2, __p3) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int32x4_t __s1 = __p1; \
  int32x4_t __s2 = __p2; \
  int64x2_t __ret; \
  __ret = __s0 + vmull_s32(vget_high_s32(__s1), __builtin_shufflevector(__s2, __s2, __p3, __p3)); \
  __ret; \
})
#define vmlal_high_laneq_s16(__p0, __p1, __p2, __p3) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int16x8_t __s1 = __p1; \
  int16x8_t __s2 = __p2; \
  int32x4_t __ret; \
  __ret = __s0 + vmull_s16(vget_high_s16(__s1), __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3)); \
  __ret; \
})
#define vmlal_laneq_u32(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint64x2_t __s0 = __p0; \
  uint32x2_t __s1 = __p1; \
  uint32x4_t __s2 = __p2; \
  uint64x2_t __ret; \
  __ret = __s0 + vmull_u32(__s1, __builtin_shufflevector(__s2, __s2, __p3, __p3)); \
  __ret; \
})
#define vmlal_laneq_u16(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint16x4_t __s1 = __p1; \
  uint16x8_t __s2 = __p2; \
  uint32x4_t __ret; \
  __ret = __s0 + vmull_u16(__s1, __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3)); \
  __ret; \
})
#define vmlal_laneq_s32(__p0, __p1, __p2, __p3) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int32x2_t __s1 = __p1; \
  int32x4_t __s2 = __p2; \
  int64x2_t __ret; \
  __ret = __s0 + vmull_s32(__s1, __builtin_shufflevector(__s2, __s2, __p3, __p3)); \
  __ret; \
})
#define vmlal_laneq_s16(__p0, __p1, __p2, __p3) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int16x4_t __s1 = __p1; \
  int16x8_t __s2 = __p2; \
  int32x4_t __ret; \
  __ret = __s0 + vmull_s16(__s1, __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3)); \
  __ret; \
})
__ai float64x2_t vmlsq_f64(float64x2_t __p0, float64x2_t __p1, float64x2_t __p2) {
  float64x2_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
__ai float64x1_t vmls_f64(float64x1_t __p0, float64x1_t __p1, float64x1_t __p2) {
  float64x1_t __ret;
  __ret = __p0 - __p1 * __p2;
  return __ret;
}
#define vmlsq_laneq_u32(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint32x4_t __s1 = __p1; \
  uint32x4_t __s2 = __p2; \
  uint32x4_t __ret; \
  __ret = __s0 - __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3); \
  __ret; \
})
#define vmlsq_laneq_u16(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint16x8_t __s0 = __p0; \
  uint16x8_t __s1 = __p1; \
  uint16x8_t __s2 = __p2; \
  uint16x8_t __ret; \
  __ret = __s0 - __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3, __p3, __p3, __p3, __p3); \
  __ret; \
})
#define vmlsq_laneq_f32(__p0, __p1, __p2, __p3) __extension__ ({ \
  float32x4_t __s0 = __p0; \
  float32x4_t __s1 = __p1; \
  float32x4_t __s2 = __p2; \
  float32x4_t __ret; \
  __ret = __s0 - __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3); \
  __ret; \
})
#define vmlsq_laneq_s32(__p0, __p1, __p2, __p3) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int32x4_t __s1 = __p1; \
  int32x4_t __s2 = __p2; \
  int32x4_t __ret; \
  __ret = __s0 - __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3); \
  __ret; \
})
#define vmlsq_laneq_s16(__p0, __p1, __p2, __p3) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  int16x8_t __s1 = __p1; \
  int16x8_t __s2 = __p2; \
  int16x8_t __ret; \
  __ret = __s0 - __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3, __p3, __p3, __p3, __p3); \
  __ret; \
})
#define vmls_laneq_u32(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint32x2_t __s0 = __p0; \
  uint32x2_t __s1 = __p1; \
  uint32x4_t __s2 = __p2; \
  uint32x2_t __ret; \
  __ret = __s0 - __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3); \
  __ret; \
})
#define vmls_laneq_u16(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint16x4_t __s0 = __p0; \
  uint16x4_t __s1 = __p1; \
  uint16x8_t __s2 = __p2; \
  uint16x4_t __ret; \
  __ret = __s0 - __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3); \
  __ret; \
})
#define vmls_laneq_f32(__p0, __p1, __p2, __p3) __extension__ ({ \
  float32x2_t __s0 = __p0; \
  float32x2_t __s1 = __p1; \
  float32x4_t __s2 = __p2; \
  float32x2_t __ret; \
  __ret = __s0 - __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3); \
  __ret; \
})
#define vmls_laneq_s32(__p0, __p1, __p2, __p3) __extension__ ({ \
  int32x2_t __s0 = __p0; \
  int32x2_t __s1 = __p1; \
  int32x4_t __s2 = __p2; \
  int32x2_t __ret; \
  __ret = __s0 - __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3); \
  __ret; \
})
#define vmls_laneq_s16(__p0, __p1, __p2, __p3) __extension__ ({ \
  int16x4_t __s0 = __p0; \
  int16x4_t __s1 = __p1; \
  int16x8_t __s2 = __p2; \
  int16x4_t __ret; \
  __ret = __s0 - __s1 * __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3); \
  __ret; \
})
__ai float64x2_t vmlsq_n_f64(float64x2_t __p0, float64x2_t __p1, float64_t __p2) {
  float64x2_t __ret;
  __ret = __p0 - __p1 * (float64x2_t) {__p2, __p2};
  return __ret;
}
#define vmlsl_high_lane_u32(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint64x2_t __s0 = __p0; \
  uint32x4_t __s1 = __p1; \
  uint32x2_t __s2 = __p2; \
  uint64x2_t __ret; \
  __ret = __s0 - vmull_u32(vget_high_u32(__s1), __builtin_shufflevector(__s2, __s2, __p3, __p3)); \
  __ret; \
})
#define vmlsl_high_lane_u16(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint16x8_t __s1 = __p1; \
  uint16x4_t __s2 = __p2; \
  uint32x4_t __ret; \
  __ret = __s0 - vmull_u16(vget_high_u16(__s1), __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3)); \
  __ret; \
})
#define vmlsl_high_lane_s32(__p0, __p1, __p2, __p3) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int32x4_t __s1 = __p1; \
  int32x2_t __s2 = __p2; \
  int64x2_t __ret; \
  __ret = __s0 - vmull_s32(vget_high_s32(__s1), __builtin_shufflevector(__s2, __s2, __p3, __p3)); \
  __ret; \
})
#define vmlsl_high_lane_s16(__p0, __p1, __p2, __p3) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int16x8_t __s1 = __p1; \
  int16x4_t __s2 = __p2; \
  int32x4_t __ret; \
  __ret = __s0 - vmull_s16(vget_high_s16(__s1), __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3)); \
  __ret; \
})
#define vmlsl_high_laneq_u32(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint64x2_t __s0 = __p0; \
  uint32x4_t __s1 = __p1; \
  uint32x4_t __s2 = __p2; \
  uint64x2_t __ret; \
  __ret = __s0 - vmull_u32(vget_high_u32(__s1), __builtin_shufflevector(__s2, __s2, __p3, __p3)); \
  __ret; \
})
#define vmlsl_high_laneq_u16(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint16x8_t __s1 = __p1; \
  uint16x8_t __s2 = __p2; \
  uint32x4_t __ret; \
  __ret = __s0 - vmull_u16(vget_high_u16(__s1), __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3)); \
  __ret; \
})
#define vmlsl_high_laneq_s32(__p0, __p1, __p2, __p3) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int32x4_t __s1 = __p1; \
  int32x4_t __s2 = __p2; \
  int64x2_t __ret; \
  __ret = __s0 - vmull_s32(vget_high_s32(__s1), __builtin_shufflevector(__s2, __s2, __p3, __p3)); \
  __ret; \
})
#define vmlsl_high_laneq_s16(__p0, __p1, __p2, __p3) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int16x8_t __s1 = __p1; \
  int16x8_t __s2 = __p2; \
  int32x4_t __ret; \
  __ret = __s0 - vmull_s16(vget_high_s16(__s1), __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3)); \
  __ret; \
})
#define vmlsl_laneq_u32(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint64x2_t __s0 = __p0; \
  uint32x2_t __s1 = __p1; \
  uint32x4_t __s2 = __p2; \
  uint64x2_t __ret; \
  __ret = __s0 - vmull_u32(__s1, __builtin_shufflevector(__s2, __s2, __p3, __p3)); \
  __ret; \
})
#define vmlsl_laneq_u16(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint16x4_t __s1 = __p1; \
  uint16x8_t __s2 = __p2; \
  uint32x4_t __ret; \
  __ret = __s0 - vmull_u16(__s1, __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3)); \
  __ret; \
})
#define vmlsl_laneq_s32(__p0, __p1, __p2, __p3) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int32x2_t __s1 = __p1; \
  int32x4_t __s2 = __p2; \
  int64x2_t __ret; \
  __ret = __s0 - vmull_s32(__s1, __builtin_shufflevector(__s2, __s2, __p3, __p3)); \
  __ret; \
})
#define vmlsl_laneq_s16(__p0, __p1, __p2, __p3) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int16x4_t __s1 = __p1; \
  int16x8_t __s2 = __p2; \
  int32x4_t __ret; \
  __ret = __s0 - vmull_s16(__s1, __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3)); \
  __ret; \
})
__ai float64x2_t vmovq_n_f64(float64_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) {__p0, __p0};
  return __ret;
}
__ai float64x1_t vmov_n_f64(float64_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t) {__p0};
  return __ret;
}
__ai uint16x8_t vmovl_high_u8(uint8x16_t __p0_58) {
  uint16x8_t __ret_58;
  uint8x8_t __a1_58 = vget_high_u8(__p0_58);
  __ret_58 = (uint16x8_t)(vshll_n_u8(__a1_58, 0));
  return __ret_58;
}
__ai uint64x2_t vmovl_high_u32(uint32x4_t __p0_59) {
  uint64x2_t __ret_59;
  uint32x2_t __a1_59 = vget_high_u32(__p0_59);
  __ret_59 = (uint64x2_t)(vshll_n_u32(__a1_59, 0));
  return __ret_59;
}
__ai uint32x4_t vmovl_high_u16(uint16x8_t __p0_60) {
  uint32x4_t __ret_60;
  uint16x4_t __a1_60 = vget_high_u16(__p0_60);
  __ret_60 = (uint32x4_t)(vshll_n_u16(__a1_60, 0));
  return __ret_60;
}
__ai int16x8_t vmovl_high_s8(int8x16_t __p0_61) {
  int16x8_t __ret_61;
  int8x8_t __a1_61 = vget_high_s8(__p0_61);
  __ret_61 = (int16x8_t)(vshll_n_s8(__a1_61, 0));
  return __ret_61;
}
__ai int64x2_t vmovl_high_s32(int32x4_t __p0_62) {
  int64x2_t __ret_62;
  int32x2_t __a1_62 = vget_high_s32(__p0_62);
  __ret_62 = (int64x2_t)(vshll_n_s32(__a1_62, 0));
  return __ret_62;
}
__ai int32x4_t vmovl_high_s16(int16x8_t __p0_63) {
  int32x4_t __ret_63;
  int16x4_t __a1_63 = vget_high_s16(__p0_63);
  __ret_63 = (int32x4_t)(vshll_n_s16(__a1_63, 0));
  return __ret_63;
}
__ai uint16x8_t vmovn_high_u32(uint16x4_t __p0, uint32x4_t __p1) {
  uint16x8_t __ret;
  __ret = vcombine_u16(__p0, vmovn_u32(__p1));
  return __ret;
}
__ai uint32x4_t vmovn_high_u64(uint32x2_t __p0, uint64x2_t __p1) {
  uint32x4_t __ret;
  __ret = vcombine_u32(__p0, vmovn_u64(__p1));
  return __ret;
}
__ai uint8x16_t vmovn_high_u16(uint8x8_t __p0, uint16x8_t __p1) {
  uint8x16_t __ret;
  __ret = vcombine_u8(__p0, vmovn_u16(__p1));
  return __ret;
}
__ai int16x8_t vmovn_high_s32(int16x4_t __p0, int32x4_t __p1) {
  int16x8_t __ret;
  __ret = vcombine_s16(__p0, vmovn_s32(__p1));
  return __ret;
}
__ai int32x4_t vmovn_high_s64(int32x2_t __p0, int64x2_t __p1) {
  int32x4_t __ret;
  __ret = vcombine_s32(__p0, vmovn_s64(__p1));
  return __ret;
}
__ai int8x16_t vmovn_high_s16(int8x8_t __p0, int16x8_t __p1) {
  int8x16_t __ret;
  __ret = vcombine_s8(__p0, vmovn_s16(__p1));
  return __ret;
}
__ai float64x2_t vmulq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
__ai float64x1_t vmul_f64(float64x1_t __p0, float64x1_t __p1) {
  float64x1_t __ret;
  __ret = __p0 * __p1;
  return __ret;
}
#define vmuld_lane_f64(__p0_64, __p1_64, __p2_64) __extension__ ({ \
  float64_t __s0_64 = __p0_64; \
  float64x1_t __s1_64 = __p1_64; \
  float64_t __ret_64; \
  __ret_64 = __s0_64 * vget_lane_f64(__s1_64, __p2_64); \
  __ret_64; \
})
#define vmuls_lane_f32(__p0_65, __p1_65, __p2_65) __extension__ ({ \
  float32_t __s0_65 = __p0_65; \
  float32x2_t __s1_65 = __p1_65; \
  float32_t __ret_65; \
  __ret_65 = __s0_65 * vget_lane_f32(__s1_65, __p2_65); \
  __ret_65; \
})
#define vmul_lane_f64(__p0, __p1, __p2) __extension__ ({ \
  float64x1_t __s0 = __p0; \
  float64x1_t __s1 = __p1; \
  float64x1_t __ret; \
  __ret = (float64x1_t) __builtin_neon_vmul_lane_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 10); \
  __ret; \
})
#define vmulq_lane_f64(__p0, __p1, __p2) __extension__ ({ \
  float64x2_t __s0 = __p0; \
  float64x1_t __s1 = __p1; \
  float64x2_t __ret; \
  __ret = __s0 * __builtin_shufflevector(__s1, __s1, __p2, __p2); \
  __ret; \
})
#define vmuld_laneq_f64(__p0_66, __p1_66, __p2_66) __extension__ ({ \
  float64_t __s0_66 = __p0_66; \
  float64x2_t __s1_66 = __p1_66; \
  float64_t __ret_66; \
  __ret_66 = __s0_66 * vgetq_lane_f64(__s1_66, __p2_66); \
  __ret_66; \
})
#define vmuls_laneq_f32(__p0_67, __p1_67, __p2_67) __extension__ ({ \
  float32_t __s0_67 = __p0_67; \
  float32x4_t __s1_67 = __p1_67; \
  float32_t __ret_67; \
  __ret_67 = __s0_67 * vgetq_lane_f32(__s1_67, __p2_67); \
  __ret_67; \
})
#define vmul_laneq_f64(__p0, __p1, __p2) __extension__ ({ \
  float64x1_t __s0 = __p0; \
  float64x2_t __s1 = __p1; \
  float64x1_t __ret; \
  __ret = (float64x1_t) __builtin_neon_vmul_laneq_v((int8x8_t)__s0, (int8x16_t)__s1, __p2, 10); \
  __ret; \
})
#define vmulq_laneq_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint32x4_t __s1 = __p1; \
  uint32x4_t __ret; \
  __ret = __s0 * __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2); \
  __ret; \
})
#define vmulq_laneq_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x8_t __s0 = __p0; \
  uint16x8_t __s1 = __p1; \
  uint16x8_t __ret; \
  __ret = __s0 * __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2, __p2, __p2, __p2, __p2); \
  __ret; \
})
#define vmulq_laneq_f64(__p0, __p1, __p2) __extension__ ({ \
  float64x2_t __s0 = __p0; \
  float64x2_t __s1 = __p1; \
  float64x2_t __ret; \
  __ret = __s0 * __builtin_shufflevector(__s1, __s1, __p2, __p2); \
  __ret; \
})
#define vmulq_laneq_f32(__p0, __p1, __p2) __extension__ ({ \
  float32x4_t __s0 = __p0; \
  float32x4_t __s1 = __p1; \
  float32x4_t __ret; \
  __ret = __s0 * __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2); \
  __ret; \
})
#define vmulq_laneq_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int32x4_t __s1 = __p1; \
  int32x4_t __ret; \
  __ret = __s0 * __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2); \
  __ret; \
})
#define vmulq_laneq_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  int16x8_t __s1 = __p1; \
  int16x8_t __ret; \
  __ret = __s0 * __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2, __p2, __p2, __p2, __p2); \
  __ret; \
})
#define vmul_laneq_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x2_t __s0 = __p0; \
  uint32x4_t __s1 = __p1; \
  uint32x2_t __ret; \
  __ret = __s0 * __builtin_shufflevector(__s1, __s1, __p2, __p2); \
  __ret; \
})
#define vmul_laneq_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x4_t __s0 = __p0; \
  uint16x8_t __s1 = __p1; \
  uint16x4_t __ret; \
  __ret = __s0 * __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2); \
  __ret; \
})
#define vmul_laneq_f32(__p0, __p1, __p2) __extension__ ({ \
  float32x2_t __s0 = __p0; \
  float32x4_t __s1 = __p1; \
  float32x2_t __ret; \
  __ret = __s0 * __builtin_shufflevector(__s1, __s1, __p2, __p2); \
  __ret; \
})
#define vmul_laneq_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x2_t __s0 = __p0; \
  int32x4_t __s1 = __p1; \
  int32x2_t __ret; \
  __ret = __s0 * __builtin_shufflevector(__s1, __s1, __p2, __p2); \
  __ret; \
})
#define vmul_laneq_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x4_t __s0 = __p0; \
  int16x8_t __s1 = __p1; \
  int16x4_t __ret; \
  __ret = __s0 * __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2); \
  __ret; \
})
__ai float64x1_t vmul_n_f64(float64x1_t __p0, float64_t __p1) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vmul_n_f64((int8x8_t)__p0, __p1);
  return __ret;
}
__ai float64x2_t vmulq_n_f64(float64x2_t __p0, float64_t __p1) {
  float64x2_t __ret;
  __ret = __p0 * (float64x2_t) {__p1, __p1};
  return __ret;
}
__ai poly128_t vmull_p64(poly64_t __p0, poly64_t __p1) {
  poly128_t __ret;
  __ret = (poly128_t) __builtin_neon_vmull_p64(__p0, __p1);
  return __ret;
}
__ai poly16x8_t vmull_high_p8(poly8x16_t __p0, poly8x16_t __p1) {
  poly16x8_t __ret;
  __ret = vmull_p8(vget_high_p8(__p0), vget_high_p8(__p1));
  return __ret;
}
__ai uint16x8_t vmull_high_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint16x8_t __ret;
  __ret = vmull_u8(vget_high_u8(__p0), vget_high_u8(__p1));
  return __ret;
}
__ai uint64x2_t vmull_high_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint64x2_t __ret;
  __ret = vmull_u32(vget_high_u32(__p0), vget_high_u32(__p1));
  return __ret;
}
__ai uint32x4_t vmull_high_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint32x4_t __ret;
  __ret = vmull_u16(vget_high_u16(__p0), vget_high_u16(__p1));
  return __ret;
}
__ai int16x8_t vmull_high_s8(int8x16_t __p0, int8x16_t __p1) {
  int16x8_t __ret;
  __ret = vmull_s8(vget_high_s8(__p0), vget_high_s8(__p1));
  return __ret;
}
__ai int64x2_t vmull_high_s32(int32x4_t __p0, int32x4_t __p1) {
  int64x2_t __ret;
  __ret = vmull_s32(vget_high_s32(__p0), vget_high_s32(__p1));
  return __ret;
}
__ai int32x4_t vmull_high_s16(int16x8_t __p0, int16x8_t __p1) {
  int32x4_t __ret;
  __ret = vmull_s16(vget_high_s16(__p0), vget_high_s16(__p1));
  return __ret;
}
__ai poly128_t vmull_high_p64(poly64x2_t __p0, poly64x2_t __p1) {
  poly128_t __ret;
  __ret = vmull_p64((poly64_t)(vget_high_p64(__p0)), (poly64_t)(vget_high_p64(__p1)));
  return __ret;
}
#define vmull_high_lane_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint32x2_t __s1 = __p1; \
  uint64x2_t __ret; \
  __ret = vmull_u32(vget_high_u32(__s0), __builtin_shufflevector(__s1, __s1, __p2, __p2)); \
  __ret; \
})
#define vmull_high_lane_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x8_t __s0 = __p0; \
  uint16x4_t __s1 = __p1; \
  uint32x4_t __ret; \
  __ret = vmull_u16(vget_high_u16(__s0), __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2)); \
  __ret; \
})
#define vmull_high_lane_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int32x2_t __s1 = __p1; \
  int64x2_t __ret; \
  __ret = vmull_s32(vget_high_s32(__s0), __builtin_shufflevector(__s1, __s1, __p2, __p2)); \
  __ret; \
})
#define vmull_high_lane_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  int16x4_t __s1 = __p1; \
  int32x4_t __ret; \
  __ret = vmull_s16(vget_high_s16(__s0), __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2)); \
  __ret; \
})
#define vmull_high_laneq_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint32x4_t __s1 = __p1; \
  uint64x2_t __ret; \
  __ret = vmull_u32(vget_high_u32(__s0), __builtin_shufflevector(__s1, __s1, __p2, __p2)); \
  __ret; \
})
#define vmull_high_laneq_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x8_t __s0 = __p0; \
  uint16x8_t __s1 = __p1; \
  uint32x4_t __ret; \
  __ret = vmull_u16(vget_high_u16(__s0), __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2)); \
  __ret; \
})
#define vmull_high_laneq_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int32x4_t __s1 = __p1; \
  int64x2_t __ret; \
  __ret = vmull_s32(vget_high_s32(__s0), __builtin_shufflevector(__s1, __s1, __p2, __p2)); \
  __ret; \
})
#define vmull_high_laneq_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  int16x8_t __s1 = __p1; \
  int32x4_t __ret; \
  __ret = vmull_s16(vget_high_s16(__s0), __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2)); \
  __ret; \
})
__ai uint64x2_t vmull_high_n_u32(uint32x4_t __p0, uint32_t __p1) {
  uint64x2_t __ret;
  __ret = vmull_n_u32(vget_high_u32(__p0), __p1);
  return __ret;
}
__ai uint32x4_t vmull_high_n_u16(uint16x8_t __p0, uint16_t __p1) {
  uint32x4_t __ret;
  __ret = vmull_n_u16(vget_high_u16(__p0), __p1);
  return __ret;
}
__ai int64x2_t vmull_high_n_s32(int32x4_t __p0, int32_t __p1) {
  int64x2_t __ret;
  __ret = vmull_n_s32(vget_high_s32(__p0), __p1);
  return __ret;
}
__ai int32x4_t vmull_high_n_s16(int16x8_t __p0, int16_t __p1) {
  int32x4_t __ret;
  __ret = vmull_n_s16(vget_high_s16(__p0), __p1);
  return __ret;
}
#define vmull_laneq_u32(__p0, __p1, __p2) __extension__ ({ \
  uint32x2_t __s0 = __p0; \
  uint32x4_t __s1 = __p1; \
  uint64x2_t __ret; \
  __ret = vmull_u32(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2)); \
  __ret; \
})
#define vmull_laneq_u16(__p0, __p1, __p2) __extension__ ({ \
  uint16x4_t __s0 = __p0; \
  uint16x8_t __s1 = __p1; \
  uint32x4_t __ret; \
  __ret = vmull_u16(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2)); \
  __ret; \
})
#define vmull_laneq_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x2_t __s0 = __p0; \
  int32x4_t __s1 = __p1; \
  int64x2_t __ret; \
  __ret = vmull_s32(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2)); \
  __ret; \
})
#define vmull_laneq_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x4_t __s0 = __p0; \
  int16x8_t __s1 = __p1; \
  int32x4_t __ret; \
  __ret = vmull_s16(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2)); \
  __ret; \
})
__ai float64x2_t vmulxq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vmulxq_v((int8x16_t)__p0, (int8x16_t)__p1, 42);
  return __ret;
}
__ai float32x4_t vmulxq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vmulxq_v((int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
__ai float64x1_t vmulx_f64(float64x1_t __p0, float64x1_t __p1) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vmulx_v((int8x8_t)__p0, (int8x8_t)__p1, 10);
  return __ret;
}
__ai float32x2_t vmulx_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vmulx_v((int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
__ai float64_t vmulxd_f64(float64_t __p0, float64_t __p1) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vmulxd_f64(__p0, __p1);
  return __ret;
}
__ai float32_t vmulxs_f32(float32_t __p0, float32_t __p1) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vmulxs_f32(__p0, __p1);
  return __ret;
}
#define vmulxd_lane_f64(__p0_68, __p1_68, __p2_68) __extension__ ({ \
  float64_t __s0_68 = __p0_68; \
  float64x1_t __s1_68 = __p1_68; \
  float64_t __ret_68; \
  __ret_68 = vmulxd_f64(__s0_68, vget_lane_f64(__s1_68, __p2_68)); \
  __ret_68; \
})
#define vmulxs_lane_f32(__p0_69, __p1_69, __p2_69) __extension__ ({ \
  float32_t __s0_69 = __p0_69; \
  float32x2_t __s1_69 = __p1_69; \
  float32_t __ret_69; \
  __ret_69 = vmulxs_f32(__s0_69, vget_lane_f32(__s1_69, __p2_69)); \
  __ret_69; \
})
#define vmulxq_lane_f64(__p0, __p1, __p2) __extension__ ({ \
  float64x2_t __s0 = __p0; \
  float64x1_t __s1 = __p1; \
  float64x2_t __ret; \
  __ret = vmulxq_f64(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2)); \
  __ret; \
})
#define vmulxq_lane_f32(__p0, __p1, __p2) __extension__ ({ \
  float32x4_t __s0 = __p0; \
  float32x2_t __s1 = __p1; \
  float32x4_t __ret; \
  __ret = vmulxq_f32(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2)); \
  __ret; \
})
#define vmulx_lane_f32(__p0, __p1, __p2) __extension__ ({ \
  float32x2_t __s0 = __p0; \
  float32x2_t __s1 = __p1; \
  float32x2_t __ret; \
  __ret = vmulx_f32(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2)); \
  __ret; \
})
#define vmulxd_laneq_f64(__p0_70, __p1_70, __p2_70) __extension__ ({ \
  float64_t __s0_70 = __p0_70; \
  float64x2_t __s1_70 = __p1_70; \
  float64_t __ret_70; \
  __ret_70 = vmulxd_f64(__s0_70, vgetq_lane_f64(__s1_70, __p2_70)); \
  __ret_70; \
})
#define vmulxs_laneq_f32(__p0_71, __p1_71, __p2_71) __extension__ ({ \
  float32_t __s0_71 = __p0_71; \
  float32x4_t __s1_71 = __p1_71; \
  float32_t __ret_71; \
  __ret_71 = vmulxs_f32(__s0_71, vgetq_lane_f32(__s1_71, __p2_71)); \
  __ret_71; \
})
#define vmulxq_laneq_f64(__p0, __p1, __p2) __extension__ ({ \
  float64x2_t __s0 = __p0; \
  float64x2_t __s1 = __p1; \
  float64x2_t __ret; \
  __ret = vmulxq_f64(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2)); \
  __ret; \
})
#define vmulxq_laneq_f32(__p0, __p1, __p2) __extension__ ({ \
  float32x4_t __s0 = __p0; \
  float32x4_t __s1 = __p1; \
  float32x4_t __ret; \
  __ret = vmulxq_f32(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2)); \
  __ret; \
})
#define vmulx_laneq_f32(__p0, __p1, __p2) __extension__ ({ \
  float32x2_t __s0 = __p0; \
  float32x4_t __s1 = __p1; \
  float32x2_t __ret; \
  __ret = vmulx_f32(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2)); \
  __ret; \
})
__ai float64x2_t vnegq_f64(float64x2_t __p0) {
  float64x2_t __ret;
  __ret = -__p0;
  return __ret;
}
__ai int64x2_t vnegq_s64(int64x2_t __p0) {
  int64x2_t __ret;
  __ret = -__p0;
  return __ret;
}
__ai float64x1_t vneg_f64(float64x1_t __p0) {
  float64x1_t __ret;
  __ret = -__p0;
  return __ret;
}
__ai int64x1_t vneg_s64(int64x1_t __p0) {
  int64x1_t __ret;
  __ret = -__p0;
  return __ret;
}
__ai int64_t vnegd_s64(int64_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vnegd_s64(__p0);
  return __ret;
}
__ai uint8x16_t vpaddq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vpaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
__ai uint32x4_t vpaddq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vpaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
__ai uint64x2_t vpaddq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vpaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
__ai uint16x8_t vpaddq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vpaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
__ai int8x16_t vpaddq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vpaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
__ai float64x2_t vpaddq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vpaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 42);
  return __ret;
}
__ai float32x4_t vpaddq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vpaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
__ai int32x4_t vpaddq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vpaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
__ai int64x2_t vpaddq_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vpaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 35);
  return __ret;
}
__ai int16x8_t vpaddq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vpaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
__ai uint64_t vpaddd_u64(uint64x2_t __p0) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vpaddd_u64((int8x16_t)__p0);
  return __ret;
}
__ai float64_t vpaddd_f64(float64x2_t __p0) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vpaddd_f64((int8x16_t)__p0);
  return __ret;
}
__ai int64_t vpaddd_s64(int64x2_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vpaddd_s64((int8x16_t)__p0);
  return __ret;
}
__ai float32_t vpadds_f32(float32x2_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vpadds_f32((int8x8_t)__p0);
  return __ret;
}
__ai uint8x16_t vpmaxq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vpmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
__ai uint32x4_t vpmaxq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vpmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
__ai uint16x8_t vpmaxq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vpmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
__ai int8x16_t vpmaxq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vpmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
__ai float64x2_t vpmaxq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vpmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 42);
  return __ret;
}
__ai float32x4_t vpmaxq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vpmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
__ai int32x4_t vpmaxq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vpmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
__ai int16x8_t vpmaxq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vpmaxq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
__ai float64_t vpmaxqd_f64(float64x2_t __p0) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vpmaxqd_f64((int8x16_t)__p0);
  return __ret;
}
__ai float32_t vpmaxs_f32(float32x2_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vpmaxs_f32((int8x8_t)__p0);
  return __ret;
}
__ai float64x2_t vpmaxnmq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vpmaxnmq_v((int8x16_t)__p0, (int8x16_t)__p1, 42);
  return __ret;
}
__ai float32x4_t vpmaxnmq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vpmaxnmq_v((int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
__ai float32x2_t vpmaxnm_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vpmaxnm_v((int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
__ai float64_t vpmaxnmqd_f64(float64x2_t __p0) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vpmaxnmqd_f64((int8x16_t)__p0);
  return __ret;
}
__ai float32_t vpmaxnms_f32(float32x2_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vpmaxnms_f32((int8x8_t)__p0);
  return __ret;
}
__ai uint8x16_t vpminq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vpminq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
__ai uint32x4_t vpminq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vpminq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
__ai uint16x8_t vpminq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vpminq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
__ai int8x16_t vpminq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vpminq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
__ai float64x2_t vpminq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vpminq_v((int8x16_t)__p0, (int8x16_t)__p1, 42);
  return __ret;
}
__ai float32x4_t vpminq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vpminq_v((int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
__ai int32x4_t vpminq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vpminq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
__ai int16x8_t vpminq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vpminq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
__ai float64_t vpminqd_f64(float64x2_t __p0) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vpminqd_f64((int8x16_t)__p0);
  return __ret;
}
__ai float32_t vpmins_f32(float32x2_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vpmins_f32((int8x8_t)__p0);
  return __ret;
}
__ai float64x2_t vpminnmq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vpminnmq_v((int8x16_t)__p0, (int8x16_t)__p1, 42);
  return __ret;
}
__ai float32x4_t vpminnmq_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vpminnmq_v((int8x16_t)__p0, (int8x16_t)__p1, 41);
  return __ret;
}
__ai float32x2_t vpminnm_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vpminnm_v((int8x8_t)__p0, (int8x8_t)__p1, 9);
  return __ret;
}
__ai float64_t vpminnmqd_f64(float64x2_t __p0) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vpminnmqd_f64((int8x16_t)__p0);
  return __ret;
}
__ai float32_t vpminnms_f32(float32x2_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vpminnms_f32((int8x8_t)__p0);
  return __ret;
}
__ai int64x2_t vqabsq_s64(int64x2_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vqabsq_v((int8x16_t)__p0, 35);
  return __ret;
}
__ai int64x1_t vqabs_s64(int64x1_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vqabs_v((int8x8_t)__p0, 3);
  return __ret;
}
__ai int8_t vqabsb_s8(int8_t __p0) {
  int8_t __ret;
  __ret = (int8_t) __builtin_neon_vqabsb_s8(__p0);
  return __ret;
}
__ai int32_t vqabss_s32(int32_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vqabss_s32(__p0);
  return __ret;
}
__ai int64_t vqabsd_s64(int64_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vqabsd_s64(__p0);
  return __ret;
}
__ai int16_t vqabsh_s16(int16_t __p0) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vqabsh_s16(__p0);
  return __ret;
}
__ai uint8_t vqaddb_u8(uint8_t __p0, uint8_t __p1) {
  uint8_t __ret;
  __ret = (uint8_t) __builtin_neon_vqaddb_u8(__p0, __p1);
  return __ret;
}
__ai uint32_t vqadds_u32(uint32_t __p0, uint32_t __p1) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vqadds_u32(__p0, __p1);
  return __ret;
}
__ai uint64_t vqaddd_u64(uint64_t __p0, uint64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vqaddd_u64(__p0, __p1);
  return __ret;
}
__ai uint16_t vqaddh_u16(uint16_t __p0, uint16_t __p1) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vqaddh_u16(__p0, __p1);
  return __ret;
}
__ai int8_t vqaddb_s8(int8_t __p0, int8_t __p1) {
  int8_t __ret;
  __ret = (int8_t) __builtin_neon_vqaddb_s8(__p0, __p1);
  return __ret;
}
__ai int32_t vqadds_s32(int32_t __p0, int32_t __p1) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vqadds_s32(__p0, __p1);
  return __ret;
}
__ai int64_t vqaddd_s64(int64_t __p0, int64_t __p1) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vqaddd_s64(__p0, __p1);
  return __ret;
}
__ai int16_t vqaddh_s16(int16_t __p0, int16_t __p1) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vqaddh_s16(__p0, __p1);
  return __ret;
}
__ai int64_t vqdmlals_s32(int64_t __p0, int32_t __p1, int32_t __p2) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vqdmlals_s32(__p0, __p1, __p2);
  return __ret;
}
__ai int32_t vqdmlalh_s16(int32_t __p0, int16_t __p1, int16_t __p2) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vqdmlalh_s16(__p0, __p1, __p2);
  return __ret;
}
__ai int64x2_t vqdmlal_high_s32(int64x2_t __p0, int32x4_t __p1, int32x4_t __p2) {
  int64x2_t __ret;
  __ret = vqdmlal_s32(__p0, vget_high_s32(__p1), vget_high_s32(__p2));
  return __ret;
}
__ai int32x4_t vqdmlal_high_s16(int32x4_t __p0, int16x8_t __p1, int16x8_t __p2) {
  int32x4_t __ret;
  __ret = vqdmlal_s16(__p0, vget_high_s16(__p1), vget_high_s16(__p2));
  return __ret;
}
#define vqdmlal_high_lane_s32(__p0, __p1, __p2, __p3) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int32x4_t __s1 = __p1; \
  int32x2_t __s2 = __p2; \
  int64x2_t __ret; \
  __ret = vqdmlal_s32(__s0, vget_high_s32(__s1), __builtin_shufflevector(__s2, __s2, __p3, __p3)); \
  __ret; \
})
#define vqdmlal_high_lane_s16(__p0, __p1, __p2, __p3) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int16x8_t __s1 = __p1; \
  int16x4_t __s2 = __p2; \
  int32x4_t __ret; \
  __ret = vqdmlal_s16(__s0, vget_high_s16(__s1), __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3)); \
  __ret; \
})
#define vqdmlal_high_laneq_s32(__p0, __p1, __p2, __p3) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int32x4_t __s1 = __p1; \
  int32x4_t __s2 = __p2; \
  int64x2_t __ret; \
  __ret = vqdmlal_s32(__s0, vget_high_s32(__s1), __builtin_shufflevector(__s2, __s2, __p3, __p3)); \
  __ret; \
})
#define vqdmlal_high_laneq_s16(__p0, __p1, __p2, __p3) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int16x8_t __s1 = __p1; \
  int16x8_t __s2 = __p2; \
  int32x4_t __ret; \
  __ret = vqdmlal_s16(__s0, vget_high_s16(__s1), __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3)); \
  __ret; \
})
__ai int64x2_t vqdmlal_high_n_s32(int64x2_t __p0, int32x4_t __p1, int32_t __p2) {
  int64x2_t __ret;
  __ret = vqdmlal_n_s32(__p0, vget_high_s32(__p1), __p2);
  return __ret;
}
__ai int32x4_t vqdmlal_high_n_s16(int32x4_t __p0, int16x8_t __p1, int16_t __p2) {
  int32x4_t __ret;
  __ret = vqdmlal_n_s16(__p0, vget_high_s16(__p1), __p2);
  return __ret;
}
#define vqdmlals_lane_s32(__p0, __p1, __p2, __p3) __extension__ ({ \
  int64_t __s0 = __p0; \
  int32_t __s1 = __p1; \
  int32x2_t __s2 = __p2; \
  int64_t __ret; \
  __ret = (int64_t) __builtin_neon_vqdmlals_lane_s32(__s0, __s1, (int8x8_t)__s2, __p3); \
  __ret; \
})
#define vqdmlalh_lane_s16(__p0, __p1, __p2, __p3) __extension__ ({ \
  int32_t __s0 = __p0; \
  int16_t __s1 = __p1; \
  int16x4_t __s2 = __p2; \
  int32_t __ret; \
  __ret = (int32_t) __builtin_neon_vqdmlalh_lane_s16(__s0, __s1, (int8x8_t)__s2, __p3); \
  __ret; \
})
#define vqdmlals_laneq_s32(__p0, __p1, __p2, __p3) __extension__ ({ \
  int64_t __s0 = __p0; \
  int32_t __s1 = __p1; \
  int32x4_t __s2 = __p2; \
  int64_t __ret; \
  __ret = (int64_t) __builtin_neon_vqdmlals_laneq_s32(__s0, __s1, (int8x16_t)__s2, __p3); \
  __ret; \
})
#define vqdmlalh_laneq_s16(__p0, __p1, __p2, __p3) __extension__ ({ \
  int32_t __s0 = __p0; \
  int16_t __s1 = __p1; \
  int16x8_t __s2 = __p2; \
  int32_t __ret; \
  __ret = (int32_t) __builtin_neon_vqdmlalh_laneq_s16(__s0, __s1, (int8x16_t)__s2, __p3); \
  __ret; \
})
#define vqdmlal_laneq_s32(__p0, __p1, __p2, __p3) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int32x2_t __s1 = __p1; \
  int32x4_t __s2 = __p2; \
  int64x2_t __ret; \
  __ret = vqdmlal_s32(__s0, __s1, __builtin_shufflevector(__s2, __s2, __p3, __p3)); \
  __ret; \
})
#define vqdmlal_laneq_s16(__p0, __p1, __p2, __p3) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int16x4_t __s1 = __p1; \
  int16x8_t __s2 = __p2; \
  int32x4_t __ret; \
  __ret = vqdmlal_s16(__s0, __s1, __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3)); \
  __ret; \
})
__ai int64_t vqdmlsls_s32(int64_t __p0, int32_t __p1, int32_t __p2) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vqdmlsls_s32(__p0, __p1, __p2);
  return __ret;
}
__ai int32_t vqdmlslh_s16(int32_t __p0, int16_t __p1, int16_t __p2) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vqdmlslh_s16(__p0, __p1, __p2);
  return __ret;
}
__ai int64x2_t vqdmlsl_high_s32(int64x2_t __p0, int32x4_t __p1, int32x4_t __p2) {
  int64x2_t __ret;
  __ret = vqdmlsl_s32(__p0, vget_high_s32(__p1), vget_high_s32(__p2));
  return __ret;
}
__ai int32x4_t vqdmlsl_high_s16(int32x4_t __p0, int16x8_t __p1, int16x8_t __p2) {
  int32x4_t __ret;
  __ret = vqdmlsl_s16(__p0, vget_high_s16(__p1), vget_high_s16(__p2));
  return __ret;
}
#define vqdmlsl_high_lane_s32(__p0, __p1, __p2, __p3) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int32x4_t __s1 = __p1; \
  int32x2_t __s2 = __p2; \
  int64x2_t __ret; \
  __ret = vqdmlsl_s32(__s0, vget_high_s32(__s1), __builtin_shufflevector(__s2, __s2, __p3, __p3)); \
  __ret; \
})
#define vqdmlsl_high_lane_s16(__p0, __p1, __p2, __p3) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int16x8_t __s1 = __p1; \
  int16x4_t __s2 = __p2; \
  int32x4_t __ret; \
  __ret = vqdmlsl_s16(__s0, vget_high_s16(__s1), __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3)); \
  __ret; \
})
#define vqdmlsl_high_laneq_s32(__p0, __p1, __p2, __p3) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int32x4_t __s1 = __p1; \
  int32x4_t __s2 = __p2; \
  int64x2_t __ret; \
  __ret = vqdmlsl_s32(__s0, vget_high_s32(__s1), __builtin_shufflevector(__s2, __s2, __p3, __p3)); \
  __ret; \
})
#define vqdmlsl_high_laneq_s16(__p0, __p1, __p2, __p3) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int16x8_t __s1 = __p1; \
  int16x8_t __s2 = __p2; \
  int32x4_t __ret; \
  __ret = vqdmlsl_s16(__s0, vget_high_s16(__s1), __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3)); \
  __ret; \
})
__ai int64x2_t vqdmlsl_high_n_s32(int64x2_t __p0, int32x4_t __p1, int32_t __p2) {
  int64x2_t __ret;
  __ret = vqdmlsl_n_s32(__p0, vget_high_s32(__p1), __p2);
  return __ret;
}
__ai int32x4_t vqdmlsl_high_n_s16(int32x4_t __p0, int16x8_t __p1, int16_t __p2) {
  int32x4_t __ret;
  __ret = vqdmlsl_n_s16(__p0, vget_high_s16(__p1), __p2);
  return __ret;
}
#define vqdmlsls_lane_s32(__p0, __p1, __p2, __p3) __extension__ ({ \
  int64_t __s0 = __p0; \
  int32_t __s1 = __p1; \
  int32x2_t __s2 = __p2; \
  int64_t __ret; \
  __ret = (int64_t) __builtin_neon_vqdmlsls_lane_s32(__s0, __s1, (int8x8_t)__s2, __p3); \
  __ret; \
})
#define vqdmlslh_lane_s16(__p0, __p1, __p2, __p3) __extension__ ({ \
  int32_t __s0 = __p0; \
  int16_t __s1 = __p1; \
  int16x4_t __s2 = __p2; \
  int32_t __ret; \
  __ret = (int32_t) __builtin_neon_vqdmlslh_lane_s16(__s0, __s1, (int8x8_t)__s2, __p3); \
  __ret; \
})
#define vqdmlsls_laneq_s32(__p0, __p1, __p2, __p3) __extension__ ({ \
  int64_t __s0 = __p0; \
  int32_t __s1 = __p1; \
  int32x4_t __s2 = __p2; \
  int64_t __ret; \
  __ret = (int64_t) __builtin_neon_vqdmlsls_laneq_s32(__s0, __s1, (int8x16_t)__s2, __p3); \
  __ret; \
})
#define vqdmlslh_laneq_s16(__p0, __p1, __p2, __p3) __extension__ ({ \
  int32_t __s0 = __p0; \
  int16_t __s1 = __p1; \
  int16x8_t __s2 = __p2; \
  int32_t __ret; \
  __ret = (int32_t) __builtin_neon_vqdmlslh_laneq_s16(__s0, __s1, (int8x16_t)__s2, __p3); \
  __ret; \
})
#define vqdmlsl_laneq_s32(__p0, __p1, __p2, __p3) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int32x2_t __s1 = __p1; \
  int32x4_t __s2 = __p2; \
  int64x2_t __ret; \
  __ret = vqdmlsl_s32(__s0, __s1, __builtin_shufflevector(__s2, __s2, __p3, __p3)); \
  __ret; \
})
#define vqdmlsl_laneq_s16(__p0, __p1, __p2, __p3) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int16x4_t __s1 = __p1; \
  int16x8_t __s2 = __p2; \
  int32x4_t __ret; \
  __ret = vqdmlsl_s16(__s0, __s1, __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3)); \
  __ret; \
})
__ai int32_t vqdmulhs_s32(int32_t __p0, int32_t __p1) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vqdmulhs_s32(__p0, __p1);
  return __ret;
}
__ai int16_t vqdmulhh_s16(int16_t __p0, int16_t __p1) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vqdmulhh_s16(__p0, __p1);
  return __ret;
}
#define vqdmulhs_lane_s32(__p0_72, __p1_72, __p2_72) __extension__ ({ \
  int32_t __s0_72 = __p0_72; \
  int32x2_t __s1_72 = __p1_72; \
  int32_t __ret_72; \
  __ret_72 = vqdmulhs_s32(__s0_72, vget_lane_s32(__s1_72, __p2_72)); \
  __ret_72; \
})
#define vqdmulhh_lane_s16(__p0_73, __p1_73, __p2_73) __extension__ ({ \
  int16_t __s0_73 = __p0_73; \
  int16x4_t __s1_73 = __p1_73; \
  int16_t __ret_73; \
  __ret_73 = vqdmulhh_s16(__s0_73, vget_lane_s16(__s1_73, __p2_73)); \
  __ret_73; \
})
#define vqdmulhs_laneq_s32(__p0_74, __p1_74, __p2_74) __extension__ ({ \
  int32_t __s0_74 = __p0_74; \
  int32x4_t __s1_74 = __p1_74; \
  int32_t __ret_74; \
  __ret_74 = vqdmulhs_s32(__s0_74, vgetq_lane_s32(__s1_74, __p2_74)); \
  __ret_74; \
})
#define vqdmulhh_laneq_s16(__p0_75, __p1_75, __p2_75) __extension__ ({ \
  int16_t __s0_75 = __p0_75; \
  int16x8_t __s1_75 = __p1_75; \
  int16_t __ret_75; \
  __ret_75 = vqdmulhh_s16(__s0_75, vgetq_lane_s16(__s1_75, __p2_75)); \
  __ret_75; \
})
#define vqdmulhq_laneq_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int32x4_t __s1 = __p1; \
  int32x4_t __ret; \
  __ret = vqdmulhq_s32(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2)); \
  __ret; \
})
#define vqdmulhq_laneq_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  int16x8_t __s1 = __p1; \
  int16x8_t __ret; \
  __ret = vqdmulhq_s16(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2, __p2, __p2, __p2, __p2)); \
  __ret; \
})
#define vqdmulh_laneq_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x2_t __s0 = __p0; \
  int32x4_t __s1 = __p1; \
  int32x2_t __ret; \
  __ret = vqdmulh_s32(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2)); \
  __ret; \
})
#define vqdmulh_laneq_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x4_t __s0 = __p0; \
  int16x8_t __s1 = __p1; \
  int16x4_t __ret; \
  __ret = vqdmulh_s16(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2)); \
  __ret; \
})
__ai int64_t vqdmulls_s32(int32_t __p0, int32_t __p1) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vqdmulls_s32(__p0, __p1);
  return __ret;
}
__ai int32_t vqdmullh_s16(int16_t __p0, int16_t __p1) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vqdmullh_s16(__p0, __p1);
  return __ret;
}
__ai int64x2_t vqdmull_high_s32(int32x4_t __p0, int32x4_t __p1) {
  int64x2_t __ret;
  __ret = vqdmull_s32(vget_high_s32(__p0), vget_high_s32(__p1));
  return __ret;
}
__ai int32x4_t vqdmull_high_s16(int16x8_t __p0, int16x8_t __p1) {
  int32x4_t __ret;
  __ret = vqdmull_s16(vget_high_s16(__p0), vget_high_s16(__p1));
  return __ret;
}
#define vqdmull_high_lane_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int32x2_t __s1 = __p1; \
  int64x2_t __ret; \
  __ret = vqdmull_s32(vget_high_s32(__s0), __builtin_shufflevector(__s1, __s1, __p2, __p2)); \
  __ret; \
})
#define vqdmull_high_lane_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  int16x4_t __s1 = __p1; \
  int32x4_t __ret; \
  __ret = vqdmull_s16(vget_high_s16(__s0), __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2)); \
  __ret; \
})
#define vqdmull_high_laneq_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int32x4_t __s1 = __p1; \
  int64x2_t __ret; \
  __ret = vqdmull_s32(vget_high_s32(__s0), __builtin_shufflevector(__s1, __s1, __p2, __p2)); \
  __ret; \
})
#define vqdmull_high_laneq_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  int16x8_t __s1 = __p1; \
  int32x4_t __ret; \
  __ret = vqdmull_s16(vget_high_s16(__s0), __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2)); \
  __ret; \
})
__ai int64x2_t vqdmull_high_n_s32(int32x4_t __p0, int32_t __p1) {
  int64x2_t __ret;
  __ret = vqdmull_n_s32(vget_high_s32(__p0), __p1);
  return __ret;
}
__ai int32x4_t vqdmull_high_n_s16(int16x8_t __p0, int16_t __p1) {
  int32x4_t __ret;
  __ret = vqdmull_n_s16(vget_high_s16(__p0), __p1);
  return __ret;
}
#define vqdmulls_lane_s32(__p0_76, __p1_76, __p2_76) __extension__ ({ \
  int32_t __s0_76 = __p0_76; \
  int32x2_t __s1_76 = __p1_76; \
  int64_t __ret_76; \
  __ret_76 = vqdmulls_s32(__s0_76, vget_lane_s32(__s1_76, __p2_76)); \
  __ret_76; \
})
#define vqdmullh_lane_s16(__p0_77, __p1_77, __p2_77) __extension__ ({ \
  int16_t __s0_77 = __p0_77; \
  int16x4_t __s1_77 = __p1_77; \
  int32_t __ret_77; \
  __ret_77 = vqdmullh_s16(__s0_77, vget_lane_s16(__s1_77, __p2_77)); \
  __ret_77; \
})
#define vqdmulls_laneq_s32(__p0_78, __p1_78, __p2_78) __extension__ ({ \
  int32_t __s0_78 = __p0_78; \
  int32x4_t __s1_78 = __p1_78; \
  int64_t __ret_78; \
  __ret_78 = vqdmulls_s32(__s0_78, vgetq_lane_s32(__s1_78, __p2_78)); \
  __ret_78; \
})
#define vqdmullh_laneq_s16(__p0_79, __p1_79, __p2_79) __extension__ ({ \
  int16_t __s0_79 = __p0_79; \
  int16x8_t __s1_79 = __p1_79; \
  int32_t __ret_79; \
  __ret_79 = vqdmullh_s16(__s0_79, vgetq_lane_s16(__s1_79, __p2_79)); \
  __ret_79; \
})
#define vqdmull_laneq_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x2_t __s0 = __p0; \
  int32x4_t __s1 = __p1; \
  int64x2_t __ret; \
  __ret = vqdmull_s32(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2)); \
  __ret; \
})
#define vqdmull_laneq_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x4_t __s0 = __p0; \
  int16x8_t __s1 = __p1; \
  int32x4_t __ret; \
  __ret = vqdmull_s16(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2)); \
  __ret; \
})
__ai int16_t vqmovns_s32(int32_t __p0) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vqmovns_s32(__p0);
  return __ret;
}
__ai int32_t vqmovnd_s64(int64_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vqmovnd_s64(__p0);
  return __ret;
}
__ai int8_t vqmovnh_s16(int16_t __p0) {
  int8_t __ret;
  __ret = (int8_t) __builtin_neon_vqmovnh_s16(__p0);
  return __ret;
}
__ai uint16_t vqmovns_u32(uint32_t __p0) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vqmovns_u32(__p0);
  return __ret;
}
__ai uint32_t vqmovnd_u64(uint64_t __p0) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vqmovnd_u64(__p0);
  return __ret;
}
__ai uint8_t vqmovnh_u16(uint16_t __p0) {
  uint8_t __ret;
  __ret = (uint8_t) __builtin_neon_vqmovnh_u16(__p0);
  return __ret;
}
__ai uint16x8_t vqmovn_high_u32(uint16x4_t __p0, uint32x4_t __p1) {
  uint16x8_t __ret;
  __ret = vcombine_u16(__p0, vqmovn_u32(__p1));
  return __ret;
}
__ai uint32x4_t vqmovn_high_u64(uint32x2_t __p0, uint64x2_t __p1) {
  uint32x4_t __ret;
  __ret = vcombine_u32(__p0, vqmovn_u64(__p1));
  return __ret;
}
__ai uint8x16_t vqmovn_high_u16(uint8x8_t __p0, uint16x8_t __p1) {
  uint8x16_t __ret;
  __ret = vcombine_u8(__p0, vqmovn_u16(__p1));
  return __ret;
}
__ai int16x8_t vqmovn_high_s32(int16x4_t __p0, int32x4_t __p1) {
  int16x8_t __ret;
  __ret = vcombine_s16(__p0, vqmovn_s32(__p1));
  return __ret;
}
__ai int32x4_t vqmovn_high_s64(int32x2_t __p0, int64x2_t __p1) {
  int32x4_t __ret;
  __ret = vcombine_s32(__p0, vqmovn_s64(__p1));
  return __ret;
}
__ai int8x16_t vqmovn_high_s16(int8x8_t __p0, int16x8_t __p1) {
  int8x16_t __ret;
  __ret = vcombine_s8(__p0, vqmovn_s16(__p1));
  return __ret;
}
__ai int16_t vqmovuns_s32(int32_t __p0) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vqmovuns_s32(__p0);
  return __ret;
}
__ai int32_t vqmovund_s64(int64_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vqmovund_s64(__p0);
  return __ret;
}
__ai int8_t vqmovunh_s16(int16_t __p0) {
  int8_t __ret;
  __ret = (int8_t) __builtin_neon_vqmovunh_s16(__p0);
  return __ret;
}
__ai int16x8_t vqmovun_high_s32(int16x4_t __p0, int32x4_t __p1) {
  int16x8_t __ret;
  __ret = vcombine_u16((uint16x4_t)(__p0), vqmovun_s32(__p1));
  return __ret;
}
__ai int32x4_t vqmovun_high_s64(int32x2_t __p0, int64x2_t __p1) {
  int32x4_t __ret;
  __ret = vcombine_u32((uint32x2_t)(__p0), vqmovun_s64(__p1));
  return __ret;
}
__ai int8x16_t vqmovun_high_s16(int8x8_t __p0, int16x8_t __p1) {
  int8x16_t __ret;
  __ret = vcombine_u8((uint8x8_t)(__p0), vqmovun_s16(__p1));
  return __ret;
}
__ai int64x2_t vqnegq_s64(int64x2_t __p0) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vqnegq_v((int8x16_t)__p0, 35);
  return __ret;
}
__ai int64x1_t vqneg_s64(int64x1_t __p0) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vqneg_v((int8x8_t)__p0, 3);
  return __ret;
}
__ai int8_t vqnegb_s8(int8_t __p0) {
  int8_t __ret;
  __ret = (int8_t) __builtin_neon_vqnegb_s8(__p0);
  return __ret;
}
__ai int32_t vqnegs_s32(int32_t __p0) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vqnegs_s32(__p0);
  return __ret;
}
__ai int64_t vqnegd_s64(int64_t __p0) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vqnegd_s64(__p0);
  return __ret;
}
__ai int16_t vqnegh_s16(int16_t __p0) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vqnegh_s16(__p0);
  return __ret;
}
__ai int32_t vqrdmulhs_s32(int32_t __p0, int32_t __p1) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vqrdmulhs_s32(__p0, __p1);
  return __ret;
}
__ai int16_t vqrdmulhh_s16(int16_t __p0, int16_t __p1) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vqrdmulhh_s16(__p0, __p1);
  return __ret;
}
#define vqrdmulhs_lane_s32(__p0_80, __p1_80, __p2_80) __extension__ ({ \
  int32_t __s0_80 = __p0_80; \
  int32x2_t __s1_80 = __p1_80; \
  int32_t __ret_80; \
  __ret_80 = vqrdmulhs_s32(__s0_80, vget_lane_s32(__s1_80, __p2_80)); \
  __ret_80; \
})
#define vqrdmulhh_lane_s16(__p0_81, __p1_81, __p2_81) __extension__ ({ \
  int16_t __s0_81 = __p0_81; \
  int16x4_t __s1_81 = __p1_81; \
  int16_t __ret_81; \
  __ret_81 = vqrdmulhh_s16(__s0_81, vget_lane_s16(__s1_81, __p2_81)); \
  __ret_81; \
})
#define vqrdmulhs_laneq_s32(__p0_82, __p1_82, __p2_82) __extension__ ({ \
  int32_t __s0_82 = __p0_82; \
  int32x4_t __s1_82 = __p1_82; \
  int32_t __ret_82; \
  __ret_82 = vqrdmulhs_s32(__s0_82, vgetq_lane_s32(__s1_82, __p2_82)); \
  __ret_82; \
})
#define vqrdmulhh_laneq_s16(__p0_83, __p1_83, __p2_83) __extension__ ({ \
  int16_t __s0_83 = __p0_83; \
  int16x8_t __s1_83 = __p1_83; \
  int16_t __ret_83; \
  __ret_83 = vqrdmulhh_s16(__s0_83, vgetq_lane_s16(__s1_83, __p2_83)); \
  __ret_83; \
})
#define vqrdmulhq_laneq_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int32x4_t __s1 = __p1; \
  int32x4_t __ret; \
  __ret = vqrdmulhq_s32(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2)); \
  __ret; \
})
#define vqrdmulhq_laneq_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x8_t __s0 = __p0; \
  int16x8_t __s1 = __p1; \
  int16x8_t __ret; \
  __ret = vqrdmulhq_s16(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2, __p2, __p2, __p2, __p2)); \
  __ret; \
})
#define vqrdmulh_laneq_s32(__p0, __p1, __p2) __extension__ ({ \
  int32x2_t __s0 = __p0; \
  int32x4_t __s1 = __p1; \
  int32x2_t __ret; \
  __ret = vqrdmulh_s32(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2)); \
  __ret; \
})
#define vqrdmulh_laneq_s16(__p0, __p1, __p2) __extension__ ({ \
  int16x4_t __s0 = __p0; \
  int16x8_t __s1 = __p1; \
  int16x4_t __ret; \
  __ret = vqrdmulh_s16(__s0, __builtin_shufflevector(__s1, __s1, __p2, __p2, __p2, __p2)); \
  __ret; \
})
__ai uint8_t vqrshlb_u8(uint8_t __p0, uint8_t __p1) {
  uint8_t __ret;
  __ret = (uint8_t) __builtin_neon_vqrshlb_u8(__p0, __p1);
  return __ret;
}
__ai uint32_t vqrshls_u32(uint32_t __p0, uint32_t __p1) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vqrshls_u32(__p0, __p1);
  return __ret;
}
__ai uint64_t vqrshld_u64(uint64_t __p0, uint64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vqrshld_u64(__p0, __p1);
  return __ret;
}
__ai uint16_t vqrshlh_u16(uint16_t __p0, uint16_t __p1) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vqrshlh_u16(__p0, __p1);
  return __ret;
}
__ai int8_t vqrshlb_s8(int8_t __p0, int8_t __p1) {
  int8_t __ret;
  __ret = (int8_t) __builtin_neon_vqrshlb_s8(__p0, __p1);
  return __ret;
}
__ai int32_t vqrshls_s32(int32_t __p0, int32_t __p1) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vqrshls_s32(__p0, __p1);
  return __ret;
}
__ai int64_t vqrshld_s64(int64_t __p0, int64_t __p1) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vqrshld_s64(__p0, __p1);
  return __ret;
}
__ai int16_t vqrshlh_s16(int16_t __p0, int16_t __p1) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vqrshlh_s16(__p0, __p1);
  return __ret;
}
#define vqrshrn_high_n_u32(__p0_84, __p1_84, __p2_84) __extension__ ({ \
  uint16x4_t __s0_84 = __p0_84; \
  uint32x4_t __s1_84 = __p1_84; \
  uint16x8_t __ret_84; \
  __ret_84 = (uint16x8_t)(vcombine_u16((uint16x4_t)(__s0_84), (uint16x4_t)(vqrshrn_n_u32(__s1_84, __p2_84)))); \
  __ret_84; \
})
#define vqrshrn_high_n_u64(__p0_85, __p1_85, __p2_85) __extension__ ({ \
  uint32x2_t __s0_85 = __p0_85; \
  uint64x2_t __s1_85 = __p1_85; \
  uint32x4_t __ret_85; \
  __ret_85 = (uint32x4_t)(vcombine_u32((uint32x2_t)(__s0_85), (uint32x2_t)(vqrshrn_n_u64(__s1_85, __p2_85)))); \
  __ret_85; \
})
#define vqrshrn_high_n_u16(__p0_86, __p1_86, __p2_86) __extension__ ({ \
  uint8x8_t __s0_86 = __p0_86; \
  uint16x8_t __s1_86 = __p1_86; \
  uint8x16_t __ret_86; \
  __ret_86 = (uint8x16_t)(vcombine_u8((uint8x8_t)(__s0_86), (uint8x8_t)(vqrshrn_n_u16(__s1_86, __p2_86)))); \
  __ret_86; \
})
#define vqrshrn_high_n_s32(__p0_87, __p1_87, __p2_87) __extension__ ({ \
  int16x4_t __s0_87 = __p0_87; \
  int32x4_t __s1_87 = __p1_87; \
  int16x8_t __ret_87; \
  __ret_87 = (int16x8_t)(vcombine_s16((int16x4_t)(__s0_87), (int16x4_t)(vqrshrn_n_s32(__s1_87, __p2_87)))); \
  __ret_87; \
})
#define vqrshrn_high_n_s64(__p0_88, __p1_88, __p2_88) __extension__ ({ \
  int32x2_t __s0_88 = __p0_88; \
  int64x2_t __s1_88 = __p1_88; \
  int32x4_t __ret_88; \
  __ret_88 = (int32x4_t)(vcombine_s32((int32x2_t)(__s0_88), (int32x2_t)(vqrshrn_n_s64(__s1_88, __p2_88)))); \
  __ret_88; \
})
#define vqrshrn_high_n_s16(__p0_89, __p1_89, __p2_89) __extension__ ({ \
  int8x8_t __s0_89 = __p0_89; \
  int16x8_t __s1_89 = __p1_89; \
  int8x16_t __ret_89; \
  __ret_89 = (int8x16_t)(vcombine_s8((int8x8_t)(__s0_89), (int8x8_t)(vqrshrn_n_s16(__s1_89, __p2_89)))); \
  __ret_89; \
})
#define vqrshrns_n_u32(__p0, __p1) __extension__ ({ \
  uint32_t __s0 = __p0; \
  uint16_t __ret; \
  __ret = (uint16_t) __builtin_neon_vqrshrns_n_u32(__s0, __p1); \
  __ret; \
})
#define vqrshrnd_n_u64(__p0, __p1) __extension__ ({ \
  uint64_t __s0 = __p0; \
  uint32_t __ret; \
  __ret = (uint32_t) __builtin_neon_vqrshrnd_n_u64(__s0, __p1); \
  __ret; \
})
#define vqrshrnh_n_u16(__p0, __p1) __extension__ ({ \
  uint16_t __s0 = __p0; \
  uint8_t __ret; \
  __ret = (uint8_t) __builtin_neon_vqrshrnh_n_u16(__s0, __p1); \
  __ret; \
})
#define vqrshrns_n_s32(__p0, __p1) __extension__ ({ \
  int32_t __s0 = __p0; \
  int16_t __ret; \
  __ret = (int16_t) __builtin_neon_vqrshrns_n_s32(__s0, __p1); \
  __ret; \
})
#define vqrshrnd_n_s64(__p0, __p1) __extension__ ({ \
  int64_t __s0 = __p0; \
  int32_t __ret; \
  __ret = (int32_t) __builtin_neon_vqrshrnd_n_s64(__s0, __p1); \
  __ret; \
})
#define vqrshrnh_n_s16(__p0, __p1) __extension__ ({ \
  int16_t __s0 = __p0; \
  int8_t __ret; \
  __ret = (int8_t) __builtin_neon_vqrshrnh_n_s16(__s0, __p1); \
  __ret; \
})
#define vqrshrun_high_n_s32(__p0_90, __p1_90, __p2_90) __extension__ ({ \
  int16x4_t __s0_90 = __p0_90; \
  int32x4_t __s1_90 = __p1_90; \
  int16x8_t __ret_90; \
  __ret_90 = (int16x8_t)(vcombine_s16((int16x4_t)(__s0_90), (int16x4_t)(vqrshrun_n_s32(__s1_90, __p2_90)))); \
  __ret_90; \
})
#define vqrshrun_high_n_s64(__p0_91, __p1_91, __p2_91) __extension__ ({ \
  int32x2_t __s0_91 = __p0_91; \
  int64x2_t __s1_91 = __p1_91; \
  int32x4_t __ret_91; \
  __ret_91 = (int32x4_t)(vcombine_s32((int32x2_t)(__s0_91), (int32x2_t)(vqrshrun_n_s64(__s1_91, __p2_91)))); \
  __ret_91; \
})
#define vqrshrun_high_n_s16(__p0_92, __p1_92, __p2_92) __extension__ ({ \
  int8x8_t __s0_92 = __p0_92; \
  int16x8_t __s1_92 = __p1_92; \
  int8x16_t __ret_92; \
  __ret_92 = (int8x16_t)(vcombine_s8((int8x8_t)(__s0_92), (int8x8_t)(vqrshrun_n_s16(__s1_92, __p2_92)))); \
  __ret_92; \
})
#define vqrshruns_n_s32(__p0, __p1) __extension__ ({ \
  int32_t __s0 = __p0; \
  int16_t __ret; \
  __ret = (int16_t) __builtin_neon_vqrshruns_n_s32(__s0, __p1); \
  __ret; \
})
#define vqrshrund_n_s64(__p0, __p1) __extension__ ({ \
  int64_t __s0 = __p0; \
  int32_t __ret; \
  __ret = (int32_t) __builtin_neon_vqrshrund_n_s64(__s0, __p1); \
  __ret; \
})
#define vqrshrunh_n_s16(__p0, __p1) __extension__ ({ \
  int16_t __s0 = __p0; \
  int8_t __ret; \
  __ret = (int8_t) __builtin_neon_vqrshrunh_n_s16(__s0, __p1); \
  __ret; \
})
__ai uint8_t vqshlb_u8(uint8_t __p0, uint8_t __p1) {
  uint8_t __ret;
  __ret = (uint8_t) __builtin_neon_vqshlb_u8(__p0, __p1);
  return __ret;
}
__ai uint32_t vqshls_u32(uint32_t __p0, uint32_t __p1) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vqshls_u32(__p0, __p1);
  return __ret;
}
__ai uint64_t vqshld_u64(uint64_t __p0, uint64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vqshld_u64(__p0, __p1);
  return __ret;
}
__ai uint16_t vqshlh_u16(uint16_t __p0, uint16_t __p1) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vqshlh_u16(__p0, __p1);
  return __ret;
}
__ai int8_t vqshlb_s8(int8_t __p0, int8_t __p1) {
  int8_t __ret;
  __ret = (int8_t) __builtin_neon_vqshlb_s8(__p0, __p1);
  return __ret;
}
__ai int32_t vqshls_s32(int32_t __p0, int32_t __p1) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vqshls_s32(__p0, __p1);
  return __ret;
}
__ai int64_t vqshld_s64(int64_t __p0, int64_t __p1) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vqshld_s64(__p0, __p1);
  return __ret;
}
__ai int16_t vqshlh_s16(int16_t __p0, int16_t __p1) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vqshlh_s16(__p0, __p1);
  return __ret;
}
#define vqshlb_n_u8(__p0, __p1) __extension__ ({ \
  uint8_t __s0 = __p0; \
  uint8_t __ret; \
  __ret = (uint8_t) __builtin_neon_vqshlb_n_u8(__s0, __p1); \
  __ret; \
})
#define vqshls_n_u32(__p0, __p1) __extension__ ({ \
  uint32_t __s0 = __p0; \
  uint32_t __ret; \
  __ret = (uint32_t) __builtin_neon_vqshls_n_u32(__s0, __p1); \
  __ret; \
})
#define vqshld_n_u64(__p0, __p1) __extension__ ({ \
  uint64_t __s0 = __p0; \
  uint64_t __ret; \
  __ret = (uint64_t) __builtin_neon_vqshld_n_u64(__s0, __p1); \
  __ret; \
})
#define vqshlh_n_u16(__p0, __p1) __extension__ ({ \
  uint16_t __s0 = __p0; \
  uint16_t __ret; \
  __ret = (uint16_t) __builtin_neon_vqshlh_n_u16(__s0, __p1); \
  __ret; \
})
#define vqshlb_n_s8(__p0, __p1) __extension__ ({ \
  int8_t __s0 = __p0; \
  int8_t __ret; \
  __ret = (int8_t) __builtin_neon_vqshlb_n_s8(__s0, __p1); \
  __ret; \
})
#define vqshls_n_s32(__p0, __p1) __extension__ ({ \
  int32_t __s0 = __p0; \
  int32_t __ret; \
  __ret = (int32_t) __builtin_neon_vqshls_n_s32(__s0, __p1); \
  __ret; \
})
#define vqshld_n_s64(__p0, __p1) __extension__ ({ \
  int64_t __s0 = __p0; \
  int64_t __ret; \
  __ret = (int64_t) __builtin_neon_vqshld_n_s64(__s0, __p1); \
  __ret; \
})
#define vqshlh_n_s16(__p0, __p1) __extension__ ({ \
  int16_t __s0 = __p0; \
  int16_t __ret; \
  __ret = (int16_t) __builtin_neon_vqshlh_n_s16(__s0, __p1); \
  __ret; \
})
#define vqshlub_n_s8(__p0, __p1) __extension__ ({ \
  int8_t __s0 = __p0; \
  int8_t __ret; \
  __ret = (int8_t) __builtin_neon_vqshlub_n_s8(__s0, __p1); \
  __ret; \
})
#define vqshlus_n_s32(__p0, __p1) __extension__ ({ \
  int32_t __s0 = __p0; \
  int32_t __ret; \
  __ret = (int32_t) __builtin_neon_vqshlus_n_s32(__s0, __p1); \
  __ret; \
})
#define vqshlud_n_s64(__p0, __p1) __extension__ ({ \
  int64_t __s0 = __p0; \
  int64_t __ret; \
  __ret = (int64_t) __builtin_neon_vqshlud_n_s64(__s0, __p1); \
  __ret; \
})
#define vqshluh_n_s16(__p0, __p1) __extension__ ({ \
  int16_t __s0 = __p0; \
  int16_t __ret; \
  __ret = (int16_t) __builtin_neon_vqshluh_n_s16(__s0, __p1); \
  __ret; \
})
#define vqshrn_high_n_u32(__p0_93, __p1_93, __p2_93) __extension__ ({ \
  uint16x4_t __s0_93 = __p0_93; \
  uint32x4_t __s1_93 = __p1_93; \
  uint16x8_t __ret_93; \
  __ret_93 = (uint16x8_t)(vcombine_u16((uint16x4_t)(__s0_93), (uint16x4_t)(vqshrn_n_u32(__s1_93, __p2_93)))); \
  __ret_93; \
})
#define vqshrn_high_n_u64(__p0_94, __p1_94, __p2_94) __extension__ ({ \
  uint32x2_t __s0_94 = __p0_94; \
  uint64x2_t __s1_94 = __p1_94; \
  uint32x4_t __ret_94; \
  __ret_94 = (uint32x4_t)(vcombine_u32((uint32x2_t)(__s0_94), (uint32x2_t)(vqshrn_n_u64(__s1_94, __p2_94)))); \
  __ret_94; \
})
#define vqshrn_high_n_u16(__p0_95, __p1_95, __p2_95) __extension__ ({ \
  uint8x8_t __s0_95 = __p0_95; \
  uint16x8_t __s1_95 = __p1_95; \
  uint8x16_t __ret_95; \
  __ret_95 = (uint8x16_t)(vcombine_u8((uint8x8_t)(__s0_95), (uint8x8_t)(vqshrn_n_u16(__s1_95, __p2_95)))); \
  __ret_95; \
})
#define vqshrn_high_n_s32(__p0_96, __p1_96, __p2_96) __extension__ ({ \
  int16x4_t __s0_96 = __p0_96; \
  int32x4_t __s1_96 = __p1_96; \
  int16x8_t __ret_96; \
  __ret_96 = (int16x8_t)(vcombine_s16((int16x4_t)(__s0_96), (int16x4_t)(vqshrn_n_s32(__s1_96, __p2_96)))); \
  __ret_96; \
})
#define vqshrn_high_n_s64(__p0_97, __p1_97, __p2_97) __extension__ ({ \
  int32x2_t __s0_97 = __p0_97; \
  int64x2_t __s1_97 = __p1_97; \
  int32x4_t __ret_97; \
  __ret_97 = (int32x4_t)(vcombine_s32((int32x2_t)(__s0_97), (int32x2_t)(vqshrn_n_s64(__s1_97, __p2_97)))); \
  __ret_97; \
})
#define vqshrn_high_n_s16(__p0_98, __p1_98, __p2_98) __extension__ ({ \
  int8x8_t __s0_98 = __p0_98; \
  int16x8_t __s1_98 = __p1_98; \
  int8x16_t __ret_98; \
  __ret_98 = (int8x16_t)(vcombine_s8((int8x8_t)(__s0_98), (int8x8_t)(vqshrn_n_s16(__s1_98, __p2_98)))); \
  __ret_98; \
})
#define vqshrns_n_u32(__p0, __p1) __extension__ ({ \
  uint32_t __s0 = __p0; \
  uint16_t __ret; \
  __ret = (uint16_t) __builtin_neon_vqshrns_n_u32(__s0, __p1); \
  __ret; \
})
#define vqshrnd_n_u64(__p0, __p1) __extension__ ({ \
  uint64_t __s0 = __p0; \
  uint32_t __ret; \
  __ret = (uint32_t) __builtin_neon_vqshrnd_n_u64(__s0, __p1); \
  __ret; \
})
#define vqshrnh_n_u16(__p0, __p1) __extension__ ({ \
  uint16_t __s0 = __p0; \
  uint8_t __ret; \
  __ret = (uint8_t) __builtin_neon_vqshrnh_n_u16(__s0, __p1); \
  __ret; \
})
#define vqshrns_n_s32(__p0, __p1) __extension__ ({ \
  int32_t __s0 = __p0; \
  int16_t __ret; \
  __ret = (int16_t) __builtin_neon_vqshrns_n_s32(__s0, __p1); \
  __ret; \
})
#define vqshrnd_n_s64(__p0, __p1) __extension__ ({ \
  int64_t __s0 = __p0; \
  int32_t __ret; \
  __ret = (int32_t) __builtin_neon_vqshrnd_n_s64(__s0, __p1); \
  __ret; \
})
#define vqshrnh_n_s16(__p0, __p1) __extension__ ({ \
  int16_t __s0 = __p0; \
  int8_t __ret; \
  __ret = (int8_t) __builtin_neon_vqshrnh_n_s16(__s0, __p1); \
  __ret; \
})
#define vqshrun_high_n_s32(__p0_99, __p1_99, __p2_99) __extension__ ({ \
  int16x4_t __s0_99 = __p0_99; \
  int32x4_t __s1_99 = __p1_99; \
  int16x8_t __ret_99; \
  __ret_99 = (int16x8_t)(vcombine_s16((int16x4_t)(__s0_99), (int16x4_t)(vqshrun_n_s32(__s1_99, __p2_99)))); \
  __ret_99; \
})
#define vqshrun_high_n_s64(__p0_100, __p1_100, __p2_100) __extension__ ({ \
  int32x2_t __s0_100 = __p0_100; \
  int64x2_t __s1_100 = __p1_100; \
  int32x4_t __ret_100; \
  __ret_100 = (int32x4_t)(vcombine_s32((int32x2_t)(__s0_100), (int32x2_t)(vqshrun_n_s64(__s1_100, __p2_100)))); \
  __ret_100; \
})
#define vqshrun_high_n_s16(__p0_101, __p1_101, __p2_101) __extension__ ({ \
  int8x8_t __s0_101 = __p0_101; \
  int16x8_t __s1_101 = __p1_101; \
  int8x16_t __ret_101; \
  __ret_101 = (int8x16_t)(vcombine_s8((int8x8_t)(__s0_101), (int8x8_t)(vqshrun_n_s16(__s1_101, __p2_101)))); \
  __ret_101; \
})
#define vqshruns_n_s32(__p0, __p1) __extension__ ({ \
  int32_t __s0 = __p0; \
  int16_t __ret; \
  __ret = (int16_t) __builtin_neon_vqshruns_n_s32(__s0, __p1); \
  __ret; \
})
#define vqshrund_n_s64(__p0, __p1) __extension__ ({ \
  int64_t __s0 = __p0; \
  int32_t __ret; \
  __ret = (int32_t) __builtin_neon_vqshrund_n_s64(__s0, __p1); \
  __ret; \
})
#define vqshrunh_n_s16(__p0, __p1) __extension__ ({ \
  int16_t __s0 = __p0; \
  int8_t __ret; \
  __ret = (int8_t) __builtin_neon_vqshrunh_n_s16(__s0, __p1); \
  __ret; \
})
__ai uint8_t vqsubb_u8(uint8_t __p0, uint8_t __p1) {
  uint8_t __ret;
  __ret = (uint8_t) __builtin_neon_vqsubb_u8(__p0, __p1);
  return __ret;
}
__ai uint32_t vqsubs_u32(uint32_t __p0, uint32_t __p1) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vqsubs_u32(__p0, __p1);
  return __ret;
}
__ai uint64_t vqsubd_u64(uint64_t __p0, uint64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vqsubd_u64(__p0, __p1);
  return __ret;
}
__ai uint16_t vqsubh_u16(uint16_t __p0, uint16_t __p1) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vqsubh_u16(__p0, __p1);
  return __ret;
}
__ai int8_t vqsubb_s8(int8_t __p0, int8_t __p1) {
  int8_t __ret;
  __ret = (int8_t) __builtin_neon_vqsubb_s8(__p0, __p1);
  return __ret;
}
__ai int32_t vqsubs_s32(int32_t __p0, int32_t __p1) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vqsubs_s32(__p0, __p1);
  return __ret;
}
__ai int64_t vqsubd_s64(int64_t __p0, int64_t __p1) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vqsubd_s64(__p0, __p1);
  return __ret;
}
__ai int16_t vqsubh_s16(int16_t __p0, int16_t __p1) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vqsubh_s16(__p0, __p1);
  return __ret;
}
__ai poly8x8_t vqtbl1_p8(poly8x16_t __p0, uint8x8_t __p1) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vqtbl1_v((int8x16_t)__p0, (int8x8_t)__p1, 4);
  return __ret;
}
__ai poly8x16_t vqtbl1q_p8(poly8x16_t __p0, uint8x16_t __p1) {
  poly8x16_t __ret;
  __ret = (poly8x16_t) __builtin_neon_vqtbl1q_v((int8x16_t)__p0, (int8x16_t)__p1, 36);
  return __ret;
}
__ai uint8x16_t vqtbl1q_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vqtbl1q_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
__ai int8x16_t vqtbl1q_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vqtbl1q_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
__ai uint8x8_t vqtbl1_u8(uint8x16_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vqtbl1_v((int8x16_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
__ai int8x8_t vqtbl1_s8(int8x16_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vqtbl1_v((int8x16_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
__ai poly8x8_t vqtbl2_p8(poly8x16x2_t __p0, uint8x8_t __p1) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vqtbl2_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x8_t)__p1, 4);
  return __ret;
}
__ai poly8x16_t vqtbl2q_p8(poly8x16x2_t __p0, uint8x16_t __p1) {
  poly8x16_t __ret;
  __ret = (poly8x16_t) __builtin_neon_vqtbl2q_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x16_t)__p1, 36);
  return __ret;
}
__ai uint8x16_t vqtbl2q_u8(uint8x16x2_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vqtbl2q_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x16_t)__p1, 48);
  return __ret;
}
__ai int8x16_t vqtbl2q_s8(int8x16x2_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vqtbl2q_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x16_t)__p1, 32);
  return __ret;
}
__ai uint8x8_t vqtbl2_u8(uint8x16x2_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vqtbl2_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x8_t)__p1, 16);
  return __ret;
}
__ai int8x8_t vqtbl2_s8(int8x16x2_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vqtbl2_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x8_t)__p1, 0);
  return __ret;
}
__ai poly8x8_t vqtbl3_p8(poly8x16x3_t __p0, uint8x8_t __p1) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vqtbl3_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x16_t)__p0.val[2], (int8x8_t)__p1, 4);
  return __ret;
}
__ai poly8x16_t vqtbl3q_p8(poly8x16x3_t __p0, uint8x16_t __p1) {
  poly8x16_t __ret;
  __ret = (poly8x16_t) __builtin_neon_vqtbl3q_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x16_t)__p0.val[2], (int8x16_t)__p1, 36);
  return __ret;
}
__ai uint8x16_t vqtbl3q_u8(uint8x16x3_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vqtbl3q_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x16_t)__p0.val[2], (int8x16_t)__p1, 48);
  return __ret;
}
__ai int8x16_t vqtbl3q_s8(int8x16x3_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vqtbl3q_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x16_t)__p0.val[2], (int8x16_t)__p1, 32);
  return __ret;
}
__ai uint8x8_t vqtbl3_u8(uint8x16x3_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vqtbl3_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x16_t)__p0.val[2], (int8x8_t)__p1, 16);
  return __ret;
}
__ai int8x8_t vqtbl3_s8(int8x16x3_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vqtbl3_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x16_t)__p0.val[2], (int8x8_t)__p1, 0);
  return __ret;
}
__ai poly8x8_t vqtbl4_p8(poly8x16x4_t __p0, uint8x8_t __p1) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vqtbl4_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x16_t)__p0.val[2], (int8x16_t)__p0.val[3], (int8x8_t)__p1, 4);
  return __ret;
}
__ai poly8x16_t vqtbl4q_p8(poly8x16x4_t __p0, uint8x16_t __p1) {
  poly8x16_t __ret;
  __ret = (poly8x16_t) __builtin_neon_vqtbl4q_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x16_t)__p0.val[2], (int8x16_t)__p0.val[3], (int8x16_t)__p1, 36);
  return __ret;
}
__ai uint8x16_t vqtbl4q_u8(uint8x16x4_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vqtbl4q_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x16_t)__p0.val[2], (int8x16_t)__p0.val[3], (int8x16_t)__p1, 48);
  return __ret;
}
__ai int8x16_t vqtbl4q_s8(int8x16x4_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vqtbl4q_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x16_t)__p0.val[2], (int8x16_t)__p0.val[3], (int8x16_t)__p1, 32);
  return __ret;
}
__ai uint8x8_t vqtbl4_u8(uint8x16x4_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vqtbl4_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x16_t)__p0.val[2], (int8x16_t)__p0.val[3], (int8x8_t)__p1, 16);
  return __ret;
}
__ai int8x8_t vqtbl4_s8(int8x16x4_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vqtbl4_v((int8x16_t)__p0.val[0], (int8x16_t)__p0.val[1], (int8x16_t)__p0.val[2], (int8x16_t)__p0.val[3], (int8x8_t)__p1, 0);
  return __ret;
}
__ai poly8x8_t vqtbx1_p8(poly8x8_t __p0, poly8x16_t __p1, uint8x8_t __p2) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vqtbx1_v((int8x8_t)__p0, (int8x16_t)__p1, (int8x8_t)__p2, 4);
  return __ret;
}
__ai poly8x16_t vqtbx1q_p8(poly8x16_t __p0, poly8x16_t __p1, uint8x16_t __p2) {
  poly8x16_t __ret;
  __ret = (poly8x16_t) __builtin_neon_vqtbx1q_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 36);
  return __ret;
}
__ai uint8x16_t vqtbx1q_u8(uint8x16_t __p0, uint8x16_t __p1, uint8x16_t __p2) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vqtbx1q_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 48);
  return __ret;
}
__ai int8x16_t vqtbx1q_s8(int8x16_t __p0, int8x16_t __p1, int8x16_t __p2) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vqtbx1q_v((int8x16_t)__p0, (int8x16_t)__p1, (int8x16_t)__p2, 32);
  return __ret;
}
__ai uint8x8_t vqtbx1_u8(uint8x8_t __p0, uint8x16_t __p1, uint8x8_t __p2) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vqtbx1_v((int8x8_t)__p0, (int8x16_t)__p1, (int8x8_t)__p2, 16);
  return __ret;
}
__ai int8x8_t vqtbx1_s8(int8x8_t __p0, int8x16_t __p1, int8x8_t __p2) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vqtbx1_v((int8x8_t)__p0, (int8x16_t)__p1, (int8x8_t)__p2, 0);
  return __ret;
}
__ai poly8x8_t vqtbx2_p8(poly8x8_t __p0, poly8x16x2_t __p1, uint8x8_t __p2) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vqtbx2_v((int8x8_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x8_t)__p2, 4);
  return __ret;
}
__ai poly8x16_t vqtbx2q_p8(poly8x16_t __p0, poly8x16x2_t __p1, uint8x16_t __p2) {
  poly8x16_t __ret;
  __ret = (poly8x16_t) __builtin_neon_vqtbx2q_v((int8x16_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x16_t)__p2, 36);
  return __ret;
}
__ai uint8x16_t vqtbx2q_u8(uint8x16_t __p0, uint8x16x2_t __p1, uint8x16_t __p2) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vqtbx2q_v((int8x16_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x16_t)__p2, 48);
  return __ret;
}
__ai int8x16_t vqtbx2q_s8(int8x16_t __p0, int8x16x2_t __p1, int8x16_t __p2) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vqtbx2q_v((int8x16_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x16_t)__p2, 32);
  return __ret;
}
__ai uint8x8_t vqtbx2_u8(uint8x8_t __p0, uint8x16x2_t __p1, uint8x8_t __p2) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vqtbx2_v((int8x8_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x8_t)__p2, 16);
  return __ret;
}
__ai int8x8_t vqtbx2_s8(int8x8_t __p0, int8x16x2_t __p1, int8x8_t __p2) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vqtbx2_v((int8x8_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x8_t)__p2, 0);
  return __ret;
}
__ai poly8x8_t vqtbx3_p8(poly8x8_t __p0, poly8x16x3_t __p1, uint8x8_t __p2) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vqtbx3_v((int8x8_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x16_t)__p1.val[2], (int8x8_t)__p2, 4);
  return __ret;
}
__ai poly8x16_t vqtbx3q_p8(poly8x16_t __p0, poly8x16x3_t __p1, uint8x16_t __p2) {
  poly8x16_t __ret;
  __ret = (poly8x16_t) __builtin_neon_vqtbx3q_v((int8x16_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x16_t)__p1.val[2], (int8x16_t)__p2, 36);
  return __ret;
}
__ai uint8x16_t vqtbx3q_u8(uint8x16_t __p0, uint8x16x3_t __p1, uint8x16_t __p2) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vqtbx3q_v((int8x16_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x16_t)__p1.val[2], (int8x16_t)__p2, 48);
  return __ret;
}
__ai int8x16_t vqtbx3q_s8(int8x16_t __p0, int8x16x3_t __p1, int8x16_t __p2) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vqtbx3q_v((int8x16_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x16_t)__p1.val[2], (int8x16_t)__p2, 32);
  return __ret;
}
__ai uint8x8_t vqtbx3_u8(uint8x8_t __p0, uint8x16x3_t __p1, uint8x8_t __p2) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vqtbx3_v((int8x8_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x16_t)__p1.val[2], (int8x8_t)__p2, 16);
  return __ret;
}
__ai int8x8_t vqtbx3_s8(int8x8_t __p0, int8x16x3_t __p1, int8x8_t __p2) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vqtbx3_v((int8x8_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x16_t)__p1.val[2], (int8x8_t)__p2, 0);
  return __ret;
}
__ai poly8x8_t vqtbx4_p8(poly8x8_t __p0, poly8x16x4_t __p1, uint8x8_t __p2) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vqtbx4_v((int8x8_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x16_t)__p1.val[2], (int8x16_t)__p1.val[3], (int8x8_t)__p2, 4);
  return __ret;
}
__ai poly8x16_t vqtbx4q_p8(poly8x16_t __p0, poly8x16x4_t __p1, uint8x16_t __p2) {
  poly8x16_t __ret;
  __ret = (poly8x16_t) __builtin_neon_vqtbx4q_v((int8x16_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x16_t)__p1.val[2], (int8x16_t)__p1.val[3], (int8x16_t)__p2, 36);
  return __ret;
}
__ai uint8x16_t vqtbx4q_u8(uint8x16_t __p0, uint8x16x4_t __p1, uint8x16_t __p2) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vqtbx4q_v((int8x16_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x16_t)__p1.val[2], (int8x16_t)__p1.val[3], (int8x16_t)__p2, 48);
  return __ret;
}
__ai int8x16_t vqtbx4q_s8(int8x16_t __p0, int8x16x4_t __p1, int8x16_t __p2) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vqtbx4q_v((int8x16_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x16_t)__p1.val[2], (int8x16_t)__p1.val[3], (int8x16_t)__p2, 32);
  return __ret;
}
__ai uint8x8_t vqtbx4_u8(uint8x8_t __p0, uint8x16x4_t __p1, uint8x8_t __p2) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vqtbx4_v((int8x8_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x16_t)__p1.val[2], (int8x16_t)__p1.val[3], (int8x8_t)__p2, 16);
  return __ret;
}
__ai int8x8_t vqtbx4_s8(int8x8_t __p0, int8x16x4_t __p1, int8x8_t __p2) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vqtbx4_v((int8x8_t)__p0, (int8x16_t)__p1.val[0], (int8x16_t)__p1.val[1], (int8x16_t)__p1.val[2], (int8x16_t)__p1.val[3], (int8x8_t)__p2, 0);
  return __ret;
}
__ai uint16x8_t vraddhn_high_u32(uint16x4_t __p0, uint32x4_t __p1, uint32x4_t __p2) {
  uint16x8_t __ret;
  __ret = vcombine_u16(__p0, vraddhn_u32(__p1, __p2));
  return __ret;
}
__ai uint32x4_t vraddhn_high_u64(uint32x2_t __p0, uint64x2_t __p1, uint64x2_t __p2) {
  uint32x4_t __ret;
  __ret = vcombine_u32(__p0, vraddhn_u64(__p1, __p2));
  return __ret;
}
__ai uint8x16_t vraddhn_high_u16(uint8x8_t __p0, uint16x8_t __p1, uint16x8_t __p2) {
  uint8x16_t __ret;
  __ret = vcombine_u8(__p0, vraddhn_u16(__p1, __p2));
  return __ret;
}
__ai int16x8_t vraddhn_high_s32(int16x4_t __p0, int32x4_t __p1, int32x4_t __p2) {
  int16x8_t __ret;
  __ret = vcombine_s16(__p0, vraddhn_s32(__p1, __p2));
  return __ret;
}
__ai int32x4_t vraddhn_high_s64(int32x2_t __p0, int64x2_t __p1, int64x2_t __p2) {
  int32x4_t __ret;
  __ret = vcombine_s32(__p0, vraddhn_s64(__p1, __p2));
  return __ret;
}
__ai int8x16_t vraddhn_high_s16(int8x8_t __p0, int16x8_t __p1, int16x8_t __p2) {
  int8x16_t __ret;
  __ret = vcombine_s8(__p0, vraddhn_s16(__p1, __p2));
  return __ret;
}
__ai poly8x8_t vrbit_p8(poly8x8_t __p0) {
  poly8x8_t __ret;
  __ret = (poly8x8_t) __builtin_neon_vrbit_v((int8x8_t)__p0, 4);
  return __ret;
}
__ai poly8x16_t vrbitq_p8(poly8x16_t __p0) {
  poly8x16_t __ret;
  __ret = (poly8x16_t) __builtin_neon_vrbitq_v((int8x16_t)__p0, 36);
  return __ret;
}
__ai uint8x16_t vrbitq_u8(uint8x16_t __p0) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vrbitq_v((int8x16_t)__p0, 48);
  return __ret;
}
__ai int8x16_t vrbitq_s8(int8x16_t __p0) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vrbitq_v((int8x16_t)__p0, 32);
  return __ret;
}
__ai uint8x8_t vrbit_u8(uint8x8_t __p0) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vrbit_v((int8x8_t)__p0, 16);
  return __ret;
}
__ai int8x8_t vrbit_s8(int8x8_t __p0) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vrbit_v((int8x8_t)__p0, 0);
  return __ret;
}
__ai float64x2_t vrecpeq_f64(float64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vrecpeq_v((int8x16_t)__p0, 42);
  return __ret;
}
__ai float64x1_t vrecpe_f64(float64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vrecpe_v((int8x8_t)__p0, 10);
  return __ret;
}
__ai float64_t vrecped_f64(float64_t __p0) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vrecped_f64(__p0);
  return __ret;
}
__ai float32_t vrecpes_f32(float32_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vrecpes_f32(__p0);
  return __ret;
}
__ai float64x2_t vrecpsq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vrecpsq_v((int8x16_t)__p0, (int8x16_t)__p1, 42);
  return __ret;
}
__ai float64x1_t vrecps_f64(float64x1_t __p0, float64x1_t __p1) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vrecps_v((int8x8_t)__p0, (int8x8_t)__p1, 10);
  return __ret;
}
__ai float64_t vrecpsd_f64(float64_t __p0, float64_t __p1) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vrecpsd_f64(__p0, __p1);
  return __ret;
}
__ai float32_t vrecpss_f32(float32_t __p0, float32_t __p1) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vrecpss_f32(__p0, __p1);
  return __ret;
}
__ai float64_t vrecpxd_f64(float64_t __p0) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vrecpxd_f64(__p0);
  return __ret;
}
__ai float32_t vrecpxs_f32(float32_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vrecpxs_f32(__p0);
  return __ret;
}
__ai float64x2_t vrndq_f64(float64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vrndq_v((int8x16_t)__p0, 42);
  return __ret;
}
__ai float32x4_t vrndq_f32(float32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vrndq_v((int8x16_t)__p0, 41);
  return __ret;
}
__ai float64x1_t vrnd_f64(float64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vrnd_v((int8x8_t)__p0, 10);
  return __ret;
}
__ai float32x2_t vrnd_f32(float32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vrnd_v((int8x8_t)__p0, 9);
  return __ret;
}
__ai float64x2_t vrndaq_f64(float64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vrndaq_v((int8x16_t)__p0, 42);
  return __ret;
}
__ai float32x4_t vrndaq_f32(float32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vrndaq_v((int8x16_t)__p0, 41);
  return __ret;
}
__ai float64x1_t vrnda_f64(float64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vrnda_v((int8x8_t)__p0, 10);
  return __ret;
}
__ai float32x2_t vrnda_f32(float32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vrnda_v((int8x8_t)__p0, 9);
  return __ret;
}
__ai float64x2_t vrndiq_f64(float64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vrndiq_v((int8x16_t)__p0, 42);
  return __ret;
}
__ai float32x4_t vrndiq_f32(float32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vrndiq_v((int8x16_t)__p0, 41);
  return __ret;
}
__ai float64x1_t vrndi_f64(float64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vrndi_v((int8x8_t)__p0, 10);
  return __ret;
}
__ai float32x2_t vrndi_f32(float32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vrndi_v((int8x8_t)__p0, 9);
  return __ret;
}
__ai float64x2_t vrndmq_f64(float64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vrndmq_v((int8x16_t)__p0, 42);
  return __ret;
}
__ai float32x4_t vrndmq_f32(float32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vrndmq_v((int8x16_t)__p0, 41);
  return __ret;
}
__ai float64x1_t vrndm_f64(float64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vrndm_v((int8x8_t)__p0, 10);
  return __ret;
}
__ai float32x2_t vrndm_f32(float32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vrndm_v((int8x8_t)__p0, 9);
  return __ret;
}
__ai float64x2_t vrndnq_f64(float64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vrndnq_v((int8x16_t)__p0, 42);
  return __ret;
}
__ai float32x4_t vrndnq_f32(float32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vrndnq_v((int8x16_t)__p0, 41);
  return __ret;
}
__ai float64x1_t vrndn_f64(float64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vrndn_v((int8x8_t)__p0, 10);
  return __ret;
}
__ai float32x2_t vrndn_f32(float32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vrndn_v((int8x8_t)__p0, 9);
  return __ret;
}
__ai float64x2_t vrndpq_f64(float64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vrndpq_v((int8x16_t)__p0, 42);
  return __ret;
}
__ai float32x4_t vrndpq_f32(float32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vrndpq_v((int8x16_t)__p0, 41);
  return __ret;
}
__ai float64x1_t vrndp_f64(float64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vrndp_v((int8x8_t)__p0, 10);
  return __ret;
}
__ai float32x2_t vrndp_f32(float32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vrndp_v((int8x8_t)__p0, 9);
  return __ret;
}
__ai float64x2_t vrndxq_f64(float64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vrndxq_v((int8x16_t)__p0, 42);
  return __ret;
}
__ai float32x4_t vrndxq_f32(float32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vrndxq_v((int8x16_t)__p0, 41);
  return __ret;
}
__ai float64x1_t vrndx_f64(float64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vrndx_v((int8x8_t)__p0, 10);
  return __ret;
}
__ai float32x2_t vrndx_f32(float32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vrndx_v((int8x8_t)__p0, 9);
  return __ret;
}
__ai uint64_t vrshld_u64(uint64_t __p0, uint64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vrshld_u64(__p0, __p1);
  return __ret;
}
__ai int64_t vrshld_s64(int64_t __p0, int64_t __p1) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vrshld_s64(__p0, __p1);
  return __ret;
}
#define vrshrd_n_u64(__p0, __p1) __extension__ ({ \
  uint64_t __s0 = __p0; \
  uint64_t __ret; \
  __ret = (uint64_t) __builtin_neon_vrshrd_n_u64(__s0, __p1); \
  __ret; \
})
#define vrshrd_n_s64(__p0, __p1) __extension__ ({ \
  int64_t __s0 = __p0; \
  int64_t __ret; \
  __ret = (int64_t) __builtin_neon_vrshrd_n_s64(__s0, __p1); \
  __ret; \
})
#define vrshrn_high_n_u32(__p0_102, __p1_102, __p2_102) __extension__ ({ \
  uint16x4_t __s0_102 = __p0_102; \
  uint32x4_t __s1_102 = __p1_102; \
  uint16x8_t __ret_102; \
  __ret_102 = (uint16x8_t)(vcombine_u16((uint16x4_t)(__s0_102), (uint16x4_t)(vrshrn_n_u32(__s1_102, __p2_102)))); \
  __ret_102; \
})
#define vrshrn_high_n_u64(__p0_103, __p1_103, __p2_103) __extension__ ({ \
  uint32x2_t __s0_103 = __p0_103; \
  uint64x2_t __s1_103 = __p1_103; \
  uint32x4_t __ret_103; \
  __ret_103 = (uint32x4_t)(vcombine_u32((uint32x2_t)(__s0_103), (uint32x2_t)(vrshrn_n_u64(__s1_103, __p2_103)))); \
  __ret_103; \
})
#define vrshrn_high_n_u16(__p0_104, __p1_104, __p2_104) __extension__ ({ \
  uint8x8_t __s0_104 = __p0_104; \
  uint16x8_t __s1_104 = __p1_104; \
  uint8x16_t __ret_104; \
  __ret_104 = (uint8x16_t)(vcombine_u8((uint8x8_t)(__s0_104), (uint8x8_t)(vrshrn_n_u16(__s1_104, __p2_104)))); \
  __ret_104; \
})
#define vrshrn_high_n_s32(__p0_105, __p1_105, __p2_105) __extension__ ({ \
  int16x4_t __s0_105 = __p0_105; \
  int32x4_t __s1_105 = __p1_105; \
  int16x8_t __ret_105; \
  __ret_105 = (int16x8_t)(vcombine_s16((int16x4_t)(__s0_105), (int16x4_t)(vrshrn_n_s32(__s1_105, __p2_105)))); \
  __ret_105; \
})
#define vrshrn_high_n_s64(__p0_106, __p1_106, __p2_106) __extension__ ({ \
  int32x2_t __s0_106 = __p0_106; \
  int64x2_t __s1_106 = __p1_106; \
  int32x4_t __ret_106; \
  __ret_106 = (int32x4_t)(vcombine_s32((int32x2_t)(__s0_106), (int32x2_t)(vrshrn_n_s64(__s1_106, __p2_106)))); \
  __ret_106; \
})
#define vrshrn_high_n_s16(__p0_107, __p1_107, __p2_107) __extension__ ({ \
  int8x8_t __s0_107 = __p0_107; \
  int16x8_t __s1_107 = __p1_107; \
  int8x16_t __ret_107; \
  __ret_107 = (int8x16_t)(vcombine_s8((int8x8_t)(__s0_107), (int8x8_t)(vrshrn_n_s16(__s1_107, __p2_107)))); \
  __ret_107; \
})
__ai float64x2_t vrsqrteq_f64(float64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vrsqrteq_v((int8x16_t)__p0, 42);
  return __ret;
}
__ai float64x1_t vrsqrte_f64(float64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vrsqrte_v((int8x8_t)__p0, 10);
  return __ret;
}
__ai float64_t vrsqrted_f64(float64_t __p0) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vrsqrted_f64(__p0);
  return __ret;
}
__ai float32_t vrsqrtes_f32(float32_t __p0) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vrsqrtes_f32(__p0);
  return __ret;
}
__ai float64x2_t vrsqrtsq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vrsqrtsq_v((int8x16_t)__p0, (int8x16_t)__p1, 42);
  return __ret;
}
__ai float64x1_t vrsqrts_f64(float64x1_t __p0, float64x1_t __p1) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vrsqrts_v((int8x8_t)__p0, (int8x8_t)__p1, 10);
  return __ret;
}
__ai float64_t vrsqrtsd_f64(float64_t __p0, float64_t __p1) {
  float64_t __ret;
  __ret = (float64_t) __builtin_neon_vrsqrtsd_f64(__p0, __p1);
  return __ret;
}
__ai float32_t vrsqrtss_f32(float32_t __p0, float32_t __p1) {
  float32_t __ret;
  __ret = (float32_t) __builtin_neon_vrsqrtss_f32(__p0, __p1);
  return __ret;
}
#define vrsrad_n_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64_t __s0 = __p0; \
  uint64_t __s1 = __p1; \
  uint64_t __ret; \
  __ret = (uint64_t) __builtin_neon_vrsrad_n_u64(__s0, __s1, __p2); \
  __ret; \
})
#define vrsrad_n_s64(__p0, __p1, __p2) __extension__ ({ \
  int64_t __s0 = __p0; \
  int64_t __s1 = __p1; \
  int64_t __ret; \
  __ret = (int64_t) __builtin_neon_vrsrad_n_s64(__s0, __s1, __p2); \
  __ret; \
})
__ai uint16x8_t vrsubhn_high_u32(uint16x4_t __p0, uint32x4_t __p1, uint32x4_t __p2) {
  uint16x8_t __ret;
  __ret = vcombine_u16(__p0, vrsubhn_u32(__p1, __p2));
  return __ret;
}
__ai uint32x4_t vrsubhn_high_u64(uint32x2_t __p0, uint64x2_t __p1, uint64x2_t __p2) {
  uint32x4_t __ret;
  __ret = vcombine_u32(__p0, vrsubhn_u64(__p1, __p2));
  return __ret;
}
__ai uint8x16_t vrsubhn_high_u16(uint8x8_t __p0, uint16x8_t __p1, uint16x8_t __p2) {
  uint8x16_t __ret;
  __ret = vcombine_u8(__p0, vrsubhn_u16(__p1, __p2));
  return __ret;
}
__ai int16x8_t vrsubhn_high_s32(int16x4_t __p0, int32x4_t __p1, int32x4_t __p2) {
  int16x8_t __ret;
  __ret = vcombine_s16(__p0, vrsubhn_s32(__p1, __p2));
  return __ret;
}
__ai int32x4_t vrsubhn_high_s64(int32x2_t __p0, int64x2_t __p1, int64x2_t __p2) {
  int32x4_t __ret;
  __ret = vcombine_s32(__p0, vrsubhn_s64(__p1, __p2));
  return __ret;
}
__ai int8x16_t vrsubhn_high_s16(int8x8_t __p0, int16x8_t __p1, int16x8_t __p2) {
  int8x16_t __ret;
  __ret = vcombine_s8(__p0, vrsubhn_s16(__p1, __p2));
  return __ret;
}
#define vset_lane_f16(__p0_108, __p1_108, __p2_108) __extension__ ({ \
  float16_t __s0_108 = __p0_108; \
  float16x4_t __s1_108 = __p1_108; \
  float16x4_t __ret_108; \
float16_t __reint_108 = __s0_108; \
float16x4_t __reint1_108 = __s1_108; \
int16x4_t __reint2_108 = vset_lane_s16(*(int16_t *) &__reint_108, *(int16x4_t *) &__reint1_108, __p2_108); \
  __ret_108 = *(float16x4_t *) &__reint2_108; \
  __ret_108; \
})
#define vsetq_lane_f16(__p0_109, __p1_109, __p2_109) __extension__ ({ \
  float16_t __s0_109 = __p0_109; \
  float16x8_t __s1_109 = __p1_109; \
  float16x8_t __ret_109; \
float16_t __reint_109 = __s0_109; \
float16x8_t __reint1_109 = __s1_109; \
int16x8_t __reint2_109 = vsetq_lane_s16(*(int16_t *) &__reint_109, *(int16x8_t *) &__reint1_109, __p2_109); \
  __ret_109 = *(float16x8_t *) &__reint2_109; \
  __ret_109; \
})
#define vset_lane_p64(__p0, __p1, __p2) __extension__ ({ \
  poly64_t __s0 = __p0; \
  poly64x1_t __s1 = __p1; \
  poly64x1_t __ret; \
  __ret = (poly64x1_t) __builtin_neon_vset_lane_i64(__s0, (int8x8_t)__s1, __p2); \
  __ret; \
})
#define vsetq_lane_p64(__p0, __p1, __p2) __extension__ ({ \
  poly64_t __s0 = __p0; \
  poly64x2_t __s1 = __p1; \
  poly64x2_t __ret; \
  __ret = (poly64x2_t) __builtin_neon_vsetq_lane_i64(__s0, (int8x16_t)__s1, __p2); \
  __ret; \
})
#define vsetq_lane_f64(__p0, __p1, __p2) __extension__ ({ \
  float64_t __s0 = __p0; \
  float64x2_t __s1 = __p1; \
  float64x2_t __ret; \
  __ret = (float64x2_t) __builtin_neon_vsetq_lane_f64(__s0, (int8x16_t)__s1, __p2); \
  __ret; \
})
#define vset_lane_f64(__p0, __p1, __p2) __extension__ ({ \
  float64_t __s0 = __p0; \
  float64x1_t __s1 = __p1; \
  float64x1_t __ret; \
  __ret = (float64x1_t) __builtin_neon_vset_lane_f64(__s0, (int8x8_t)__s1, __p2); \
  __ret; \
})
__ai uint64_t vshld_u64(uint64_t __p0, uint64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vshld_u64(__p0, __p1);
  return __ret;
}
__ai int64_t vshld_s64(int64_t __p0, int64_t __p1) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vshld_s64(__p0, __p1);
  return __ret;
}
#define vshld_n_u64(__p0, __p1) __extension__ ({ \
  uint64_t __s0 = __p0; \
  uint64_t __ret; \
  __ret = (uint64_t) __builtin_neon_vshld_n_u64(__s0, __p1); \
  __ret; \
})
#define vshld_n_s64(__p0, __p1) __extension__ ({ \
  int64_t __s0 = __p0; \
  int64_t __ret; \
  __ret = (int64_t) __builtin_neon_vshld_n_s64(__s0, __p1); \
  __ret; \
})
#define vshll_high_n_u8(__p0_110, __p1_110) __extension__ ({ \
  uint8x16_t __s0_110 = __p0_110; \
  uint16x8_t __ret_110; \
  __ret_110 = (uint16x8_t)(vshll_n_u8(vget_high_u8(__s0_110), __p1_110)); \
  __ret_110; \
})
#define vshll_high_n_u32(__p0_111, __p1_111) __extension__ ({ \
  uint32x4_t __s0_111 = __p0_111; \
  uint64x2_t __ret_111; \
  __ret_111 = (uint64x2_t)(vshll_n_u32(vget_high_u32(__s0_111), __p1_111)); \
  __ret_111; \
})
#define vshll_high_n_u16(__p0_112, __p1_112) __extension__ ({ \
  uint16x8_t __s0_112 = __p0_112; \
  uint32x4_t __ret_112; \
  __ret_112 = (uint32x4_t)(vshll_n_u16(vget_high_u16(__s0_112), __p1_112)); \
  __ret_112; \
})
#define vshll_high_n_s8(__p0_113, __p1_113) __extension__ ({ \
  int8x16_t __s0_113 = __p0_113; \
  int16x8_t __ret_113; \
  __ret_113 = (int16x8_t)(vshll_n_s8(vget_high_s8(__s0_113), __p1_113)); \
  __ret_113; \
})
#define vshll_high_n_s32(__p0_114, __p1_114) __extension__ ({ \
  int32x4_t __s0_114 = __p0_114; \
  int64x2_t __ret_114; \
  __ret_114 = (int64x2_t)(vshll_n_s32(vget_high_s32(__s0_114), __p1_114)); \
  __ret_114; \
})
#define vshll_high_n_s16(__p0_115, __p1_115) __extension__ ({ \
  int16x8_t __s0_115 = __p0_115; \
  int32x4_t __ret_115; \
  __ret_115 = (int32x4_t)(vshll_n_s16(vget_high_s16(__s0_115), __p1_115)); \
  __ret_115; \
})
#define vshrd_n_u64(__p0, __p1) __extension__ ({ \
  uint64_t __s0 = __p0; \
  uint64_t __ret; \
  __ret = (uint64_t) __builtin_neon_vshrd_n_u64(__s0, __p1); \
  __ret; \
})
#define vshrd_n_s64(__p0, __p1) __extension__ ({ \
  int64_t __s0 = __p0; \
  int64_t __ret; \
  __ret = (int64_t) __builtin_neon_vshrd_n_s64(__s0, __p1); \
  __ret; \
})
#define vshrn_high_n_u32(__p0_116, __p1_116, __p2_116) __extension__ ({ \
  uint16x4_t __s0_116 = __p0_116; \
  uint32x4_t __s1_116 = __p1_116; \
  uint16x8_t __ret_116; \
  __ret_116 = (uint16x8_t)(vcombine_u16((uint16x4_t)(__s0_116), (uint16x4_t)(vshrn_n_u32(__s1_116, __p2_116)))); \
  __ret_116; \
})
#define vshrn_high_n_u64(__p0_117, __p1_117, __p2_117) __extension__ ({ \
  uint32x2_t __s0_117 = __p0_117; \
  uint64x2_t __s1_117 = __p1_117; \
  uint32x4_t __ret_117; \
  __ret_117 = (uint32x4_t)(vcombine_u32((uint32x2_t)(__s0_117), (uint32x2_t)(vshrn_n_u64(__s1_117, __p2_117)))); \
  __ret_117; \
})
#define vshrn_high_n_u16(__p0_118, __p1_118, __p2_118) __extension__ ({ \
  uint8x8_t __s0_118 = __p0_118; \
  uint16x8_t __s1_118 = __p1_118; \
  uint8x16_t __ret_118; \
  __ret_118 = (uint8x16_t)(vcombine_u8((uint8x8_t)(__s0_118), (uint8x8_t)(vshrn_n_u16(__s1_118, __p2_118)))); \
  __ret_118; \
})
#define vshrn_high_n_s32(__p0_119, __p1_119, __p2_119) __extension__ ({ \
  int16x4_t __s0_119 = __p0_119; \
  int32x4_t __s1_119 = __p1_119; \
  int16x8_t __ret_119; \
  __ret_119 = (int16x8_t)(vcombine_s16((int16x4_t)(__s0_119), (int16x4_t)(vshrn_n_s32(__s1_119, __p2_119)))); \
  __ret_119; \
})
#define vshrn_high_n_s64(__p0_120, __p1_120, __p2_120) __extension__ ({ \
  int32x2_t __s0_120 = __p0_120; \
  int64x2_t __s1_120 = __p1_120; \
  int32x4_t __ret_120; \
  __ret_120 = (int32x4_t)(vcombine_s32((int32x2_t)(__s0_120), (int32x2_t)(vshrn_n_s64(__s1_120, __p2_120)))); \
  __ret_120; \
})
#define vshrn_high_n_s16(__p0_121, __p1_121, __p2_121) __extension__ ({ \
  int8x8_t __s0_121 = __p0_121; \
  int16x8_t __s1_121 = __p1_121; \
  int8x16_t __ret_121; \
  __ret_121 = (int8x16_t)(vcombine_s8((int8x8_t)(__s0_121), (int8x8_t)(vshrn_n_s16(__s1_121, __p2_121)))); \
  __ret_121; \
})
#define vslid_n_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64_t __s0 = __p0; \
  uint64_t __s1 = __p1; \
  uint64_t __ret; \
  __ret = (uint64_t) __builtin_neon_vslid_n_u64(__s0, __s1, __p2); \
  __ret; \
})
#define vslid_n_s64(__p0, __p1, __p2) __extension__ ({ \
  int64_t __s0 = __p0; \
  int64_t __s1 = __p1; \
  int64_t __ret; \
  __ret = (int64_t) __builtin_neon_vslid_n_s64(__s0, __s1, __p2); \
  __ret; \
})
#define vsli_n_p64(__p0, __p1, __p2) __extension__ ({ \
  poly64x1_t __s0 = __p0; \
  poly64x1_t __s1 = __p1; \
  poly64x1_t __ret; \
  __ret = (poly64x1_t) __builtin_neon_vsli_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 6); \
  __ret; \
})
#define vsliq_n_p64(__p0, __p1, __p2) __extension__ ({ \
  poly64x2_t __s0 = __p0; \
  poly64x2_t __s1 = __p1; \
  poly64x2_t __ret; \
  __ret = (poly64x2_t) __builtin_neon_vsliq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 38); \
  __ret; \
})
__ai uint8_t vsqaddb_u8(uint8_t __p0, uint8_t __p1) {
  uint8_t __ret;
  __ret = (uint8_t) __builtin_neon_vsqaddb_u8(__p0, __p1);
  return __ret;
}
__ai uint32_t vsqadds_u32(uint32_t __p0, uint32_t __p1) {
  uint32_t __ret;
  __ret = (uint32_t) __builtin_neon_vsqadds_u32(__p0, __p1);
  return __ret;
}
__ai uint64_t vsqaddd_u64(uint64_t __p0, uint64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vsqaddd_u64(__p0, __p1);
  return __ret;
}
__ai uint16_t vsqaddh_u16(uint16_t __p0, uint16_t __p1) {
  uint16_t __ret;
  __ret = (uint16_t) __builtin_neon_vsqaddh_u16(__p0, __p1);
  return __ret;
}
__ai uint8x16_t vsqaddq_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = (uint8x16_t) __builtin_neon_vsqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 48);
  return __ret;
}
__ai uint32x4_t vsqaddq_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t) __builtin_neon_vsqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 50);
  return __ret;
}
__ai uint64x2_t vsqaddq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vsqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
__ai uint16x8_t vsqaddq_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t) __builtin_neon_vsqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 49);
  return __ret;
}
__ai uint8x8_t vsqadd_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = (uint8x8_t) __builtin_neon_vsqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 16);
  return __ret;
}
__ai uint32x2_t vsqadd_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = (uint32x2_t) __builtin_neon_vsqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 18);
  return __ret;
}
__ai uint64x1_t vsqadd_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vsqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 19);
  return __ret;
}
__ai uint16x4_t vsqadd_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = (uint16x4_t) __builtin_neon_vsqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 17);
  return __ret;
}
__ai float64x2_t vsqrtq_f64(float64x2_t __p0) {
  float64x2_t __ret;
  __ret = (float64x2_t) __builtin_neon_vsqrtq_v((int8x16_t)__p0, 42);
  return __ret;
}
__ai float32x4_t vsqrtq_f32(float32x4_t __p0) {
  float32x4_t __ret;
  __ret = (float32x4_t) __builtin_neon_vsqrtq_v((int8x16_t)__p0, 41);
  return __ret;
}
__ai float64x1_t vsqrt_f64(float64x1_t __p0) {
  float64x1_t __ret;
  __ret = (float64x1_t) __builtin_neon_vsqrt_v((int8x8_t)__p0, 10);
  return __ret;
}
__ai float32x2_t vsqrt_f32(float32x2_t __p0) {
  float32x2_t __ret;
  __ret = (float32x2_t) __builtin_neon_vsqrt_v((int8x8_t)__p0, 9);
  return __ret;
}
#define vsrad_n_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64_t __s0 = __p0; \
  uint64_t __s1 = __p1; \
  uint64_t __ret; \
  __ret = (uint64_t) __builtin_neon_vsrad_n_u64(__s0, __s1, __p2); \
  __ret; \
})
#define vsrad_n_s64(__p0, __p1, __p2) __extension__ ({ \
  int64_t __s0 = __p0; \
  int64_t __s1 = __p1; \
  int64_t __ret; \
  __ret = (int64_t) __builtin_neon_vsrad_n_s64(__s0, __s1, __p2); \
  __ret; \
})
#define vsrid_n_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64_t __s0 = __p0; \
  uint64_t __s1 = __p1; \
  uint64_t __ret; \
  __ret = (uint64_t) __builtin_neon_vsrid_n_u64(__s0, __s1, __p2); \
  __ret; \
})
#define vsrid_n_s64(__p0, __p1, __p2) __extension__ ({ \
  int64_t __s0 = __p0; \
  int64_t __s1 = __p1; \
  int64_t __ret; \
  __ret = (int64_t) __builtin_neon_vsrid_n_s64(__s0, __s1, __p2); \
  __ret; \
})
#define vsri_n_p64(__p0, __p1, __p2) __extension__ ({ \
  poly64x1_t __s0 = __p0; \
  poly64x1_t __s1 = __p1; \
  poly64x1_t __ret; \
  __ret = (poly64x1_t) __builtin_neon_vsri_n_v((int8x8_t)__s0, (int8x8_t)__s1, __p2, 6); \
  __ret; \
})
#define vsriq_n_p64(__p0, __p1, __p2) __extension__ ({ \
  poly64x2_t __s0 = __p0; \
  poly64x2_t __s1 = __p1; \
  poly64x2_t __ret; \
  __ret = (poly64x2_t) __builtin_neon_vsriq_n_v((int8x16_t)__s0, (int8x16_t)__s1, __p2, 38); \
  __ret; \
})
#define vst1_p64(__p0, __p1) __extension__ ({ \
  poly64x1_t __s1 = __p1; \
  __builtin_neon_vst1_v(__p0, (int8x8_t)__s1, 6); \
})
#define vst1q_p64(__p0, __p1) __extension__ ({ \
  poly64x2_t __s1 = __p1; \
  __builtin_neon_vst1q_v(__p0, (int8x16_t)__s1, 38); \
})
#define vst1q_f64(__p0, __p1) __extension__ ({ \
  float64x2_t __s1 = __p1; \
  __builtin_neon_vst1q_v(__p0, (int8x16_t)__s1, 42); \
})
#define vst1_f64(__p0, __p1) __extension__ ({ \
  float64x1_t __s1 = __p1; \
  __builtin_neon_vst1_v(__p0, (int8x8_t)__s1, 10); \
})
#define vst1_lane_p64(__p0, __p1, __p2) __extension__ ({ \
  poly64x1_t __s1 = __p1; \
  __builtin_neon_vst1_lane_v(__p0, (int8x8_t)__s1, __p2, 6); \
})
#define vst1q_lane_p64(__p0, __p1, __p2) __extension__ ({ \
  poly64x2_t __s1 = __p1; \
  __builtin_neon_vst1q_lane_v(__p0, (int8x16_t)__s1, __p2, 38); \
})
#define vst1q_lane_f64(__p0, __p1, __p2) __extension__ ({ \
  float64x2_t __s1 = __p1; \
  __builtin_neon_vst1q_lane_v(__p0, (int8x16_t)__s1, __p2, 42); \
})
#define vst1_lane_f64(__p0, __p1, __p2) __extension__ ({ \
  float64x1_t __s1 = __p1; \
  __builtin_neon_vst1_lane_v(__p0, (int8x8_t)__s1, __p2, 10); \
})
#define vst1_p8_x2(__p0, __p1) __extension__ ({ \
  poly8x8x2_t __s1 = __p1; \
  __builtin_neon_vst1_x2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 4); \
})
#define vst1_p64_x2(__p0, __p1) __extension__ ({ \
  poly64x1x2_t __s1 = __p1; \
  __builtin_neon_vst1_x2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 6); \
})
#define vst1_p16_x2(__p0, __p1) __extension__ ({ \
  poly16x4x2_t __s1 = __p1; \
  __builtin_neon_vst1_x2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 5); \
})
#define vst1q_p8_x2(__p0, __p1) __extension__ ({ \
  poly8x16x2_t __s1 = __p1; \
  __builtin_neon_vst1q_x2_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 36); \
})
#define vst1q_p64_x2(__p0, __p1) __extension__ ({ \
  poly64x2x2_t __s1 = __p1; \
  __builtin_neon_vst1q_x2_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 38); \
})
#define vst1q_p16_x2(__p0, __p1) __extension__ ({ \
  poly16x8x2_t __s1 = __p1; \
  __builtin_neon_vst1q_x2_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 37); \
})
#define vst1q_u8_x2(__p0, __p1) __extension__ ({ \
  uint8x16x2_t __s1 = __p1; \
  __builtin_neon_vst1q_x2_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 48); \
})
#define vst1q_u32_x2(__p0, __p1) __extension__ ({ \
  uint32x4x2_t __s1 = __p1; \
  __builtin_neon_vst1q_x2_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 50); \
})
#define vst1q_u64_x2(__p0, __p1) __extension__ ({ \
  uint64x2x2_t __s1 = __p1; \
  __builtin_neon_vst1q_x2_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 51); \
})
#define vst1q_u16_x2(__p0, __p1) __extension__ ({ \
  uint16x8x2_t __s1 = __p1; \
  __builtin_neon_vst1q_x2_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 49); \
})
#define vst1q_s8_x2(__p0, __p1) __extension__ ({ \
  int8x16x2_t __s1 = __p1; \
  __builtin_neon_vst1q_x2_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 32); \
})
#define vst1q_f64_x2(__p0, __p1) __extension__ ({ \
  float64x2x2_t __s1 = __p1; \
  __builtin_neon_vst1q_x2_v(__p0, __s1.val[0], __s1.val[1], 42); \
})
#define vst1q_f32_x2(__p0, __p1) __extension__ ({ \
  float32x4x2_t __s1 = __p1; \
  __builtin_neon_vst1q_x2_v(__p0, __s1.val[0], __s1.val[1], 41); \
})
#define vst1q_f16_x2(__p0, __p1) __extension__ ({ \
  float16x8x2_t __s1 = __p1; \
  __builtin_neon_vst1q_x2_v(__p0, __s1.val[0], __s1.val[1], 40); \
})
#define vst1q_s32_x2(__p0, __p1) __extension__ ({ \
  int32x4x2_t __s1 = __p1; \
  __builtin_neon_vst1q_x2_v(__p0, __s1.val[0], __s1.val[1], 34); \
})
#define vst1q_s64_x2(__p0, __p1) __extension__ ({ \
  int64x2x2_t __s1 = __p1; \
  __builtin_neon_vst1q_x2_v(__p0, __s1.val[0], __s1.val[1], 35); \
})
#define vst1q_s16_x2(__p0, __p1) __extension__ ({ \
  int16x8x2_t __s1 = __p1; \
  __builtin_neon_vst1q_x2_v(__p0, __s1.val[0], __s1.val[1], 33); \
})
#define vst1_u8_x2(__p0, __p1) __extension__ ({ \
  uint8x8x2_t __s1 = __p1; \
  __builtin_neon_vst1_x2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 16); \
})
#define vst1_u32_x2(__p0, __p1) __extension__ ({ \
  uint32x2x2_t __s1 = __p1; \
  __builtin_neon_vst1_x2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 18); \
})
#define vst1_u64_x2(__p0, __p1) __extension__ ({ \
  uint64x1x2_t __s1 = __p1; \
  __builtin_neon_vst1_x2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 19); \
})
#define vst1_u16_x2(__p0, __p1) __extension__ ({ \
  uint16x4x2_t __s1 = __p1; \
  __builtin_neon_vst1_x2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 17); \
})
#define vst1_s8_x2(__p0, __p1) __extension__ ({ \
  int8x8x2_t __s1 = __p1; \
  __builtin_neon_vst1_x2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 0); \
})
#define vst1_f64_x2(__p0, __p1) __extension__ ({ \
  float64x1x2_t __s1 = __p1; \
  __builtin_neon_vst1_x2_v(__p0, __s1.val[0], __s1.val[1], 10); \
})
#define vst1_f32_x2(__p0, __p1) __extension__ ({ \
  float32x2x2_t __s1 = __p1; \
  __builtin_neon_vst1_x2_v(__p0, __s1.val[0], __s1.val[1], 9); \
})
#define vst1_f16_x2(__p0, __p1) __extension__ ({ \
  float16x4x2_t __s1 = __p1; \
  __builtin_neon_vst1_x2_v(__p0, __s1.val[0], __s1.val[1], 8); \
})
#define vst1_s32_x2(__p0, __p1) __extension__ ({ \
  int32x2x2_t __s1 = __p1; \
  __builtin_neon_vst1_x2_v(__p0, __s1.val[0], __s1.val[1], 2); \
})
#define vst1_s64_x2(__p0, __p1) __extension__ ({ \
  int64x1x2_t __s1 = __p1; \
  __builtin_neon_vst1_x2_v(__p0, __s1.val[0], __s1.val[1], 3); \
})
#define vst1_s16_x2(__p0, __p1) __extension__ ({ \
  int16x4x2_t __s1 = __p1; \
  __builtin_neon_vst1_x2_v(__p0, __s1.val[0], __s1.val[1], 1); \
})
#define vst1_p8_x3(__p0, __p1) __extension__ ({ \
  poly8x8x3_t __s1 = __p1; \
  __builtin_neon_vst1_x3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 4); \
})
#define vst1_p64_x3(__p0, __p1) __extension__ ({ \
  poly64x1x3_t __s1 = __p1; \
  __builtin_neon_vst1_x3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 6); \
})
#define vst1_p16_x3(__p0, __p1) __extension__ ({ \
  poly16x4x3_t __s1 = __p1; \
  __builtin_neon_vst1_x3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 5); \
})
#define vst1q_p8_x3(__p0, __p1) __extension__ ({ \
  poly8x16x3_t __s1 = __p1; \
  __builtin_neon_vst1q_x3_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 36); \
})
#define vst1q_p64_x3(__p0, __p1) __extension__ ({ \
  poly64x2x3_t __s1 = __p1; \
  __builtin_neon_vst1q_x3_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 38); \
})
#define vst1q_p16_x3(__p0, __p1) __extension__ ({ \
  poly16x8x3_t __s1 = __p1; \
  __builtin_neon_vst1q_x3_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 37); \
})
#define vst1q_u8_x3(__p0, __p1) __extension__ ({ \
  uint8x16x3_t __s1 = __p1; \
  __builtin_neon_vst1q_x3_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 48); \
})
#define vst1q_u32_x3(__p0, __p1) __extension__ ({ \
  uint32x4x3_t __s1 = __p1; \
  __builtin_neon_vst1q_x3_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 50); \
})
#define vst1q_u64_x3(__p0, __p1) __extension__ ({ \
  uint64x2x3_t __s1 = __p1; \
  __builtin_neon_vst1q_x3_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 51); \
})
#define vst1q_u16_x3(__p0, __p1) __extension__ ({ \
  uint16x8x3_t __s1 = __p1; \
  __builtin_neon_vst1q_x3_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 49); \
})
#define vst1q_s8_x3(__p0, __p1) __extension__ ({ \
  int8x16x3_t __s1 = __p1; \
  __builtin_neon_vst1q_x3_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 32); \
})
#define vst1q_f64_x3(__p0, __p1) __extension__ ({ \
  float64x2x3_t __s1 = __p1; \
  __builtin_neon_vst1q_x3_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], 42); \
})
#define vst1q_f32_x3(__p0, __p1) __extension__ ({ \
  float32x4x3_t __s1 = __p1; \
  __builtin_neon_vst1q_x3_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], 41); \
})
#define vst1q_f16_x3(__p0, __p1) __extension__ ({ \
  float16x8x3_t __s1 = __p1; \
  __builtin_neon_vst1q_x3_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], 40); \
})
#define vst1q_s32_x3(__p0, __p1) __extension__ ({ \
  int32x4x3_t __s1 = __p1; \
  __builtin_neon_vst1q_x3_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], 34); \
})
#define vst1q_s64_x3(__p0, __p1) __extension__ ({ \
  int64x2x3_t __s1 = __p1; \
  __builtin_neon_vst1q_x3_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], 35); \
})
#define vst1q_s16_x3(__p0, __p1) __extension__ ({ \
  int16x8x3_t __s1 = __p1; \
  __builtin_neon_vst1q_x3_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], 33); \
})
#define vst1_u8_x3(__p0, __p1) __extension__ ({ \
  uint8x8x3_t __s1 = __p1; \
  __builtin_neon_vst1_x3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 16); \
})
#define vst1_u32_x3(__p0, __p1) __extension__ ({ \
  uint32x2x3_t __s1 = __p1; \
  __builtin_neon_vst1_x3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 18); \
})
#define vst1_u64_x3(__p0, __p1) __extension__ ({ \
  uint64x1x3_t __s1 = __p1; \
  __builtin_neon_vst1_x3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 19); \
})
#define vst1_u16_x3(__p0, __p1) __extension__ ({ \
  uint16x4x3_t __s1 = __p1; \
  __builtin_neon_vst1_x3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 17); \
})
#define vst1_s8_x3(__p0, __p1) __extension__ ({ \
  int8x8x3_t __s1 = __p1; \
  __builtin_neon_vst1_x3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 0); \
})
#define vst1_f64_x3(__p0, __p1) __extension__ ({ \
  float64x1x3_t __s1 = __p1; \
  __builtin_neon_vst1_x3_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], 10); \
})
#define vst1_f32_x3(__p0, __p1) __extension__ ({ \
  float32x2x3_t __s1 = __p1; \
  __builtin_neon_vst1_x3_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], 9); \
})
#define vst1_f16_x3(__p0, __p1) __extension__ ({ \
  float16x4x3_t __s1 = __p1; \
  __builtin_neon_vst1_x3_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], 8); \
})
#define vst1_s32_x3(__p0, __p1) __extension__ ({ \
  int32x2x3_t __s1 = __p1; \
  __builtin_neon_vst1_x3_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], 2); \
})
#define vst1_s64_x3(__p0, __p1) __extension__ ({ \
  int64x1x3_t __s1 = __p1; \
  __builtin_neon_vst1_x3_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], 3); \
})
#define vst1_s16_x3(__p0, __p1) __extension__ ({ \
  int16x4x3_t __s1 = __p1; \
  __builtin_neon_vst1_x3_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], 1); \
})
#define vst1_p8_x4(__p0, __p1) __extension__ ({ \
  poly8x8x4_t __s1 = __p1; \
  __builtin_neon_vst1_x4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 4); \
})
#define vst1_p64_x4(__p0, __p1) __extension__ ({ \
  poly64x1x4_t __s1 = __p1; \
  __builtin_neon_vst1_x4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 6); \
})
#define vst1_p16_x4(__p0, __p1) __extension__ ({ \
  poly16x4x4_t __s1 = __p1; \
  __builtin_neon_vst1_x4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 5); \
})
#define vst1q_p8_x4(__p0, __p1) __extension__ ({ \
  poly8x16x4_t __s1 = __p1; \
  __builtin_neon_vst1q_x4_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 36); \
})
#define vst1q_p64_x4(__p0, __p1) __extension__ ({ \
  poly64x2x4_t __s1 = __p1; \
  __builtin_neon_vst1q_x4_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 38); \
})
#define vst1q_p16_x4(__p0, __p1) __extension__ ({ \
  poly16x8x4_t __s1 = __p1; \
  __builtin_neon_vst1q_x4_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 37); \
})
#define vst1q_u8_x4(__p0, __p1) __extension__ ({ \
  uint8x16x4_t __s1 = __p1; \
  __builtin_neon_vst1q_x4_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 48); \
})
#define vst1q_u32_x4(__p0, __p1) __extension__ ({ \
  uint32x4x4_t __s1 = __p1; \
  __builtin_neon_vst1q_x4_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 50); \
})
#define vst1q_u64_x4(__p0, __p1) __extension__ ({ \
  uint64x2x4_t __s1 = __p1; \
  __builtin_neon_vst1q_x4_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 51); \
})
#define vst1q_u16_x4(__p0, __p1) __extension__ ({ \
  uint16x8x4_t __s1 = __p1; \
  __builtin_neon_vst1q_x4_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 49); \
})
#define vst1q_s8_x4(__p0, __p1) __extension__ ({ \
  int8x16x4_t __s1 = __p1; \
  __builtin_neon_vst1q_x4_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 32); \
})
#define vst1q_f64_x4(__p0, __p1) __extension__ ({ \
  float64x2x4_t __s1 = __p1; \
  __builtin_neon_vst1q_x4_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], 42); \
})
#define vst1q_f32_x4(__p0, __p1) __extension__ ({ \
  float32x4x4_t __s1 = __p1; \
  __builtin_neon_vst1q_x4_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], 41); \
})
#define vst1q_f16_x4(__p0, __p1) __extension__ ({ \
  float16x8x4_t __s1 = __p1; \
  __builtin_neon_vst1q_x4_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], 40); \
})
#define vst1q_s32_x4(__p0, __p1) __extension__ ({ \
  int32x4x4_t __s1 = __p1; \
  __builtin_neon_vst1q_x4_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], 34); \
})
#define vst1q_s64_x4(__p0, __p1) __extension__ ({ \
  int64x2x4_t __s1 = __p1; \
  __builtin_neon_vst1q_x4_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], 35); \
})
#define vst1q_s16_x4(__p0, __p1) __extension__ ({ \
  int16x8x4_t __s1 = __p1; \
  __builtin_neon_vst1q_x4_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], 33); \
})
#define vst1_u8_x4(__p0, __p1) __extension__ ({ \
  uint8x8x4_t __s1 = __p1; \
  __builtin_neon_vst1_x4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 16); \
})
#define vst1_u32_x4(__p0, __p1) __extension__ ({ \
  uint32x2x4_t __s1 = __p1; \
  __builtin_neon_vst1_x4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 18); \
})
#define vst1_u64_x4(__p0, __p1) __extension__ ({ \
  uint64x1x4_t __s1 = __p1; \
  __builtin_neon_vst1_x4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 19); \
})
#define vst1_u16_x4(__p0, __p1) __extension__ ({ \
  uint16x4x4_t __s1 = __p1; \
  __builtin_neon_vst1_x4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 17); \
})
#define vst1_s8_x4(__p0, __p1) __extension__ ({ \
  int8x8x4_t __s1 = __p1; \
  __builtin_neon_vst1_x4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 0); \
})
#define vst1_f64_x4(__p0, __p1) __extension__ ({ \
  float64x1x4_t __s1 = __p1; \
  __builtin_neon_vst1_x4_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], 10); \
})
#define vst1_f32_x4(__p0, __p1) __extension__ ({ \
  float32x2x4_t __s1 = __p1; \
  __builtin_neon_vst1_x4_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], 9); \
})
#define vst1_f16_x4(__p0, __p1) __extension__ ({ \
  float16x4x4_t __s1 = __p1; \
  __builtin_neon_vst1_x4_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], 8); \
})
#define vst1_s32_x4(__p0, __p1) __extension__ ({ \
  int32x2x4_t __s1 = __p1; \
  __builtin_neon_vst1_x4_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], 2); \
})
#define vst1_s64_x4(__p0, __p1) __extension__ ({ \
  int64x1x4_t __s1 = __p1; \
  __builtin_neon_vst1_x4_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], 3); \
})
#define vst1_s16_x4(__p0, __p1) __extension__ ({ \
  int16x4x4_t __s1 = __p1; \
  __builtin_neon_vst1_x4_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], 1); \
})
#define vst2_p64(__p0, __p1) __extension__ ({ \
  poly64x1x2_t __s1 = __p1; \
  __builtin_neon_vst2_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], 6); \
})
#define vst2q_p64(__p0, __p1) __extension__ ({ \
  poly64x2x2_t __s1 = __p1; \
  __builtin_neon_vst2q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 38); \
})
#define vst2q_u64(__p0, __p1) __extension__ ({ \
  uint64x2x2_t __s1 = __p1; \
  __builtin_neon_vst2q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], 51); \
})
#define vst2q_f64(__p0, __p1) __extension__ ({ \
  float64x2x2_t __s1 = __p1; \
  __builtin_neon_vst2q_v(__p0, __s1.val[0], __s1.val[1], 42); \
})
#define vst2q_s64(__p0, __p1) __extension__ ({ \
  int64x2x2_t __s1 = __p1; \
  __builtin_neon_vst2q_v(__p0, __s1.val[0], __s1.val[1], 35); \
})
#define vst2_f64(__p0, __p1) __extension__ ({ \
  float64x1x2_t __s1 = __p1; \
  __builtin_neon_vst2_v(__p0, __s1.val[0], __s1.val[1], 10); \
})
#define vst2_lane_p64(__p0, __p1, __p2) __extension__ ({ \
  poly64x1x2_t __s1 = __p1; \
  __builtin_neon_vst2_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 6); \
})
#define vst2q_lane_p8(__p0, __p1, __p2) __extension__ ({ \
  poly8x16x2_t __s1 = __p1; \
  __builtin_neon_vst2q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 36); \
})
#define vst2q_lane_p64(__p0, __p1, __p2) __extension__ ({ \
  poly64x2x2_t __s1 = __p1; \
  __builtin_neon_vst2q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 38); \
})
#define vst2q_lane_u8(__p0, __p1, __p2) __extension__ ({ \
  uint8x16x2_t __s1 = __p1; \
  __builtin_neon_vst2q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 48); \
})
#define vst2q_lane_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64x2x2_t __s1 = __p1; \
  __builtin_neon_vst2q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 51); \
})
#define vst2q_lane_s8(__p0, __p1, __p2) __extension__ ({ \
  int8x16x2_t __s1 = __p1; \
  __builtin_neon_vst2q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], __p2, 32); \
})
#define vst2q_lane_f64(__p0, __p1, __p2) __extension__ ({ \
  float64x2x2_t __s1 = __p1; \
  __builtin_neon_vst2q_lane_v(__p0, __s1.val[0], __s1.val[1], __p2, 42); \
})
#define vst2q_lane_s64(__p0, __p1, __p2) __extension__ ({ \
  int64x2x2_t __s1 = __p1; \
  __builtin_neon_vst2q_lane_v(__p0, __s1.val[0], __s1.val[1], __p2, 35); \
})
#define vst2_lane_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64x1x2_t __s1 = __p1; \
  __builtin_neon_vst2_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], __p2, 19); \
})
#define vst2_lane_f64(__p0, __p1, __p2) __extension__ ({ \
  float64x1x2_t __s1 = __p1; \
  __builtin_neon_vst2_lane_v(__p0, __s1.val[0], __s1.val[1], __p2, 10); \
})
#define vst2_lane_s64(__p0, __p1, __p2) __extension__ ({ \
  int64x1x2_t __s1 = __p1; \
  __builtin_neon_vst2_lane_v(__p0, __s1.val[0], __s1.val[1], __p2, 3); \
})
#define vst3_p64(__p0, __p1) __extension__ ({ \
  poly64x1x3_t __s1 = __p1; \
  __builtin_neon_vst3_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], 6); \
})
#define vst3q_p64(__p0, __p1) __extension__ ({ \
  poly64x2x3_t __s1 = __p1; \
  __builtin_neon_vst3q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 38); \
})
#define vst3q_u64(__p0, __p1) __extension__ ({ \
  uint64x2x3_t __s1 = __p1; \
  __builtin_neon_vst3q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], 51); \
})
#define vst3q_f64(__p0, __p1) __extension__ ({ \
  float64x2x3_t __s1 = __p1; \
  __builtin_neon_vst3q_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], 42); \
})
#define vst3q_s64(__p0, __p1) __extension__ ({ \
  int64x2x3_t __s1 = __p1; \
  __builtin_neon_vst3q_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], 35); \
})
#define vst3_f64(__p0, __p1) __extension__ ({ \
  float64x1x3_t __s1 = __p1; \
  __builtin_neon_vst3_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], 10); \
})
#define vst3_lane_p64(__p0, __p1, __p2) __extension__ ({ \
  poly64x1x3_t __s1 = __p1; \
  __builtin_neon_vst3_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 6); \
})
#define vst3q_lane_p8(__p0, __p1, __p2) __extension__ ({ \
  poly8x16x3_t __s1 = __p1; \
  __builtin_neon_vst3q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 36); \
})
#define vst3q_lane_p64(__p0, __p1, __p2) __extension__ ({ \
  poly64x2x3_t __s1 = __p1; \
  __builtin_neon_vst3q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 38); \
})
#define vst3q_lane_u8(__p0, __p1, __p2) __extension__ ({ \
  uint8x16x3_t __s1 = __p1; \
  __builtin_neon_vst3q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 48); \
})
#define vst3q_lane_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64x2x3_t __s1 = __p1; \
  __builtin_neon_vst3q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 51); \
})
#define vst3q_lane_s8(__p0, __p1, __p2) __extension__ ({ \
  int8x16x3_t __s1 = __p1; \
  __builtin_neon_vst3q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], __p2, 32); \
})
#define vst3q_lane_f64(__p0, __p1, __p2) __extension__ ({ \
  float64x2x3_t __s1 = __p1; \
  __builtin_neon_vst3q_lane_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __p2, 42); \
})
#define vst3q_lane_s64(__p0, __p1, __p2) __extension__ ({ \
  int64x2x3_t __s1 = __p1; \
  __builtin_neon_vst3q_lane_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __p2, 35); \
})
#define vst3_lane_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64x1x3_t __s1 = __p1; \
  __builtin_neon_vst3_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], __p2, 19); \
})
#define vst3_lane_f64(__p0, __p1, __p2) __extension__ ({ \
  float64x1x3_t __s1 = __p1; \
  __builtin_neon_vst3_lane_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __p2, 10); \
})
#define vst3_lane_s64(__p0, __p1, __p2) __extension__ ({ \
  int64x1x3_t __s1 = __p1; \
  __builtin_neon_vst3_lane_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __p2, 3); \
})
#define vst4_p64(__p0, __p1) __extension__ ({ \
  poly64x1x4_t __s1 = __p1; \
  __builtin_neon_vst4_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], 6); \
})
#define vst4q_p64(__p0, __p1) __extension__ ({ \
  poly64x2x4_t __s1 = __p1; \
  __builtin_neon_vst4q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 38); \
})
#define vst4q_u64(__p0, __p1) __extension__ ({ \
  uint64x2x4_t __s1 = __p1; \
  __builtin_neon_vst4q_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], 51); \
})
#define vst4q_f64(__p0, __p1) __extension__ ({ \
  float64x2x4_t __s1 = __p1; \
  __builtin_neon_vst4q_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], 42); \
})
#define vst4q_s64(__p0, __p1) __extension__ ({ \
  int64x2x4_t __s1 = __p1; \
  __builtin_neon_vst4q_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], 35); \
})
#define vst4_f64(__p0, __p1) __extension__ ({ \
  float64x1x4_t __s1 = __p1; \
  __builtin_neon_vst4_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], 10); \
})
#define vst4_lane_p64(__p0, __p1, __p2) __extension__ ({ \
  poly64x1x4_t __s1 = __p1; \
  __builtin_neon_vst4_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 6); \
})
#define vst4q_lane_p8(__p0, __p1, __p2) __extension__ ({ \
  poly8x16x4_t __s1 = __p1; \
  __builtin_neon_vst4q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 36); \
})
#define vst4q_lane_p64(__p0, __p1, __p2) __extension__ ({ \
  poly64x2x4_t __s1 = __p1; \
  __builtin_neon_vst4q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 38); \
})
#define vst4q_lane_u8(__p0, __p1, __p2) __extension__ ({ \
  uint8x16x4_t __s1 = __p1; \
  __builtin_neon_vst4q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 48); \
})
#define vst4q_lane_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64x2x4_t __s1 = __p1; \
  __builtin_neon_vst4q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 51); \
})
#define vst4q_lane_s8(__p0, __p1, __p2) __extension__ ({ \
  int8x16x4_t __s1 = __p1; \
  __builtin_neon_vst4q_lane_v(__p0, (int8x16_t)__s1.val[0], (int8x16_t)__s1.val[1], (int8x16_t)__s1.val[2], (int8x16_t)__s1.val[3], __p2, 32); \
})
#define vst4q_lane_f64(__p0, __p1, __p2) __extension__ ({ \
  float64x2x4_t __s1 = __p1; \
  __builtin_neon_vst4q_lane_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], __p2, 42); \
})
#define vst4q_lane_s64(__p0, __p1, __p2) __extension__ ({ \
  int64x2x4_t __s1 = __p1; \
  __builtin_neon_vst4q_lane_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], __p2, 35); \
})
#define vst4_lane_u64(__p0, __p1, __p2) __extension__ ({ \
  uint64x1x4_t __s1 = __p1; \
  __builtin_neon_vst4_lane_v(__p0, (int8x8_t)__s1.val[0], (int8x8_t)__s1.val[1], (int8x8_t)__s1.val[2], (int8x8_t)__s1.val[3], __p2, 19); \
})
#define vst4_lane_f64(__p0, __p1, __p2) __extension__ ({ \
  float64x1x4_t __s1 = __p1; \
  __builtin_neon_vst4_lane_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], __p2, 10); \
})
#define vst4_lane_s64(__p0, __p1, __p2) __extension__ ({ \
  int64x1x4_t __s1 = __p1; \
  __builtin_neon_vst4_lane_v(__p0, __s1.val[0], __s1.val[1], __s1.val[2], __s1.val[3], __p2, 3); \
})
#define vstrq_p128(__p0, __p1) __extension__ ({ \
  poly128_t __s1 = __p1; \
  __builtin_neon_vstrq_p128(__p0, __s1); \
})
__ai uint64_t vsubd_u64(uint64_t __p0, uint64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vsubd_u64(__p0, __p1);
  return __ret;
}
__ai int64_t vsubd_s64(int64_t __p0, int64_t __p1) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vsubd_s64(__p0, __p1);
  return __ret;
}
__ai float64x2_t vsubq_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
__ai float64x1_t vsub_f64(float64x1_t __p0, float64x1_t __p1) {
  float64x1_t __ret;
  __ret = __p0 - __p1;
  return __ret;
}
__ai uint16x8_t vsubhn_high_u32(uint16x4_t __p0, uint32x4_t __p1, uint32x4_t __p2) {
  uint16x8_t __ret;
  __ret = vcombine_u16(__p0, vsubhn_u32(__p1, __p2));
  return __ret;
}
__ai uint32x4_t vsubhn_high_u64(uint32x2_t __p0, uint64x2_t __p1, uint64x2_t __p2) {
  uint32x4_t __ret;
  __ret = vcombine_u32(__p0, vsubhn_u64(__p1, __p2));
  return __ret;
}
__ai uint8x16_t vsubhn_high_u16(uint8x8_t __p0, uint16x8_t __p1, uint16x8_t __p2) {
  uint8x16_t __ret;
  __ret = vcombine_u8(__p0, vsubhn_u16(__p1, __p2));
  return __ret;
}
__ai int16x8_t vsubhn_high_s32(int16x4_t __p0, int32x4_t __p1, int32x4_t __p2) {
  int16x8_t __ret;
  __ret = vcombine_s16(__p0, vsubhn_s32(__p1, __p2));
  return __ret;
}
__ai int32x4_t vsubhn_high_s64(int32x2_t __p0, int64x2_t __p1, int64x2_t __p2) {
  int32x4_t __ret;
  __ret = vcombine_s32(__p0, vsubhn_s64(__p1, __p2));
  return __ret;
}
__ai int8x16_t vsubhn_high_s16(int8x8_t __p0, int16x8_t __p1, int16x8_t __p2) {
  int8x16_t __ret;
  __ret = vcombine_s8(__p0, vsubhn_s16(__p1, __p2));
  return __ret;
}
__ai uint16x8_t vsubl_high_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint16x8_t __ret;
  __ret = vmovl_high_u8(__p0) - vmovl_high_u8(__p1);
  return __ret;
}
__ai uint64x2_t vsubl_high_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint64x2_t __ret;
  __ret = vmovl_high_u32(__p0) - vmovl_high_u32(__p1);
  return __ret;
}
__ai uint32x4_t vsubl_high_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint32x4_t __ret;
  __ret = vmovl_high_u16(__p0) - vmovl_high_u16(__p1);
  return __ret;
}
__ai int16x8_t vsubl_high_s8(int8x16_t __p0, int8x16_t __p1) {
  int16x8_t __ret;
  __ret = vmovl_high_s8(__p0) - vmovl_high_s8(__p1);
  return __ret;
}
__ai int64x2_t vsubl_high_s32(int32x4_t __p0, int32x4_t __p1) {
  int64x2_t __ret;
  __ret = vmovl_high_s32(__p0) - vmovl_high_s32(__p1);
  return __ret;
}
__ai int32x4_t vsubl_high_s16(int16x8_t __p0, int16x8_t __p1) {
  int32x4_t __ret;
  __ret = vmovl_high_s16(__p0) - vmovl_high_s16(__p1);
  return __ret;
}
__ai uint16x8_t vsubw_high_u8(uint16x8_t __p0, uint8x16_t __p1) {
  uint16x8_t __ret;
  __ret = __p0 - vmovl_high_u8(__p1);
  return __ret;
}
__ai uint64x2_t vsubw_high_u32(uint64x2_t __p0, uint32x4_t __p1) {
  uint64x2_t __ret;
  __ret = __p0 - vmovl_high_u32(__p1);
  return __ret;
}
__ai uint32x4_t vsubw_high_u16(uint32x4_t __p0, uint16x8_t __p1) {
  uint32x4_t __ret;
  __ret = __p0 - vmovl_high_u16(__p1);
  return __ret;
}
__ai int16x8_t vsubw_high_s8(int16x8_t __p0, int8x16_t __p1) {
  int16x8_t __ret;
  __ret = __p0 - vmovl_high_s8(__p1);
  return __ret;
}
__ai int64x2_t vsubw_high_s32(int64x2_t __p0, int32x4_t __p1) {
  int64x2_t __ret;
  __ret = __p0 - vmovl_high_s32(__p1);
  return __ret;
}
__ai int32x4_t vsubw_high_s16(int32x4_t __p0, int16x8_t __p1) {
  int32x4_t __ret;
  __ret = __p0 - vmovl_high_s16(__p1);
  return __ret;
}
__ai poly8x8_t vtrn1_p8(poly8x8_t __p0, poly8x8_t __p1) {
  poly8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 8, 2, 10, 4, 12, 6, 14);
  return __ret;
}
__ai poly16x4_t vtrn1_p16(poly16x4_t __p0, poly16x4_t __p1) {
  poly16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 4, 2, 6);
  return __ret;
}
__ai poly8x16_t vtrn1q_p8(poly8x16_t __p0, poly8x16_t __p1) {
  poly8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 16, 2, 18, 4, 20, 6, 22, 8, 24, 10, 26, 12, 28, 14, 30);
  return __ret;
}
__ai poly64x2_t vtrn1q_p64(poly64x2_t __p0, poly64x2_t __p1) {
  poly64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
__ai poly16x8_t vtrn1q_p16(poly16x8_t __p0, poly16x8_t __p1) {
  poly16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 8, 2, 10, 4, 12, 6, 14);
  return __ret;
}
__ai uint8x16_t vtrn1q_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 16, 2, 18, 4, 20, 6, 22, 8, 24, 10, 26, 12, 28, 14, 30);
  return __ret;
}
__ai uint32x4_t vtrn1q_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 4, 2, 6);
  return __ret;
}
__ai uint64x2_t vtrn1q_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
__ai uint16x8_t vtrn1q_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 8, 2, 10, 4, 12, 6, 14);
  return __ret;
}
__ai int8x16_t vtrn1q_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 16, 2, 18, 4, 20, 6, 22, 8, 24, 10, 26, 12, 28, 14, 30);
  return __ret;
}
__ai float64x2_t vtrn1q_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
__ai float32x4_t vtrn1q_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 4, 2, 6);
  return __ret;
}
__ai int32x4_t vtrn1q_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 4, 2, 6);
  return __ret;
}
__ai int64x2_t vtrn1q_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
__ai int16x8_t vtrn1q_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 8, 2, 10, 4, 12, 6, 14);
  return __ret;
}
__ai uint8x8_t vtrn1_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 8, 2, 10, 4, 12, 6, 14);
  return __ret;
}
__ai uint32x2_t vtrn1_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
__ai uint16x4_t vtrn1_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 4, 2, 6);
  return __ret;
}
__ai int8x8_t vtrn1_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 8, 2, 10, 4, 12, 6, 14);
  return __ret;
}
__ai float32x2_t vtrn1_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
__ai int32x2_t vtrn1_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
__ai int16x4_t vtrn1_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 4, 2, 6);
  return __ret;
}
__ai poly8x8_t vtrn2_p8(poly8x8_t __p0, poly8x8_t __p1) {
  poly8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 9, 3, 11, 5, 13, 7, 15);
  return __ret;
}
__ai poly16x4_t vtrn2_p16(poly16x4_t __p0, poly16x4_t __p1) {
  poly16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 5, 3, 7);
  return __ret;
}
__ai poly8x16_t vtrn2q_p8(poly8x16_t __p0, poly8x16_t __p1) {
  poly8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 17, 3, 19, 5, 21, 7, 23, 9, 25, 11, 27, 13, 29, 15, 31);
  return __ret;
}
__ai poly64x2_t vtrn2q_p64(poly64x2_t __p0, poly64x2_t __p1) {
  poly64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
__ai poly16x8_t vtrn2q_p16(poly16x8_t __p0, poly16x8_t __p1) {
  poly16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 9, 3, 11, 5, 13, 7, 15);
  return __ret;
}
__ai uint8x16_t vtrn2q_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 17, 3, 19, 5, 21, 7, 23, 9, 25, 11, 27, 13, 29, 15, 31);
  return __ret;
}
__ai uint32x4_t vtrn2q_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 5, 3, 7);
  return __ret;
}
__ai uint64x2_t vtrn2q_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
__ai uint16x8_t vtrn2q_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 9, 3, 11, 5, 13, 7, 15);
  return __ret;
}
__ai int8x16_t vtrn2q_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 17, 3, 19, 5, 21, 7, 23, 9, 25, 11, 27, 13, 29, 15, 31);
  return __ret;
}
__ai float64x2_t vtrn2q_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
__ai float32x4_t vtrn2q_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 5, 3, 7);
  return __ret;
}
__ai int32x4_t vtrn2q_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 5, 3, 7);
  return __ret;
}
__ai int64x2_t vtrn2q_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
__ai int16x8_t vtrn2q_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 9, 3, 11, 5, 13, 7, 15);
  return __ret;
}
__ai uint8x8_t vtrn2_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 9, 3, 11, 5, 13, 7, 15);
  return __ret;
}
__ai uint32x2_t vtrn2_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
__ai uint16x4_t vtrn2_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 5, 3, 7);
  return __ret;
}
__ai int8x8_t vtrn2_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 9, 3, 11, 5, 13, 7, 15);
  return __ret;
}
__ai float32x2_t vtrn2_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
__ai int32x2_t vtrn2_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
__ai int16x4_t vtrn2_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 5, 3, 7);
  return __ret;
}
__ai uint64x1_t vtst_p64(poly64x1_t __p0, poly64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vtst_v((int8x8_t)__p0, (int8x8_t)__p1, 19);
  return __ret;
}
__ai uint64x2_t vtstq_p64(poly64x2_t __p0, poly64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vtstq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
__ai uint64x2_t vtstq_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vtstq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
__ai uint64x2_t vtstq_s64(int64x2_t __p0, int64x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t) __builtin_neon_vtstq_v((int8x16_t)__p0, (int8x16_t)__p1, 51);
  return __ret;
}
__ai uint64x1_t vtst_u64(uint64x1_t __p0, uint64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vtst_v((int8x8_t)__p0, (int8x8_t)__p1, 19);
  return __ret;
}
__ai uint64x1_t vtst_s64(int64x1_t __p0, int64x1_t __p1) {
  uint64x1_t __ret;
  __ret = (uint64x1_t) __builtin_neon_vtst_v((int8x8_t)__p0, (int8x8_t)__p1, 19);
  return __ret;
}
__ai uint64_t vtstd_u64(uint64_t __p0, uint64_t __p1) {
  uint64_t __ret;
  __ret = (uint64_t) __builtin_neon_vtstd_u64(__p0, __p1);
  return __ret;
}
__ai int64_t vtstd_s64(int64_t __p0, int64_t __p1) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vtstd_s64(__p0, __p1);
  return __ret;
}
__ai int8_t vuqaddb_s8(int8_t __p0, int8_t __p1) {
  int8_t __ret;
  __ret = (int8_t) __builtin_neon_vuqaddb_s8(__p0, __p1);
  return __ret;
}
__ai int32_t vuqadds_s32(int32_t __p0, int32_t __p1) {
  int32_t __ret;
  __ret = (int32_t) __builtin_neon_vuqadds_s32(__p0, __p1);
  return __ret;
}
__ai int64_t vuqaddd_s64(int64_t __p0, int64_t __p1) {
  int64_t __ret;
  __ret = (int64_t) __builtin_neon_vuqaddd_s64(__p0, __p1);
  return __ret;
}
__ai int16_t vuqaddh_s16(int16_t __p0, int16_t __p1) {
  int16_t __ret;
  __ret = (int16_t) __builtin_neon_vuqaddh_s16(__p0, __p1);
  return __ret;
}
__ai int8x16_t vuqaddq_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = (int8x16_t) __builtin_neon_vuqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 32);
  return __ret;
}
__ai int32x4_t vuqaddq_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t) __builtin_neon_vuqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 34);
  return __ret;
}
__ai int64x2_t vuqaddq_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = (int64x2_t) __builtin_neon_vuqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 35);
  return __ret;
}
__ai int16x8_t vuqaddq_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t) __builtin_neon_vuqaddq_v((int8x16_t)__p0, (int8x16_t)__p1, 33);
  return __ret;
}
__ai int8x8_t vuqadd_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = (int8x8_t) __builtin_neon_vuqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 0);
  return __ret;
}
__ai int32x2_t vuqadd_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = (int32x2_t) __builtin_neon_vuqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 2);
  return __ret;
}
__ai int64x1_t vuqadd_s64(int64x1_t __p0, int64x1_t __p1) {
  int64x1_t __ret;
  __ret = (int64x1_t) __builtin_neon_vuqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 3);
  return __ret;
}
__ai int16x4_t vuqadd_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = (int16x4_t) __builtin_neon_vuqadd_v((int8x8_t)__p0, (int8x8_t)__p1, 1);
  return __ret;
}
__ai poly8x8_t vuzp1_p8(poly8x8_t __p0, poly8x8_t __p1) {
  poly8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6, 8, 10, 12, 14);
  return __ret;
}
__ai poly16x4_t vuzp1_p16(poly16x4_t __p0, poly16x4_t __p1) {
  poly16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6);
  return __ret;
}
__ai poly8x16_t vuzp1q_p8(poly8x16_t __p0, poly8x16_t __p1) {
  poly8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30);
  return __ret;
}
__ai poly64x2_t vuzp1q_p64(poly64x2_t __p0, poly64x2_t __p1) {
  poly64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
__ai poly16x8_t vuzp1q_p16(poly16x8_t __p0, poly16x8_t __p1) {
  poly16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6, 8, 10, 12, 14);
  return __ret;
}
__ai uint8x16_t vuzp1q_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30);
  return __ret;
}
__ai uint32x4_t vuzp1q_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6);
  return __ret;
}
__ai uint64x2_t vuzp1q_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
__ai uint16x8_t vuzp1q_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6, 8, 10, 12, 14);
  return __ret;
}
__ai int8x16_t vuzp1q_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30);
  return __ret;
}
__ai float64x2_t vuzp1q_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
__ai float32x4_t vuzp1q_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6);
  return __ret;
}
__ai int32x4_t vuzp1q_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6);
  return __ret;
}
__ai int64x2_t vuzp1q_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
__ai int16x8_t vuzp1q_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6, 8, 10, 12, 14);
  return __ret;
}
__ai uint8x8_t vuzp1_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6, 8, 10, 12, 14);
  return __ret;
}
__ai uint32x2_t vuzp1_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
__ai uint16x4_t vuzp1_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6);
  return __ret;
}
__ai int8x8_t vuzp1_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6, 8, 10, 12, 14);
  return __ret;
}
__ai float32x2_t vuzp1_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
__ai int32x2_t vuzp1_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
__ai int16x4_t vuzp1_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2, 4, 6);
  return __ret;
}
__ai poly8x8_t vuzp2_p8(poly8x8_t __p0, poly8x8_t __p1) {
  poly8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7, 9, 11, 13, 15);
  return __ret;
}
__ai poly16x4_t vuzp2_p16(poly16x4_t __p0, poly16x4_t __p1) {
  poly16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7);
  return __ret;
}
__ai poly8x16_t vuzp2q_p8(poly8x16_t __p0, poly8x16_t __p1) {
  poly8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31);
  return __ret;
}
__ai poly64x2_t vuzp2q_p64(poly64x2_t __p0, poly64x2_t __p1) {
  poly64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
__ai poly16x8_t vuzp2q_p16(poly16x8_t __p0, poly16x8_t __p1) {
  poly16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7, 9, 11, 13, 15);
  return __ret;
}
__ai uint8x16_t vuzp2q_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31);
  return __ret;
}
__ai uint32x4_t vuzp2q_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7);
  return __ret;
}
__ai uint64x2_t vuzp2q_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
__ai uint16x8_t vuzp2q_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7, 9, 11, 13, 15);
  return __ret;
}
__ai int8x16_t vuzp2q_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31);
  return __ret;
}
__ai float64x2_t vuzp2q_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
__ai float32x4_t vuzp2q_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7);
  return __ret;
}
__ai int32x4_t vuzp2q_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7);
  return __ret;
}
__ai int64x2_t vuzp2q_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
__ai int16x8_t vuzp2q_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7, 9, 11, 13, 15);
  return __ret;
}
__ai uint8x8_t vuzp2_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7, 9, 11, 13, 15);
  return __ret;
}
__ai uint32x2_t vuzp2_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
__ai uint16x4_t vuzp2_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7);
  return __ret;
}
__ai int8x8_t vuzp2_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7, 9, 11, 13, 15);
  return __ret;
}
__ai float32x2_t vuzp2_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
__ai int32x2_t vuzp2_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
__ai int16x4_t vuzp2_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3, 5, 7);
  return __ret;
}
__ai poly8x8_t vzip1_p8(poly8x8_t __p0, poly8x8_t __p1) {
  poly8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 8, 1, 9, 2, 10, 3, 11);
  return __ret;
}
__ai poly16x4_t vzip1_p16(poly16x4_t __p0, poly16x4_t __p1) {
  poly16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 4, 1, 5);
  return __ret;
}
__ai poly8x16_t vzip1q_p8(poly8x16_t __p0, poly8x16_t __p1) {
  poly8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 16, 1, 17, 2, 18, 3, 19, 4, 20, 5, 21, 6, 22, 7, 23);
  return __ret;
}
__ai poly64x2_t vzip1q_p64(poly64x2_t __p0, poly64x2_t __p1) {
  poly64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
__ai poly16x8_t vzip1q_p16(poly16x8_t __p0, poly16x8_t __p1) {
  poly16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 8, 1, 9, 2, 10, 3, 11);
  return __ret;
}
__ai uint8x16_t vzip1q_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 16, 1, 17, 2, 18, 3, 19, 4, 20, 5, 21, 6, 22, 7, 23);
  return __ret;
}
__ai uint32x4_t vzip1q_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 4, 1, 5);
  return __ret;
}
__ai uint64x2_t vzip1q_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
__ai uint16x8_t vzip1q_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 8, 1, 9, 2, 10, 3, 11);
  return __ret;
}
__ai int8x16_t vzip1q_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 16, 1, 17, 2, 18, 3, 19, 4, 20, 5, 21, 6, 22, 7, 23);
  return __ret;
}
__ai float64x2_t vzip1q_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
__ai float32x4_t vzip1q_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 4, 1, 5);
  return __ret;
}
__ai int32x4_t vzip1q_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 4, 1, 5);
  return __ret;
}
__ai int64x2_t vzip1q_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
__ai int16x8_t vzip1q_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 8, 1, 9, 2, 10, 3, 11);
  return __ret;
}
__ai uint8x8_t vzip1_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 8, 1, 9, 2, 10, 3, 11);
  return __ret;
}
__ai uint32x2_t vzip1_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
__ai uint16x4_t vzip1_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 4, 1, 5);
  return __ret;
}
__ai int8x8_t vzip1_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 8, 1, 9, 2, 10, 3, 11);
  return __ret;
}
__ai float32x2_t vzip1_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
__ai int32x2_t vzip1_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 2);
  return __ret;
}
__ai int16x4_t vzip1_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 0, 4, 1, 5);
  return __ret;
}
__ai poly8x8_t vzip2_p8(poly8x8_t __p0, poly8x8_t __p1) {
  poly8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 4, 12, 5, 13, 6, 14, 7, 15);
  return __ret;
}
__ai poly16x4_t vzip2_p16(poly16x4_t __p0, poly16x4_t __p1) {
  poly16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 2, 6, 3, 7);
  return __ret;
}
__ai poly8x16_t vzip2q_p8(poly8x16_t __p0, poly8x16_t __p1) {
  poly8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 8, 24, 9, 25, 10, 26, 11, 27, 12, 28, 13, 29, 14, 30, 15, 31);
  return __ret;
}
__ai poly64x2_t vzip2q_p64(poly64x2_t __p0, poly64x2_t __p1) {
  poly64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
__ai poly16x8_t vzip2q_p16(poly16x8_t __p0, poly16x8_t __p1) {
  poly16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 4, 12, 5, 13, 6, 14, 7, 15);
  return __ret;
}
__ai uint8x16_t vzip2q_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 8, 24, 9, 25, 10, 26, 11, 27, 12, 28, 13, 29, 14, 30, 15, 31);
  return __ret;
}
__ai uint32x4_t vzip2q_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 2, 6, 3, 7);
  return __ret;
}
__ai uint64x2_t vzip2q_u64(uint64x2_t __p0, uint64x2_t __p1) {
  uint64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
__ai uint16x8_t vzip2q_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 4, 12, 5, 13, 6, 14, 7, 15);
  return __ret;
}
__ai int8x16_t vzip2q_s8(int8x16_t __p0, int8x16_t __p1) {
  int8x16_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 8, 24, 9, 25, 10, 26, 11, 27, 12, 28, 13, 29, 14, 30, 15, 31);
  return __ret;
}
__ai float64x2_t vzip2q_f64(float64x2_t __p0, float64x2_t __p1) {
  float64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
__ai float32x4_t vzip2q_f32(float32x4_t __p0, float32x4_t __p1) {
  float32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 2, 6, 3, 7);
  return __ret;
}
__ai int32x4_t vzip2q_s32(int32x4_t __p0, int32x4_t __p1) {
  int32x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 2, 6, 3, 7);
  return __ret;
}
__ai int64x2_t vzip2q_s64(int64x2_t __p0, int64x2_t __p1) {
  int64x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
__ai int16x8_t vzip2q_s16(int16x8_t __p0, int16x8_t __p1) {
  int16x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 4, 12, 5, 13, 6, 14, 7, 15);
  return __ret;
}
__ai uint8x8_t vzip2_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 4, 12, 5, 13, 6, 14, 7, 15);
  return __ret;
}
__ai uint32x2_t vzip2_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
__ai uint16x4_t vzip2_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 2, 6, 3, 7);
  return __ret;
}
__ai int8x8_t vzip2_s8(int8x8_t __p0, int8x8_t __p1) {
  int8x8_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 4, 12, 5, 13, 6, 14, 7, 15);
  return __ret;
}
__ai float32x2_t vzip2_f32(float32x2_t __p0, float32x2_t __p1) {
  float32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
__ai int32x2_t vzip2_s32(int32x2_t __p0, int32x2_t __p1) {
  int32x2_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 1, 3);
  return __ret;
}
__ai int16x4_t vzip2_s16(int16x4_t __p0, int16x4_t __p1) {
  int16x4_t __ret;
  __ret = __builtin_shufflevector(__p0, __p1, 2, 6, 3, 7);
  return __ret;
}
#endif
__ai uint8x16_t vabaq_u8(uint8x16_t __p0, uint8x16_t __p1, uint8x16_t __p2) {
  uint8x16_t __ret;
  __ret = __p0 + vabdq_u8(__p1, __p2);
  return __ret;
}
__ai uint32x4_t vabaq_u32(uint32x4_t __p0, uint32x4_t __p1, uint32x4_t __p2) {
  uint32x4_t __ret;
  __ret = __p0 + vabdq_u32(__p1, __p2);
  return __ret;
}
__ai uint16x8_t vabaq_u16(uint16x8_t __p0, uint16x8_t __p1, uint16x8_t __p2) {
  uint16x8_t __ret;
  __ret = __p0 + vabdq_u16(__p1, __p2);
  return __ret;
}
__ai int8x16_t vabaq_s8(int8x16_t __p0, int8x16_t __p1, int8x16_t __p2) {
  int8x16_t __ret;
  __ret = __p0 + vabdq_s8(__p1, __p2);
  return __ret;
}
__ai int32x4_t vabaq_s32(int32x4_t __p0, int32x4_t __p1, int32x4_t __p2) {
  int32x4_t __ret;
  __ret = __p0 + vabdq_s32(__p1, __p2);
  return __ret;
}
__ai int16x8_t vabaq_s16(int16x8_t __p0, int16x8_t __p1, int16x8_t __p2) {
  int16x8_t __ret;
  __ret = __p0 + vabdq_s16(__p1, __p2);
  return __ret;
}
__ai uint8x8_t vaba_u8(uint8x8_t __p0, uint8x8_t __p1, uint8x8_t __p2) {
  uint8x8_t __ret;
  __ret = __p0 + vabd_u8(__p1, __p2);
  return __ret;
}
__ai uint32x2_t vaba_u32(uint32x2_t __p0, uint32x2_t __p1, uint32x2_t __p2) {
  uint32x2_t __ret;
  __ret = __p0 + vabd_u32(__p1, __p2);
  return __ret;
}
__ai uint16x4_t vaba_u16(uint16x4_t __p0, uint16x4_t __p1, uint16x4_t __p2) {
  uint16x4_t __ret;
  __ret = __p0 + vabd_u16(__p1, __p2);
  return __ret;
}
__ai int8x8_t vaba_s8(int8x8_t __p0, int8x8_t __p1, int8x8_t __p2) {
  int8x8_t __ret;
  __ret = __p0 + vabd_s8(__p1, __p2);
  return __ret;
}
__ai int32x2_t vaba_s32(int32x2_t __p0, int32x2_t __p1, int32x2_t __p2) {
  int32x2_t __ret;
  __ret = __p0 + vabd_s32(__p1, __p2);
  return __ret;
}
__ai int16x4_t vaba_s16(int16x4_t __p0, int16x4_t __p1, int16x4_t __p2) {
  int16x4_t __ret;
  __ret = __p0 + vabd_s16(__p1, __p2);
  return __ret;
}
__ai uint16x8_t vabdl_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint16x8_t __ret;
  __ret = (uint16x8_t)(vmovl_u8((uint8x8_t)(vabd_u8(__p0, __p1))));
  return __ret;
}
__ai uint64x2_t vabdl_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint64x2_t __ret;
  __ret = (uint64x2_t)(vmovl_u32((uint32x2_t)(vabd_u32(__p0, __p1))));
  return __ret;
}
__ai uint32x4_t vabdl_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint32x4_t __ret;
  __ret = (uint32x4_t)(vmovl_u16((uint16x4_t)(vabd_u16(__p0, __p1))));
  return __ret;
}
__ai int16x8_t vabdl_s8(int8x8_t __p0, int8x8_t __p1) {
  int16x8_t __ret;
  __ret = (int16x8_t)(vmovl_u8((uint8x8_t)(vabd_s8(__p0, __p1))));
  return __ret;
}
__ai int64x2_t vabdl_s32(int32x2_t __p0, int32x2_t __p1) {
  int64x2_t __ret;
  __ret = (int64x2_t)(vmovl_u32((uint32x2_t)(vabd_s32(__p0, __p1))));
  return __ret;
}
__ai int32x4_t vabdl_s16(int16x4_t __p0, int16x4_t __p1) {
  int32x4_t __ret;
  __ret = (int32x4_t)(vmovl_u16((uint16x4_t)(vabd_s16(__p0, __p1))));
  return __ret;
}
__ai uint16x8_t vaddl_u8(uint8x8_t __p0, uint8x8_t __p1) {
  uint16x8_t __ret;
  __ret = vmovl_u8(__p0) + vmovl_u8(__p1);
  return __ret;
}
__ai uint64x2_t vaddl_u32(uint32x2_t __p0, uint32x2_t __p1) {
  uint64x2_t __ret;
  __ret = vmovl_u32(__p0) + vmovl_u32(__p1);
  return __ret;
}
__ai uint32x4_t vaddl_u16(uint16x4_t __p0, uint16x4_t __p1) {
  uint32x4_t __ret;
  __ret = vmovl_u16(__p0) + vmovl_u16(__p1);
  return __ret;
}
__ai int16x8_t vaddl_s8(int8x8_t __p0, int8x8_t __p1) {
  int16x8_t __ret;
  __ret = vmovl_s8(__p0) + vmovl_s8(__p1);
  return __ret;
}
__ai int64x2_t vaddl_s32(int32x2_t __p0, int32x2_t __p1) {
  int64x2_t __ret;
  __ret = vmovl_s32(__p0) + vmovl_s32(__p1);
  return __ret;
}
__ai int32x4_t vaddl_s16(int16x4_t __p0, int16x4_t __p1) {
  int32x4_t __ret;
  __ret = vmovl_s16(__p0) + vmovl_s16(__p1);
  return __ret;
}
__ai uint16x8_t vaddw_u8(uint16x8_t __p0, uint8x8_t __p1) {
  uint16x8_t __ret;
  __ret = __p0 + vmovl_u8(__p1);
  return __ret;
}
__ai uint64x2_t vaddw_u32(uint64x2_t __p0, uint32x2_t __p1) {
  uint64x2_t __ret;
  __ret = __p0 + vmovl_u32(__p1);
  return __ret;
}
__ai uint32x4_t vaddw_u16(uint32x4_t __p0, uint16x4_t __p1) {
  uint32x4_t __ret;
  __ret = __p0 + vmovl_u16(__p1);
  return __ret;
}
__ai int16x8_t vaddw_s8(int16x8_t __p0, int8x8_t __p1) {
  int16x8_t __ret;
  __ret = __p0 + vmovl_s8(__p1);
  return __ret;
}
__ai int64x2_t vaddw_s32(int64x2_t __p0, int32x2_t __p1) {
  int64x2_t __ret;
  __ret = __p0 + vmovl_s32(__p1);
  return __ret;
}
__ai int32x4_t vaddw_s16(int32x4_t __p0, int16x4_t __p1) {
  int32x4_t __ret;
  __ret = __p0 + vmovl_s16(__p1);
  return __ret;
}
__ai uint16x8_t vmlal_u8(uint16x8_t __p0, uint8x8_t __p1, uint8x8_t __p2) {
  uint16x8_t __ret;
  __ret = __p0 + vmull_u8(__p1, __p2);
  return __ret;
}
__ai uint64x2_t vmlal_u32(uint64x2_t __p0, uint32x2_t __p1, uint32x2_t __p2) {
  uint64x2_t __ret;
  __ret = __p0 + vmull_u32(__p1, __p2);
  return __ret;
}
__ai uint32x4_t vmlal_u16(uint32x4_t __p0, uint16x4_t __p1, uint16x4_t __p2) {
  uint32x4_t __ret;
  __ret = __p0 + vmull_u16(__p1, __p2);
  return __ret;
}
__ai int16x8_t vmlal_s8(int16x8_t __p0, int8x8_t __p1, int8x8_t __p2) {
  int16x8_t __ret;
  __ret = __p0 + vmull_s8(__p1, __p2);
  return __ret;
}
__ai int64x2_t vmlal_s32(int64x2_t __p0, int32x2_t __p1, int32x2_t __p2) {
  int64x2_t __ret;
  __ret = __p0 + vmull_s32(__p1, __p2);
  return __ret;
}
__ai int32x4_t vmlal_s16(int32x4_t __p0, int16x4_t __p1, int16x4_t __p2) {
  int32x4_t __ret;
  __ret = __p0 + vmull_s16(__p1, __p2);
  return __ret;
}
#define vmlal_lane_u32(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint64x2_t __s0 = __p0; \
  uint32x2_t __s1 = __p1; \
  uint32x2_t __s2 = __p2; \
  uint64x2_t __ret; \
  __ret = __s0 + vmull_u32(__s1, __builtin_shufflevector(__s2, __s2, __p3, __p3)); \
  __ret; \
})
#define vmlal_lane_u16(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint16x4_t __s1 = __p1; \
  uint16x4_t __s2 = __p2; \
  uint32x4_t __ret; \
  __ret = __s0 + vmull_u16(__s1, __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3)); \
  __ret; \
})
#define vmlal_lane_s32(__p0, __p1, __p2, __p3) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int32x2_t __s1 = __p1; \
  int32x2_t __s2 = __p2; \
  int64x2_t __ret; \
  __ret = __s0 + vmull_s32(__s1, __builtin_shufflevector(__s2, __s2, __p3, __p3)); \
  __ret; \
})
#define vmlal_lane_s16(__p0, __p1, __p2, __p3) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int16x4_t __s1 = __p1; \
  int16x4_t __s2 = __p2; \
  int32x4_t __ret; \
  __ret = __s0 + vmull_s16(__s1, __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3)); \
  __ret; \
})
__ai uint64x2_t vmlal_n_u32(uint64x2_t __p0, uint32x2_t __p1, uint32_t __p2) {
  uint64x2_t __ret;
  __ret = __p0 + vmull_u32(__p1, (uint32x2_t) {__p2, __p2});
  return __ret;
}
__ai uint32x4_t vmlal_n_u16(uint32x4_t __p0, uint16x4_t __p1, uint16_t __p2) {
  uint32x4_t __ret;
  __ret = __p0 + vmull_u16(__p1, (uint16x4_t) {__p2, __p2, __p2, __p2});
  return __ret;
}
__ai int64x2_t vmlal_n_s32(int64x2_t __p0, int32x2_t __p1, int32_t __p2) {
  int64x2_t __ret;
  __ret = __p0 + vmull_s32(__p1, (int32x2_t) {__p2, __p2});
  return __ret;
}
__ai int32x4_t vmlal_n_s16(int32x4_t __p0, int16x4_t __p1, int16_t __p2) {
  int32x4_t __ret;
  __ret = __p0 + vmull_s16(__p1, (int16x4_t) {__p2, __p2, __p2, __p2});
  return __ret;
}
__ai uint16x8_t vmlsl_u8(uint16x8_t __p0, uint8x8_t __p1, uint8x8_t __p2) {
  uint16x8_t __ret;
  __ret = __p0 - vmull_u8(__p1, __p2);
  return __ret;
}
__ai uint64x2_t vmlsl_u32(uint64x2_t __p0, uint32x2_t __p1, uint32x2_t __p2) {
  uint64x2_t __ret;
  __ret = __p0 - vmull_u32(__p1, __p2);
  return __ret;
}
__ai uint32x4_t vmlsl_u16(uint32x4_t __p0, uint16x4_t __p1, uint16x4_t __p2) {
  uint32x4_t __ret;
  __ret = __p0 - vmull_u16(__p1, __p2);
  return __ret;
}
__ai int16x8_t vmlsl_s8(int16x8_t __p0, int8x8_t __p1, int8x8_t __p2) {
  int16x8_t __ret;
  __ret = __p0 - vmull_s8(__p1, __p2);
  return __ret;
}
__ai int64x2_t vmlsl_s32(int64x2_t __p0, int32x2_t __p1, int32x2_t __p2) {
  int64x2_t __ret;
  __ret = __p0 - vmull_s32(__p1, __p2);
  return __ret;
}
__ai int32x4_t vmlsl_s16(int32x4_t __p0, int16x4_t __p1, int16x4_t __p2) {
  int32x4_t __ret;
  __ret = __p0 - vmull_s16(__p1, __p2);
  return __ret;
}
#define vmlsl_lane_u32(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint64x2_t __s0 = __p0; \
  uint32x2_t __s1 = __p1; \
  uint32x2_t __s2 = __p2; \
  uint64x2_t __ret; \
  __ret = __s0 - vmull_u32(__s1, __builtin_shufflevector(__s2, __s2, __p3, __p3)); \
  __ret; \
})
#define vmlsl_lane_u16(__p0, __p1, __p2, __p3) __extension__ ({ \
  uint32x4_t __s0 = __p0; \
  uint16x4_t __s1 = __p1; \
  uint16x4_t __s2 = __p2; \
  uint32x4_t __ret; \
  __ret = __s0 - vmull_u16(__s1, __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3)); \
  __ret; \
})
#define vmlsl_lane_s32(__p0, __p1, __p2, __p3) __extension__ ({ \
  int64x2_t __s0 = __p0; \
  int32x2_t __s1 = __p1; \
  int32x2_t __s2 = __p2; \
  int64x2_t __ret; \
  __ret = __s0 - vmull_s32(__s1, __builtin_shufflevector(__s2, __s2, __p3, __p3)); \
  __ret; \
})
#define vmlsl_lane_s16(__p0, __p1, __p2, __p3) __extension__ ({ \
  int32x4_t __s0 = __p0; \
  int16x4_t __s1 = __p1; \
  int16x4_t __s2 = __p2; \
  int32x4_t __ret; \
  __ret = __s0 - vmull_s16(__s1, __builtin_shufflevector(__s2, __s2, __p3, __p3, __p3, __p3)); \
  __ret; \
})
__ai uint64x2_t vmlsl_n_u32(uint64x2_t __p0, uint32x2_t __p1, uint32_t __p2) {
  uint64x2_t __ret;
  __ret = __p0 - vmull_u32(__p1, (uint32x2_t) {__p2, __p2});
  return __ret;
}
__ai uint32x4_t vmlsl_n_u16(uint32x4_t __p0, uint16x4_t __p1, uint16_t __p2) {
  uint32x4_t __ret;
  __ret = __p0 - vmull_u16(__p1, (uint16x4_t) {__p2, __p2, __p2, __p2});
  return __ret;
}
__ai int64x2_t vmlsl_n_s32(int64x2_t __p0, int32x2_t __p1, int32_t __p2) {
  int64x2_t __ret;
  __ret = __p0 - vmull_s32(__p1, (int32x2_t) {__p2, __p2});
  return __ret;
}
__ai int32x4_t vmlsl_n_s16(int32x4_t __p0, int16x4_t __p1, int16_t __p2) {
  int32x4_t __ret;
  __ret = __p0 - vmull_s16(__p1, (int16x4_t) {__p2, __p2, __p2, __p2});
  return __ret;
}
#if defined(__aarch64__)
__ai uint16x8_t vabdl_high_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint16x8_t __ret;
  __ret = vabdl_u8(vget_high_u8(__p0), vget_high_u8(__p1));
  return __ret;
}
__ai uint64x2_t vabdl_high_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint64x2_t __ret;
  __ret = vabdl_u32(vget_high_u32(__p0), vget_high_u32(__p1));
  return __ret;
}
__ai uint32x4_t vabdl_high_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint32x4_t __ret;
  __ret = vabdl_u16(vget_high_u16(__p0), vget_high_u16(__p1));
  return __ret;
}
__ai int16x8_t vabdl_high_s8(int8x16_t __p0, int8x16_t __p1) {
  int16x8_t __ret;
  __ret = vabdl_s8(vget_high_s8(__p0), vget_high_s8(__p1));
  return __ret;
}
__ai int64x2_t vabdl_high_s32(int32x4_t __p0, int32x4_t __p1) {
  int64x2_t __ret;
  __ret = vabdl_s32(vget_high_s32(__p0), vget_high_s32(__p1));
  return __ret;
}
__ai int32x4_t vabdl_high_s16(int16x8_t __p0, int16x8_t __p1) {
  int32x4_t __ret;
  __ret = vabdl_s16(vget_high_s16(__p0), vget_high_s16(__p1));
  return __ret;
}
__ai uint16x8_t vaddl_high_u8(uint8x16_t __p0, uint8x16_t __p1) {
  uint16x8_t __ret;
  __ret = vmovl_high_u8(__p0) + vmovl_high_u8(__p1);
  return __ret;
}
__ai uint64x2_t vaddl_high_u32(uint32x4_t __p0, uint32x4_t __p1) {
  uint64x2_t __ret;
  __ret = vmovl_high_u32(__p0) + vmovl_high_u32(__p1);
  return __ret;
}
__ai uint32x4_t vaddl_high_u16(uint16x8_t __p0, uint16x8_t __p1) {
  uint32x4_t __ret;
  __ret = vmovl_high_u16(__p0) + vmovl_high_u16(__p1);
  return __ret;
}
__ai int16x8_t vaddl_high_s8(int8x16_t __p0, int8x16_t __p1) {
  int16x8_t __ret;
  __ret = vmovl_high_s8(__p0) + vmovl_high_s8(__p1);
  return __ret;
}
__ai int64x2_t vaddl_high_s32(int32x4_t __p0, int32x4_t __p1) {
  int64x2_t __ret;
  __ret = vmovl_high_s32(__p0) + vmovl_high_s32(__p1);
  return __ret;
}
__ai int32x4_t vaddl_high_s16(int16x8_t __p0, int16x8_t __p1) {
  int32x4_t __ret;
  __ret = vmovl_high_s16(__p0) + vmovl_high_s16(__p1);
  return __ret;
}
__ai uint16x8_t vaddw_high_u8(uint16x8_t __p0, uint8x16_t __p1) {
  uint16x8_t __ret;
  __ret = __p0 + vmovl_high_u8(__p1);
  return __ret;
}
__ai uint64x2_t vaddw_high_u32(uint64x2_t __p0, uint32x4_t __p1) {
  uint64x2_t __ret;
  __ret = __p0 + vmovl_high_u32(__p1);
  return __ret;
}
__ai uint32x4_t vaddw_high_u16(uint32x4_t __p0, uint16x8_t __p1) {
  uint32x4_t __ret;
  __ret = __p0 + vmovl_high_u16(__p1);
  return __ret;
}
__ai int16x8_t vaddw_high_s8(int16x8_t __p0, int8x16_t __p1) {
  int16x8_t __ret;
  __ret = __p0 + vmovl_high_s8(__p1);
  return __ret;
}
__ai int64x2_t vaddw_high_s32(int64x2_t __p0, int32x4_t __p1) {
  int64x2_t __ret;
  __ret = __p0 + vmovl_high_s32(__p1);
  return __ret;
}
__ai int32x4_t vaddw_high_s16(int32x4_t __p0, int16x8_t __p1) {
  int32x4_t __ret;
  __ret = __p0 + vmovl_high_s16(__p1);
  return __ret;
}
#define vcopyq_lane_p64(__p0_122, __p1_122, __p2_122, __p3_122) __extension__ ({ \
  poly64x2_t __s0_122 = __p0_122; \
  poly64x1_t __s2_122 = __p2_122; \
  poly64x2_t __ret_122; \
  __ret_122 = vsetq_lane_p64(vget_lane_p64(__s2_122, __p3_122), __s0_122, __p1_122); \
  __ret_122; \
})
#define vcopyq_lane_f64(__p0_123, __p1_123, __p2_123, __p3_123) __extension__ ({ \
  float64x2_t __s0_123 = __p0_123; \
  float64x1_t __s2_123 = __p2_123; \
  float64x2_t __ret_123; \
  __ret_123 = vsetq_lane_f64(vget_lane_f64(__s2_123, __p3_123), __s0_123, __p1_123); \
  __ret_123; \
})
#define vcopy_lane_p64(__p0_124, __p1_124, __p2_124, __p3_124) __extension__ ({ \
  poly64x1_t __s0_124 = __p0_124; \
  poly64x1_t __s2_124 = __p2_124; \
  poly64x1_t __ret_124; \
  __ret_124 = vset_lane_p64(vget_lane_p64(__s2_124, __p3_124), __s0_124, __p1_124); \
  __ret_124; \
})
#define vcopy_lane_f64(__p0_125, __p1_125, __p2_125, __p3_125) __extension__ ({ \
  float64x1_t __s0_125 = __p0_125; \
  float64x1_t __s2_125 = __p2_125; \
  float64x1_t __ret_125; \
  __ret_125 = vset_lane_f64(vget_lane_f64(__s2_125, __p3_125), __s0_125, __p1_125); \
  __ret_125; \
})
#define vcopyq_laneq_p64(__p0_126, __p1_126, __p2_126, __p3_126) __extension__ ({ \
  poly64x2_t __s0_126 = __p0_126; \
  poly64x2_t __s2_126 = __p2_126; \
  poly64x2_t __ret_126; \
  __ret_126 = vsetq_lane_p64(vgetq_lane_p64(__s2_126, __p3_126), __s0_126, __p1_126); \
  __ret_126; \
})
#define vcopyq_laneq_f64(__p0_127, __p1_127, __p2_127, __p3_127) __extension__ ({ \
  float64x2_t __s0_127 = __p0_127; \
  float64x2_t __s2_127 = __p2_127; \
  float64x2_t __ret_127; \
  __ret_127 = vsetq_lane_f64(vgetq_lane_f64(__s2_127, __p3_127), __s0_127, __p1_127); \
  __ret_127; \
})
#define vcopy_laneq_p64(__p0_128, __p1_128, __p2_128, __p3_128) __extension__ ({ \
  poly64x1_t __s0_128 = __p0_128; \
  poly64x2_t __s2_128 = __p2_128; \
  poly64x1_t __ret_128; \
  __ret_128 = vset_lane_p64(vgetq_lane_p64(__s2_128, __p3_128), __s0_128, __p1_128); \
  __ret_128; \
})
#define vcopy_laneq_f64(__p0_129, __p1_129, __p2_129, __p3_129) __extension__ ({ \
  float64x1_t __s0_129 = __p0_129; \
  float64x2_t __s2_129 = __p2_129; \
  float64x1_t __ret_129; \
  __ret_129 = vset_lane_f64(vgetq_lane_f64(__s2_129, __p3_129), __s0_129, __p1_129); \
  __ret_129; \
})
__ai uint16x8_t vmlal_high_u8(uint16x8_t __p0, uint8x16_t __p1, uint8x16_t __p2) {
  uint16x8_t __ret;
  __ret = vmlal_u8(__p0, vget_high_u8(__p1), vget_high_u8(__p2));
  return __ret;
}
__ai uint64x2_t vmlal_high_u32(uint64x2_t __p0, uint32x4_t __p1, uint32x4_t __p2) {
  uint64x2_t __ret;
  __ret = vmlal_u32(__p0, vget_high_u32(__p1), vget_high_u32(__p2));
  return __ret;
}
__ai uint32x4_t vmlal_high_u16(uint32x4_t __p0, uint16x8_t __p1, uint16x8_t __p2) {
  uint32x4_t __ret;
  __ret = vmlal_u16(__p0, vget_high_u16(__p1), vget_high_u16(__p2));
  return __ret;
}
__ai int16x8_t vmlal_high_s8(int16x8_t __p0, int8x16_t __p1, int8x16_t __p2) {
  int16x8_t __ret;
  __ret = vmlal_s8(__p0, vget_high_s8(__p1), vget_high_s8(__p2));
  return __ret;
}
__ai int64x2_t vmlal_high_s32(int64x2_t __p0, int32x4_t __p1, int32x4_t __p2) {
  int64x2_t __ret;
  __ret = vmlal_s32(__p0, vget_high_s32(__p1), vget_high_s32(__p2));
  return __ret;
}
__ai int32x4_t vmlal_high_s16(int32x4_t __p0, int16x8_t __p1, int16x8_t __p2) {
  int32x4_t __ret;
  __ret = vmlal_s16(__p0, vget_high_s16(__p1), vget_high_s16(__p2));
  return __ret;
}
__ai uint64x2_t vmlal_high_n_u32(uint64x2_t __p0, uint32x4_t __p1, uint32_t __p2) {
  uint64x2_t __ret;
  __ret = vmlal_n_u32(__p0, vget_high_u32(__p1), __p2);
  return __ret;
}
__ai uint32x4_t vmlal_high_n_u16(uint32x4_t __p0, uint16x8_t __p1, uint16_t __p2) {
  uint32x4_t __ret;
  __ret = vmlal_n_u16(__p0, vget_high_u16(__p1), __p2);
  return __ret;
}
__ai int64x2_t vmlal_high_n_s32(int64x2_t __p0, int32x4_t __p1, int32_t __p2) {
  int64x2_t __ret;
  __ret = vmlal_n_s32(__p0, vget_high_s32(__p1), __p2);
  return __ret;
}
__ai int32x4_t vmlal_high_n_s16(int32x4_t __p0, int16x8_t __p1, int16_t __p2) {
  int32x4_t __ret;
  __ret = vmlal_n_s16(__p0, vget_high_s16(__p1), __p2);
  return __ret;
}
__ai uint16x8_t vmlsl_high_u8(uint16x8_t __p0, uint8x16_t __p1, uint8x16_t __p2) {
  uint16x8_t __ret;
  __ret = vmlsl_u8(__p0, vget_high_u8(__p1), vget_high_u8(__p2));
  return __ret;
}
__ai uint64x2_t vmlsl_high_u32(uint64x2_t __p0, uint32x4_t __p1, uint32x4_t __p2) {
  uint64x2_t __ret;
  __ret = vmlsl_u32(__p0, vget_high_u32(__p1), vget_high_u32(__p2));
  return __ret;
}
__ai uint32x4_t vmlsl_high_u16(uint32x4_t __p0, uint16x8_t __p1, uint16x8_t __p2) {
  uint32x4_t __ret;
  __ret = vmlsl_u16(__p0, vget_high_u16(__p1), vget_high_u16(__p2));
  return __ret;
}
__ai int16x8_t vmlsl_high_s8(int16x8_t __p0, int8x16_t __p1, int8x16_t __p2) {
  int16x8_t __ret;
  __ret = vmlsl_s8(__p0, vget_high_s8(__p1), vget_high_s8(__p2));
  return __ret;
}
__ai int64x2_t vmlsl_high_s32(int64x2_t __p0, int32x4_t __p1, int32x4_t __p2) {
  int64x2_t __ret;
  __ret = vmlsl_s32(__p0, vget_high_s32(__p1), vget_high_s32(__p2));
  return __ret;
}
__ai int32x4_t vmlsl_high_s16(int32x4_t __p0, int16x8_t __p1, int16x8_t __p2) {
  int32x4_t __ret;
  __ret = vmlsl_s16(__p0, vget_high_s16(__p1), vget_high_s16(__p2));
  return __ret;
}
__ai uint64x2_t vmlsl_high_n_u32(uint64x2_t __p0, uint32x4_t __p1, uint32_t __p2) {
  uint64x2_t __ret;
  __ret = vmlsl_n_u32(__p0, vget_high_u32(__p1), __p2);
  return __ret;
}
__ai uint32x4_t vmlsl_high_n_u16(uint32x4_t __p0, uint16x8_t __p1, uint16_t __p2) {
  uint32x4_t __ret;
  __ret = vmlsl_n_u16(__p0, vget_high_u16(__p1), __p2);
  return __ret;
}
__ai int64x2_t vmlsl_high_n_s32(int64x2_t __p0, int32x4_t __p1, int32_t __p2) {
  int64x2_t __ret;
  __ret = vmlsl_n_s32(__p0, vget_high_s32(__p1), __p2);
  return __ret;
}
__ai int32x4_t vmlsl_high_n_s16(int32x4_t __p0, int16x8_t __p1, int16_t __p2) {
  int32x4_t __ret;
  __ret = vmlsl_n_s16(__p0, vget_high_s16(__p1), __p2);
  return __ret;
}
#define vmulx_lane_f64(__p0_130, __p1_130, __p2_130) __extension__ ({ \
  float64x1_t __s0_130 = __p0_130; \
  float64x1_t __s1_130 = __p1_130; \
  float64x1_t __ret_130; \
  float64_t __x_130 = vget_lane_f64(__s0_130, 0); \
  float64_t __y_130 = vget_lane_f64(__s1_130, __p2_130); \
  float64_t __z_130 = vmulxd_f64(__x_130, __y_130); \
  __ret_130 = vset_lane_f64(__z_130, __s0_130, __p2_130); \
  __ret_130; \
})
#define vmulx_laneq_f64(__p0_131, __p1_131, __p2_131) __extension__ ({ \
  float64x1_t __s0_131 = __p0_131; \
  float64x2_t __s1_131 = __p1_131; \
  float64x1_t __ret_131; \
  float64_t __x_131 = vget_lane_f64(__s0_131, 0); \
  float64_t __y_131 = vgetq_lane_f64(__s1_131, __p2_131); \
  float64_t __z_131 = vmulxd_f64(__x_131, __y_131); \
  __ret_131 = vset_lane_f64(__z_131, __s0_131, 0); \
  __ret_131; \
})
#endif
__ai uint16x8_t vabal_u8(uint16x8_t __p0, uint8x8_t __p1, uint8x8_t __p2) {
  uint16x8_t __ret;
  __ret = __p0 + vabdl_u8(__p1, __p2);
  return __ret;
}
__ai uint64x2_t vabal_u32(uint64x2_t __p0, uint32x2_t __p1, uint32x2_t __p2) {
  uint64x2_t __ret;
  __ret = __p0 + vabdl_u32(__p1, __p2);
  return __ret;
}
__ai uint32x4_t vabal_u16(uint32x4_t __p0, uint16x4_t __p1, uint16x4_t __p2) {
  uint32x4_t __ret;
  __ret = __p0 + vabdl_u16(__p1, __p2);
  return __ret;
}
__ai int16x8_t vabal_s8(int16x8_t __p0, int8x8_t __p1, int8x8_t __p2) {
  int16x8_t __ret;
  __ret = __p0 + vabdl_s8(__p1, __p2);
  return __ret;
}
__ai int64x2_t vabal_s32(int64x2_t __p0, int32x2_t __p1, int32x2_t __p2) {
  int64x2_t __ret;
  __ret = __p0 + vabdl_s32(__p1, __p2);
  return __ret;
}
__ai int32x4_t vabal_s16(int32x4_t __p0, int16x4_t __p1, int16x4_t __p2) {
  int32x4_t __ret;
  __ret = __p0 + vabdl_s16(__p1, __p2);
  return __ret;
}
#if defined(__aarch64__)
__ai uint16x8_t vabal_high_u8(uint16x8_t __p0, uint8x16_t __p1, uint8x16_t __p2) {
  uint16x8_t __ret;
  __ret = vabal_u8(__p0, vget_high_u8(__p1), vget_high_u8(__p2));
  return __ret;
}
__ai uint64x2_t vabal_high_u32(uint64x2_t __p0, uint32x4_t __p1, uint32x4_t __p2) {
  uint64x2_t __ret;
  __ret = vabal_u32(__p0, vget_high_u32(__p1), vget_high_u32(__p2));
  return __ret;
}
__ai uint32x4_t vabal_high_u16(uint32x4_t __p0, uint16x8_t __p1, uint16x8_t __p2) {
  uint32x4_t __ret;
  __ret = vabal_u16(__p0, vget_high_u16(__p1), vget_high_u16(__p2));
  return __ret;
}
__ai int16x8_t vabal_high_s8(int16x8_t __p0, int8x16_t __p1, int8x16_t __p2) {
  int16x8_t __ret;
  __ret = vabal_s8(__p0, vget_high_s8(__p1), vget_high_s8(__p2));
  return __ret;
}
__ai int64x2_t vabal_high_s32(int64x2_t __p0, int32x4_t __p1, int32x4_t __p2) {
  int64x2_t __ret;
  __ret = vabal_s32(__p0, vget_high_s32(__p1), vget_high_s32(__p2));
  return __ret;
}
__ai int32x4_t vabal_high_s16(int32x4_t __p0, int16x8_t __p1, int16x8_t __p2) {
  int32x4_t __ret;
  __ret = vabal_s16(__p0, vget_high_s16(__p1), vget_high_s16(__p2));
  return __ret;
}
#endif

#undef __ai

#endif /* __ARM_NEON_H */

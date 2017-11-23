#if     __STDC_VERSION__ >= 2020XXL
#ifndef __STDC_NO_ENDIAN__

#pragma once

#ifndef __ENDIAN_h
#define __ENDIAN_h

#ifdef  __cplusplus
extern  "C" {
#endif
    
#undef  __UNKNOWN_WORD_FIRST__
#define __UNKNOWN_WORD_FIRST__ 0x00
    
#undef  __MS_WORD_FIRST__
#define __MS_WORD_FIRST__      0x01
    
#undef  __LS_WORD_FIRST__
#define __LS_WORD_FIRST__      0x02
    
#undef  __UNKNOWN_BYTE_FIRST__
#define __UNKNOWN_BYTE_FIRST__ 0x04
    
#undef  __MS_BYTE_FIRST__
#define __MS_BYTE_FIRST__      0x08
    
#undef  __LS_WORD_FIRST__
#define __LS_WORD_FIRST__      0x10
    
#undef  __UNKNOWN_BIT_FIRST__
#define __UNKNOWN_BIT_FIRST__  0x20
    
#undef  __MS_BIT_FIRST__
#define __MS_BIT_FIRST__       0x40
    
#undef  __LS_BIT_FIRST__
#define __LS_BIT_FIRST__       0x80
    
#undef  __TARGET_INTEGER_WORD_ORDER__
#define __TARGET_INTEGER_WORD_ORDER__ __UNKNOWN_WORD_FIRST__
    
#undef  __TARGET_INTEGER_BYTE_ORDER__ __UNKNOWN_BYTE_FIRST__
#define __TARGET_INTEGER_BYTE_ORDER__ __UNKNOWN_BYTE_FIRST__
    
#undef  __TARGET_INTEGER_BIT_ORDER__
#define __TARGET_INTEGER_BIT_ORDER__  __UNKNOWN_BIT_FIRST__
    
#undef  __TARGET_DECIMAL_WORD_ORDER__
#define __TARGET_DECIMAL_WORD_ORDER__ __UNKNOWN_WORD_FIRST__
    
#undef  __TARGET_DECIMAL_BYTE_ORDER__ __UNKNOWN_BYTE_FIRST__
#define __TARGET_DECIMAL_BYTE_ORDER__ __UNKNOWN_BYTE_FIRST__
    
#undef  __TARGET_DECIMAL_BIT_ORDER__
#define __TARGET_DECIMAL_BIT_ORDER__  __UNKNOWN_BIT_FIRST__
    
#undef  __TARGET_SIMD_WORD_ORDER__
#define __TARGET_SIMD_WORD_ORDER__    __UNKNOWN_WORD_FIRST__
    
#undef  __TARGET_SIMD_BYTE_ORDER__
#define __TARGET_SIMD_BYTE_ORDER__    __UNKNOWN_BYTE_FIRST__
    
#undef  __TARGET_SIMD_BIT_ORDER__
#define __TARGET_SIMD_BIT_ORDER__     __UNKNOWN_BIT_FIRST__
    
#ifdef  __cplusplus
}
#endif

#endif  /* __ENDIAN_h */
#endif  /* __STDC_NO_ENDIAN__ */
#endif  /* __STDC_VERSION__ */

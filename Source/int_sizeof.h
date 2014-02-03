#ifndef INT_SIZEOF_H_
#define INT_SIZEOF_H_

// Copyright (c) 2014, Ruslan Baratov
// All rights reserved.

#define __STDC_LIMIT_MACROS 1 // tested on gcc

#include <stdint.h> // PTRDIFF_MIN
#include <limits.h> // CHAR_BIT

// http://en.cppreference.com/w/c/types/limits

#ifndef INT8_MAX
# error "Compiler break C standard ISO/IEC 9899:2011 7.20.2"
#endif

#ifndef INT16_MAX
# error "Compiler break C standard ISO/IEC 9899:2011 7.20.2"
#endif

#ifndef INT32_MAX
# error "Compiler break C standard ISO/IEC 9899:2011 7.20.2"
#endif

#ifndef INT64_MAX
# error "Compiler break C standard ISO/IEC 9899:2011 7.20.2"
#endif

#ifndef UINT8_MAX
# error "Compiler break C standard ISO/IEC 9899:2011 7.20.2"
#endif

#ifndef UINT16_MAX
# error "Compiler break C standard ISO/IEC 9899:2011 7.20.2"
#endif

#ifndef UINT32_MAX
# error "Compiler break C standard ISO/IEC 9899:2011 7.20.2"
#endif

#ifndef UINT64_MAX
# error "Compiler break C standard ISO/IEC 9899:2011 7.20.2"
#endif

#define INT_SIZEOF_8BIT 8/CHAR_BIT
#define INT_SIZEOF_16BIT 16/CHAR_BIT
#define INT_SIZEOF_32BIT 32/CHAR_BIT
#define INT_SIZEOF_64BIT 64/CHAR_BIT

// ptrdiff_t: PTRDIFF_MIN, PTRDIFF_MAX
#if PTRDIFF_MAX == INT8_MAX
# define INT_SIZEOF_PTRDIFF INT_SIZEOF_8BIT
#elif PTRDIFF_MAX == INT16_MAX
# define INT_SIZEOF_PTRDIFF INT_SIZEOF_16BIT
#elif PTRDIFF_MAX == INT32_MAX
# define INT_SIZEOF_PTRDIFF INT_SIZEOF_32BIT
#elif PTRDIFF_MAX == INT64_MAX
# define INT_SIZEOF_PTRDIFF INT_SIZEOF_64BIT
#else
# error "Please report your weird platform to github.com/ruslo/intsizeof"
#endif

// size_t: SIZE_MAX
#if SIZE_MAX == UINT8_MAX
# define INT_SIZEOF_SIZE INT_SIZEOF_8BIT
#elif SIZE_MAX == UINT16_MAX
# define INT_SIZEOF_SIZE INT_SIZEOF_16BIT
#elif SIZE_MAX == UINT32_MAX
# define INT_SIZEOF_SIZE INT_SIZEOF_32BIT
#elif SIZE_MAX == UINT64_MAX
# define INT_SIZEOF_SIZE INT_SIZEOF_64BIT
#else
# error "Please report your weird platform to github.com/ruslo/intsizeof"
#endif

// sig_atomic_t: SIG_ATOMIC_MIN, SIG_ATOMIC_MAX
#if SIG_ATOMIC_MAX == INT8_MAX
# define INT_SIZEOF_SIG_ATOMIC INT_SIZEOF_8BIT
#elif SIG_ATOMIC_MAX == INT16_MAX
# define INT_SIZEOF_SIG_ATOMIC INT_SIZEOF_16BIT
#elif SIG_ATOMIC_MAX == INT32_MAX
# define INT_SIZEOF_SIG_ATOMIC INT_SIZEOF_32BIT
#elif SIG_ATOMIC_MAX == INT64_MAX
# define INT_SIZEOF_SIG_ATOMIC INT_SIZEOF_64BIT
#else
# error "Please report your weird platform to github.com/ruslo/intsizeof"
#endif

// wchar_t: WCHAR_MIN, WCHAR_MAX
#if WCHAR_MAX == INT8_MAX
# define INT_SIZEOF_WCHAR INT_SIZEOF_8BIT
#elif WCHAR_MAX == INT16_MAX
# define INT_SIZEOF_WCHAR INT_SIZEOF_16BIT
#elif WCHAR_MAX == INT32_MAX
# define INT_SIZEOF_WCHAR INT_SIZEOF_32BIT
#elif WCHAR_MAX == INT64_MAX
# define INT_SIZEOF_WCHAR INT_SIZEOF_64BIT
#elif WCHAR_MAX == UINT8_MAX // check unsigned too (gcc cygwin)
# define INT_SIZEOF_WCHAR INT_SIZEOF_8BIT
#elif WCHAR_MAX == UINT16_MAX
# define INT_SIZEOF_WCHAR INT_SIZEOF_16BIT
#elif WCHAR_MAX == UINT32_MAX
# define INT_SIZEOF_WCHAR INT_SIZEOF_32BIT
#elif WCHAR_MAX == UINT64_MAX
# define INT_SIZEOF_WCHAR INT_SIZEOF_64BIT
#else
# error "Please report your weird platform to github.com/ruslo/intsizeof"
#endif

// wint_t: WINT_MIN, WINT_MAX
#if WINT_MAX == INT8_MAX
# define INT_SIZEOF_WINT INT_SIZEOF_8BIT
#elif WINT_MAX == INT16_MAX
# define INT_SIZEOF_WINT INT_SIZEOF_16BIT
#elif WINT_MAX == INT32_MAX
# define INT_SIZEOF_WINT INT_SIZEOF_32BIT
#elif WINT_MAX == INT64_MAX
# define INT_SIZEOF_WINT INT_SIZEOF_64BIT
#elif WINT_MAX == UINT8_MAX // check unsinged too (tested on gcc)
# define INT_SIZEOF_WINT INT_SIZEOF_8BIT
#elif WINT_MAX == UINT16_MAX
# define INT_SIZEOF_WINT INT_SIZEOF_16BIT
#elif WINT_MAX == UINT32_MAX
# define INT_SIZEOF_WINT INT_SIZEOF_32BIT
#elif WINT_MAX == UINT64_MAX
# define INT_SIZEOF_WINT INT_SIZEOF_64BIT
#else
# error "Please report your weird platform to github.com/ruslo/intsizeof"
#endif

// char: CHAR_MIN, CHAR_MAX
#if CHAR_MAX == INT8_MAX
# define INT_SIZEOF_CHAR INT_SIZEOF_8BIT
#elif CHAR_MAX == INT16_MAX
# define INT_SIZEOF_CHAR INT_SIZEOF_16BIT
#elif CHAR_MAX == INT32_MAX
# define INT_SIZEOF_CHAR INT_SIZEOF_32BIT
#elif CHAR_MAX == INT64_MAX
# define INT_SIZEOF_CHAR INT_SIZEOF_64BIT
#else
# error "Please report your weird platform to github.com/ruslo/intsizeof"
#endif

// signed char: SCHAR_MIN, SCHAR_MAX
#if SCHAR_MAX == INT8_MAX
# define INT_SIZEOF_SCHAR INT_SIZEOF_8BIT
#elif SCHAR_MAX == INT16_MAX
# define INT_SIZEOF_SCHAR INT_SIZEOF_16BIT
#elif SCHAR_MAX == INT32_MAX
# define INT_SIZEOF_SCHAR INT_SIZEOF_32BIT
#elif SCHAR_MAX == INT64_MAX
# define INT_SIZEOF_SCHAR INT_SIZEOF_64BIT
#else
# error "Please report your weird platform to github.com/ruslo/intsizeof"
#endif

// signed short: SHRT_MIN, SHRT_MAX
#if SHRT_MAX == INT8_MAX
# define INT_SIZEOF_SHRT INT_SIZEOF_8BIT
#elif SHRT_MAX == INT16_MAX
# define INT_SIZEOF_SHRT INT_SIZEOF_16BIT
#elif SHRT_MAX == INT32_MAX
# define INT_SIZEOF_SHRT INT_SIZEOF_32BIT
#elif SHRT_MAX == INT64_MAX
# define INT_SIZEOF_SHRT INT_SIZEOF_64BIT
#else
# error "Please report your weird platform to github.com/ruslo/intsizeof"
#endif

// int: INT_MIN, INT_MAX
#if INT_MAX == INT8_MAX
# define INT_SIZEOF_INT INT_SIZEOF_8BIT
#elif INT_MAX == INT16_MAX
# define INT_SIZEOF_INT INT_SIZEOF_16BIT
#elif INT_MAX == INT32_MAX
# define INT_SIZEOF_INT INT_SIZEOF_32BIT
#elif INT_MAX == INT64_MAX
# define INT_SIZEOF_INT INT_SIZEOF_64BIT
#else
# error "Please report your weird platform to github.com/ruslo/intsizeof"
#endif

// long: LONG_MIN, LONG_MAX
#if LONG_MAX == INT8_MAX
# define INT_SIZEOF_LONG INT_SIZEOF_8BIT
#elif LONG_MAX == INT16_MAX
# define INT_SIZEOF_LONG INT_SIZEOF_16BIT
#elif LONG_MAX == INT32_MAX
# define INT_SIZEOF_LONG INT_SIZEOF_32BIT
#elif LONG_MAX == INT64_MAX
# define INT_SIZEOF_LONG INT_SIZEOF_64BIT
#else
# error "Please report your weird platform to github.com/ruslo/intsizeof"
#endif

// long long: LLONG_MIN, LLONG_MAX
#if LLONG_MAX == INT8_MAX
# define INT_SIZEOF_LLONG INT_SIZEOF_8BIT
#elif LLONG_MAX == INT16_MAX
# define INT_SIZEOF_LLONG INT_SIZEOF_16BIT
#elif LLONG_MAX == INT32_MAX
# define INT_SIZEOF_LLONG INT_SIZEOF_32BIT
#elif LLONG_MAX == INT64_MAX
# define INT_SIZEOF_LLONG INT_SIZEOF_64BIT
#else
# error "Please report your weird platform to github.com/ruslo/intsizeof"
#endif

// unsigned char: UCHAR_MIN, UCHAR_MAX
#if UCHAR_MAX == UINT8_MAX
# define INT_SIZEOF_UCHAR INT_SIZEOF_8BIT
#elif UCHAR_MAX == UINT16_MAX
# define INT_SIZEOF_UCHAR INT_SIZEOF_16BIT
#elif UCHAR_MAX == UINT32_MAX
# define INT_SIZEOF_UCHAR INT_SIZEOF_32BIT
#elif UCHAR_MAX == UINT64_MAX
# define INT_SIZEOF_UCHAR INT_SIZEOF_64BIT
#else
# error "Please report your weird platform to github.com/ruslo/intsizeof"
#endif

// unsigned short: USHRT_MIN, USHRT_MAX
#if USHRT_MAX == UINT8_MAX
# define INT_SIZEOF_USHRT INT_SIZEOF_8BIT
#elif USHRT_MAX == UINT16_MAX
# define INT_SIZEOF_USHRT INT_SIZEOF_16BIT
#elif USHRT_MAX == UINT32_MAX
# define INT_SIZEOF_USHRT INT_SIZEOF_32BIT
#elif USHRT_MAX == UINT64_MAX
# define INT_SIZEOF_USHRT INT_SIZEOF_64BIT
#else
# error "Please report your weird platform to github.com/ruslo/intsizeof"
#endif

// unsigned int: UINT_MIN, UINT_MAX
#if UINT_MAX == UINT8_MAX
# define INT_SIZEOF_UINT INT_SIZEOF_8BIT
#elif UINT_MAX == UINT16_MAX
# define INT_SIZEOF_UINT INT_SIZEOF_16BIT
#elif UINT_MAX == UINT32_MAX
# define INT_SIZEOF_UINT INT_SIZEOF_32BIT
#elif UINT_MAX == UINT64_MAX
# define INT_SIZEOF_UINT INT_SIZEOF_64BIT
#else
# error "Please report your weird platform to github.com/ruslo/intsizeof"
#endif

// unsigned long: ULONG_MIN, ULONG_MAX
#if ULONG_MAX == UINT8_MAX
# define INT_SIZEOF_ULONG INT_SIZEOF_8BIT
#elif ULONG_MAX == UINT16_MAX
# define INT_SIZEOF_ULONG INT_SIZEOF_16BIT
#elif ULONG_MAX == UINT32_MAX
# define INT_SIZEOF_ULONG INT_SIZEOF_32BIT
#elif ULONG_MAX == UINT64_MAX
# define INT_SIZEOF_ULONG INT_SIZEOF_64BIT
#else
# error "Please report your weird platform to github.com/ruslo/intsizeof"
#endif

// unsigned long long: ULLONG_MIN, ULLONG_MAX
#if ULLONG_MAX == UINT8_MAX
# define INT_SIZEOF_ULLONG INT_SIZEOF_8BIT
#elif ULLONG_MAX == UINT16_MAX
# define INT_SIZEOF_ULLONG INT_SIZEOF_16BIT
#elif ULLONG_MAX == UINT32_MAX
# define INT_SIZEOF_ULLONG INT_SIZEOF_32BIT
#elif ULLONG_MAX == UINT64_MAX
# define INT_SIZEOF_ULLONG INT_SIZEOF_64BIT
#else
# error "Please report your weird platform to github.com/ruslo/intsizeof"
#endif

#endif // INT_SIZEOF_H_

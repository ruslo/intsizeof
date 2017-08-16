#ifndef INTSIZEOF_H_
#define INTSIZEOF_H_

// Copyright (c) 2014-2017, Ruslan Baratov
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

#define INTSIZEOF_8BIT 8/CHAR_BIT
#define INTSIZEOF_16BIT 16/CHAR_BIT
#define INTSIZEOF_32BIT 32/CHAR_BIT
#define INTSIZEOF_64BIT 64/CHAR_BIT

// ptrdiff_t: PTRDIFF_MIN, PTRDIFF_MAX
#if PTRDIFF_MAX == INT8_MAX
# define INTSIZEOF_PTRDIFF INTSIZEOF_8BIT
#elif PTRDIFF_MAX == INT16_MAX
# define INTSIZEOF_PTRDIFF INTSIZEOF_16BIT
#elif PTRDIFF_MAX == INT32_MAX
# define INTSIZEOF_PTRDIFF INTSIZEOF_32BIT
#elif PTRDIFF_MAX == INT64_MAX
# define INTSIZEOF_PTRDIFF INTSIZEOF_64BIT
#else
# error "Please report error to https://github.com/ruslo/intsizeof/issues"
#endif

// size_t: SIZE_MAX
#if SIZE_MAX == UINT8_MAX
# define INTSIZEOF_SIZE INTSIZEOF_8BIT
#elif SIZE_MAX == UINT16_MAX
# define INTSIZEOF_SIZE INTSIZEOF_16BIT
#elif SIZE_MAX == UINT32_MAX
# define INTSIZEOF_SIZE INTSIZEOF_32BIT
#elif SIZE_MAX == UINT64_MAX
# define INTSIZEOF_SIZE INTSIZEOF_64BIT
#else
# error "Please report error to https://github.com/ruslo/intsizeof/issues"
#endif

// sig_atomic_t: SIG_ATOMIC_MIN, SIG_ATOMIC_MAX
#if SIG_ATOMIC_MAX == INT8_MAX
# define INTSIZEOF_SIG_ATOMIC INTSIZEOF_8BIT
#elif SIG_ATOMIC_MAX == INT16_MAX
# define INTSIZEOF_SIG_ATOMIC INTSIZEOF_16BIT
#elif SIG_ATOMIC_MAX == INT32_MAX
# define INTSIZEOF_SIG_ATOMIC INTSIZEOF_32BIT
#elif SIG_ATOMIC_MAX == INT64_MAX
# define INTSIZEOF_SIG_ATOMIC INTSIZEOF_64BIT
#else
# error "Please report error to https://github.com/ruslo/intsizeof/issues"
#endif

// wchar_t: WCHAR_MIN, WCHAR_MAX
#if WCHAR_MAX == INT8_MAX
# define INTSIZEOF_WCHAR INTSIZEOF_8BIT
#elif WCHAR_MAX == INT16_MAX
# define INTSIZEOF_WCHAR INTSIZEOF_16BIT
#elif WCHAR_MAX == INT32_MAX
# define INTSIZEOF_WCHAR INTSIZEOF_32BIT
#elif WCHAR_MAX == INT64_MAX
# define INTSIZEOF_WCHAR INTSIZEOF_64BIT
#elif WCHAR_MAX == UINT8_MAX // check unsigned too (gcc cygwin)
# define INTSIZEOF_WCHAR INTSIZEOF_8BIT
#elif WCHAR_MAX == UINT16_MAX
# define INTSIZEOF_WCHAR INTSIZEOF_16BIT
#elif WCHAR_MAX == UINT32_MAX
# define INTSIZEOF_WCHAR INTSIZEOF_32BIT
#elif WCHAR_MAX == UINT64_MAX
# define INTSIZEOF_WCHAR INTSIZEOF_64BIT
#else
# error "Please report error to https://github.com/ruslo/intsizeof/issues"
#endif

// wint_t: WINT_MIN, WINT_MAX
#if WINT_MAX == INT8_MAX
# define INTSIZEOF_WINT INTSIZEOF_8BIT
#elif WINT_MAX == INT16_MAX
# define INTSIZEOF_WINT INTSIZEOF_16BIT
#elif WINT_MAX == INT32_MAX
# define INTSIZEOF_WINT INTSIZEOF_32BIT
#elif WINT_MAX == INT64_MAX
# define INTSIZEOF_WINT INTSIZEOF_64BIT
#elif WINT_MAX == UINT8_MAX // check unsigned too (tested on gcc)
# define INTSIZEOF_WINT INTSIZEOF_8BIT
#elif WINT_MAX == UINT16_MAX
# define INTSIZEOF_WINT INTSIZEOF_16BIT
#elif WINT_MAX == UINT32_MAX
# define INTSIZEOF_WINT INTSIZEOF_32BIT
#elif WINT_MAX == UINT64_MAX
# define INTSIZEOF_WINT INTSIZEOF_64BIT
#else
# error "Please report error to https://github.com/ruslo/intsizeof/issues"
#endif

// char: CHAR_MIN, CHAR_MAX
#if CHAR_MAX == INT8_MAX
# define INTSIZEOF_CHAR INTSIZEOF_8BIT
#elif CHAR_MAX == INT16_MAX
# define INTSIZEOF_CHAR INTSIZEOF_16BIT
#elif CHAR_MAX == INT32_MAX
# define INTSIZEOF_CHAR INTSIZEOF_32BIT
#elif CHAR_MAX == INT64_MAX
# define INTSIZEOF_CHAR INTSIZEOF_64BIT
#elif CHAR_MAX == UINT8_MAX // check unsigned too (GCC + Android)
# define INTSIZEOF_CHAR INTSIZEOF_8BIT
#elif CHAR_MAX == UINT16_MAX
# define INTSIZEOF_CHAR INTSIZEOF_16BIT
#elif CHAR_MAX == UINT32_MAX
# define INTSIZEOF_CHAR INTSIZEOF_32BIT
#elif CHAR_MAX == UINT64_MAX
# define INTSIZEOF_CHAR INTSIZEOF_64BIT
#else
# error "Please report error to https://github.com/ruslo/intsizeof/issues"
#endif

// signed char: SCHAR_MIN, SCHAR_MAX
#if SCHAR_MAX == INT8_MAX
# define INTSIZEOF_SCHAR INTSIZEOF_8BIT
#elif SCHAR_MAX == INT16_MAX
# define INTSIZEOF_SCHAR INTSIZEOF_16BIT
#elif SCHAR_MAX == INT32_MAX
# define INTSIZEOF_SCHAR INTSIZEOF_32BIT
#elif SCHAR_MAX == INT64_MAX
# define INTSIZEOF_SCHAR INTSIZEOF_64BIT
#else
# error "Please report error to https://github.com/ruslo/intsizeof/issues"
#endif

// signed short: SHRT_MIN, SHRT_MAX
#if SHRT_MAX == INT8_MAX
# define INTSIZEOF_SHRT INTSIZEOF_8BIT
#elif SHRT_MAX == INT16_MAX
# define INTSIZEOF_SHRT INTSIZEOF_16BIT
#elif SHRT_MAX == INT32_MAX
# define INTSIZEOF_SHRT INTSIZEOF_32BIT
#elif SHRT_MAX == INT64_MAX
# define INTSIZEOF_SHRT INTSIZEOF_64BIT
#else
# error "Please report error to https://github.com/ruslo/intsizeof/issues"
#endif

// int: INT_MIN, INT_MAX
#if INT_MAX == INT8_MAX
# define INTSIZEOF_INT INTSIZEOF_8BIT
#elif INT_MAX == INT16_MAX
# define INTSIZEOF_INT INTSIZEOF_16BIT
#elif INT_MAX == INT32_MAX
# define INTSIZEOF_INT INTSIZEOF_32BIT
#elif INT_MAX == INT64_MAX
# define INTSIZEOF_INT INTSIZEOF_64BIT
#else
# error "Please report error to https://github.com/ruslo/intsizeof/issues"
#endif

// long: LONG_MIN, LONG_MAX
#if LONG_MAX == INT8_MAX
# define INTSIZEOF_LONG INTSIZEOF_8BIT
#elif LONG_MAX == INT16_MAX
# define INTSIZEOF_LONG INTSIZEOF_16BIT
#elif LONG_MAX == INT32_MAX
# define INTSIZEOF_LONG INTSIZEOF_32BIT
#elif LONG_MAX == INT64_MAX
# define INTSIZEOF_LONG INTSIZEOF_64BIT
#else
# error "Please report error to https://github.com/ruslo/intsizeof/issues"
#endif

// long long: LLONG_MIN, LLONG_MAX
#if LLONG_MAX == INT8_MAX
# define INTSIZEOF_LLONG INTSIZEOF_8BIT
#elif LLONG_MAX == INT16_MAX
# define INTSIZEOF_LLONG INTSIZEOF_16BIT
#elif LLONG_MAX == INT32_MAX
# define INTSIZEOF_LLONG INTSIZEOF_32BIT
#elif LLONG_MAX == INT64_MAX
# define INTSIZEOF_LLONG INTSIZEOF_64BIT
#else
# error "Please report error to https://github.com/ruslo/intsizeof/issues"
#endif

// unsigned char: UCHAR_MIN, UCHAR_MAX
#if UCHAR_MAX == UINT8_MAX
# define INTSIZEOF_UCHAR INTSIZEOF_8BIT
#elif UCHAR_MAX == UINT16_MAX
# define INTSIZEOF_UCHAR INTSIZEOF_16BIT
#elif UCHAR_MAX == UINT32_MAX
# define INTSIZEOF_UCHAR INTSIZEOF_32BIT
#elif UCHAR_MAX == UINT64_MAX
# define INTSIZEOF_UCHAR INTSIZEOF_64BIT
#else
# error "Please report error to https://github.com/ruslo/intsizeof/issues"
#endif

// unsigned short: USHRT_MIN, USHRT_MAX
#if USHRT_MAX == UINT8_MAX
# define INTSIZEOF_USHRT INTSIZEOF_8BIT
#elif USHRT_MAX == UINT16_MAX
# define INTSIZEOF_USHRT INTSIZEOF_16BIT
#elif USHRT_MAX == UINT32_MAX
# define INTSIZEOF_USHRT INTSIZEOF_32BIT
#elif USHRT_MAX == UINT64_MAX
# define INTSIZEOF_USHRT INTSIZEOF_64BIT
#else
# error "Please report error to https://github.com/ruslo/intsizeof/issues"
#endif

// unsigned int: UINT_MIN, UINT_MAX
#if UINT_MAX == UINT8_MAX
# define INTSIZEOF_UINT INTSIZEOF_8BIT
#elif UINT_MAX == UINT16_MAX
# define INTSIZEOF_UINT INTSIZEOF_16BIT
#elif UINT_MAX == UINT32_MAX
# define INTSIZEOF_UINT INTSIZEOF_32BIT
#elif UINT_MAX == UINT64_MAX
# define INTSIZEOF_UINT INTSIZEOF_64BIT
#else
# error "Please report error to https://github.com/ruslo/intsizeof/issues"
#endif

// unsigned long: ULONG_MIN, ULONG_MAX
#if ULONG_MAX == UINT8_MAX
# define INTSIZEOF_ULONG INTSIZEOF_8BIT
#elif ULONG_MAX == UINT16_MAX
# define INTSIZEOF_ULONG INTSIZEOF_16BIT
#elif ULONG_MAX == UINT32_MAX
# define INTSIZEOF_ULONG INTSIZEOF_32BIT
#elif ULONG_MAX == UINT64_MAX
# define INTSIZEOF_ULONG INTSIZEOF_64BIT
#else
# error "Please report error to https://github.com/ruslo/intsizeof/issues"
#endif

// unsigned long long: ULLONG_MIN, ULLONG_MAX
#if ULLONG_MAX == UINT8_MAX
# define INTSIZEOF_ULLONG INTSIZEOF_8BIT
#elif ULLONG_MAX == UINT16_MAX
# define INTSIZEOF_ULLONG INTSIZEOF_16BIT
#elif ULLONG_MAX == UINT32_MAX
# define INTSIZEOF_ULLONG INTSIZEOF_32BIT
#elif ULLONG_MAX == UINT64_MAX
# define INTSIZEOF_ULLONG INTSIZEOF_64BIT
#else
# error "Please report error to https://github.com/ruslo/intsizeof/issues"
#endif

#endif // INTSIZEOF_H_

// Copyright (c) 2014, Ruslan Baratov
// All rights reserved.

#include <intsizeof.h> // INT_SIZEOF_PTRDIFF

#include <cstddef> // ptrdiff_t
#include <signal.h> // sig_atomic_t
#include <cwchar> // wint_t

int main() {
  static_assert(INTSIZEOF_PTRDIFF == sizeof(ptrdiff_t), "");
  static_assert(INTSIZEOF_SIZE == sizeof(size_t), "");
  static_assert(INTSIZEOF_SIG_ATOMIC == sizeof(sig_atomic_t), "");
  static_assert(INTSIZEOF_WCHAR == sizeof(wchar_t), "");
  static_assert(INTSIZEOF_WINT == sizeof(wint_t), "");
  static_assert(INTSIZEOF_CHAR == sizeof(char), "");

  static_assert(INTSIZEOF_SCHAR == sizeof(signed char), "");
  static_assert(INTSIZEOF_SHRT == sizeof(signed short), "");
  static_assert(INTSIZEOF_INT == sizeof(int), "");
  static_assert(INTSIZEOF_LONG == sizeof(long), "");
  static_assert(INTSIZEOF_LLONG == sizeof(long long), "");

  static_assert(INTSIZEOF_UCHAR == sizeof(unsigned char), "");
  static_assert(INTSIZEOF_USHRT == sizeof(unsigned short), "");
  static_assert(INTSIZEOF_UINT == sizeof(unsigned int), "");
  static_assert(INTSIZEOF_ULONG == sizeof(unsigned long), "");
  static_assert(INTSIZEOF_ULLONG == sizeof(unsigned long long), "");

  // sanity check
  static_assert(INTSIZEOF_CHAR == 1, "");
  static_assert(INTSIZEOF_UCHAR == 1, "");
  static_assert(INTSIZEOF_SCHAR == 1, "");
}

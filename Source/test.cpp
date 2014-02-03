// Copyright (c) 2014, Ruslan Baratov
// All rights reserved.

#include <int_sizeof.h> // INT_SIZEOF_PTRDIFF

#include <cstddef> // ptrdiff_t
#include <signal.h> // sig_atomic_t
#include <cwchar> // wint_t

int main() {
  static_assert(INT_SIZEOF_PTRDIFF == sizeof(ptrdiff_t), "");
  static_assert(INT_SIZEOF_SIZE == sizeof(size_t), "");
  static_assert(INT_SIZEOF_SIG_ATOMIC == sizeof(sig_atomic_t), "");
  static_assert(INT_SIZEOF_WCHAR == sizeof(wchar_t), "");
  static_assert(INT_SIZEOF_WINT == sizeof(wint_t), "");
  static_assert(INT_SIZEOF_CHAR == sizeof(char), "");

  static_assert(INT_SIZEOF_SCHAR == sizeof(signed char), "");
  static_assert(INT_SIZEOF_SHRT == sizeof(signed short), "");
  static_assert(INT_SIZEOF_INT == sizeof(int), "");
  static_assert(INT_SIZEOF_LONG == sizeof(long), "");
  static_assert(INT_SIZEOF_LLONG == sizeof(long long), "");

  static_assert(INT_SIZEOF_UCHAR == sizeof(unsigned char), "");
  static_assert(INT_SIZEOF_USHRT == sizeof(unsigned short), "");
  static_assert(INT_SIZEOF_UINT == sizeof(unsigned int), "");
  static_assert(INT_SIZEOF_ULONG == sizeof(unsigned long), "");
  static_assert(INT_SIZEOF_ULLONG == sizeof(unsigned long long), "");

  // sanity check
  static_assert(INT_SIZEOF_CHAR == 1, "");
  static_assert(INT_SIZEOF_UCHAR == 1, "");
  static_assert(INT_SIZEOF_SCHAR == 1, "");
}

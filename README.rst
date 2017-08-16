IntSizeof
=========

|travis| |appveyor|

.. |travis| image:: https://travis-ci.org/cgold-examples/fruits.svg?branch=master
  :target: https://travis-ci.org/ruslo/intsizeof/builds
  :alt: Travis

.. |appveyor| image:: https://ci.appveyor.com/api/projects/status/w9hawdn7ykn1yq2r/branch/master?svg=true
  :target: https://ci.appveyor.com/project/ruslo/intsizeof/history
  :alt: AppVeyor

Sizeof of standard types (from `stdint.h and limits.h <http://en.cppreference.com/w/c/types/limits>`__) for preprocessor.

stdint.h:

* INTSIZEOF_PTRDIFF == sizeof(ptrdiff_t)
* INTSIZEOF_SIZE == sizeof(size_t)
* INTSIZEOF_SIG_ATOMIC == sizeof(sig_atomic_t)
* INTSIZEOF_WCHAR == sizeof(wchar_t)
* INTSIZEOF_WINT == sizeof(wint_t)
* INTSIZEOF_CHAR == sizeof(char)

limits.h (signed):

* INTSIZEOF_SCHAR == sizeof(signed char)
* INTSIZEOF_SHRT == sizeof(signed short)
* INTSIZEOF_INT == sizeof(int)
* INTSIZEOF_LONG == sizeof(long)
* INTSIZEOF_LLONG == sizeof(long long)

limits.h (unsigned):

* INTSIZEOF_UCHAR == sizeof(unsigned char)
* INTSIZEOF_USHRT == sizeof(unsigned short)
* INTSIZEOF_UINT == sizeof(unsigned int)
* INTSIZEOF_ULONG == sizeof(unsigned long)
* INTSIZEOF_ULLONG == sizeof(unsigned long long)

Usage
~~~~~

``IntSizeof`` can be installed by
`Hunter package manager <https://github.com/ruslo/hunter/wiki/pkg.intsizeof>`__:

.. code-block:: cmake

  hunter_add_package(Intsizeof)
  find_package(Intsizeof CONFIG REQUIRED)
  add_library(boo boo.cpp)
  target_link_libraries(boo PUBLIC intsizeof::intsizeof)

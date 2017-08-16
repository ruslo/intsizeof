IntSizeof
=========

| mac                                         | linux                                             |
|---------------------------------------------|---------------------------------------------------|
| [![Build Status][master]][repo] | [![Build Status][linux]][repo] |

[master]: https://travis-ci.org/ruslo/intsizeof.png?branch=master
[linux]: https://travis-ci.org/ruslo/intsizeof.png?branch=travis.linux
[repo]: https://travis-ci.org/ruslo/intsizeof

Sizeof of standard types (from [stdint.h and limits.h][1]) for preprocessor.

### stdint.h
* INTSIZEOF_PTRDIFF == sizeof(ptrdiff_t)
* INTSIZEOF_SIZE == sizeof(size_t)
* INTSIZEOF_SIG_ATOMIC == sizeof(sig_atomic_t)
* INTSIZEOF_WCHAR == sizeof(wchar_t)
* INTSIZEOF_WINT == sizeof(wint_t)
* INTSIZEOF_CHAR == sizeof(char)

### limits.h (signed)
* INTSIZEOF_SCHAR == sizeof(signed char)
* INTSIZEOF_SHRT == sizeof(signed short)
* INTSIZEOF_INT == sizeof(int)
* INTSIZEOF_LONG == sizeof(long)
* INTSIZEOF_LLONG == sizeof(long long)

### limits.h (unsigned)
* INTSIZEOF_UCHAR == sizeof(unsigned char)
* INTSIZEOF_USHRT == sizeof(unsigned short)
* INTSIZEOF_UINT == sizeof(unsigned int)
* INTSIZEOF_ULONG == sizeof(unsigned long)
* INTSIZEOF_ULLONG == sizeof(unsigned long long)

# Usage
`IntSizeof` is header only/one file library, usage example:
```cpp
#include <intsizeof.h> // INTSIZEOF_LONG
#include <iostream> // std::cout

int main() {
#if INTSIZEOF_LONG == 4
  std::cout << "sizeof long is 4" << std::endl;
#else
  std::cout << "sizeof long is not 4" << std::endl;
#endif
  return EXIT_SUCCESS;
}
```

# Usage (CMake)
`IntSizeof` library can be installed and imported to other project by `find_package(IntSizeof CONFIG)` command.
In this case project need to link `intsizeof` target:
```bash
> cat CMakeLists.txt
cmake_minimum_required(VERSION 3.0)
project(Boo)

find_package(intsizeof CONFIG REQUIRED)

add_executable(boo boo.cpp)
target_link_libraries(boo PUBLIC intsizeof::intsizeof)
```
* Note that target is INTERFACE library. CMake minimum version is 3.0.

# Usage (Hunter)
`IntSizeof` can be installed by [hunter][3] package manager:
```bash
> cat CMakeLists.txt
cmake_minimum_required(VERSION 3.0)
project(Boo)

include(HunterGate.cmake)
hunter_add_package(IntSizeof)

find_package(IntSizeof CONFIG REQUIRED)
add_library(boo boo.cpp)
target_link_libraries(boo PUBLIC intsizeof::intsizeof)
```
Gate file can be found [here][4].

[1]: http://en.cppreference.com/w/c/types/limits
[2]: https://github.com/ruslo/intsizeof/blob/master/.travis.yml
[3]: https://github.com/ruslo/hunter
[4]: https://github.com/hunter-packages/gate

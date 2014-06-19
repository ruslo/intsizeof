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
* INT_SIZEOF_PTRDIFF == sizeof(ptrdiff_t)
* INT_SIZEOF_SIZE == sizeof(size_t)
* INT_SIZEOF_SIG_ATOMIC == sizeof(sig_atomic_t)
* INT_SIZEOF_WCHAR == sizeof(wchar_t)
* INT_SIZEOF_WINT == sizeof(wint_t)
* INT_SIZEOF_CHAR == sizeof(char)

### limits.h (signed)
* INT_SIZEOF_SCHAR == sizeof(signed char)
* INT_SIZEOF_SHRT == sizeof(signed short)
* INT_SIZEOF_INT == sizeof(int)
* INT_SIZEOF_LONG == sizeof(long)
* INT_SIZEOF_LLONG == sizeof(long long)

### limits.h (unsigned)
* INT_SIZEOF_UCHAR == sizeof(unsigned char)
* INT_SIZEOF_USHRT == sizeof(unsigned short)
* INT_SIZEOF_UINT == sizeof(unsigned int)
* INT_SIZEOF_ULONG == sizeof(unsigned long)
* INT_SIZEOF_ULLONG == sizeof(unsigned long long)

# Usage
`IntSizeof` is header only/one file library, usage example:
```cpp
#include <int_sizeof.h> // INT_SIZEOF_LONG
#include <iostream> // std::cout

int main() {
#if INT_SIZEOF_LONG == 4
  std::cout << "sizeof long is 4" << std::endl;
#else
  std::cout << "sizeof long is not 4" << std::endl;
#endif
  return EXIT_SUCCESS;
}
```

# Usage (CMake)
`IntSizeof` library can be installed and imported to other project by `find_package(IntSizeof CONFIG)` command.
In this case project need to link `int_sizeof` target:
```bash
> cat CMakeLists.txt
cmake_minimum_required(VERSION 3.0)
project(Boo)

find_package(IntSizeof CONFIG REQUIRED)

add_executable(boo boo.cpp)
target_link_libraries(boo int_sizeof)
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
target_link_libraries(boo int_sizeof)
```
Gate file can be found [here][4].

[1]: http://en.cppreference.com/w/c/types/limits
[2]: https://github.com/ruslo/intsizeof/blob/master/.travis.yml
[3]: https://github.com/ruslo/hunter
[4]: https://github.com/hunter-packages/gate

# Copyright (c) 2014, Ruslan Baratov
# All rights reserved.

cmake_minimum_required(VERSION 2.8)
project(IntSizeof)

include_directories("./Source")

add_library(int_sizeof INTERFACE)

# Test is static, not need to run executable, only build
add_executable(test_sizeof "Source/test.cpp")

# Install config
set(INCL_DEST include)
set(CONF_DEST lib/cmake/IntSizeof)

include(CMakePackageConfigHelpers)

target_include_directories(
    int_sizeof
    INTERFACE
    "$<INSTALL_INTERFACE:${INCL_DEST}>"
)

set(config "${CMAKE_CURRENT_BINARY_DIR}/IntSizeofConfig.cmake")

configure_package_config_file(
    "IntSizeofConfig.cmake.in"
    "${config}"
    INSTALL_DESTINATION ${CONF_DEST}
    PATH_VARS CONF_DEST
)

install(TARGETS int_sizeof EXPORT IntSizeofTargets)
install(EXPORT IntSizeofTargets DESTINATION ${CONF_DEST})
install(FILES Source/int_sizeof.h DESTINATION ${INCL_DEST})
install(FILES "${config}" DESTINATION ${CONF_DEST})

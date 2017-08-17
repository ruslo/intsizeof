add_library(intsizeof INTERFACE)
target_include_directories(
    intsizeof INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}>
)

# https://stackoverflow.com/a/3233069/2288008
target_compile_definitions(intsizeof INTERFACE "__STDC_LIMIT_MACROS")

install(
    TARGETS intsizeof
    EXPORT "${targets_export_name}"
    LIBRARY DESTINATION "lib"
    ARCHIVE DESTINATION "lib"
    RUNTIME DESTINATION "bin"
    INCLUDES DESTINATION "${include_install_dir}"
)

install(FILES intsizeof.h DESTINATION ${include_install_dir})

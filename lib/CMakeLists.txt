add_library(intsizeof INTERFACE)
target_include_directories(
    intsizeof INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}>
)

install(
    TARGETS intsizeof
    EXPORT "${targets_export_name}"
    LIBRARY DESTINATION "lib"
    ARCHIVE DESTINATION "lib"
    RUNTIME DESTINATION "bin"
    INCLUDES DESTINATION "${include_install_dir}"
)

install(FILES intsizeof.h DESTINATION ${include_install_dir})

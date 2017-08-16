add_executable(intsizeof_simple main.cpp)
target_link_libraries(intsizeof_simple PUBLIC intsizeof)

add_test(NAME intsizeof_simple COMMAND intsizeof_simple)

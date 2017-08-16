add_executable(intsizeof_simple main.cpp)
target_link_libraries(intsizeof_simple PUBLIC intsizeof)

if(IOS OR ANDROID)
  # do not run tests, just build example
else()
  add_test(NAME intsizeof_simple COMMAND intsizeof_simple)
endif()

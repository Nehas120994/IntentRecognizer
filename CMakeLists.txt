cmake_minimum_required(VERSION 3.7)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
project(intent VERSION 1.0)

include_directories(./src)

add_library(IntentAnalyzerImpl STATIC 
src/IntentAnalyzer.h
src/IntentAnalyzer.cpp
src/IntentCollection.h
)

add_executable(IntentAnalyzer main.cpp )
target_link_libraries(IntentAnalyzer IntentAnalyzerImpl)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  Intent_test
  test/IntentAnalyzer_test.cpp
)
target_link_libraries(Intent_test
  gtest_main IntentAnalyzerImpl
)

include(GoogleTest)
gtest_discover_tests(Intent_test)

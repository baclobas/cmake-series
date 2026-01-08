cmake_minimum_required(VERSION 4.1)
project(HelloApp 
    VERSION 0.0.1
    DESCRIPTION "A simple Hello World application"
    LANGUAGES CXX)

enable_testing()

#add_executable(HelloAppBinary main.cpp src/operations.cpp src/dog.cpp)
file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(HelloAppBinary main.cpp ${SRC_FILES})


target_compile_features(HelloAppBinary PRIVATE cxx_std_20)
target_include_directories(HelloAppBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_test(
  NAME Hello
  COMMAND HelloAppBinary
)

#[=[ set_target_properties(HelloAppBinary PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)
    ]=]

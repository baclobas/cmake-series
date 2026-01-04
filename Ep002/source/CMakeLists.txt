cmake_minimum_required(VERSION 4.1)
project(HelloApp 
    VERSION 0.0.1
    DESCRIPTION "A simple Hello World application"
    LANGUAGES CXX)

add_executable(HelloAppBinary main.cpp)

#[[
target_compile_features(HelloAppBinary PRIVATE cxx_std_20)
]]
set_target_properties(HelloAppBinary PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)
cmake_minimum_required(VERSION 3.15)
project(rxcpp_demo)

set(CMAKE_CXX_STANDARD 14)

include(FetchContent)
include(cmake/RxCpp.cmake)

# target rxcpp_demo
add_executable(rxcpp_demo main.cpp)
target_link_libraries(rxcpp_demo RxCpp)
target_include_directories(rxcpp_demo PUBLIC ${rxcpp_SOURCE_DIR}/Rx/v2/src)
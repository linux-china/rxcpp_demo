FetchContent_Declare(rxcpp
        GIT_REPOSITORY https://github.com/ReactiveX/RxCpp
        GIT_SHALLOW TRUE # Abseil adheres to live-at-head
        )

FetchContent_GetProperties(rxcpp)
if (NOT rxcpp_POPULATED)
    message(STATUS "Populating build dependency: rxcpp")
    FetchContent_Populate(rxcpp)
    add_subdirectory(${rxcpp_SOURCE_DIR} ${rxcpp_BINARY_DIR})
endif ()
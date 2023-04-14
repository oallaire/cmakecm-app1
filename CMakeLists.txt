cmake_minimum_required(VERSION 3.22)
project(cmakecm-app1 LANGUAGES C)

include(FetchContent)
FetchContent_GetProperties(cmakecm-lib)
if (NOT cmakecm-lib_POPULATED)
    FetchContent_Declare(
            cmakecm-lib
            GIT_REPOSITORY https://github.com/oallaire/cmakecm-lib.git
            GIT_TAG        ce5b0d18acf1c0c136131c2ad7ddc3d806ab2d91
    )
    FetchContent_MakeAvailable(cmakecm-lib)
endif ()

add_executable(${PROJECT_NAME} main.c)
target_link_libraries(${PROJECT_NAME} cmakecm::lib)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)

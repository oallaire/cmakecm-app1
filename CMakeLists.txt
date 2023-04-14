cmake_minimum_required(VERSION 3.24)
project(cmakecm-app1 LANGUAGES C)

include(FetchContent)
FetchContent_GetProperties(cmakecm-lib)
if (NOT cmakecm-lib_POPULATED)
    FetchContent_Declare(
            cmakecm-lib
            GIT_REPOSITORY https://github.com/oallaire/cmakecm-lib.git
            GIT_TAG        2c25c7af64b607b5bc0fea6f14b04464617c47c6
    )
    FetchContent_MakeAvailable(cmakecm-lib)
endif ()

add_executable(${PROJECT_NAME} main.c)
target_link_libraries(${PROJECT_NAME} cmakecm::lib)

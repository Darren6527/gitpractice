# CMakeList.txt: KCircle 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.16)

project ("KCircleMulti")

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()

include(../KCircle/KCircle.cmake)

# 将源代码添加到此项目的可执行文件。
add_executable (${PROJECT_NAME} "main.cpp" ${SOURCES_FILE})

# 向工程添加多个特定头文件的搜索路径  -I
target_include_directories(${PROJECT_NAME} PRIVATE ${HEADER_DIR})

# 显式添加头文件，使其在IDE中可见
target_sources(${PROJECT_NAME} PRIVATE ${HEADERS_FILE})

# call "D:\VS\IDE\VC\Auxiliary\Build\vcvarsamd64_x86.bat"
# mkdir build & cd build
# cmake  -G "Visual Studio 16 2019"  -A x64 -DCMAKE_BUILD_TYPE=Debug ../KCircleMain
# msbuild /m KCircleMulti.sln /p:Platform=x64 /p:Configuration=Debug
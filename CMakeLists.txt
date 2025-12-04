cmake_minimum_required(VERSION 3.16)

project(HWs LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(HWs main.cpp
    hw1129.h hw1129.cpp
    resources/1129Example.txt
    resources/1129Result.txt
)

include(GNUInstallDirs)
install(TARGETS HWs
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

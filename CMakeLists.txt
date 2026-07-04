cmake_minimum_required(VERSION 3.16)

project(HWs LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(HWs
    main.cpp
    common.h

    29112026/hw1129.h
    29112026/hw1129.cpp
    29112026/resources/1129Example.txt
    29112026/resources/1129Result.txt

    29012025/hw29012025.h
    29012025/hw29012025.cpp

    05022026/hw05022026.h
    05022026/hw05022026.cpp

    contacts/person.h
    contacts/person.cpp
    contacts/contacts.h
    contacts/contacts.cpp

    30032026/person.h
    30032026/person.cpp

)

include(GNUInstallDirs)
install(TARGETS HWs
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

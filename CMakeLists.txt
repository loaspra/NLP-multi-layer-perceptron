cmake_minimum_required(VERSION 3.0.0)
project(EFI VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

set(SOURCES
    main.cpp
    menu.cpp
)

set(HEADERS
    menu.h
)


add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
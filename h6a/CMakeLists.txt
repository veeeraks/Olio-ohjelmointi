cmake_minimum_required(VERSION 3.16)

project(h6a LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Qt automoc (pakollinen Q_OBJECT:lle)
set(CMAKE_AUTOMOC ON)

# Qt6
find_package(Qt6 REQUIRED COMPONENTS Core)

add_executable(h6a
    main.cpp
    myclass.h
    myclass.cpp
)

target_link_libraries(h6a
    Qt6::Core
)

include(GNUInstallDirs)
install(TARGETS h6a
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

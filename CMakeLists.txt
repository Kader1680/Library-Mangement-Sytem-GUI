cmake_minimum_required(VERSION 3.10)
project(LibrarySystem)

# used cpp version 17
set(CMAKE_CXX_STANDARD 17)

# Find GTK
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK REQUIRED gtk+-3.0)

# Add Include Directories
include_directories(${GTK_INCLUDE_DIRS})
link_directories(${GTK_LIBRARY_DIRS})

# Suppress Unused Warnings
add_definitions(${GTK_CFLAGS_OTHER})

# Add Source Files
add_executable(library_system main.cpp login.cpp register.cpp book.cpp)

# Link GTK to Project
target_link_libraries(library_system ${GTK_LIBRARIES})

cmake_minimum_required(VERSION 3.10)

# set project name
project(No_name_proj)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add sqlite3
find_package (SQLite3)

include_directories(${SQLite3_INCLUDE_DIRS})
target_link_libraries (${OUT_TARGET} ${SQLite3_LIBRARIES})
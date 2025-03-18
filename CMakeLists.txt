cmake_minimum_required(VERSION 3.28)
project(Hello-world VERSION 1.0.0)
set(CMAKE_CXX_STANDARD 20)
add_library(utilities
            source/utilities.cpp
            source/linkedlist.cpp
            source/tree.cpp
	    source/hackerRank.cpp
            source/sortingalgos.cpp
)
target_include_directories(utilities PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
add_executable(program
                source/main.cpp
                )
target_link_libraries(program
        utilities
)

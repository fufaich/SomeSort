cmake_minimum_required(VERSION 3.26.4)

project(SomeSort)

set(SOURCES
        main.cpp 
)       

set(Headers
        SomeSort.h
)

add_executable(SomeSort ${SOURCES} ${Headers})

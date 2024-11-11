cmake_minimum_required(VERSION 3.29)
project(DataStruct)

set(CMAKE_CXX_STANDARD 98)

add_executable(DataStruct main.cpp
        SequenceList/SequenceListStatic.h
        SequenceList/SequenceListStatic.cpp
        SequenceList/SequenceListDynamic.h
        SequenceList/SequenceListDynamic.cpp)

cmake_minimum_required(VERSION 3.29)
project(DataStruct)

set(CMAKE_CXX_STANDARD 98)

add_executable(DataStruct main.cpp
        SequenceList/SequenceListStatic.h
        SequenceList/SequenceListStatic.cpp
        SequenceList/SequenceListDynamic.h
        SequenceList/SequenceListDynamic.cpp
        LinkList/SLinkListH.cpp
        LinkList/SLinkListH.h
        LinkList/SLinkList.cpp
        LinkList/SLinkList.h
        LinkList/SLoopLinkListH.h
        LinkList/SLoopLinkListH.cpp
        LinkList/SLoopLinkList.cpp
        LinkList/SLoopLinkList.h
        LinkList/DLinkListH.cpp
        LinkList/DLinkListH.h
        LinkList/DLinkList.cpp
        LinkList/DLinkList.h
        LinkList/DLoopLinkListH.cpp
        LinkList/DLoopLinkListH.h
        LinkList/DLoopLinkList.cpp
        LinkList/DLoopLinkList.h
        LinkList/StaticLinkList.cpp
        LinkList/StaticLinkList.h
        Stack/SqStack.cpp
        Stack/SqStack.h
        Stack/LinkStack.cpp
        Stack/LinkStack.h
        Queue/SqQueue.cpp
        Queue/SqQueue.h
        Queue/LoopQueue1.cpp
        Queue/LoopQueue1.h
        Queue/LoopQueue2.cpp
        Queue/LoopQueue2.h
        Queue/LoopQueue3.cpp
        Queue/LoopQueue3.h
        StackApplication/ReversePolishNotation.cpp
        StackApplication/ReversePolishNotation.h
        String/SString.h
        String/SString.cpp)

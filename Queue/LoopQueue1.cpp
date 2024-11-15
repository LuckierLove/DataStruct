//
// Created by MoonDrinkWind on 24-11-14.
//

#include "LoopQueue1.h"

#include <cstdio>

void InitLoopQueue1(Queue &S) {
    S.front = 0;
    S.rear = 0;
}

void DestroyLoopQueue1(Queue &S) {
    S.rear = -1;
    for(int i = 0; i < MaxSize; i++) {
        S.data[i] = -1;
    }
}

bool EnLoopQueue1(Queue &S, int e) {
    if((S.rear + 1) % MaxSize == S.front) return false;
    S.data[S.rear] = e;
    S.rear = (S.rear + 1) % MaxSize;
    return true;
}

bool DeLoopQueue1(Queue &S, int &e) {
    if(LoopQueue1Empty(S)) return false;
    e = S.data[S.front];
    S.front = (S.front + 1) % MaxSize;
    return true;
}

bool LoopQueue1Empty(Queue S) {
    return S.front == S.rear;
}

bool GetLoopQueue1Top(Queue S, int &e) {
    if(LoopQueue1Empty(S)) return false;
    e = S.data[S.front];
    return true;
}

void PrintLoopQueue1(Queue S) {
    int i = S.front;
    printf("从头到尾打印队列\n");
    while((i + 1) % MaxSize != (S.rear + 1) % MaxSize) {
        printf("[%d] - [%d]\n", i, S.data[i]);
        i++;
    }
}



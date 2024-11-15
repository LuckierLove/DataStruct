//
// Created by MoonDrinkWind on 24-11-15.
//

#include "LoopQueue2.h"

#include <cstdio>

void InitLoopQueue2(Queue &S) {
    S.front = 0;
    S.rear = 0;
    S.length = 0;
}

void DestroyLoopQueue2(Queue &S) {
    S.length = 0;
}

bool EnLoopQueue2(Queue &S, int e) {
    if(S.length == MaxSize) return false;
    S.data[S.rear] = e;
    S.rear = (S.rear + 1) % MaxSize;
    S.length++;
    return true;
}

bool DeLoopQueue2(Queue &S, int &e) {
    if(LoopQueue2Empty(S)) return false;
    e = S.data[S.front];
    S.front = (S.front + 1) % MaxSize;
    S.length--;
    return true;
}

bool LoopQueue2Empty(Queue S) {
    return S.length == 0;
}

bool GetLoopQueue2Top(Queue S, int &e) {
    if(LoopQueue2Empty(S)) return false;
    e = S.data[S.front];
    return true;
}

void PrintLoopQueue2(Queue S) {
    int i = S.front;
    printf("自上而下打印\n");
    for(int j = 0; j < S.length; j++) {
        printf("[%d]---[%d]\n",j, S.data[i]);
        i = (i + 1) % MaxSize;
    }
}

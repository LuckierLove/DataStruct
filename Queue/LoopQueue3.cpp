//
// Created by MoonDrinkWind on 24-11-15.
//

#include "LoopQueue3.h"

#include <cstdio>

void InitLoopQueue3(Queue &S) {
    S.front = 0;
    S.rear = 0;
    S.tag = 0;
}

void DestroyLoopQueue3(Queue &S) {
    S.front = 0;
    S.rear = 0;
    S.tag = 1;
}

bool EnLoopQueue3(Queue &S, int e) {
    if(S.front == S.rear && S.tag == 1) return false; // 队列满
    S.data[S.rear] = e;
    S.rear = (S.rear + 1) % MaxSize;
    S.tag = 1;
    return true;
}

bool DeLoopQueue3(Queue &S, int &e) {
    if(LoopQueue3Empty(S)) return false;
    e = S.data[S.front];
    S.front = (S.front + 1) % MaxSize;
    S.tag = 0;
    return true;
}

bool LoopQueue3Empty(Queue S) {
    return S.front == S.rear && S.tag == 0;
}

bool GetLoopQueue3Top(Queue S, int &e) {
    if(LoopQueue3Empty(S)) return false;
    e =  S.data[S.front];
    return true;
}

void PrintLoopQueue3(Queue S) {
    if(LoopQueue3Empty(S)) return;
    int i = S.front, j = 0;
    if(i == S.rear && S.tag == 1) {
        printf("[%d]---[%d]\n", j, S.data[i]);
        i = (i+1) % MaxSize;
        j++;
    }
    while(i != S.rear) {
        printf("[%d]---[%d]\n", j, S.data[i]);
        i = (i+1) % MaxSize;
        j++;
    }
}

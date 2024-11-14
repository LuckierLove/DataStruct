//
// Created by MoonDrinkWind on 24-11-14.
//

#include "SqQueue.h"

#include <cstdio>

void InitSqQueue(Queue &S) {
    S.front = 0;
    S.rear = 0;
}

void DestroySqQueue(Queue &S) {
    S.front = -1;
    S.rear = -1;
    for(int i = 0; i < MaxSize; i++) {
        S.data[i] = -1;
    }
}

bool EnSqQueue(Queue &S, int e) {
    if(S.rear == MaxSize - 1) return false;
    S.data[S.rear++] = e;
    return true;
}

bool DeSqQueue(Queue &S, int &e) {
    if(SqQueueEmpty(S)) return false;
    e = S.data[S.front++];
    return true;
}

bool SqQueueEmpty(Queue S) {
    return S.front == S.rear;
}

bool GetSqQueueTop(Queue S, ElemType &e) {
    if(SqQueueEmpty(S)) return false;
    e = S.data[S.front];
    return true;
}

void PrintSqQueue(Queue S) {
    printf("从头到尾打印\n");
    int i = S.front;
    while(i != S.rear) {
        printf("[%d]\n", S.data[i]);
        i++;
    }
}

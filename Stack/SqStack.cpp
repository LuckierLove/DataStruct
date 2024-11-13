//
// Created by MoonDrinkWind on 24-11-13.
//

#include "SqStack.h"

#include <cstdio>

void InitSqStack(SqStack &S) {
    S.top = 0; // 指向下一个空位
}

void DestroySqStack(SqStack &S) {
    while(!SqStackEmpty(S)) {
        PopSqStack(S);
    }
}

bool PushSqStack(SqStack &S, int e) {
    if(S.top >= MaxSize) return false;
    S.data[S.top++] = e;
    return true;
}

ElemType PopSqStack(SqStack &S) {
    return S.data[--S.top];
}

ElemType GetSqStackTop(SqStack S) {
    return S.data[S.top - 1];
}

bool SqStackEmpty(SqStack S) {
    return S.top == 0;
}

void PrintSqStack(SqStack S) {
    printf("自下而上打印栈\n");
    for(int i = 0; i < S.top; i++) {
        printf("%d\n", S.data[i]);
    }
}


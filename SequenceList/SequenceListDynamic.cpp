//
// Created by MoonDrinkWind on 24-11-11.
//
#include "SequenceListDynamic.h"
#include <cstdio>
#include <cstdlib>

bool InitSqDList(SqList &L) {
    L.length = 0;
    L.maxSize = InitSize;
    L.data = (ElemType*)malloc(sizeof(ElemType) * InitSize);

    return L.data == NULL;
}

void DestroySqDList(SqList &L) {
    L.length = 0;
    L.maxSize = 0;
    free(L.data);
}

bool SqDListInsert(SqList &L, int i, ElemType e) {
    if(i < 1 || i > L.length + 1) return false;
    if(L.length >= L.maxSize) return false;

    // 后移 从位序i开始的所有元素
    for(int j = L.length; j >= i; j--) {
        L.data[j] = L.data[j - 1];
    }

    L.data[i - 1] = e;
    L.length++;

    return true;
}

bool SqDListDelete(SqList &L, int i, ElemType &e) {
    if(i < 1 || i > L.length) return false;

    e = L.data[i - 1];

    // 前移 从位序i开始的所有元素
    for(int j = i; j < L.length; j++) {
        L.data[j - 1] = L.data[j];
    }

    L.length--;

    return true;
}

ElemType GetSqDListElem(SqList L, int i) {
    return L.data[i-1];
}

int LocateSqDListElem(SqList L, ElemType e) {
    for(int i = 0; i < L.length; i++) {
        if(L.data[i] == e) return i + 1;
    }

    return -1;
}

bool SqDListEmpty(SqList L) {
    return L.length == 0;
}

void PrintSqDList(SqList L) {
    for(int i = 0; i < L.length; i++) {
        printf("[%d]---[%d]\n", i + 1, L.data[i]);
    }
}

int SqDListLength(SqList L) {
    return L.length;
}
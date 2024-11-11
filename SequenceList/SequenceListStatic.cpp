//
// Created by MoonDrinkWind on 24-11-11.
//
#include "SequenceListStatic.h"
#include <cstdio>

void InitSqSList(SqList &L) {
    L.length = 0;
}

void DestroySqSList(SqList &L) {
    for (int i = 0; i < MaxSize; i++) {
        L.data[i] = 0;
    }
    L.length = 0;
}

bool SqSListInsert(SqList &L, int i, ElemType e) {
    if(i < 1 || i > L.length + 1) return false;
    if(L.length >= MaxSize) return false;

    // 后移 从位序i开始的所有元素
    for (int j = L.length; j >= i; j--) {
        L.data[j] = L.data[j-1];
    }

    L.data[i - 1] = e;
    L.length++;

    return true;
}

bool SqSListDelete(SqList &L, int i, ElemType &e) {
    if(i < 1 || i > L.length) return false;
    e = L.data[i - 1];

    // 前移 从位序i开始的所有元素
    for(int j = i; j < L.length; j++) {
        L.data[j - 1] = L.data[j];
    }

    L.length--;
    return true;
}

ElemType GetSqSListElem(SqList L, int i) {
    return L.data[i - 1];
}

int LocateSqSListElem(SqList L, ElemType e) {

    for(int i = 0; i < L.length; i++) {
        if(L.data[i] == e) return i + 1;
    }
    return -1;

}

bool SqSListEmpty(SqList L) {
    return L.length == 0;
}

void PrintSqSList(SqList L) {
    for (int i = 0; i < L.length; i++) {
        printf("[%d]----[%d]\n", i + 1, L.data[i]);
    }
}

int SqSListLength(SqList L) {
    return L.length;
}
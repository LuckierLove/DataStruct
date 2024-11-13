//
// Created by MoonDrinkWind on 24-11-13.
//
#include "StaticLinkList.h"
#include <cstdlib>
#include <cstdio>


void InitStaticLinkList(LinkList L) {
    for(int i = 0; i < MaxSize; i++) {
        L[i].data = NULL;
        L[i].next = -1;
    }
}

void DestroyStaticLinkList(LinkList L) {
    for(int i = 0; i < MaxSize; i++) {
        L[i].data = NULL;
        L[i].next = -1;
    }
    L[0].next = -1;
}

bool StaticLinkListInsert(LinkList L, int i, ElemType e) {
    if(i < 1 || i >= MaxSize) return false;
    int s = GetStaticLinkListElem(L, i - 1);
    int l = LocateStaticLinkListEmpty(L);
    if(l == -1)return false;
    L[l].data = e;
    L[l].next = L[s].next;
    L[s].next = l;
    return true;
}

bool StaticLinkListDelete(LinkList L, int i, int &e) {
    if(i < 1 || i > MaxSize) return false;
    int p = GetStaticLinkListElem(L, i - 1);
    if(L[p].next == -1) return false;

    int s = GetStaticLinkListElem(L, i);

    L[p].next = L[s].next;
    e = L[s].data;
    L[s].data = NULL;
    L[s].next = -1;
    return true;
}

int GetStaticLinkListElem(LinkList L, int i) {
    if(i == 0) return 0;
    int j = 0;
    Node p = L[0];
    while(p.next != -1 && j < i - 1) {
        p = L[p.next];
        j++;
    }
    return p.next;
}

int LocateStaticLinkListElem(LinkList L, ElemType e) {
    int i = 0;
    Node p = L[0];
    while(p.next != -1) {
        p = L[p.next];
        i++;
        if(p.data == e) return i;
    }
    return -1;
}

int StaticLinkListLength(LinkList L) {
    int j = 0;
    Node p = L[0];
    while(p.next != -1) {
        p = L[p.next];
        j++;
    }
    return j;
}

bool StaticLinkListEmpty(LinkList L) {
    return L[0].next == -1;
}

void PrintStaticLinkList(LinkList L) {
    int i = 0;
    Node p = L[0];
    while(p.next != -1) {
        p = L[p.next];
        i++;
        printf("[%d]---[%d]\n", i , p.data);
    }
}

int LocateStaticLinkListEmpty(LinkList L) {
    for(int j = 1; j < MaxSize; j++) {
        if(L[j].data == NULL)return j;
    }
    return -1;
}

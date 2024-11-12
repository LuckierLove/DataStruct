//
// Created by MoonDrinkWind on 24-11-12.
//

#include "SLoopLinkListH.h"
#include <cstdlib>
#include <cstdio>

bool InitSLoopLinkListH(LinkList &L) {
    L = (LNode *) malloc(sizeof(LNode));
    L->data = NULL;
    L->next = L;
    return true;
}

bool DestroySLoopLinkListH(LinkList &L) {
    while(L->next != L) {
        ElemType e;
        SLoopLinkListHDelete(L, 1, e);
    }

    free(L);
    return true;
}

bool SLoopLinkListHInsert(LinkList &L, int i, ElemType e) {
    if(i < 1) return false;
    LNode *p = GetSLoopLinkListHElem(L, i - 1);
    LNode *s = (LNode*)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;
}

bool SLoopLinkListHDelete(LinkList &L, int i, int &e) {
    if(i < 1) return false;
    LNode *p = GetSLoopLinkListHElem(L, i - 1);
    LNode *s = p->next;
    e = s->data;
    p->next = s->next;
    free(s);
    return true;
}

LNode *GetSLoopLinkListHElem(LinkList L, int i) {
    int j = 0;
    LNode *p = L;
    while(p->next != L && j < i) {
        p = p->next;
        j++;
    }
    return p;
}

LNode *LocateSLoopLinkListHElem(LinkList L, int e) {
    LNode *p = L;
    while(p->next != L) {
        p = p->next;
        if(p->data == e) return p;
    }
    return NULL;
}

bool SLoopLinkListHEmpty(LinkList L) {
    return L->next == L;
}

int SLoopLinkListHLength(LinkList L) {
    LNode *p = L;
    int len = 0;
    while(p->next != L) {
        p = p->next;
        len++;
    }
    return len;
}

void PrintSLoopLinkListH(LinkList L) {
    int i = 0;
    LNode *p = L;
    while(p->next != L) {
        p = p->next;
        i++;
        printf("[%d]---[%d]\n", i, p->data);
    }
}








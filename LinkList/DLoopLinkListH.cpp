//
// Created by MoonDrinkWind on 24-11-12.
//

#include "DLoopLinkListH.h"
#include <cstdio>
#include <cstdlib>

bool InitDLoopLinkListH(LinkList &L) {
    L = (LNode *) malloc(sizeof(LNode));
    if (L == NULL) return false;

    L->next = L;
    L->prior = L;

    return true;
}

bool DestroyDLoopLinkListH(LinkList &L) {
    LNode *p = L;
    while (p->next != L) {
        ElemType e;
        DLoopLinkListHDelete(L, 1, e);
    }
    free(L);
    return true;
}

bool DLoopLinkListHInsert(LinkList &L, int i, ElemType e) {
    if(i < 1) return false;
    LNode *p = GetDLoopLinkListHElem(L, i - 1);
    if (p == NULL) return false;

    LNode *s = (LNode *) malloc(sizeof(LNode));
    s->data = e;

    s->next = p->next;
    p->next->prior = s;

    p->next = s;
    s->prior = p;
    return true;
}

bool DLoopLinkListHDelete(LinkList &L, int i, ElemType &e) {
    if(i < 1) return false;
    LNode *p = GetDLoopLinkListHElem(L, i - 1);
    if (p == NULL) return false;
    LNode *s = p->next;
    e = s->data;
    p->next = s->next;
    s->next->prior = p;

    free(s);
    return true;
}

LNode *GetDLoopLinkListHElem(LinkList L, int i) {
    int j = 0;
    LNode *p = L;
    while (p->next != L && j < i) {
        p = p->next;
        j++;
    }

    return p;
}

LNode *LocateDLoopLinkListHElem(LinkList L, ElemType e) {
    LNode *p = L;
    while (p->next != L) {
        p = p->next;
        if (p->data == e) return p;
    }

    return NULL;
}

bool DLoopLinkListHEmpty(LinkList L) {
    return L->next == L;
}


int DLoopLinkListHLength(LinkList L) {
    int len = 0;
    LNode *p = L;
    while (p->next != L) {
        p = p->next;
        len++;
    }

    return len;
}

void PrintDLoopLinkListH(LinkList L) {
    int j = 0;
    LNode *p = L;
    while (p->next != L) {
        p = p->next;
        j++;
        printf("[%d]---[%d]\n", j, p->data);
    }
}

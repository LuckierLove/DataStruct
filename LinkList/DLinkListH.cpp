//
// Created by MoonDrinkWind on 24-11-12.
//

#include "DLinkListH.h"
#include <cstdio>
#include <cstdlib>

bool InitDLinkListH(LinkList &L) {
    L = (LNode*) malloc(sizeof(LNode));
    L->next = NULL;
    L->prior = NULL;
    return true;
}

bool DestroyDLinkListH(LinkList &L) {
    while(L->next != NULL) {
        ElemType e;
        DLinkListHDelete(L, 1, e);
    }
    free(L);
    return true;
}

bool DLinkListHInsert(LinkList &L, int i, int e) {
    if(i < 1) return false;

    LNode *p = GetDLinkListHElem(L, i - 1);
    if(p == NULL) return false;

    LNode *s = (LNode*) malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    if(p ->next != NULL) p->next->prior = s;
    p->next = s;
    s->prior = p;
    return true;
}


bool DLinkListHDelete(LinkList &L, int i, int &e) {
    if(i < 1) return false;

    LNode *p = GetDLinkListHElem(L, i - 1);
    LNode *s = p->next;

    if(p == NULL || s == NULL) return false;

    e = s->data;

    p->next = s->next;
    if(s->next != NULL) s->next->prior = p;

    free(s);
    return true;
}

LNode *GetDLinkListHElem(LinkList L, int i) {
    int j = 0;
    LNode *p = L;
    while(p->next != NULL && j < i) {
        p = p->next;
        j++;
    }

    return p;
}

LNode *LocateDLinkListHElem(LinkList L, ElemType e) {
    LNode *p = L;
    while(p->next != NULL) {
        p = p->next;
        if(p->data == e) return p;
    }

    return NULL;
}

int DLinkListHLength(LinkList L) {
    int len = 0;
    LNode *p = L;
    while(p->next != NULL) {
        p = p->next;
        len++;
    }

    return len;
}

bool DLinkListHEmpty(LinkList L) {
    return L->next == NULL;
}

void PrintDLinkListH(LinkList L) {
    int i = 0;
    LNode *p = L;
    while(p->next != NULL) {
        p = p->next;
        i++;
        printf("[%d]---[%d]\n", i, p->data);
    }
}
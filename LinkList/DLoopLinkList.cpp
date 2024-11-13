//
// Created by MoonDrinkWind on 24-11-13.
//

#include "DLoopLinkList.h"
#include <cstdio>
#include <cstdlib>

bool InitDLoopLinkList(LinkList &L) {
    L = NULL;
    return true;
}

bool DestroyDLoopLinkList(LinkList &L) {
    LNode *p = L;
    while(p != NULL) {
        LNode *n = p->next;
        p = n;
        free(p);
    }
    return true;
}

bool DLoopLinkListInsert(LinkList &L, int i, ElemType e) {
    if(i < 1 || (DLoopLinkListEmpty(L) && i != 1)) return false;

    if(i == 1 && DLoopLinkListEmpty(L)) {
            LNode *s = (LNode *)malloc(sizeof(LNode));
            if(s == NULL) return false;
            s->data = e;
            s->next = s;
            s->prior = s;
            L = s;
        return true;
    }

    LNode *p = GetDLoopLinkListElem(L, i);
    LNode *s = (LNode *)malloc(sizeof(LNode));
    if(s == NULL) return false;
    s->data = e;
    p->prior->next = s;
    s->prior = p->prior;

    s->next = p;
    p->prior = s;

    if(i == 1) L = s;

    return true;
}

bool DLoopLinkListDelete(LinkList &L, int i, ElemType &e) {
    if(i < 1 || DLoopLinkListEmpty(L)) return false;

    if(i == 1 && DLoopLinkListLength(L) == 1) {
        free(L);
        L = NULL;
        return true;
    }

    LNode *p = GetDLoopLinkListElem(L, i - 1);
    LNode *s = p->next;

    e = s->data;

    p->next = s->next;
    s->next->prior = p;

    free(s);
    return true;
}

LNode *GetDLoopLinkListElem(LinkList L, int i) {
    if(DLoopLinkListEmpty(L)) return NULL;
    int j = 1;
    LNode *p = L;
    while(p->next != L && j < i) {
        p = p->next;
        j++;
    }

    return p;
}

LNode *LocateDLoopLinkListElem(LinkList L, ElemType e) {
    if(DLoopLinkListEmpty(L)) return NULL;
    LNode *p = L;
    while(p->next != L) {
        if(p->data == e) return p;
        p = p->next;
    }

    return NULL;
}

int DLoopLinkListLength(LinkList L) {
    if(DLoopLinkListEmpty(L)) return 0;
    int len = 1;
    LNode *p = L;
    while(p->next != L) {
        p = p->next;
        len++;
    }

    return len;
}

bool DLoopLinkListEmpty(LinkList L) {
    return L == NULL;
}

void PrintDLoopLinkList(LinkList L) {
    if(DLoopLinkListEmpty(L)) return;
    int j = 1;
    LNode *p = L;
    printf("[%d]---[%d]\n", j, p->data);
    p = p->next;
    while(p != L) {
        printf("[%d]---[%d]\n", j, p->data);
        p = p->next;
        j++;
    }
}






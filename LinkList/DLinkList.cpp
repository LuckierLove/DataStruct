//
// Created by MoonDrinkWind on 24-11-12.
//
#include "DLinkList.h"
#include <cstdio>
#include <cstdlib>

bool InitDLinkList(LinkList &L) {
    L = NULL;
    return true;
}

bool DestroyDLinkList(LinkList &L) {
    while(L != NULL) {
        ElemType e;
        DLinkListDelete(L, 1, e);
    }
    free(L);
    return true;
}

bool DLinkListInsert(LinkList &L, int i, ElemType e) {
    if(i < 1) return false;

    if(i == 1) {
       if(DLinkListEmpty(L)) {
           L = (LNode*)malloc(sizeof(LNode));
           L->prior = NULL;
           L->next = NULL;
           L->data = e;
           return true;
       }
       LNode *s = (LNode*)malloc(sizeof(LNode));
       s->prior = NULL;
       s->next = L;
       L->prior = s;
       s->data = e;
       L = s;
       return true;
    }

    LNode *p = GetDLinkListElem(L, i - 1);
    if(p == NULL) return false;

    LNode *s = (LNode*) malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    if(p ->next != NULL) p->next->prior = s;
    p->next = s;
    s->prior = p;
    return true;
}


bool DLinkListDelete(LinkList &L, int i, int &e) {
    if(i < 1) return false;

    if(DLinkListLength(L) == 1 && i == 1) {
        free(L);
        L = NULL;
        return true;
    }

    LNode *p = GetDLinkListElem(L, i - 1);
    LNode *s = p->next;

    if(p == NULL || s == NULL) return false;

    e = s->data;

    p->next = s->next;
    if(s->next != NULL) s->next->prior = p;

    free(s);
    return true;
}

LNode *GetDLinkListElem(LinkList L, int i) {
    int j = 1;
    LNode *p = L;

    while(p->next != NULL && j < i) {
        p = p->next;
        j++;
    }

    return p;
}

LNode *LocateDLinkListElem(LinkList L, ElemType e) {
    LNode *p = L;
    while(p != NULL) {
        p = p->next;
        if(p->data == e) return p;
    }

    return NULL;
}

int DLinkListLength(LinkList L) {
    if(DLinkListEmpty(L)) return 0;
    int len = 0;
    LNode *p = L;
    while(p != NULL) {
        p = p->next;
        len++;
    }

    return len;
}

bool DLinkListEmpty(LinkList L) {
    return L == NULL;
}

void PrintDLinkList(LinkList L) {
    int i = 1;
    LNode *p = L;
    while(p != NULL) {
        printf("[%d]---[%d]\n", i, p->data);
        p = p->next;
        i++;
    }
}
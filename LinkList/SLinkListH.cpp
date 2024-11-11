//
// Created by MoonDrinkWind on 24-11-11.
//

#include "SLinkListH.h"
#include <cstdlib>
#include <cstdio>

bool InitSLinkListH(LinkList &L) {
    L = (LNode*) malloc(sizeof(LNode));
    if(L == NULL) return false;
    L->next = NULL;
    L->data = NULL;
    return true;
}

bool DestroySLinkListH(LinkList &L) {
    // 将头节点后面所有的节点删除
    while(L->next != NULL) {
        int e;
        SLinkListHDelete(L, 1, e);
    }
    free(L);
    return true;
}

bool SLinkListHInsert(LinkList &L, int i, ElemType e) {
    if(i < 1) return false;

    LNode *p = GetSLinkListHElem(L, i - 1);

    if(p == NULL) return false;

    LNode *s = (LNode*)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;
}

bool SLinkListHDelete(LinkList &L, int i, int &e) {
    if(i < 1) return false;

    LNode *p = GetSLinkListHElem(L, i - 1); // 获取前驱节点
    LNode *s = p->next;

    if(p == NULL || s == NULL) return false;
    e = s->data;
    p->next = s->next;
    free(s);
    return true;
}

LNode *LocateSLinkListHElem(LinkList L, ElemType e) {
    LNode *p = L->next;
    while(p != NULL) {
        if(p->data == e) return p;
        p = p->next;
    }
    return NULL;
}

LNode *GetSLinkListHElem(LinkList L, int i) {
    int j = 0;
    LNode *p = L;
    while(p != NULL && j < i) {
        p = p->next;
        j++;
    }

    return p;
}



bool SLinkListHEmpty(LinkList L) {
    return L->next == NULL;
}

int SLinkListHLength(LinkList L) {
    int length = 0;
    while(L->next != NULL) {
        L = L->next;
        length++;
    }
    return length;
}

void PrintSLinkListH(LinkList L) {
    int i = 0;
    LNode *p = L;
    while(p->next != NULL) {
        p = p->next;
        i++;
        printf("[%d]---[%d]\n",i, p->data);
    }
}

void SLinkListH_HeadInsert(LinkList &L) {
    InitSLinkListH(L);
    ElemType e;
    scanf("%d", &e);
    while(e != 99999) {
        SLinkListHInsert(L, 1, e);
        scanf("%d", &e);
    }
}

void SLinkListH_TailInsert(LinkList &L) {
    InitSLinkListH(L);
    LNode *s, *r = L;

    ElemType e;
    scanf("%d", &e);
    while(e != 99999) {
        s = (LNode*)malloc(sizeof(LNode));
        s->data = e;
        s->next = r->next;
        r->next = s;
        r = s;
        scanf("%d", &e);
    }
}









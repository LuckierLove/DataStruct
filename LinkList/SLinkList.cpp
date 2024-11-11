//
// Created by MoonDrinkWind on 24-11-11.
//

#include "SLinkList.h"

#include <cstdio>
#include <cstdlib>

bool InitSLinkList(LinkList &L) {
    L = NULL;
    return true;
}

bool DestroySLinkList(LinkList &L) {
    LNode *p = L;
    // 把除去第一个节点的所有节点全部删除
    while(p->next != NULL) {
        ElemType e;
        SLinkListDelete(L, 2, e);
    }
    free(p);
    return true;
}

bool SLinkListInsert(LinkList &L, int i, int e) {
    if(i < 1) return false;

    // 头元素插入情况
    if(i == 1) {
        LNode *s = (LNode*)malloc(sizeof(LNode));
        s->data = e;
        s->next = L;
        L = s;
        return true;
    }

    // 获取位序 i - 1的节点
    LNode *p = GetSLinkListElem(L, i - 1);
    if(p == NULL) return false;

    LNode *s = (LNode*)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;

    return true;
}

bool SLinkListDelete(LinkList &L, int i, int &e) {
    if(i < 1) return false;

    // 获取位序 i - 1的节点
    LNode *p = GetSLinkListElem(L, i - 1);
    if(p == NULL || p->next == NULL) return false;

    LNode *s = p->next;
    e = s->data;
    p->next = s->next;

    free(s);
    return true;
}

LNode *GetSLinkListElem(LinkList L, int i) {
    int j = 1;
    LNode *p = L;
    while(p!= NULL && j < i) {
        p = p->next;
        j++;
    }
    return p;
}

LNode *LocateLinkListElem(LinkList L, ElemType e) {
    LNode *p = L;
    while(p != NULL) {
        if(p->data == e) return p;
        p = p->next;
    }
    return NULL;
}

int SLinkListLength(LinkList L) {
    int length = 0;
    LNode *p = L;
    while(p != NULL) {
        p = p->next;
        length++;
    }
    return length;
}

bool SLinkListEmpty(LinkList L) {
    return L == NULL;
}

void PrintSLinkList(LinkList L) {
    int i = 0;
    LNode *p = L;
    while(p != NULL) {
        printf("[%d]---[%d]\n", i + 1, p->data);
        p = p->next;
        i++;
    }
}

void SLinkList_HeadInsert(LinkList &L) {
    InitSLinkList(L);
    ElemType e;
    scanf("%d", &e);
    while(e != 99999) {
        SLinkListInsert(L, 1, e);
        scanf("%d", &e);
    }
}

void SLinkList_TailInsert(LinkList &L) {
    InitSLinkList(L);
    LNode *s, *r = L;
    ElemType e;
    scanf("%d", &e);
    while(e != 99999) {
        s = (LNode*)malloc(sizeof(LNode));
        s->data = e;
        s->next = NULL;
        if(SLinkListEmpty(L)) {
            L = s;
        }else {
            r->next = s;
        }

        r = s;
        scanf("%d", &e);
    }
}

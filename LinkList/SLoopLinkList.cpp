//
// Created by MoonDrinkWind on 24-11-12.
//

#include "SLoopLinkList.h"

bool InitSLoopLinkList(LinkList &L) {
    L = NULL;
    return true;
}

bool DestroySLoopLinkList(LinkList &L) {
    while(L->next != L) {
        ElemType e;
        SLoopLinkListDelete(L, 1, e);
    }
    free(L);
    return true;
}

bool SLoopLinkListInsert(LinkList &L, int i, int e) {
    if(i < 1) return false;
    if(i == 1) {
        if(SLoopLinkListEmpty(L)) {
            L = (LNode *)malloc(sizeof(LinkList));
            if(L == NULL) return false;
            L->data = e;
            L->next = L;
            return true;
        }else {
            LNode *p = L;
            while(p->next != L) p=p->next;
            LNode *s = (LNode *)malloc(sizeof(LinkList));
            if(s == NULL) return false;
            s->data = e;
            s->next = p->next;
            p->next = s;
            return true;
        }
    }
    LNode *p = GetSLoopLinkListElem(L, i - 1);
    LNode *s = (LNode *)malloc(sizeof(LinkList));
    if(s == NULL) return false;
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;
}

bool SLoopLinkListDelete(LinkList &L, int i, int &e) {
    if(i < 1) return false;
    if(i == 1 && SLoopLinkListLength(L) == 1) {
        L = NULL;
        return true;
    }

    LNode *p = GetSLoopLinkListElem(L, i - 1);
    LNode *s = p->next;
    e = s->data;
    p->next = s->next;
    free(s);
    return true;
}

LNode *GetSLoopLinkListElem(LinkList L, int i) {
    int j = 1;
    LNode *p = L;
    while(p->next != L && j < i) {
        p = p->next;
        j++;
    }

    return p;
}

LNode *LocateSLoopLinkListElem(LinkList L, int e) {
    LNode *p = L;
    while(p != L) {
        if(p->data == e) return p;
        p = p->next;
    }
    return NULL;
}

int SLoopLinkListLength(LinkList L) {
    if(SLoopLinkListEmpty(L)) return 0;
    int len = 1;
    LNode *p = L;
    while(p->next != L) {
        p = p->next;
        len++;
    }
    return len;
}

bool SLoopLinkListEmpty(LinkList L) {
    return L == NULL;
}

void PrintSLoopLinkList(LinkList L) {
    int i = 1;
    LNode *p = L;
    if(SLoopLinkListEmpty(L)) return;
    printf("[%d]---[%d]\n", i, p->data);
    p = p->next;
    i++;
    while(p != L) {
        printf("[%d]---[%d]\n", i, p->data);
        p = p->next;
        i++;
    }
}







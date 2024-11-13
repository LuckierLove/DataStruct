//
// Created by MoonDrinkWind on 24-11-13.
//

#include "LinkStack.h"
#include <cstdlib>
#include <cstdio>

bool InitLinkStack(LinkStack &S) {
    S = (Node*)malloc(sizeof(Node));
    if(S == NULL) return false;
    S->next = NULL;
    S->data = NULL;
    return true;
}

bool DestroyLinkStack(LinkStack &S) {
    ElemType e;
    while(!LinkStackEmpty(S)) PopLinkStack(S, e);
    free(S);
    return true;
}

bool PushLinkStack(LinkStack &S, ElemType e) {
    Node* top = LinkStackEmpty(S) ? S : GetLinkStackTop(S);
    Node* s = (Node*) malloc(sizeof(Node));
    s->data = e;
    s->next = NULL;
    top->next = s;
    return true;
}

bool PopLinkStack(LinkStack &S, int &e) {
    Node* p = S;
    if(p->next == NULL) return false;
    while(p->next->next != NULL) {
        p = p->next;
    }
    e = p->next->data;
    free(p->next);
    p->next = NULL;
    return true;
}

int LinkStackLength(LinkStack S) {
    int i = 0;
    Node* p = S;
    while(p->next != NULL) {
        p = p->next;
        i++;
    }
    return i;
}

bool LinkStackEmpty(LinkStack S) {
    return S->next == NULL;
}

void PrintLinkStack(LinkStack S) {
    printf("自上而下打印\n");
    Node* p = S;
    while(p->next != NULL) {
        p = p->next;
        printf("%d\n", p->data);
    }
}

Node* GetLinkStackTop(LinkStack S) {
    Node* p = S;
    if(p->next == NULL) return false;
    while(p->next != NULL) {
        p = p->next;
    }
    return p;
}




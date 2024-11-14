#include <cstdio>

#include "Queue/LoopQueue1.h"

int main() {
    Queue S;

    InitLoopQueue1(S);

    printf("是否为空: %s\n", LoopQueue1Empty(S) ? "true": "false");

    EnLoopQueue1(S, 1);
    EnLoopQueue1(S, 2);
    EnLoopQueue1(S, 5);
    EnLoopQueue1(S, 3);
    EnLoopQueue1(S, 4);
    EnLoopQueue1(S, 6);
    EnLoopQueue1(S, 8);
    EnLoopQueue1(S, 7);

    PrintLoopQueue1(S);

    printf("是否为空: %s\n", LoopQueue1Empty(S) ? "true": "false");

    ElemType e;
    DeLoopQueue1(S, e);
    printf("出队元素: %d\n", e);

    PrintLoopQueue1(S);

    GetLoopQueue1Top(S, e);
    printf("头元素为: %d\n", e);

    PrintLoopQueue1(S);


    while(!LoopQueue1Empty(S)) {
        DeLoopQueue1(S, e);
    }

    printf("是否为空: %s\n", LoopQueue1Empty(S) ? "true": "false");

}

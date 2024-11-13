#include <cstdio>

#include "Stack/LinkStack.h"

int main() {
    LinkStack S;
    InitLinkStack(S);

    PushLinkStack(S, 0);
    PushLinkStack(S, 4);
    PushLinkStack(S, 5);
    PushLinkStack(S, 5);
    PushLinkStack(S, 1);

    PrintLinkStack(S);

    ElemType e;
    PopLinkStack(S, e);
    printf("出栈元素: %d\n", e);

    PrintLinkStack(S);

    DestroyLinkStack(S);
}

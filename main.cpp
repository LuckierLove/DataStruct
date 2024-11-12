#include "LinkList/SLoopLinkList.h"
#include <cstdio>

int main() {
    LinkList L;
    InitSLoopLinkList(L);
    printf("当前表长: %d\n", SLoopLinkListLength(L));
    printf("是否为空: %s\n", SLoopLinkListEmpty(L) ? "true" : "false");
    SLoopLinkListInsert(L, 1, 1);
    SLoopLinkListInsert(L, 1, 2);
    SLoopLinkListInsert(L, 1, 3);

    printf("\n");

    PrintSLoopLinkList(L);
    printf("当前表长: %d\n", SLoopLinkListLength(L));
    printf("是否为空: %s\n", SLoopLinkListEmpty(L) ? "true" : "false");

    printf("\n");

    ElemType e;
    SLoopLinkListDelete(L, 3, e);
    printf("删除的元素为: %d\n", e);
    PrintSLoopLinkList(L);

    printf("\n");

    printf("位序为1的元素为: %d\n", GetSLoopLinkListElem(L, 1)->data);

    printf("\n");

    SLoopLinkListDelete(L, 1, e);
    printf("删除的元素为: %d\n", e);
    PrintSLoopLinkList(L);
}

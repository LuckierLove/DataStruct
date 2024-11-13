#include "LinkList/StaticLinkList.h"
#include <cstdio>

int main() {
    LinkList L;
    InitStaticLinkList(L);
    printf("当前表长: %d\n", StaticLinkListLength(L));
    printf("是否为空: %s\n", StaticLinkListEmpty(L) ? "true" : "false");
    StaticLinkListInsert(L, 1, 1);
    StaticLinkListInsert(L, 1, 2);
    StaticLinkListInsert(L, 1, 3);

    printf("\n");

    PrintStaticLinkList(L);
    printf("当前表长: %d\n", StaticLinkListLength(L));
    printf("是否为空: %s\n", StaticLinkListEmpty(L) ? "true" : "false");

    printf("\n");

    ElemType e;
    StaticLinkListDelete(L, 3, e);
    printf("删除的元素为: %d\n", e);
    PrintStaticLinkList(L);

    printf("\n");

    printf("位序为1的元素为: %d\n", L[GetStaticLinkListElem(L, 1)].data);

    printf("\n");

    StaticLinkListDelete(L, 1, e);
    printf("删除的元素为: %d\n", e);
    PrintStaticLinkList(L);
}

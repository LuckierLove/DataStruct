#include "LinkList/SLinkList.h"
#include <cstdio>
int main() {
    LinkList L;
    InitSLinkList(L);
    printf("当前表长: %d\n", SLinkListLength(L));
    printf("当前是否为空表: %s\n", SLinkListEmpty(L) ? "true" : "false");
    SLinkList_TailInsert(L);
    SLinkListInsert(L, 2, 1);
    PrintSLinkList(L);
    printf("当前表长: %d\n", SLinkListLength(L));
    printf("当前是否为空表: %s\n", SLinkListEmpty(L) ? "true" : "false");
    ElemType e;
    SLinkListDelete(L, 2, e);
    printf("删除的元素为: %d\n", e);
    printf("当前表长: %d\n", SLinkListLength(L));
    printf("当前是否为空表: %s\n", SLinkListEmpty(L) ? "true" : "false");
    PrintSLinkList(L);
}

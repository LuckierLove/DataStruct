#include "SequenceList/SequenceListDynamic.h"
#include <cstdio>
int main() {
    SqList L;

    InitSqDList(L);

    SqDListInsert(L, 1, 1);
    SqDListInsert(L, 1, 2);
    SqDListInsert(L, 1, 3);

    PrintSqDList(L);
    printf("\n");

    int e;
    SqDListDelete(L, 1, e);
    PrintSqDList(L);
    printf("删除的元素为:%d\n", e);

    PrintSqDList(L);

    printf("列表长度为: %d\n", SqDListLength(L));
    printf("列表是否为空: %s\n", SqDListEmpty(L) ? "true" : "false");

    SqDListInsert(L, 1, 1);
    SqDListInsert(L, 1, 2);
    SqDListInsert(L, 1, 3);

    PrintSqDList(L);

    printf("元素3所在位序为: %d", LocateSqDListElem(L,3));
    printf("位序为3的元素为: %d", GetSqDListElem(L, 3));
}

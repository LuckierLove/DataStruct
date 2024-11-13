//
// Created by MoonDrinkWind on 24-11-13.
//

#pragma once
#define ElemType int
#define MaxSize 100

/**
 * 静态链表（基于数组实现）
 */
typedef struct Node {
    ElemType data; // 数据
    int next; // 游标
}LinkList[MaxSize];

/**
 * 初始化静态链表
 * @param L 静态链表
 */
void InitStaticLinkList(LinkList L);

/**
 * 销毁静态链表
 * @param L 静态链表
 */
void DestroyStaticLinkList(LinkList L);

/**
 * 静态链表插入元素
 * @param L 静态链表
 * @param e 元素
 * @param i 位序
 * @return 是否成功
 */
bool StaticLinkListInsert(LinkList L, int i, ElemType e);

/**
 * 静态链表删除元素
 * @param L 静态链表
 * @param i 位序
 * @param e 元素
 * @return 是否成功
 */
bool StaticLinkListDelete(LinkList L, int i, ElemType &e);

/**
 * 按位查找
 * @param L 静态链表
 * @param i 位序
 * @return 索引
 */
int GetStaticLinkListElem(LinkList L, int i);

/**
 * 按值查找
 * @param L 静态链表
 * @param e 元素
 * @return 位序
 */
int LocateStaticLinkListElem(LinkList L, ElemType e);

/**
 * 获取静态链表长度
 * @param L 静态链表
 * @return 长度
 */
int StaticLinkListLength(LinkList L);

/**
 * 判空
 * @param L 静态链表
 * @return 是否为空
 */
bool StaticLinkListEmpty(LinkList L);

/**
 * 打印静态链表
 * @param L 静态链表
 */
void PrintStaticLinkList(LinkList L);

/**
 * 获取空位位序
 * @param L 静态链表
 * @return 空位位序
 */
int LocateStaticLinkListEmpty(LinkList L);

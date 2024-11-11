//
// Created by MoonDrinkWind on 24-11-11.
//

#pragma once
#define ElemType int

/**
 * 单链表（无头节点）
 */
typedef struct LNode {
 ElemType data; // 数据域
 LNode *next; // 指针域
}LNode, *LinkList;

/**
 * 初始化单链表
 * @param L 单链表
 * @return 是否成功
 */
bool InitSLinkList(LinkList &L);

/**
 * 销毁单链表
 * @param L 单链表
 * @return 是否成功
 */
bool DestroySLinkList(LinkList &L);

/**
 * 指定位序插入元素
 * @param L 单链表
 * @param i 位序
 * @param e 元素
 * @return 是否成功
 */
bool SLinkListInsert(LinkList &L, int i, ElemType e);

/**
 * 指定位序删除元素
 * @param L 单链表
 * @param i 位序
 * @param e 元素
 * @return 是否成功
 */
bool SLinkListDelete(LinkList &L, int i, ElemType &e);

/**
 * 按位查找
 * @param L 单链表
 * @param i 位序
 * @return 结点
 */
LNode * GetSLinkListElem(LinkList L, int i);

/**
 * 按值查找
 * @param L 单链表
 * @param e 元素
 * @return 节点
 */
LNode * LocateLinkListElem(LinkList L, ElemType e);

/**
 * 获取表长
 * @param L 单链表
 * @return 表长
 */
int SLinkListLength(LinkList L);

/**
 * 判空
 * @param L 单链表
 * @return 是否为空
 */
bool SLinkListEmpty(LinkList L);

/**
 * 打印单链表
 * @param L 单链表
 */
void PrintSLinkList(LinkList L);

/**
 * 头插法初始化单链表
 * @param L 单链表
 */
void SLinkList_HeadInsert(LinkList &L);

/**
 * 尾插法初始化单链表
 * @param L 单链表
 */
void SLinkList_TailInsert(LinkList &L);
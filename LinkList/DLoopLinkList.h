//
// Created by MoonDrinkWind on 24-11-13.
//

#pragma once
#define ElemType int

/**
 * 双向循环链表（有无节点）
 */
typedef struct LNode {
    ElemType data;
    LNode *prior, *next;
}LNode, *LinkList;


/**
 * 初始化双向循环链表
 * @param L 双向循环链表
 * @return 是否成功
 */
bool InitDLoopLinkList(LinkList &L);

/**
 * 销毁双向循环链表
 * @param L 双向循环链表
 * @return 是否成功
 */
bool DestroyDLoopLinkList(LinkList &L);

/**
 * 指定位序插入元素
 * @param L 双向循环链表
 * @param i 位序
 * @param e 元素
 * @return 是否成功
 */
bool DLoopLinkListInsert(LinkList &L, int i, ElemType e);

/**
 * 删除指定位序元素
 * @param L 双向循环链表
 * @param i 位序
 * @param e 元素
 * @return 是否成功
 */
bool DLoopLinkListDelete(LinkList &L, int i, ElemType &e);

/**
 * 按位查找
 * @param L 双向循环链表
 * @param i 位序
 * @return 结点
 */
LNode * GetDLoopLinkListElem(LinkList L, int i);

/**
 * 按值查找
 * @param L 双向循环链表
 * @param e 位序
 * @return 结点
 */
LNode * LocateDLoopLinkListElem(LinkList L, ElemType e);

/**
 * 获取双向循环链表长度
 * @param L 双向循环链表
 * @return 长度
 */
int DLoopLinkListLength(LinkList L);

/**
 * 判空
 * @param L 双向循环链表
 * @return 是否为空
 */
bool DLoopLinkListEmpty(LinkList L);

/**
 * 打印双向循环链表
 * @param L 双向循环链表
 */
void PrintDLoopLinkList(LinkList L);
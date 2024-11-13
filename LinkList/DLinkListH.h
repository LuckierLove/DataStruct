//
// Created by MoonDrinkWind on 24-11-12.
//

#pragma once
#define ElemType int

/**
 * 双链表（有头节点）
 */
typedef struct LNode {
    ElemType data; // 数据域
    LNode *prior, *next; // 前指针和后指针
}LNode, *LinkList;

/**
 * 初始化双链表
 * @param L 双链表
 * @return 是否成功
 */
bool InitDLinkListH(LinkList &L);

/**
 * 销毁双链表
 * @param L 双链表
 * @return 是否成功
 */
bool DestroyDLinkListH(LinkList &L);

/**
 * 指定位序插入元素
 * @param L 双链表
 * @param i 位序
 * @param e 元素
 * @return 是否成功
 */
bool DLinkListHInsert(LinkList &L, int i, ElemType e);

/**
 * 删除指定位序元素
 * @param L 双链表
 * @param i 位序
 * @param e 元素
 * @return 是否成功
 */
bool DLinkListHDelete(LinkList &L, int i, ElemType &e);

/**
 * 按位查找
 * @param L 双链表
 * @param i 位序
 * @return 结点
 */
LNode * GetDLinkListHElem(LinkList L, int i);

/**
 * 按值查找
 * @param L 双链表
 * @param e 位序
 * @return 结点
 */
LNode * LocateDLinkListHElem(LinkList L, ElemType e);

/**
 * 获取双链表长度
 * @param L 双链表
 * @return 长度
 */
int DLinkListHLength(LinkList L);

/**
 * 判空
 * @param L 双链表
 * @return 是否为空
 */
bool DLinkListHEmpty(LinkList L);

/**
 * 打印双链表
 * @param L 双链表
 */
void PrintDLinkListH(LinkList L);
//
// Created by MoonDrinkWind on 24-11-12.
//

#pragma once
#define ElemType int

/**
 * 单链循环表（有头节点）
 */
typedef struct LNode {
 ElemType data; // 数据域
 LNode * next; // 指针域
}LNode, *LinkList;

/**
 * 初始化单链循环表
 * @param L 单链循环表
 * @return 是否成功
 */
bool InitSLoopLinkListH(LinkList &L);

/**
 * 销毁单链循环表
 * @param L 单链循环表
 * @return 是否成功
 */
bool DestroySLoopLinkListH(LinkList &L);

/**
 * 指定单链循环表位序插入元素
 * @param L 单链循环表
 * @param i 位序
 * @param e 元素
 * @return 是否成功
 */
bool SLoopLinkListHInsert(LinkList &L, int i, ElemType e);

/**
 * 删除单链循环链表指定位序的元素
 * @param L 单链循环表
 * @param i 位序
 * @param e 元素
 * @return 是否成功
 */
bool SLoopLinkListHDelete(LinkList &L, int i, ElemType &e);

/**
 * 按位查找
 * @param L 单链循环表
 * @param i 位序
 * @return 结点
 */
LNode * GetSLoopLinkListHElem(LinkList L, int i);

/**
 * 按值查找
 * @param L 单链循环表
 * @param e 元素
 * @return 结点
 */
LNode * LocateSLoopLinkListHElem(LinkList L, ElemType e);

/**
 * 获取表长
 * @param L 单链循环表
 * @return 表长
 */
int SLoopLinkListHLength(LinkList L);

/**
 * 判空
 * @param L 单链循环表
 * @return 是否为空
 */
bool SLoopLinkListHEmpty(LinkList L);

/**
 * 打印单链循环表
 * @param L 单链循环表
 */
void PrintSLoopLinkListH(LinkList L);
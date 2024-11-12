//
// Created by MoonDrinkWind on 24-11-12.
//

#pragma once

#include <cstdio>
#include <cstdlib>

#define ElemType int

/**
 * 单链循环表（无头结点）
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
bool InitSLoopLinkList(LinkList &L);

/**
 * 销毁单链循环表
 * @param L 单链循环表
 * @return 是否成功
 */
bool DestroySLoopLinkList(LinkList &L);

/**
 * 指定单链循环表位序插入元素
 * @param L 单链循环表
 * @param i 位序
 * @param e 元素
 * @return 是否成功
 */
bool SLoopLinkListInsert(LinkList &L, int i, ElemType e);

/**
 * 删除单链循环链表指定位序的元素
 * @param L 单链循环表
 * @param i 位序
 * @param e 元素
 * @return 是否成功
 */
bool SLoopLinkListDelete(LinkList &L, int i, ElemType &e);

/**
 * 按位查找
 * @param L 单链循环表
 * @param i 位序
 * @return 结点
 */
LNode * GetSLoopLinkListElem(LinkList L, int i);

/**
 * 按值查找
 * @param L 单链循环表
 * @param e 元素
 * @return 结点
 */
LNode * LocateSLoopLinkListElem(LinkList L, ElemType e);

/**
 * 获取表长
 * @param L 单链循环表
 * @return 表长
 */
int SLoopLinkListLength(LinkList L);

/**
 * 判空
 * @param L 单链循环表
 * @return 是否为空
 */
bool SLoopLinkListEmpty(LinkList L);

/**
 * 打印单链循环表
 * @param L 单链循环表
 */
void PrintSLoopLinkList(LinkList L);
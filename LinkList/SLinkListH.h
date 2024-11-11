//
// Created by MoonDrinkWind on 24-11-11.
//
#pragma once
#define ElemType int

/**
 * 单链表（带头指针）
 */
typedef struct LNode {
    ElemType data; // 数据域
    struct LNode *next; // 指针域
}LNode, *LinkList;

/**
 * 初始化单链表
 * @param L 单链表
 * @return 是否成功
 */
bool InitSLinkListH(LinkList &L);

/**
 * 销毁单链表
 * @param L 单链表
 * @return 是否成功
 */
bool DestroySLinkListH(LinkList &L);

/**
 * 在指定位序插入元素
 * @param L 单链表
 * @param i 位序
 * @param e 元素
 * @return 是否成功
 */
bool SLinkListHInsert(LinkList &L, int i, ElemType e);

/**
 * 删除指定位序的元素
 * @param L 单链表
 * @param i 位序
 * @param e 目标元素的值
 * @return 是否成功
 */
bool SLinkListHDelete(LinkList &L, int i, ElemType &e);

/**
 * 按值查找节点
 * @param L 单链表
 * @param e 元素
 * @return 节点
 */
LNode * LocateSLinkListHElem(LinkList L, ElemType e);

/**
 * 按位查找节点
 * @param L 单链表
 * @param i 位序
 * @return 节点
 */
LNode * GetSLinkListHElem(LinkList L, int i);

/**
 * 判空
 * @param L 单链表
 * @return 是否为空
 */
bool SLinkListHEmpty(LinkList L);

/**
 * 获取表长
 * @param L 单链表
 * @return 表长
 */
int SLinkListHLength(LinkList L);

/**
 * 打印单链表
 * @param L 单链表
 */
void PrintSLinkListH(LinkList L);

/**
 * 头插法处初始化单链表
 * @param L 单链表
 */
void SLinkListH_HeadInsert(LinkList &L);

/**
 * 尾插法初始化单链表
 * @param L 单链表
 */
void SLinkListH_TailInsert(LinkList &L);
/**
 * 顺序表
 */
#pragma once

#define ElemType int // 数据类型
#define InitSize 100 // 顺序表初始化长度
typedef struct {
 ElemType* data;
 int maxSize;
 int length;
}SqList;

/**
 * 初始化顺序表
 * @param L 顺序表
 * @return 是否成功
 */
bool InitSqDList(SqList &L);

/**
 * 销毁顺序表
 * @param L 顺序表
 */
void DestroySqDList(SqList &L);

/**
 * 插入元素到指定位序
 * @param L 顺序表
 * @param i 位序
 * @param e 元素
 * @return 是否成功
 */
bool SqDListInsert(SqList &L, int i, ElemType e);

/**
 * 删除指定位序的元素
 * @param L 顺序表
 * @param i 位序
 * @param e 用于接收被删除的元素的变量
 * @return 是否成功
 */
bool SqDListDelete(SqList &L, int i, ElemType &e);

/**
 * 顺序表按位查找
 * @param L 顺序表
 * @param i 位序
 * @return 指定位序的元素
 */
ElemType GetSqDListElem(SqList L, int i);

/**
 * 顺序表按值查找
 * @param L 顺序表
 * @param e 查找的元素
 * @return 第一个目标元素所在位序
 */
int LocateSqDListElem(SqList L, ElemType e);

/**
 * 顺序表判空操作
 * @param L 顺序表
 * @return 是否为空
 */
bool SqDListEmpty(SqList L);

/**
 * 打印顺序表
 * @param L 顺序表
 */
void PrintSqDList(SqList L);

/**
 * 获取顺序表表长
 * @param L 顺序表
 * @return 表长
 */
int SqDListLength(SqList L);
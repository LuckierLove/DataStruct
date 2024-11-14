//
// Created by MoonDrinkWind on 24-11-14.
//

#pragma once
#define ElemType int
#define MaxSize 64

/**
 * 顺序队列
 */
typedef struct {
    int front, rear;
    ElemType data[MaxSize];
}Queue;

/**
 * 初始化队列
 * @param S 队列
 */
void InitSqQueue(Queue &S);

/**
 * 销毁队列
 * @param S 队列
 */
void DestroySqQueue(Queue &S);

/**
 * 入队
 * @param S 队列
 * @param e 元素
 * @return 是否成功
 */
bool EnSqQueue(Queue &S, ElemType e);

/**
 * 出队
 * @param S 队列
 * @param e 元素
 * @return 是否成功
 */
bool DeSqQueue(Queue &S, ElemType &e);

/**
 * 判空
 * @param S 队列
 * @return 是否为空
 */
bool SqQueueEmpty(Queue S);

/**
 * 获取队头元素
 * @param S 队列
 * @param e 元素
 * @return 是否成功
 */
bool GetSqQueueTop(Queue S, ElemType &e);

/**
 * 打印队列
 * @param S 队列
 */
void PrintSqQueue(Queue S);
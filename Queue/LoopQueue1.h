//
// Created by MoonDrinkWind on 24-11-14.
//

#pragma once
#define ElemType int
#define MaxSize 64

/**
 * 循环队列（牺牲一个位置实现）
 */
typedef struct {
    int front, rear; // front指向队首指针 rear指向队尾指针下一个位置
    ElemType data[MaxSize];
}Queue;

/**
 * 初始化队列
 * @param S 队列
 */
void InitLoopQueue1(Queue &S);

/**
 * 销毁队列
 * @param S 队列
 */
void DestroyLoopQueue1(Queue &S);

/**
 * 入队
 * @param S 队列
 * @param e 元素
 * @return 是否成功
 */
bool EnLoopQueue1(Queue &S, ElemType e);

/**
 * 出队
 * @param S 队列
 * @param e 元素
 * @return 是否成功
 */
bool DeLoopQueue1(Queue &S, ElemType &e);

/**
 * 判空
 * @param S 队列
 * @return 是否为空
 */
bool LoopQueue1Empty(Queue S);

/**
 * 获取队头元素
 * @param S 队列
 * @param e 元素
 * @return 是否成功
 */
bool GetLoopQueue1Top(Queue S, ElemType &e);

/**
 * 打印队列
 * @param S 队列
 */
void PrintLoopQueue1(Queue S);
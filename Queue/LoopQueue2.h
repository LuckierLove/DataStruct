//
// Created by MoonDrinkWind on 24-11-15.
//

#pragma once
#define ElemType int
#define MaxSize 64

/**
 * 循环队列（设置length变量实现）
 */
typedef struct {
    int front, rear; // front指向队首指针 rear指向队尾指针下一个位置
    ElemType data[MaxSize];
    int length; // 用于存储元素数量
}Queue;

/**
 * 初始化队列
 * @param S 队列
 */
void InitLoopQueue2(Queue &S);

/**
 * 销毁队列
 * @param S 队列
 */
void DestroyLoopQueue2(Queue &S);

/**
 * 入队
 * @param S 队列
 * @param e 元素
 * @return 是否成功
 */
bool EnLoopQueue2(Queue &S, ElemType e);

/**
 * 出队
 * @param S 队列
 * @param e 元素
 * @return 是否成功
 */
bool DeLoopQueue2(Queue &S, ElemType &e);

/**
 * 判空
 * @param S 队列
 * @return 是否为空
 */
bool LoopQueue2Empty(Queue S);

/**
 * 获取队头元素
 * @param S 队列
 * @param e 元素
 * @return 是否成功
 */
bool GetLoopQueue2Top(Queue S, ElemType &e);

/**
 * 打印队列
 * @param S 队列
 */
void PrintLoopQueue2(Queue S);
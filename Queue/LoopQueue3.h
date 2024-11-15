//
// Created by MoonDrinkWind on 24-11-15.
//

#pragma once
#define ElemType int
#define MaxSize 64

/**
 * 循环队列（设置tag变量实现）
 */
typedef struct {
    int front, rear; // front指向队首指针 rear指向队尾指针下一个位置
    ElemType data[MaxSize];
    int tag; // 用来存储最近一次操作类型（插入-1/删除-0）
}Queue;

/**
 * 初始化队列
 * @param S 队列
 */
void InitLoopQueue3(Queue &S);

/**
 * 销毁队列
 * @param S 队列
 */
void DestroyLoopQueue3(Queue &S);

/**
 * 入队
 * @param S 队列
 * @param e 元素
 * @return 是否成功
 */
bool EnLoopQueue3(Queue &S, ElemType e);

/**
 * 出队
 * @param S 队列
 * @param e 元素
 * @return 是否成功
 */
bool DeLoopQueue3(Queue &S, ElemType &e);

/**
 * 判空
 * @param S 队列
 * @return 是否为空
 */
bool LoopQueue3Empty(Queue S);

/**
 * 获取队头元素
 * @param S 队列
 * @param e 元素
 * @return 是否成功
 */
bool GetLoopQueue3Top(Queue S, ElemType &e);

/**
 * 打印队列
 * @param S 队列
 */
void PrintLoopQueue3(Queue S);
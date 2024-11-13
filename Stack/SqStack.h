//
// Created by MoonDrinkWind on 24-11-13.
//

#pragma once

#define ElemType int
#define MaxSize 100

/**
 * 顺序栈
 */
typedef struct {
    int top; // 栈顶
    ElemType data[MaxSize];
}SqStack;

/**
 * 初始化顺序栈
 * @param S 顺序栈
 */
void InitSqStack(SqStack &S);

/**
 * 销毁顺序栈
 * @param S 顺序栈
 */
void DestroySqStack(SqStack &S);

/**
 * 入栈
 * @param S 顺序栈
 * @param e 元素
 * @return 是否成功
 */
bool PushSqStack(SqStack &S, ElemType e);

/**
 * 出栈
 * @param S 顺序栈
 * @return 元素
 */
ElemType PopSqStack(SqStack &S);

/**
 * 获取栈顶元素
 * @param S 顺序栈
 * @return 元素
 */
ElemType GetSqStackTop(SqStack S);

/**
 * 判空
 * @param S 顺序栈
 * @return 是否为空
 */
bool SqStackEmpty(SqStack S);

/**
 * 打印栈
 * @param S 顺序栈
 */
void PrintSqStack(SqStack S);
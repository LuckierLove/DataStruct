//
// Created by MoonDrinkWind on 24-11-13.
//

#pragma once
#define ElemType int

/**
 * 链栈
 */
typedef struct Node{
    ElemType data;
    Node *next;
}Node, *LinkStack;

/**
 * 初始化链栈
 * @param S 链栈
 * @return 是否成功
 */
bool InitLinkStack(LinkStack &S);

/**
 * 销毁链栈
 * @param S 链栈
 * @return 是否成功
 */
bool DestroyLinkStack(LinkStack &S);

/**
 * 入栈
 * @param S 链栈
 * @param e 元素
 * @return 是否成功
 */
bool PushLinkStack(LinkStack &S, ElemType e);

/**
 * 出栈
 * @param S 链栈
 * @param e 元素
 * @return 是否成功
 */
bool PopLinkStack(LinkStack &S, ElemType &e);

/**
 * 获取链栈长度
 * @param S 链栈
 * @return 长度
 */
int LinkStackLength(LinkStack S);

/**
 * 判空
 * @param S 链栈
 * @return 是否为空
 */
bool LinkStackEmpty(LinkStack S);

/**
 * 打印链栈
 * @param S 链栈
 */
void PrintLinkStack(LinkStack S);

/**
 * 获取栈顶结点
 * @param S 链栈
 * @return 结点
 */
Node* GetLinkStackTop(LinkStack S);
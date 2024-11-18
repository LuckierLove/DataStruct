//
// Created by MoonDrinkWind on 24-11-18.
//

#pragma once

/**
 * 字符串
 */
typedef struct {
    char ch[255];
    int length;
}SString;

/**
 * 把T的值赋值为chars
 * @param T 字符串
 * @param chars 字符数组
 */
void StrAssign(SString &T, char chars[]);


/**
 * 将S的内容复制给T
 * @param T 空字符串
 * @param S 字符串
 */
void StrCopy(SString &T, SString S);

/**
 * 字符串判空
 * @param S 字符串
 * @return 是否为空
 */
bool StrEmpty(SString S);

/**
 * 比较字符串S与字符串T
 * @param S 字符串
 * @param T 字符串
 * @return 大小关系 S>T 大于0, S<T 小于0, S=T 等于0
 */
int StrCompare(SString S, SString T);

/**
 * 获取字符串长度
 * @param S 字符串
 * @return 字符串长度
 */
int StrLength(SString S);

/**
 * 获取子串
 * @param Sub 子串
 * @param S 主串
 * @param pos 开始位序
 * @param len 长度
 */
void SubString(SString &Sub, SString S, int pos, int len);

/**
 * 合并字符串
 * @param T 合并后的字符串
 * @param S1 字符串
 * @param S2 字符串
 */
void Concat(SString &T, SString S1, SString S2);

/**
 * 获取子串在主串中第一次出的位置
 * @param S 主串
 * @param T 子串
 * @return 第一次出现位置
 */
int Index(SString S, SString T);

/**
 * 清空字符串
 * @param S 字符串
 */
void ClearString(SString &S);

/**
 * 销毁字符串
 * @param S 字符串
 */
void DestroyString(SString &S);
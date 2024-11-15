//
// Created by MoonDrinkWind on 24-11-15.
//
#pragma once

/**
 * 中缀表达式和后缀表达式相互转换
 */
class ReversePolishNotation {
private:
 char *e; // 表达式
public:
 ReversePolishNotation(char e[]);
 void Middle2Reverse();
};
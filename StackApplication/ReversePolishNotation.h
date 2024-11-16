//
// Created by MoonDrinkWind on 24-11-15.
//
#pragma once

/**
 * 中缀表达式和后缀表达式相互转换
 */
class ReversePolishNotation {
 /**
  * 应用操作符
  * @param op 操作符
  * @param a 左操作数
  * @param b 右操作数
  * @return
  */
 static double applyOperator(char op, double a, double b);

 /**
  * 获取操作符优先级
  * @param n 操作符
  * @return 优先级
  */
 static int precedence(char n);
public:

 /**
  * 中缀表达式转后缀表达式
  */
 static void Middle2Reverse(char *e);

 /**
  * 获取后缀表达式转换成中缀表达式并计算出结果
  * @param e 后缀表达式
  * @return 后缀表达式结果
  */
 static double GetReverseResult(char *e);

 /**
  * 计算中缀表达式
  * @param e 中缀表达式
  * @return 结果
  */
 static double Compute(char *e);
};
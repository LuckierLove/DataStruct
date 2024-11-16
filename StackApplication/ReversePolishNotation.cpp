//
// Created by MoonDrinkWind on 24-11-15.
//

#include "ReversePolishNotation.h"

#include <cstdio>
#include <cstring>



void ReversePolishNotation::Middle2Reverse(char *e) {
    char S[64];
    int top = 0;
    for(int i = 0; i < strlen(e); i++) { // 扫描字符串e
        char n = e[i]; // 当前扫描到的字符

        if(n == '(') {
            S[top++] = n;
        }

        switch (n) {
            case '+':
                while((S[top - 1] == '+' || S[top - 1] == '-' || S[top - 1] == '/' || S[top - 1] == '*')  && top != 0 && S[top - 1] != '(') {
                    printf("%c", S[--top]);
                }
                S[top++] = n;
                break;
            case '-':
                while((S[top - 1] == '+' || S[top - 1] == '-' || S[top - 1] == '/' || S[top - 1] == '*') && top != 0 && S[top - 1] != '(') {
                    printf("%c", S[--top]);
                }
                S[top++] = n;
                break;
            case '/':
                while((S[top - 1] == '/' || S[top - 1] == '*') && S[top - 1] != '(') {
                    printf("%c", S[--top]);
                }
                S[top++] = n;
                break;
            case '*':
                while((S[top - 1] == '/' || S[top - 1] == '*') && top != 0 && S[top - 1] != '(') {
                    printf("%c", S[--top]);
                }
                S[top++] = n;
                break;
        }

        if((48<= n && n <= 57) || (97 <= n && n <= 122) || (65 <= n && n <= 90)) {
            printf("%c", n);
        }

        if(n == ')') {
            while(S[top - 1] != '(' && top != 0) {
                printf("%c", S[--top]);
            }
            top--;
        }
    }
    while(top != 0) {
        printf("%c", S[--top]);
    }
}

double ReversePolishNotation::GetReverseResult(char *e) {
    double S[64]; // 存放操作数的栈
    int top = 0;
    for(int i = 0; i < strlen(e); i++) { // 扫描字符串
        char n = e[i]; // 当前扫描到的字符

        if(48 <= n && n <= 57) {
            S[top++] = n - '0';
            continue;
        }

        double b = S[--top];
        double a = S[--top];
        double r;
        switch (n) {
            case '+':
                r = a + b;
            break;
            case '-':
                r = a - b;
            break;
            case '*':
                r = a * b;
            break;
            case '/':
                r = a / b;
            break;
        }
        S[top++] = r;
    }

    return S[--top];
}

double ReversePolishNotation::Compute(char *e) {
    char SA[64];
    double SB[64];
    int top1 = 0, top2 = 0;

    for(int i = 0; i < strlen(e); i++) {
        char n = e[i];

        if(48 <= n && n <= 57) {
            SB[top2++] = n - '0';
            continue;
        }

        if(n == '(') {
            SA[top1++] = '(';
            continue;
        }

        if(n == ')') {
            while (top1 > 0 && SA[top1 - 1] != '(') {
                top1--;
                char op = SA[top1];
                double b = SB[--top2];
                double a = SB[--top2];
                SB[top2++] = applyOperator(op, a, b);
            }
            top1--;
            continue;
        }

        while (top1 > 0 && (precedence(SA[top1 - 1]) >= precedence(n))) {
            top1--;
            char op = SA[top1];
            double b = SB[--top2];
            double a = SB[--top2];
            SB[top2++] = applyOperator(op, a, b);
        }

        SA[top1++] = n;
    }

    while (top1 > 0) {
        top1--;
        char op = SA[top1];
        double b = SB[--top2];
        double a = SB[--top2];
        SB[top2++] = applyOperator(op, a, b);
    }

    return SB[--top2];
}

double ReversePolishNotation::applyOperator(char op, double a, double b) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
    }
    return 0.0;
}

int ReversePolishNotation::precedence(char n) {
    switch (n) {
        case '-': case '+': return 1;
        case '/': case '*': return 2;
    }
    return 0;
}


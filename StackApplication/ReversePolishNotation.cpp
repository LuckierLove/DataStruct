//
// Created by MoonDrinkWind on 24-11-15.
//

#include "ReversePolishNotation.h"

#include <cstdio>
#include <cstring>



ReversePolishNotation::ReversePolishNotation(char e[]) {
    this->e = e;
}

void ReversePolishNotation::Middle2Reverse() {
    char S[64];
    int top = 0;
    for(int i = 0; i < strlen(this->e); i++) { // 扫描字符串e
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

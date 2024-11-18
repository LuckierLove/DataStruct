//
// Created by MoonDrinkWind on 24-11-18.
//

#include "SString.h"

void StrAssign(SString &T, char chars[]) {
    T.length = 0;
    T.ch[0] = -1;
    int i = 0;
    char n = chars[i];
    while(n != '\0') {
        T.ch[i + 1] = n;
        n = chars[++i];
        T.length++;
    }
}

void StrCopy(SString &T, SString S) {
    for(int i = 1; i <= S.length; i++) {
        T.ch[i] = S.ch[i];
    }
    T.length = S.length;
}

bool StrEmpty(SString S) {
    return S.length == 0;
}

int StrCompare(SString S, SString T) {
    int i = 1;
    while(S.ch[i] != '\0' && T.ch[i] != '\0') {
        if(S.ch[i] < T.ch[i]) return -1;
        if(S.ch[i] > T.ch[i]) return 1;
        i++;
    }

    return S.length - T.length;
}

int StrLength(SString S) {
    return S.length;
}

void SubString(SString &Sub, SString S, int pos, int len) {
    for(int i = 1; i <= len; i++) {
        Sub.ch[i] = S.ch[pos + i - 1];
        Sub.length++;
    }
}

void Concat(SString &T, SString S1, SString S2) {
    int n = S1.length, m = S2.length;
    for(int i = 0; i < n; i++) {
        T.ch[i + 1] = S1.ch[i + 1];
    }

    for(int i = 0; i < m; i++) {
        T.ch[i + n + 1] = S2.ch[i + 1];
    }
    T.length = n+m;
}

int Index(SString S, SString T) {
    int n = S.length, m = T.length;

    int i = 1;
    int j = 1;
    while(i <=S .length && j <= m) {
        if(S.ch[i] == T.ch[j]) {
            i++;
            j++;
        }else {
            i = i-j + 2;
            j = 1;
        }
    }

    if(j > m) return i - T.length;

    return -1;
}

void ClearString(SString &S) {
    S.length = 0;
}

void DestroyString(SString &S) {
    S.ch[0] = '\0';
}
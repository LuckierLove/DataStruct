#include <iostream>
#include "String/SString.h"

int main() {
    SString T, S1, S2;

    // 测试 StrAssign
    char chars[] = "Hello";
    StrAssign(T, chars);
    std::cout << "After StrAssign: " << T.ch + 1 << ", Length = " << StrLength(T) << std::endl;

    // 测试 StrCopy
    StrCopy(S1, T);
    std::cout << "After StrCopy: " << S1.ch + 1 << ", Length = " << StrLength(S1) << std::endl;

    // 测试 StrEmpty
    if (StrEmpty(T)) {
        std::cout << "T is empty." << std::endl;
    } else {
        std::cout << "T is not empty." << std::endl;
    }

    // 测试 StrCompare
    int compare = StrCompare(S1, T);
    if (compare == 0) {
        std::cout << "S1 and T are equal." << std::endl;
    } else if (compare < 0) {
        std::cout << "S1 is less than T." << std::endl;
    } else {
        std::cout << "S1 is greater than T." << std::endl;
    }

    // 测试 StrLength
    std::cout << "StrLength(S1): " << StrLength(S1) << std::endl;

    // 测试 SubString
    SString Sub;
    SubString(Sub, S1, 2, 3);
    std::cout << "After SubString: " << Sub.ch + 1 << ", Length = " << StrLength(Sub) << std::endl;

    // 测试 Concat
    ClearString(S2);
    StrAssign(S2, " World");
    Concat(T, S1, S2);
    std::cout << "After Concat: " << T.ch + 1 << ", Length = " << StrLength(T) << std::endl;

    // 测试 Index
    int pos = Index(T, S2);
    if (pos != -1) {
        std::cout << "Index of S2 in T: " << pos << std::endl;
    } else {
        std::cout << "S2 is not found in T." << std::endl;
    }

    // 测试 ClearString 和 DestroyString
    ClearString(T);
    std::cout << "After ClearString: Length of T = " << StrLength(T) << std::endl;
    DestroyString(S1);
    DestroyString(S2);

    return 0;
}

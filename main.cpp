#include <cstdio>

#include "StackApplication/ReversePolishNotation.h"

int main() {

    char e[64];
    scanf("%s", e);
    ReversePolishNotation r(e);
    r.Middle2Reverse();
}

#include <cstdio>

#include "StackApplication/ReversePolishNotation.h"

int main() {

    char e[64];
    scanf("%s", e);
    printf("%lf", ReversePolishNotation::Compute(e));
}

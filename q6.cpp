#include <stdio.h>

void printBinary(int num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}

int main() {
    int a, b;
    int andResult, xorResult, finalResult;

    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    andResult = a & b;
    xorResult = a ^ b;
    finalResult = andResult | xorResult;

    printf("\n--- Step-by-Step Evaluation ---\n");
    printf("a = %d -> ", a); printBinary(a); printf("\n");
    printf("b = %d -> ", b); printBinary(b); printf("\n");
    printf("\n(a & b) = %d -> ", andResult); printBinary(andResult); printf("\n");
    printf("(a ^ b) = %d -> ", xorResult); printBinary(xorResult); printf("\n");
    printf("\nFinal Result (a & b) | (a ^ b) = %d -> ", finalResult); printBinary(finalResult); printf("\n");

    return 0;
}


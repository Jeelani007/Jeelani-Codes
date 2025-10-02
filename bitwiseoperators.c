#include <stdio.h>
void printBinary(int n)
{
    for (int i = 31; i >= 0; i--)
    {
        printf("%d", (n >> i) & 1);
        if (i % 8 == 0 && i != 0) printf(" ");
    }
    printf("\n");
}
int main()
{
    int num1 = 10, num2 = 5, result;
    printf("num1 = %d -> ", num1); printBinary(num1);
    printf("num2 = %d -> ", num2); printBinary(num2);
    printf("\n");
    result = num1 & num2;
    printf("AND  -> %d -> ", result); printBinary(result);
    result = num1 | num2;
    printf("OR   -> %d -> ", result); printBinary(result);
    result = num1 ^ num2;
    printf("XOR  -> %d -> ", result); printBinary(result);
    result = ~num1;
    printf("NOT(~num1) -> %d -> ", result); printBinary(result);
    result = num1 << 2;
    printf("Left Shift (num1<<2) -> %d -> ", result); printBinary(result);
    result = num1 >> 1;
    printf("Right Shift (num1>>1) -> %d -> ", result); printBinary(result);
    result = num1 | (1 << 2);
    printf("\nSet 3rd bit -> %d -> ", result); printBinary(result);
    result = num1 & ~(1 << 0);
    printf("Clear 0th bit -> %d -> ", result); printBinary(result);
    result = num1 ^ (1 << 0);
    printf("Toggle 0th bit -> %d -> ", result); printBinary(result);
    if (num1 & (1 << 2))
        printf("3rd bit in num1 is SET\n");
    else
        printf("3rd bit in num1 is NOT SET\n");
    int checkNum = 7;
    if (checkNum & 1)
        printf("%d is ODD\n", checkNum);
    else
        printf("%d is EVEN\n", checkNum);
    return 0;
}

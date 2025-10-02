#include <stdio.h>
int main()
{
    int num = 13;
    int mask;
    printf("Number = %d\n", num);
    mask = 1 << 2;
    if (num & mask)
        printf("3rd bit is SET\n");
    else
        printf("3rd bit is NOT SET\n");
    mask = 1 << 0;
    int setBit = num | mask;
    printf("After setting 0th bit: %d\n", setBit);
    mask = ~(1 << 1);
    int clearBit = num & mask;
    printf("After clearing 1st bit: %d\n", clearBit);
    mask = 1 << 0;
    int toggleBit = num ^ mask;
    printf("After toggling 0th bit: %d\n", toggleBit);
    return 0;
}

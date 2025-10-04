#include <stdio.h>
void printBinary(int n)
{
    for (int i = 7; i >= 0; i--)
    {
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
}
int main()
{
    int number = 170; 
    int bit_position = 5;
    printf("Original Number: %d\n", number);
    printf("Original Binary: ");
    printBinary(number);
    printf("\n");
    int cleared_number = number & ~(1 << bit_position);
    printf("After clearing bit %d → %d\n", bit_position, cleared_number);
    printf("New Binary: ");
    printBinary(cleared_number);
    printf("\n");
    return 0;
}

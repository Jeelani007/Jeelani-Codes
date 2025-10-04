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
    int bit_position = 2;
    printf("Original Number: %d\n", number);
    printf("Original Binary: ");
    printBinary(number);
    printf("\n");
    int new_number = number | (1 << bit_position);
    printf("After setting bit %d → %d\n", bit_position, new_number);
    printf("New Binary: ");
    printBinary(new_number);
    printf("\n");
    return 0;
}

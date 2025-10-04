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
    int bit_position = 3;      
    printf("Original Number: %d\n", number);
    printf("Original Binary: ");
    printBinary(number);
    printf("\n");
    int toggled_number = number ^ (1 << bit_position);
    printf("After toggling bit %d → %d\n", bit_position, toggled_number);
    printf("New Binary: ");
    printBinary(toggled_number);
    printf("\n");
    return 0;
}

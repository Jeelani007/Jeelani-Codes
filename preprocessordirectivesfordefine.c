#include <stdio.h>
#define SET_BIT(num, pos)    ((num) | (1 << (pos)))
#define CLEAR_BIT(num, pos)  ((num) & ~(1 << (pos)))
#define TOGGLE_BIT(num, pos) ((num) ^ (1 << (pos)))
void printBinary(int n)
{
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", (n >> i) & 1);
    }
}
int main()
{
    int number = 170;
    printf("Original Number: %d\n", number);
    printf("Original Binary: ");
    printBinary(number);
    printf("\n\n");
    int setNum = SET_BIT(number, 1);
    int clearNum = CLEAR_BIT(number, 5);
    int toggleNum = TOGGLE_BIT(number, 2);
    printf("After Setting bit 1 → %d (", setNum);
    printBinary(setNum);
    printf(")\n");
    printf("After Clearing bit 5 → %d (", clearNum);
    printBinary(clearNum);
    printf(")\n");
    printf("After Toggling bit 2 → %d (", toggleNum);
    printBinary(toggleNum);
    printf(")\n");
    return 0;
}

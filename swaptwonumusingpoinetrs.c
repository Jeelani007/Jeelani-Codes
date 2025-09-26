#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int num1 = 5, num2 = 10;
    printf("--- Before Swapping ---\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
    swap(&num1, &num2);
    printf("\n--- After Swapping ---\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
    return 0;
}

#include <stdio.h>
#define SIZE 5
int main()
{
    int index = 4;
    printf("List size: %d\n", SIZE);
    printf("Start: %d\n", index);
    index = (index + 1) % SIZE;
    printf("Next: %d\n", index);
    index = (index + 1) % SIZE;
    printf("Next: %d\n", index);
    index = (index + 1) % SIZE;
    printf("Next: %d\n", index);
    return 0;
}

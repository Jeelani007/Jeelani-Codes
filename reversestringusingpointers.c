#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "CODE";
    int len = strlen(str);
    char *start = str;
    char *end = str + len - 1;
    printf("Original: %s\n", str);
    while(start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    printf("Reversed: %s\n", str);
    return 0;
}

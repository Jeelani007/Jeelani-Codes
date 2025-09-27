#include <stdio.h>
int main()
{
    const char source[] = "Pointer Copy Example";
    char destination[30];
    const char *src = source;
    char *dest = destination;
    printf("original: %s\n", source);
    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
    printf("Copied: %s\n", destination);
    return 0;
}

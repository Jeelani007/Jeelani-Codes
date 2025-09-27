#include <stdio.h>
int stringLength(const char*str)
{
    int length = 0;
    while (*str != '\0')
    {
        length++;
        str++;
    }
    return length;  
}
int main ()
{
    const char *myString = "Easy C Program";
    int len = stringLength(myString);
    printf("String: %s\n", myString);
    printf("Length of the string: %d\n", len);
    return 0;
}

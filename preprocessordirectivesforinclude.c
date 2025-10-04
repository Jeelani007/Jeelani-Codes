#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int number = 25;
    double result = sqrt(number);
    printf("Number: %d\n", number);
    printf("Square root: %.2f\n\n", result);
    char text[] = "Hello World";
    printf("Text: %s\n", text);
    printf("Length: %lu\n", strlen(text));
    printf("Uppercase first letter: %c\n", toupper(text[0]));
    return 0;
}

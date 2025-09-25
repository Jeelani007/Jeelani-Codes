#include <stdio.h>
int main()
{
    char str[] = "Hello World";
    int vowels = 0, consonants = 0;
    int i = 0;
    printf ("String: %s\n", str);
    while (str[i] != '\0')
    {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowels++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            consonants++;
        }
        i++; 
    }
    printf ("Vowels: %d\n", vowels);
    printf ("Consonants: %d\n", consonants);
    return 0;
}

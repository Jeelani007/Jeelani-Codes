#include <stdio.h>
#include <string.h>
#define TABLE_SIZE 100
unsigned int simpleHash(const char *key)
{
    unsigned int hash = 0;
    for (int i = 0; i < strlen(key); i++)
    {
        hash += key[i];
    }
    return hash % TABLE_SIZE;
}
int main()
{
    const char *k1 = "apple";
    const char *k2 = "banana";
    const char *k3 = "grape";
    const char *k4 = "pela";  
    printf("apple  -> %u\n", simpleHash(k1));
    printf("banana -> %u\n", simpleHash(k2));
    printf("grape  -> %u\n", simpleHash(k3));
    printf("pela   -> %u\n", simpleHash(k4));
    if (simpleHash(k1) == simpleHash(k4))
    {
        printf("\nCollision: apple & pela\n");
    }
    else
    {
        printf("\nNo collision\n");
    }
    return 0;
}

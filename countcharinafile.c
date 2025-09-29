#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main() 
{ 
    FILE *fptr; 
    char ch; 
    int words = 0, characters = 0;  
    int inWord = 0;  
    char fname[100]; 
    printf("\n\nCount the number of words and characters in a file:\n");
    printf("---------------------------------------------------------\n"); 
    printf("Input the filename to be opened: ");
    scanf("%99s", fname);    
    fptr = fopen(fname, "r"); 
    if (fptr == NULL) 
    { 
        printf("File does not exist or cannot be opened.\n"); 
        return 1;
    } 
    printf("\nThe content of the file %s is:\n\n", fname); 
    while ((ch = fgetc(fptr)) != EOF) 
    { 
        putchar(ch); 

        
        if (!isspace((unsigned char)ch))
        {
            characters++;
        }

        
        if (isspace((unsigned char)ch)) 
        { 
            inWord = 0; 
        } 
        else if (!inWord) 
        { 
            inWord = 1;
            words++; 
        } 
    }
    fclose(fptr); 
    printf("\n\nThe number of words in the file %s is: %d\n", fname, words); 
    printf("The number of characters in the file %s is: %d\n", fname, characters); 
    return 0;
}

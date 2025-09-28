#include <stdio.h>
int main()
{
    FILE *file;
    char filename[100];
    char text[200];
    printf("Enter file name: ");
    scanf("%s", filename);
    file = fopen(filename, "a");
    if(file == NULL)
    {
        printf("Error! Could not open the file.\n");
        return 1;
    }
    getchar();
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);
    fputs(text, file);
    printf("Text successfully appended to %s\n", filename);
    fclose(file);
    return 0;
}

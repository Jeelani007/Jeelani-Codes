#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    struct student s;
    printf("Enter information:\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);
    printf("Enetr roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("\nDiaplaying information:\n");
    printf("Name: %s", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %.1f\n", s.marks);
    return 0;
}

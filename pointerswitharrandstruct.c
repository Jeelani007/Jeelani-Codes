#include <stdio.h>
struct Student
{
    int roll;
    char name[20];
};
int main()
{
    int marks[3] = {98, 97, 95};
    int *p;
    p = marks;
    printf("Marks using normal array and pointer:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("marks[%d] = %d (pointer way: %d)\n", i, marks[i], *(p+i));
    }
    struct Student s1 = {42, "Jeelani"};
    struct Student *sp;
    sp = &s1;
    printf("\nStudent details using pointer:\n");
    printf("Roll Number = %d\n", sp->roll);
    printf("Name = %s\n", sp->name);
    return 0;
}

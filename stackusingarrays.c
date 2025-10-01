#include <stdio.h>
#define MAX_SIZE 100
int stack_arr[MAX_SIZE];
int top = -1;
void push(int data)
{
    if (top == MAX_SIZE - 1)
    {
        printf("Stack Overflow\n");
    }
    else 
    {
        stack_arr[top++] = data;
    }
}
int pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    else
    {
         return stack_arr[top--];
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop());
    return 0;
}

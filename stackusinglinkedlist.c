#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *top = NULL;
void push(int value)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Stack Overflow! (No memory left)\n");
        return;
    }
    newNode->data = value;    
    newNode->next = top;     
    top = newNode;         
    printf("Pushed %d\n", value);
}
void pop()
{
    if (top == NULL)
    {
        printf("Stack Underflow! (Stack is empty)\n");
        return;
    }
    struct Node *temp = top;  
    int value = temp->data;  
    top = top->next;       
    free(temp);        
    printf("Popped %d\n", value);
}
void display()
{
    if (top == NULL)
    {
        printf("Stack is empty.\n");
        return;
    }
    printf("\nStack (Top to Bottom):\n");
    struct Node *curr = top;
    while (curr != NULL)
    {
        printf("| %d |\n", curr->data);
        curr = curr->next;
    }
    printf("-----\n");
}
int main()
{
    push(10);
    push(20);
    push(30);
    display();   
    pop();    
    pop();    
    display();  
    push(40);
    push(50);
    display(); 
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};
struct Node *head = NULL;  
struct Node *tail = NULL;  
void addNode(int value)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = tail = newNode;   
    }
    else
    {
        tail->next = newNode;    
        newNode->prev = tail;    
        tail = newNode;         
    }
}
void printList()
{
    struct Node *temp = head;
    if (temp == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    printf("Doubly Linked List: ");
    while (temp != NULL)
    {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main()
{
    addNode(10);
    addNode(20);
    addNode(30);
    printList();
    return 0;
}

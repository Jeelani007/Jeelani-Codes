#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;
void addNode(int value)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;  
    }
    else
    {
        struct Node *temp = head;
        while (temp->next != NULL)
        { 
            temp = temp->next;
        }
        temp->next = newNode; 
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
    printf("Linked List: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main()
{
    addNode(5);
    addNode(15);
    addNode(25);
    printList();
    return 0;
}

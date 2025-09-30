#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
Node* createNode(int value)
{
    Node *newNode = (Node*) malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
void insertEnd(Node **head, int value)
{
    Node *newNode = createNode(value);
    if (*head == NULL)
    { 
        *head = newNode;
        return;
    }
    Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void insertFront(Node **head, int value)
{
    Node *newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
}
void deleteNode(Node **head, int value)
{
    Node *temp = *head, *prev = NULL;
    if (temp != NULL && temp->data == value)
    {
        *head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != value)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("Value %d not found!\n", value);
        return;
    }

    prev->next = temp->next;
    free(temp);
}
void printList(Node *head)
{
    Node *temp = head;
    printf("Linked List: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
void freeList(Node *head)
{
    Node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}
int main()
{
    Node *head = NULL; 
    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    printList(head);
    insertFront(&head, 5);
    printList(head);
    deleteNode(&head, 20);
    printList(head);
    freeList(head);
    return 0;
}

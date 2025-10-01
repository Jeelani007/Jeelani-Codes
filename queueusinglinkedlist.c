#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *front = NULL;
struct Node *rear = NULL;
void enqueue(int value)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("No memory! Can't add %d\n", value);
        return;
    }
    newNode->data = value;
    newNode->next = NULL;
    if (front == NULL)
    {
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
    printf("Added %d\n", value);
}
void dequeue()
{
    if (front == NULL)
    {
        printf("Queue empty! Nothing to remove\n");
        return;
    }
    struct Node *temp = front;
    int removed = front->data;
    front = front->next;
    if (front == NULL)
    {
        rear = NULL;
    }

    free(temp);
    printf("Removed %d\n", removed);
}
void display()
{
    if (front == NULL)
    {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue (Front → Rear): ");
    struct Node *curr = front;
    while (curr != NULL)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    dequeue();
    display();
    enqueue(40);
    display();
    return 0;
}

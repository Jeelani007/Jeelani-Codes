#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 5
int queue[MAX_SIZE];
int size = 0;
bool isFull()
{
    return size == MAX_SIZE;
}
bool isEmpty()
{
    return size == 0;
}
void enqueue(int value)
{
    if (isFull())
    {
        printf("Queue Full! Can't add %d\n", value);
        return;
    }
    queue[size] = value;
    size++;
    printf("Added %d\n", value);
}
void dequeue()
{
    if (isEmpty())
    {
        printf("Queue Empty! Nothing to remove\n");
        return;
    }
    int removed = queue[0];
    for (int i = 0; i < size - 1; i++)
    {
        queue[i] = queue[i + 1];
    }

    size--;
    printf("Removed %d\n", removed);
}
void display()
{
    if (isEmpty())
    {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue (Front → Rear): ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", queue[i]);
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
    display();
    enqueue(40);
    enqueue(50);
    enqueue(60);
    display();
    return 0;
}

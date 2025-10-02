#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int value;
    struct Node *left;
    struct Node *right;
} Node;
Node* createNode(int data)
{
    Node* n = (Node*)malloc(sizeof(Node));
    n->value = data;
    n->left = n->right = NULL;
    return n;
}
int main()
{
    Node* root = createNode(10);
    Node* child = createNode(5);
    root->left = child;
    printf("Root: %d\n", root->value);
    printf("Left Child: %d\n", root->left->value);
    free(child);
    free(root);
    return 0;
}

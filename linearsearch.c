#include <stdio.h>
int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main ()
{
    int numbers[] = {5, 2, 8, 12, 1, 9};
    int target = 8;
    int size = 6;
    int result = linearSearch(numbers, size, target);
    if (result != -1)
    {
        printf ("Element %d found at index %d.\n", target, result);
    }
    else
    {
        printf ("Element %d not found in the array.\n", target);
    }
    return 0;
}

#include <stdio.h>
int main ()
{
    int arr[] = {5, 2, 4, 6};
    int n = 4;
    int i, j, key;
    printf ("Original array: 5 2 4 6\n");
    for (i = 0; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr [j + 1] = key;
    }
    printf ("Sorted array: ");
    for ( i = 0; i < n; i++)
    {
        printf ("%d", arr[i]);
    }
    printf ("\n");
    return 0;
}

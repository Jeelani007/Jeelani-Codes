#include <stdio.h>
int main()
{
    int A [2][2], B[2][2], C[2][2];
    int i,j;
    printf ("Enter elements for the sirdt matrix (2*2):\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf ("Element A[%d][%d]: ", i, j);
            scanf ("%d", &A[i][j]);
        }
    }
    printf ("\nEnter elements for the second matrix (2*2):\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf ("Element B[%d][%d]:", i, j);
            scanf ("%d", &B[i][j]);
        }
    }
    for ( i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf ("\nThe sum of the matrices is: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf ("%d\t", C[i][j]);
        }
        printf ("\n");
    }
    return 0;
}

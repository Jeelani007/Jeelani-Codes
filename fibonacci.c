#include <stdio.h>
int main ()
{
    int n, first=0, second=1, next;
    printf("Enetr the number of terms: ");
    scanf ("%d", &n );
    printf ("Fibonacci Series: ");
    for (int i=0; i<n; i++)
    {
        if (i<=n)
          next=i;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf ("%d", next);
    }
    return 0;
}

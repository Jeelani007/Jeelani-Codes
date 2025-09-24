#include <stdio.h>
int main ()
{
    int a=77, b=88, c=99;
    if (a >= b && a >= c)
        printf ("%d is the greatest", a);
    else if ( b >= a && b >= c)
        printf ("%d is the greatest", b);
    else if (c >=a && c >= b)
        printf ("%d is the greatest", c);
    return 0;    
}

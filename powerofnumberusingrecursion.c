#include <stdio.h>
double power(double base, int exp)
{
    if (exp == 0)
        return 1;
    else
        return base * power(base, exp - 1);
}
int main()
{
    double base;
    int exp;
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent (non-negative): ");
    scanf("%d", &exp);
    if (exp < 0)
    {
        printf("Negative exponents are not supported.\n");
    } else
    {
        printf("%.2lf ^ %d = %.2lf\n", base, exp, power(base, exp));
    }
    return 0;
}

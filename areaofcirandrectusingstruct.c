#include <stdio.h>
#define PI 3.14159
struct Circle
{
    float radius;
};
struct Rectangle
{
    float length;
    float width;
};
int main ()
{
    struct Circle c;
    c.radius = 7;
    float circleArea = PI * c.radius * c.radius;
    printf("Circle:\n");
    printf("Radius = %.2f\n", c.radius);
    printf("Area = %.2f\n", circleArea);
    printf("\n");
    struct Rectangle r;
    r.length = 12;
    r.width = 5;
    float rectangleArea = r.length * r.width;
    printf("Rectangle:\n");
    printf("Length = %.2f\n, r.length");
    printf("Width = %.2f\n", r.width);
    printf("Area = %.2f\n", rectangleArea);
    return 0;
}

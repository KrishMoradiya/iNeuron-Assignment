#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int a, b, c, D;
    float x, y;
    printf("Enter Value of A,B,C(constant).\n");
    scanf("%d %d %d", &a, &b, &c);
    D = b * b - 4 * a * c;
    if (D < 0)
        printf("Both roots are Imagenary.\n");
    if (D == 0)
    {
        printf("Both are same roots.\n");
        x = -b / (2.0 * a);
        printf("Factor are: %f\n", x);
    }
    if(D > 0)
    {
        printf("Roots are real.\n");
        x = (-b + sqrt(D)) / (2 * a);
        y = (-b - sqrt(D)) / (2 * a);
        printf("x is : %f\n", x);
        printf("y is : %f\n", y);
    }
    return 0;
}
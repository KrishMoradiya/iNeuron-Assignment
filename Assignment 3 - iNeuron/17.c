#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    printf("Enter first side of triangle:");
    scanf("%d", &a);
    printf("Enter second side of triangle:");
    scanf("%d", &b);
    printf("Enter third side of triangle:");
    scanf("%d", &c);

    if ((a + b) > c && (a + c) > b && (b + c) > a)
    {
        printf("Triangle is perfact angle.\n");
    }
    else
    {
        printf("Triangle is not perfact angle.\n");
    }
    return 0;
}
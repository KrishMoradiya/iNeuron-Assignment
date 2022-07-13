#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b;
    printf("Enter Number A:");
    scanf("%d", &a);
    printf("Enter Number B:");
    scanf("%d", &b);
    if (a>b)
    {
        printf("%d is largest number.\n", a);
    }
    else if (a == b)
    {
        printf("%d both are same number.\n", a);
    }
    else
    {
        printf("%d is largest number.\n", b);
    }
    return 0;
}
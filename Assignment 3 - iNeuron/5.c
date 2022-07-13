#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter Number:");
    scanf("%d", &n);
    if (n>99 && n<1000)
    {
        printf("%d is three digit number.\n", n);
    }
    else
    {
        printf("%d is not a three digit number.\n", n);
    }
    return 0;
}
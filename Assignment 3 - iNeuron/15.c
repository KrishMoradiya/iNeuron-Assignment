#include <stdio.h>
#include <conio.h>
int main()
{
    int number;
    printf("Enter Number:");
    scanf("%d", &number);
    if (number > 0)
    {
        printf("%d is positive number.", number);
    }
    else if (number == 0)
    {
        printf("%d is Non-Positive number.", number);
    }
    else
    {
        printf("%d is negative number", number);
    }
    return 0;
}
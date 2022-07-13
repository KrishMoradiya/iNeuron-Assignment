#include <stdio.h>
#include <conio.h>
int main()
{
    int number;
    printf("Enter Number:");
    scanf("%d", &number);
    if ((number % 2) == 0 && number != 0)
    {
        printf("%d is Even number.", number);
    }
    else if (number == 0)
    {
        printf("%d is Zero number.", number);
    }
    else
    {
        printf("%d is Odd number", number);
    }
    return 0;
}
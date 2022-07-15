#include <stdio.h>
#include <conio.h>
int main()
{
    int number;
    printf("Enter Number:");
    scanf("%d", &number);
    int checkNumber = (number / 2) * 2;
    if (checkNumber == number)
    {
        printf("%d is Even number.\n", number);
    }
    else
    {
        printf("%d is Odd number.\n", number);
    }
    return 0;
}
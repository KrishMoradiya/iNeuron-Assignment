#include <stdio.h>
#include <conio.h>
int main()
{
    int number;
    printf("Enter Number:");
    scanf("%d", &number);
    if ((number % 3) == 0 || (number % 7) == 0)
    {
        printf("%d is divisable by 3 or 7.\n", number);
    }
    else
    {
        printf("%d is not divisable by 3 or 7.\n", number);
    }
    return 0;
}
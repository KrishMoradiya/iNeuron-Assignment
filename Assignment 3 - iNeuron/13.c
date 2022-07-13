#include <stdio.h>
#include <conio.h>
int main()
{
    int number;
    printf("Enter Number:");
    scanf("%d", &number);
    if ((number % 3) == 0 && (number % 2) == 0)
    {
        printf("%d is divisable by 3 and 2.\n", number);
    }
    else
    {
        printf("%d is not divisable by 3 and 2.\n", number);
    }
    return 0;
}
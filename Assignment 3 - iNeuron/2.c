#include <stdio.h>
#include <conio.h>
int main()
{
    int number;
    printf("Enter Number:");
    scanf("%d", &number);
    if ((number % 5) == 0)
    {
        printf("%d is divide by 5.");
    }
    else
    {
        printf("%d is not divisable by 5.");
    }
    return 0;
}
#include <stdio.h>
#include <conio.h>
int main()
{
    int number, remainder, reverse;
    printf("Enter Number:");
    scanf("%d", &number);
    while (number != 0)
    {
        remainder = number % 10;
        reverse = reverse*10 + remainder;
        number = number / 10;
    }

    printf("%d", reverse);
    getch();
}
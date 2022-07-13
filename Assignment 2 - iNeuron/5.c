#include <stdio.h>
#include<conio.h>
int main()
{
    int number,sum=0;
    printf("Enter Number:");
    scanf("%d", &number);
    while (number != 0)
    {
        int remainder = number %10;
        number = number / 10;
        sum = sum + remainder;
    }
    
    printf("%d",sum);
    getch();
}
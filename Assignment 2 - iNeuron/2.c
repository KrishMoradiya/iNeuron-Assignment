#include <stdio.h>
#include<conio.h>
int main()
{
    int number;
    printf("Enter Number:");
    scanf("%d", &number);
    number = number / 10;
    printf("%d\n", number);
    return 0;
}
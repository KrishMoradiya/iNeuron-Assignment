#include<stdio.h>
#include<conio.h>
int main()
{
    int number,digit;
    printf("Enter Number:");
    scanf("%d",&number);
    printf("Enter Digit:");
    scanf("%d",&digit);

    number = number*10 + digit;
    printf("Changed number is: %d",number);
    return 0;
}
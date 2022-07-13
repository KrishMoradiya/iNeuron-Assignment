#include<stdio.h>
#include<conio.h>
int main()
{
    int number;
    printf("Enter Number:");
    scanf("%d",&number);

    number = number- (number%10);
    printf("Changed number is: %d",number);
    return 0;
}
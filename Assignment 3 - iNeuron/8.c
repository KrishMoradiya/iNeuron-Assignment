#include <stdio.h>
#include <conio.h>
int main()
{
    int year;
    printf("Enter Year.\n");
    scanf("%d",&year);
    if((year%400) == 0)
        printf("%d is leap year.\n",year);
    else if((year%100) == 0)
        printf("%d is Not leap year.\n",year);
    else if((year%4) == 0)
        printf("%d is leap year.\n",year);
    else
        printf("%d is Not leap year.\n",year);
    return 0;
}
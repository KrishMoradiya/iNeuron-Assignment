#include<stdio.h>
#include<conio.h>
int main()
{
    float rupee;
    printf("Enter Indian rupee:");
    scanf("%f",&rupee);
    printf("rupee is: 76.23");
    printf("\nUSD is: %f", rupee/76.23);
    return 0;
}
#include<stdio.h>
#include<conio.h>
int main()
{
    int A,B,C=0;
    printf("Enter Number A:");
    scanf("%d",&A);
    printf("Enter Number B:");
    scanf("%d",&B);

    C = A;
    A = B;
    B = C;

    printf("Swap value of: A is %d and B is %d.\n",A,B);

    return 0;
}
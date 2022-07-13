#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;
    printf("Enter number A:");
    scanf("%d", &a);
    printf("Enter number B:");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Swap value of: A is %d and B is %d.\n", a, b);
    return 0;
}
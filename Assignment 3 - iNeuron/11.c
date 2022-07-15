#include <stdio.h>
#include <conio.h>
int main()
{
    float m1, m2, m3, m4, m5, result;
    printf("Enter Mark 1:");
    scanf("%f", &m1);
    printf("Enter Mark 2:");
    scanf("%f", &m2);
    printf("Enter Mark 3:");
    scanf("%f", &m3);
    printf("Enter Mark 4:");
    scanf("%f", &m4);
    printf("Enter Mark 5:");
    scanf("%f", &m5);

    result = (m1 + m2 + m3 + m4 + m5) / 5;
    if (result < 33)
    {
        printf("You are failed.\nBetter luck next time.\n");
    }
    else
    {
        printf("Result is: %.2f\n",result);
    }
    return 0;
}
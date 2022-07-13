#include <stdio.h>
#include <conio.h>
int main()
{
    int month;
    printf("Enter Month:");
    scanf("%d", &month);

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        printf("In this month have 31 Days.\n");
    }
    else if (month == 2 || month == 4 || month == 6 || month == 9 || month == 11)
    {
        printf("In this month have 30 Days.\n");
    }
    else
    {
        printf("Invalid month.\n");
    }
    return 0;
}
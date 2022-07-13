#include <stdio.h>
#include <conio.h>
int main()
{
    float cost, sellPrice;
    printf("Enter cost price:");
    scanf("%f", &cost);
    printf("Enter selling price:");
    scanf("%f", &sellPrice);

    if (sellPrice > cost)
    {
        float profit = ((sellPrice - cost)*100)/cost;
        printf("Profit is: %.2f%\n",profit);
    }
    else if (sellPrice == cost)
    {
        printf("Non-profit or Non-loss.\n");
    }
    else{
        float loss = ((cost - sellPrice)*100)/sellPrice;
        printf("Loss is: %.2f%\n",loss);
    }
    return 0;
}
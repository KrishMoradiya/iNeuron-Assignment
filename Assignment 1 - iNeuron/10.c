#include<stdio.h>
#include<conio.h>
int main(){
    int D,M,Y;
    printf("Enter Date:");
    scanf("%d",&D);
    printf("Enter Month:");
    scanf("%d",&M);
    printf("Enter Year:");
    scanf("%d",&Y);

    printf("\n---------------------------------------");
    printf("\nDay - %d, Month - %d, Year - %d",D,M,Y);
    printf("\n---------------------------------------");
    getch();
}

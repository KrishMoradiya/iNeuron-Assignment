#include<stdio.h>
int main(){
    int number;
    printf("Enter Number:");
    scanf("%d",&number);
    printf("Unit digit is: %d",(number%10));
    return 0;
}

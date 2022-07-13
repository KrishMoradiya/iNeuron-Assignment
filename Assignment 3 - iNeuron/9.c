#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter Number A:\n");
    scanf("%d",&a);
    printf("Enter Number B:\n");
    scanf("%d",&b);
    printf("Enter Number C:\n");
    scanf("%d",&c);

    if (a>b || a == b)
    {
        if(a>c || a == c)
        {
            if(a == b){
                if(a == c){
                    printf("same number is:%d",a);
                }
                printf("same number is:%d",a);
            }
            else{
                printf("a is largest value.\n");
            }
        }
        else{
            printf("c is largest value.\n");
        }
    }
    else if (b>c)
    {
        printf("b is largest value.\n");
    }
    else{
        printf("c is largest value.\n");
    }
    
    return 0;
}
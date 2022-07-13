 #include<stdio.h>
 #include<conio.h>
 int main()
 {
     int number;
     printf("Enter Number:");
     scanf("%d",&number);

    if (!(number&1) && number != 0)
        printf("Number %d is Even.",number);
    else if (number == 0)
        printf("Number is Zero.");
    else
        printf("Number %d is Odd.",number);
     return 0;
 }
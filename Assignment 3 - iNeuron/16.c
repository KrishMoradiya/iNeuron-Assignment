#include <stdio.h>
#include <conio.h>
int main()
{
    char c;
    printf("Enter any character:");
    scanf("%c", &c);
    int asciiCode = c;
    if (asciiCode > 64 && asciiCode < 91)
    {
        printf("%c is UpperCase.\n", c);
    }
    else if (asciiCode > 96 && asciiCode < 123)
    {
        printf("%c is LowerCase.\n", c);
    }
    else if (asciiCode > 47 && asciiCode < 58)
    {
        printf("This is digit.\n");
    }
    else
    {
        printf("This is Special character.\n");
    }
    return 0;
}
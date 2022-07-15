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
        printf("%c is UpperCase.\n",c);
    }
    else if(asciiCode > 96 && asciiCode < 123)
    {
        printf("%c is LowerCase.\n",c);
    }
    else
    {
        printf("This is not a character.\n");
    }
    return 0;
}
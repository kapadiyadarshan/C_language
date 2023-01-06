#include<stdio.h>
#include<conio.h>

int main()
{
    char n;
    //clrscr();

    printf("Enter any latter = ");
    scanf("%c",&n);

    if((n>='A' && n<='Z') || (n>='a' && n<='z'))
    {
        printf("It's Alphabet");
    }
    else if(n>='0' && n<='9')
    {
        printf("It's number");
    }
    else
    {
        printf("It's special character");
    }
    return 0;
    //getch();
}
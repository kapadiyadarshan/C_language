#include<stdio.h>
#include<conio.h>

int main()
{
    int number;
    //clrscr();

    printf("Enter any number = ");
    scanf("%d",&number);

    (number % 2 == 0)
        ? printf("It's even number")
        : printf("It's odd number");
        
    return 0;
    //getch();
}
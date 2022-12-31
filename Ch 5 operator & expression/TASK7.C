#include<stdio.h>
#include<conio.h>

main()
{
    int x,y,z,sum;
    clrscr();

    printf("enter the value of X = ");
    scanf("%d",&x);
    printf("enter the value of Y = ");
    scanf("%d",&y);
    printf("enter the value of Z = ");
    scanf("%d",&z);

    sum=(x*x)+(y*y)+(z*z)+(2*x*y)+(2*y*z)+(2*z*x);  //(x+y+z)^2

    printf("Sum is = %d",sum);
    getch();
}

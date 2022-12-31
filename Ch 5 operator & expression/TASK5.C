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

    sum=(x*x*x)+(y*y*y)+(z*z*z)+(3*x*x*y)+(3*x*y*y)+(3*y*y*z)+(3*y*z*z)+(3*z*z*x)+(3*z*x*x)+(6*x*y*z);
    //(x+y+x)^3

    printf("Sum is = %d",sum);
    getch();
}

#include<stdio.h>
#include<conio.h>

main()
{
    int x,y,sum;
    clrscr();

    printf("enter the value A = ");
    scanf("%d",&x);
    printf("enter the value B = ");
    scanf("%d",&y);

    sum=(x*x*x)-(3*x*x*y)+(3*x*y*y)-(y*y*y);   //x-y whole cube

    printf("sum is = %d",sum);
    getch();
}
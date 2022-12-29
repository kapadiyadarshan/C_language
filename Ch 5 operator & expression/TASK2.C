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

    sum=(x*x)-(2*x*y)+(y*y);  //x-y whole square

    printf("sum is = %d",sum);
    getch();
}
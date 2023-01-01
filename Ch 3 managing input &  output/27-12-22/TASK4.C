#include<stdio.h>
#include<conio.h>

//without 3rd variable
//multiplication & division

main()
{
    int a,b;
    clrscr();
    printf("enter the value of A = ");
    scanf("%d",&a);

    printf("enter the value of B = ");
    scanf("%d",&b);

    a=a*b;
    b=a*b;
    a=b/a;
    b=b/a;
    b=b/a;

    printf("A = %d\n",a);
    printf("B = %d\n",b);
    getch();
}
#include<stdio.h>
#include<conio.h>

//with 3rd variable
//multiplication & division

main()
{
    int a,b,c;
    clrscr();
    printf("enter the value of A = ");
    scanf("%d",&a);

    printf("enter the value of B = ");
    scanf("%d",&b);

    c=a*b;
    a=c/a;
    b=c/b;

    printf("A = %d\n",a);
    printf("B = %d\n",b);
    getch();
}
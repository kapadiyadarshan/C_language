#include<stdio.h>
#include<conio.h>

//find gross salary

main()
{
    float bs,hra,da,ta,gs;
    clrscr();

    printf("Enter Base Salary = ");
    scanf("%f",&bs);

    hra=bs*10/100;
    da=bs*5/100;
    ta=bs*8/100;
    gs=bs+hra+da+ta;

    printf("HRA = %0.2f \n",hra);
    printf("DA = %0.2f \n",da);
    printf("TA = %0.2f \n",ta);
    printf("Gross Salary = %0.2f \n",gs);

    getch();

}
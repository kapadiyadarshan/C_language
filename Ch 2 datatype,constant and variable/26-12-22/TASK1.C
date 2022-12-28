#include<stdio.h>
#include<conio.h>
#define pi 3.14

main()
{
    float r,area;

    r = 4;
    area = pi*r*r;

    clrscr();
    printf("Area of circle :- %f",area);
    getch();
}
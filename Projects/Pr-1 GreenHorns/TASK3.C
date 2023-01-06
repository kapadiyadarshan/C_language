#include<stdio.h>
#include<conio.h>

//convert celsius to fahrenhit

main()
{
    float c,F;
    clrscr();

    printf("Enter Temperature(Celsius)= ");
    scanf("%f",&c);

    F=1.8*c+32;

    printf("Temperature(Fahrenheit)= %0.2f",F);
    getch();
}
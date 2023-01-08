#include<stdio.h>
#include<conio.h>

//electricity Bill

int main()
{
    float unit,n,tb;
    int t1=25;
    int t2=75;
    int t3=120;
    printf("Enter your unit = ");
    scanf("%f",&unit);

    if(unit<=50)
    {
        n=(unit*0.50);
    }
    else if(unit<=150)
    {
        n=t1+((unit-50)*0.75);
    }
    else if(unit<=250)
    {
        n=t1+t2+((unit-150)*1.20);
    }
    else
    {
        n=t1+t2+t3+((unit-250)*1.50);
    }

    tb=n+(n*20/100);
    
    printf("Total Bill Is = %0.2f Rs.",tb);
    
    return 0;
}
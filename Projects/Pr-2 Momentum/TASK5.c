#include<stdio.h>
#include<conio.h>

int main()
{
    float n,n1,tb,t1,t2,t3;
    t1=25;
    t2=75;
    t3=120;
    //clrscr();
    printf("Enter your electricity units = ");
    scanf("%f",&n);

    if(n>0 && n<=50)
    {
        n1=n*0.50;
        tb=n1+(n1*20/100);
    } 
    else if(n>=51 && n<=150)
    {
        n1=((n-50)*0.75)+t1;
        tb=n1+(n1*20/100);
    }
    else if(n>=151 && n<=250)
    {
        n1=((n-150)*1.20)+t1+t2;
        tb=n1+(n1*20/100);
    }
    else if(n>=251)
    {
        n1=((n-250)*1.50)+t1+t2+t3;
        tb=n1+(n1*20/100);
    }
    else
    {
        printf("Not valid");
    }

    printf("Total Bill is = %0.2f Rs",tb);
    
    return 0;
    //getch();
}
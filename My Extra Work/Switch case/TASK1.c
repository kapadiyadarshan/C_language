#include<stdio.h>
#include<conio.h>

int main()
{
    int e,p,c,b,check;
    float perc,sum;

    printf("Enter your english marks = ");
    scanf("%d",&e);
    printf("Enter your Physics marks = ");
    scanf("%d",&p);
    printf("Enter your Chemistry marks = ");
    scanf("%d",&c);
    printf("Enter your Biology marks = ");
    scanf("%d",&b);

    sum=e+p+c+b;
    perc=sum*100/400;

    printf("\npress 1 for Your total marks\n");
    printf("press 2 for Your percentage\n");

    scanf("%d",&check);

    switch(check)
    {
        case 1 : 
            printf("Your total marks = %0.2f",sum);
            break;
        case 2 :
            printf("Your percentage = %0.2f ",perc);
            break;
        default :
            printf("invalid input ");
    }

    return 0;
}
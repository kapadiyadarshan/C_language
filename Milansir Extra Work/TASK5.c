#include<stdio.h>

int main()
{
    int n;
    printf("Enter month number(1 to 12) =  ");
    scanf("%d",&n);

    if(n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12)
    {
        printf("This month has 31 days");
    }
    else if(n==4 || n==6 || n==9 || n==11)
    {
        printf("This month has 30 days"); 
    }
    else if(n==2)
    {
        printf("This month has 28 or 29 days");
    }
    else
    {
        printf("Input is not valid");
    }
    return 0;
}
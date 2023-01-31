#include<stdio.h>

// WAP to find if a given number is divisible by 3 & 5 both or not using UDF.

void divide(int x)
{
    printf("-------------------------------------------------\n");

    if(x % 3 == 0 && x % 5 == 0)
    {
        printf("%d is divided by 3 and 5\n",x);
    }
    else if(x % 3 == 0 )
    {
        printf("%d is divided by only 3 and not divided by 5\n",x);
    }
    else if(x % 5 == 0)
    {
        printf("%d is divided by only 5 and not divided by 3\n",x);
    }
    else
    {
        printf("%d is not divided by 3 and 5\n",x);
    }
    printf("---------------------------------------------------\n");
}

void main()
{
    int n;
    printf("Enter Any Number = ");
    scanf("%d",&n);

    divide(n);
}
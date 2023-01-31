#include<stdio.h>

// WAP to find cube of given no using UDF.

void cube(int n)
{
    printf("%d cube is %d",n,n*n*n);
}

void main()
{
    int n;
    printf("Enter Any Number = ");
    scanf("%d",&n);

    cube(n);
}
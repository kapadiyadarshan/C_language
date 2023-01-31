//C program to find cube of a number using function.

#include<stdio.h>

void cube(int x)
{
    printf("-----------------------------------------------\n");
    printf("%d Cube is %d\n",x,x*x*x);
    printf("-----------------------------------------------\n");
}

void main()
{
    int n;
    printf("Enter Any Number = ");
    scanf("%d",&n);

    cube(n);
}
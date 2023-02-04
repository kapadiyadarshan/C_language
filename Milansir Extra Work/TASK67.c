#include<stdio.h>

// C program to add two numbers using pointers

int main()
{
    int x,y;
    int *p,*q;

    printf("Enter The value of X = ");
    scanf("%d",&x);

    printf("Enter The value of Y = ");
    scanf("%d",&y);

    p = &x;
    q = &y;

    printf("\nAddition of %d and %d is %d\n",*p,*q,*p + *q);
    return 0;
}
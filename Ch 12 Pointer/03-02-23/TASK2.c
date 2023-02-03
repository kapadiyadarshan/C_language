#include<stdio.h>

// WAP to swap two variables using Pointer.

int main()
{
    int a,b,c;
    int *p, *q;
    printf("Enter the value of A = ");
    scanf("%d",&a);
    printf("Enter the value of B = ");
    scanf("%d",&b);

    p=&a;
    q=&b;

    c = *p;
    *p = *q;
    *q = c;

    printf("A = %d\n",*p);
    printf("B = %d\n",*q);

    return 0;
}
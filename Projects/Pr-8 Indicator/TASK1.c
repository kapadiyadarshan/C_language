#include<stdio.h>

// C program to swap two numbers using pointers.

int main()
{
    int x,y,z;
    int *p, *q;

    printf("Enter the value of X = ");
    scanf("%d",&x);
    printf("Enter the value of Y = ");
    scanf("%d",&y);

    p=&x;
    q=&y;

   *p = *p + *q;
   *q = *p - *q;
   *p = *p - *q;

    printf("\n=========================================================\n\n");
    printf("After Swapping\n");

    printf("X = %d\n",*p);
    printf("Y = %d\n",*q);
    return 0;
}
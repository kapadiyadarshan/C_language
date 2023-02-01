// Write a C program to print all negative elements in an array.

#include<stdio.h>

int main()
{
    int n;
    printf("Enter Array Size = ");
    scanf("%d",&n);

    int A[n];
    int i;

    printf("-------------------------------------------------------------\n");

    for(i=0; i<n; i++)
    {
        printf("A[%d] ==> ",i);
        scanf("%d",&A[i]);
    }

    printf("-------------------------------------------------------------\n");

    printf("\nNegative elements are\n\n");

    for(i=0; i<n; i++)
    {
        if(A[i] < 0)
        {
            printf("A[%d] ==> %d\n",i,A[i]);
        }
    }
    return 0;
}
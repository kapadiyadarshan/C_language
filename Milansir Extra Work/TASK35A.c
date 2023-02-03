#include<stdio.h>

// C program to insert element in Array.

int main()
{
    int n,i,position,value;
    printf("Enter the array size = ");
    scanf("%d",&n);

    int A[n];

    printf("------------------------------------------------------\n");
    printf("\nEnter Array Elements\n\n");
    
    for(i=0; i<n; i++)
    {
        printf("A[%d] ==> ",i);
        scanf("%d",&A[i]);
    }

    printf("------------------------------------------------------\n");

    printf("Enter the location where you wish to insert an element = ");
    scanf("%d",&position);

    printf("Enter the value to insert = ");
    scanf("%d",&value);

    printf("------------------------------------------------------\n");

    for(i=n-1; i>=(position-1); i--)
    {
        A[i+1]=A[i];
    }

    A[position-1] = value;

    printf("------------------------------------------------------\n");

    printf("New Array is \n\n");

    for(i=0; i<=n; i++)
    {
        printf("A[%d] ==> %d\n",i,A[i]);
    }

    return 0;
}

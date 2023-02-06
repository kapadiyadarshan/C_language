#include<stdio.h>

// C program to merge two sorted array.

int main()
{
    int n,m,i,j;
    printf("Enter 1st Array Size = ");
    scanf("%d",&n);

    int A[n];
    printf("\nEnter 1st Array Elements\n");
    for(i=0; i<n; i++)
    {
        printf("A[%d] ==> ",i);
        scanf("%d",&A[i]);
    }

    printf("\nEnter 2nd Array Size = ");
    scanf("%d",&m);

    int B[m];
    printf("\nEnter 2nd Array Elements\n");
    for(i=0; i<m; i++)
    {
        printf("B[%d] ==> ",i);
        scanf("%d",&B[i]);
    }

    printf("\n================================================================\n\n");

    int C[n+m];

    for(i=0; i<n; i++)
    {
        C[i]=A[i];
    }

    for(i=n,j=0; i<n+m,j<m; i++,j++)
    {
        C[i]=B[j];
    }

    for(i=0; i<n+m; i++)
    {
        printf("C[%d] ==> %d\n",i,C[i]);
    }

    return 0;
}
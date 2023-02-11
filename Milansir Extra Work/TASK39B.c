#include<stdio.h>

//C program to left rotate an array.

int main()
{
    int n,i,j,d,temp;
    printf("Enter Array Size = ");
    scanf("%d",&n);

    printf("\n---------------------------------------------------------\n\n");

    int A[n];
    for(i=0; i<n; i++)
    {
        printf("A[%d] --> ",i);
        scanf("%d",&A[i]);
    }

    printf("\n---------------------------------------------------------\n\n");

    printf("How many times rotate in left side = ");
    scanf("%d",&d);

    printf("\n---------------------------------------------------------\n\n");


    for(j=1; j<=d; j++)
    {
        temp = A[0];

        for(i=0; i<n-1; i++)
        {
            A[i]=A[i+1];
        }
        
        A[n-1] = temp;
    }

    for(i=0; i<n; i++)
    {
        printf("A[%d] --> %d\n",i,A[i]);
    }
    return 0;
}
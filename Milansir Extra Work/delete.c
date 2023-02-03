// C program to Delete element in Array.

#include<stdio.h>

int main()
{
    int n,i,position;
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

    printf("Enter the location where you wish to Delete an element = ");
    scanf("%d",&position);

    if(position >= n+1)
    {
        printf("Deletion not possible\n");
    }
    else
    {
        for(i=position-1; i<n-1; i++)
        {
            A[i]=A[i+1];
        }
        printf("New Array is \n\n");

        for(i=0; i<n-1; i++)
        {
            printf("A[%d] ==> %d\n",i,A[i]);
        }
    }
    return 0;
}
#include<stdio.h>

// C program to count frequency of each element in an array.

int main()
{
    int n,i,x,count=0;
    printf("Enter Array Size = ");
    scanf("%d",&n);

    printf("\n-----------------------------------------------------------------\n\n");

    int A[n];
    printf("Enter Array Elemets\n");

    for(i=0; i<n; i++)
    {
        printf("A[%d]  ==> ",i);
        scanf("%d",&A[i]);
    }

    printf("\n-----------------------------------------------------------------\n\n");
    
    printf("Enter Number To Find Frequency = ");
    scanf("%d",&x);

    for(i=0; i<n; i++)
    {
        if(A[i]==x)
        {
            count++;
        }
    }
    printf("Frequeency of number %d is %d",x,count);

    return 0;
}
// C program to find second largest number in array

#include<stdio.h>

int main()
{
    int n;
    printf("Enter Array Size = ");
    scanf("%d",&n);

    int A[n];
    int i,max,max2;

    printf("\n-------------------------------------------------------\n");

    printf("\nEnter Array Elements\n\n");

    for(i=0; i<n; i++)
    {
        printf("A[%d] ==> ",i);
        scanf("%d",&A[i]);
    }

    printf("\n-------------------------------------------------------\n");

    max=max2=0;

    for(i=0; i<n; i++)
    {
        if(A[i] > max)
        {
            max=A[i];
        }
    }

    for(i=0; i<n; i++)
    {
        if(A[i] > max2 && A[i] != max)
        {
            max2=A[i];
        }
    }
    printf("Second Largest Element is = %d\n",max2);
    
    return 0;
}
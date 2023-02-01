// C program to find maximum and minimum element in array.

#include<stdio.h>

int main()
{
    int n;
    printf("Enter Array Size = ");
    scanf("%d",&n);

    int A[n];
    int i,max,min;

    printf("\n-------------------------------------------------------\n");

    printf("\nEnter Array Elements\n\n");

    for(i=0; i<n; i++)
    {
        printf("A[%d] ==> ",i);
        scanf("%d",&A[i]);
    }

    printf("\n-------------------------------------------------------\n");

    max=min=A[0];

    for(i=0; i<n; i++)
    {
        if(A[i] > max)
        {
            max=A[i];
        }
        if(A[i] < min)
        {
            min=A[i];
        }
    }

    printf("Maximum Element is = %d\n",max);
    printf("Minimum Element is = %d\n",min);
    
    return 0;
}
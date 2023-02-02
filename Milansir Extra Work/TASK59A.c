// C program to find Sum of all Array Elements by passing array as an argument using User Define Functions.

#include<stdio.h>

void SumArr(int A[5])
{
    int i;
    int sum=0;
    for(i=0; i<5; i++)
    {
        sum=sum+A[i];
    }
    printf("\nAll Array Elements Sum is = %d",sum);
}

int main()
{
    int A[5];
    int i;

    printf("\nEnter Array Elements\n\n");

    for(i=0; i<5; i++)
    {
        printf("A[%d] == ",i);
        scanf("%d",&A[i]);
    }

    SumArr(A);
    return 0;
}
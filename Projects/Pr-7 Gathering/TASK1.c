//C program to find Sum of all Array Elements by passing array as an argument using User Define Functions.

#include<stdio.h>

void SumArr(int A[],int n)
{
    int i;
    int sum=0;
    for(i=0; i<n; i++)
    {
        sum=sum+A[i];
    }
    printf("\nAll Array Elements Sum is = %d",sum);
}

int main()
{
    int n;
    printf("Enter Array Size = ");
    scanf("%d",&n);

    int A[n];
    int i;

    printf("\n----------------------------------------------------------\n\n");

    for(i=0; i<n; i++)
    {
        printf("A[%d] == ",i);
        scanf("%d",&A[i]);
    }

    SumArr(A,n);
    return 0;
}
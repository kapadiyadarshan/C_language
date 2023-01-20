#include<stdio.h>

int main()
{
    int n;
    printf("Enter Array size = ");
    scanf("%d",&n);

    int A[n];
    int i;

    printf("\nEnter value\n");

    for(i=0; i<n; i++)
    {
        printf("A[%d] => ",i);
        scanf("%d",&A[i]);
    }

    printf("\n\n----------------------------------------------\n\n");

    for(i=0; i<n; i++)
    {
        printf("A[%d] => %d \n",i,A[i]);
    }

    return 0;
}
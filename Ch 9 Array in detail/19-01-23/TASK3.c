#include<stdio.h>

int main()
{
    int n;
    printf("Enter Array size = ");
    scanf("%d",&n);

    int A[n];
    int i,avg;
    int sum=0;

    for(i=0; i<n; i++)
    {
        printf("\nA[%d] ==>  ",i);
        scanf("%d",&A[i]);

        sum=sum+A[i];
    }

    avg=sum/n;

    printf("\nAverage is = %d",avg);
    
    return 0;
}
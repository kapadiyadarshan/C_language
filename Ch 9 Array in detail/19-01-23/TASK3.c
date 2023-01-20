#include<stdio.h>

int main()
{
    int n;
    printf("Enter Array size = ");
    scanf("%d",&n);

    int A[n];
    int i,avg,length=0;
    int sum=0;

    for(i=0; i<n; i++)
    {
        printf("\nA[%d] ==>  ",i);
        scanf("%d",&A[i]);

        length++;
        sum=sum+A[i];
    }

    avg=sum/length;

    printf("\nAverage is = %d",avg);
    
    return 0;
}
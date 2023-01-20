#include<stdio.h>

int main()
{
    int n;
    printf("Enter Array Size = ");
    scanf("%d",&n);

    int A[n];
    int i;

    for(i=0; i<n; i++)
    {
        printf("A[%d] ==> ",i);
        scanf("%d",&A[i]);
    }

    printf("Array length is = %d",n);

    return 0;
}
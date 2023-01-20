#include<stdio.h>

int main()
{
    int n,length=0;
    printf("Enter Array Size = ");
    scanf("%d",&n);

    int A[n];
    int i;

    for(i=0; i<n; i++)
    {
        printf("A[%d] ==> ",i);
        scanf("%d",&A[i]);

        length++;
    }

    printf("Array length is = %d",length);

    return 0;
}
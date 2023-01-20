#include<stdio.h>

int main()
{
    int n;
    printf("Enter Array Size = ");
    scanf("%d",&n);

    printf("\n_________________________________\n\n");

    int A[n],B[n],C[n];
    int i;

    for(i=0; i<n; i++)
    {
        printf("A[%d] ==> ",i);
        scanf("%d",&A[i]);
    }

    printf("\n_________________________________\n\n");

    for(i=0; i<n; i++)
    {
        printf("B[%d] ==> ",i);
        scanf("%d",&B[i]);
    }
    
    printf("\n_________________________________\n\n");

    for(i=0; i<n; i++)
    {
        C[i]=A[i]+B[i];

        printf("C[%d] ==> %d\n",i,C[i]);
    }
    return 0;
}
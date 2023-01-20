#include<stdio.h>

int main()
{
    int n,m;
    printf("Enter 1st Array Size = ");
    scanf("%d",&n);
    printf("Enter 2nd Array size = ");
    scanf("%d",&m);

    int A[n],B[m],C[n+m];
    int i;

    printf("\n_____________________________________________________\n\n");

    for(i=0; i<n; i++)
    {
        printf("A[%d] ==> ",i);
        scanf("%d",&A[i]);
    }

    printf("\n_____________________________________________________\n\n");

    for(i=0; i<m; i++)
    {
        printf("B[%d] ==> ",i);
        scanf("%d",&B[i]);
    }

    printf("\n_____________________________________________________\n\n");

    for(i=0; i<n; i++)
    {
        C[i]=A[i];
        printf("C[%d] ==> %d\n",i,C[i]);
    }
    for(i=n; i<n+m; i++)
    {
        C[i]=B[i-n];
        printf("C[%d] ==> %d\n",i,C[i]);
    }

    return 0;
}
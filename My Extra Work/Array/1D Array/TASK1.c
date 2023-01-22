#include<stdio.h>
#include<conio.h>

// three array merge

int main()
{
    int n1,n2,n3;
    printf("Enter 1st Array size = ");
    scanf("%d",&n1);
    printf("Enter 2nd Array size = ");
    scanf("%d",&n2);
    printf("Enter 3rd Array size = ");
    scanf("%d",&n3);

    printf("\n============================================\n\n");

    int A[n1],B[n2],C[n3],D[n1+n2+n3];
    int i,j;

    for(i=0; i<n1; i++)
    {
        printf("A[%d] ==> ",i);
        scanf("%d",&A[i]);
    }

    printf("\n============================================\n\n");

    for(i=0; i<n2; i++)
    {
        printf("B[%d] ==> ",i);
        scanf("%d",&B[i]);
    }

    printf("\n============================================\n\n");

    for(i=0; i<n3; i++)
    {
        printf("C[%d] ==> ",i);
        scanf("%d",&C[i]);
    }
    
    printf("\n============================================\n\n");

    for(i=0; i<=n1; i++)
    {
        D[i]=A[i];
    }

    for(i=n1,j=0; i<(n1+n2),j<n2; i++,j++)
    {
        D[i]=B[j];
    }

    for(i=n1+n2,j=0; i<(n1+n2+n3),j<n3; i++,j++)
    {
        D[i]=C[j];
    }

    for(i=0; i<(n1+n2+n3); i++)
    {
        printf("D[%d] ==> %d\n",i,D[i]);
    }

    return 0;
}
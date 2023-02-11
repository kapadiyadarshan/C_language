#include<stdio.h>

// C program to add two matrices.

int main()
{
    int r,c;
    printf("Enter Row number = ");
    scanf("%d",&r);
    printf("Enter Column number = ");
    scanf("%d",&c);

    printf("\n------------------------------------------------------\n\n");

    int A[r][c],B[r][c],C[r][c];
    int i,j;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    printf("\n------------------------------------------------------\n\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    printf("\n------------------------------------------------------\n\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf("C[%d][%d] = %d\n",i,j,C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include<stdio.h>

// C program to subtract two matrix using pointers.

int main()
{
    int r,c;
    printf("Enter Row Size = ");
    scanf("%d",&r);
    printf("Enter Column Size = ");
    scanf("%d",&c);

    printf("\n---------------------------------------------------------------------\n\n");

    int A[r][c],B[r][c],C[r][c];
    int i,j;
    int *p,*q,*x;

    printf("Enter 1st matrix\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("A[%d][%d] == ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    printf("\n---------------------------------------------------------------------\n\n");
    printf("Enter 2nd matrix\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("B[%d][%d] == ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    p = &A;
    q = &B;
    x = &C;

    printf("\n---------------------------------------------------------------------\n\n");
    printf("Subtract matrix\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            (*((x+i)+j)) = (*((p+i)+j)) - (*((q+i)+j));
            printf("C[%d][%d] --> %d\n",i,j,(*((x+i)+j)));
        }
        printf("\n");
    }
    return 0;
}
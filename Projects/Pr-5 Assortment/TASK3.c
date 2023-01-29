#include<stdio.h>

int main()
{
    int r,c;
    printf("Enter Row size = ");
    scanf("%d",&r);
    printf("Enter Column size = ");
    scanf("%d",&c);

    int A[r][c], B[r][c], C[r][c];
    int i,j;

    printf("\nEnter 1st matrics values\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<r; j++)
        {
            printf("A[%d][%d] == ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nEnter 2nd matrics values\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<r; j++)
        {
            printf("B[%d][%d] == ",i,j);
            scanf("%d",&B[i][j]);
        }
    }

    printf("\nAddition of 1st and 2nd matrics\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<r; j++)
        {
            C[i][j] = A[i][j]+B[i][j];

            printf("C[%d][%d] == %d\n",i,j,C[i][j]);
        }
    }
    return 0;
}
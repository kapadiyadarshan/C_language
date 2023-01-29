#include<stdio.h>

int main()
{
    int r,c;
    printf("Enter Row size = ");
    scanf("%d",&r);
    printf("Enter Column size = ");
    scanf("%d",&c);

    int A[r][c];
    int i,j,sum=0;

    printf("\nEnter the elemets is array\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("A[%d][%d] == ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    printf("\n==================================================\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(i == j)
            {
                printf("%d  ",A[i][j]);
                sum=sum+A[i][j];
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    printf("\nDiagonal Sum is = %d",sum);

    return 0;
}
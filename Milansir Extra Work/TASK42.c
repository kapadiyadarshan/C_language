#include<stdio.h>

// C program to find sum of both diagonal elements of a matrix

int main()
{
    int r,c;
    printf("Enter Row number = ");
    scanf("%d",&r);
    printf("Enter Column number = ");
    scanf("%d",&c);

    printf("\n------------------------------------------------------\n\n");

    int A[r][c];
    int i,j,sum=0;
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
            if((i == j) || ((i+j)==(c-1)))
            {
                printf("%d  ",A[i][j]);
                sum = sum + A[i][j];
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    printf("Both Diagonal Sum = %d",sum);

    return 0;
}
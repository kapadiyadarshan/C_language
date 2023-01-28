#include<stdio.h>

int main()
{
    int r,c;
    printf("Enter Row Size = ");
    scanf("%d",&r);
    printf("Enter Column Size = ");
    scanf("%d",&c);

    printf("\n==================================================\n\n");

    int A[r][c];
    int i,j;
    int sum=0;

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("A[%d][%d] == ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    printf("==================================================\n\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(i == j)
            {
                sum=sum+A[i][j];
            }
        }
    }
    printf("\nDiagonal sum is = %d",sum);
    return 0;
}
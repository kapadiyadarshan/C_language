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
    int length=0;

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("A[%d][%d] == ",i,j);
            scanf("%d",&A[i][j]);

            length++;
        }
        printf("\n");
    }

    printf("==================================================\n\n");

    printf("Array length is = %d",length);

    return 0;
}
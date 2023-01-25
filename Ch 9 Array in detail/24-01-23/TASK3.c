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
    int sum=0,length=0,avg;

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("A[%d][%d] == ",i,j);
            scanf("%d",&A[i][j]);

            length++;
            sum=sum+A[i][j];
        }
        printf("\n");
    }

    avg=sum/length;

    printf("==================================================\n\n");

    printf("Average is = %d",avg);

    return 0;
}
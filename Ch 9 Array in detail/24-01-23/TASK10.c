#include<stdio.h>

int main()
{
    int A[5][5];
    int i,j;
    int sum=0;

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("A[%d][%d] == ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    printf("==================================================\n\n");

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(i==0 || j==0 || i==4 || j==4)
            {
                printf("%d ",A[i][j]);
                sum=sum+A[i][j];
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("Boundery elemets sum is = %d",sum);
    return 0;
}
#include<stdio.h>
#include<conio.h>

// switch case with pattren

// 1            5 5 5 5 5   1 1 1 1 1   5
// 2 2          4 4 4 4     2 2 2 2     4 4
// 3 3 3        3 3 3       3 3 3       3 3 3
// 4 4 4 4      2 2         4 4         2 2 2 2
// 5 5 5 5 5    1           5           1 1 1 1 1

int main()
{
    int n,i,j;

    printf("Enter pattern number = ");
    scanf("%d",&n);

    switch(n)
    {
        case 1 :
            for(i=1; i<=5; i++)
            {
                for(j=1; j<=i; j++)
                {
                    printf("%d ",i);
                }
                printf("\n");
            }
            break;

        case 2 :
            for(i=5; i>=1; i--)
            {
                for(j=1; j<=i; j++)
                {
                    printf("%d ",i);
                }
                printf("\n");
            }
            break;

        case 3 :
            for(i=1; i<=5; i++)
            {
                for(j=5; j>=i; j--)
                {
                    printf("%d ",i);
                }
                printf("\n");
            }
            break;

        case 4 :
            for(i=5; i>=1; i--)
            {
                for(j=5; j>=i; j--)
                {
                    printf("%d ",i);
                }
                printf("\n");
            }
            break;
    }
    return 0;
}
#include<stdio.h>
/*
   1
  2 3
 4 5 6
7 8 9 10


*/
int main()
{
    int i,j,k,n;
    int sum=0;

    printf("Enter rows number = ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(k=n; k>i; k--)
        {
            printf("  ");
        }
        for(j=1; j<=i; j++)
        {
            sum++;
            printf("%d   ",sum);
        }
        printf("\n");
    }

    return 0;
}
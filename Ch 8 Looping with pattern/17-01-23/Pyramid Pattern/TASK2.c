#include<stdio.h>
#include<conio.h>
/*
     *
    ***
   *****
  *******
*/

int main()
{
    int n,i,j,k;
    int x=1;

    printf("enter numbers of rows = ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(k=n; k>i; k--)
        {
            printf("  ");
        }
        for(j=1; j<=x; j++)
        {
            printf("%d ", j);
        }
        x=x+2;
        printf("\n");
    }
    return 0;
}
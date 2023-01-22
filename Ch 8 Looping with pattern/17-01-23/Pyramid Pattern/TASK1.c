#include<stdio.h>
#include<conio.h>
/*
    1
   123
  12345
 1234567
123456789
 1234567
  12345
   123
    1
*/

int main()
{
    int n,i,j,k;
    int x=1;

    printf("enter the rows number = ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(k=n; k>i; k--)
        {
            printf("  ");
        }
        for(j=1; j<=x; j++)
        {
            printf("%d ",j);
        }
        x=x+2;
        printf("\n");
    }
    x=x-4;
    for(i=1; i<=5; i++)
    {
        for(k=1; k<=i; k++)
        {
            printf("  ");
        }
        for(j=1; j<=x; j++)
        {
            printf("%d ",j);
        }
        x=x-2;
        printf("\n");
    }
    
    return 0;
}
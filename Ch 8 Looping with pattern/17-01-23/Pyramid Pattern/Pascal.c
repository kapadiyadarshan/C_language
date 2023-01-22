#include<stdio.h>
/*

Pascal triangle
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1

*/

int main()
{
    int i,j,k,n,x;

    printf("Enter Rows Number = ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        for(k=n; k>i; k--)
        {
            printf(" ");
        }
        for(j=0; j<=i; j++)
        {
            if(i==0 || j==0)
            {
                x=1;
            }
            else
            {
                x=x*(i-j+1)/j;
            }
            printf("%d ",x);
        }
        printf("\n");
    }

    return 0;
}
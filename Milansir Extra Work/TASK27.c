#include<stdio.h>

// 5 6 7 8 9
// 4 5 6 7
// 3 4 5
// 2 3
// 1

int main()
{
    int i,j,k;

    for(i=5; i>=1; i--)
    {
        k=i;
        for(j=1; j<=i; j++)
        {
            printf("%d ",k++);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
#include<conio.h>

// 5
// 4 4 
// 3 3 3 
// 2 2 2 2
// 1 1 1 1 1

int main()
{
    int i,j;

    for(i=5; i>=1; i--)
    {
        for(j=i; j<=5; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
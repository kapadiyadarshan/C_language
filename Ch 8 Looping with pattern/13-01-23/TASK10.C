#include<stdio.h>
#include<conio.h>

// 1 
// 2  3  
// 4  5  6   
// 7  8  9  10 
// 11 12 13 14 15 

int main()
{
    int i,j;
    int sum=0;

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            sum++;
            printf("%d ",sum);
        }
        printf("\n");
    }
    return 0;
}
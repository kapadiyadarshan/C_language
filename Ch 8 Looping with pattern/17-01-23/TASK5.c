#include<stdio.h>
#include<conio.h>

//  5 4 3 2 1
//    4 3 2 1
//      3 2 1
//        2 1
//          1

int main()
{
    int i,j,k;

    for(i=5; i>=1; i--)
    {
        for(k=5; k>i; k--)
        {
            printf("  ");
        }
        for(j=i; j>=1; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
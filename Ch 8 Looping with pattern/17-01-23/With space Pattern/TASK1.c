#include<stdio.h>
#include<conio.h>

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
            if(j % 2 == 1)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        } 
        printf("\n");
    }
    return 0;
}
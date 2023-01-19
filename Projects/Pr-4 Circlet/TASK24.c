#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,k,l,m;

    for(i=5; i>=1; i--)
    {
        for(k=1; k<i; k++)
        {
            printf("  ");
        }
        for(j=5; j>=i; j--)
        {
            printf("%d ",j);
        }
        for(l=i+1; l<=5; l++)
        {
            printf("%d ",l);
        }
        
        printf("\n");
    
    }
    return 0;
}
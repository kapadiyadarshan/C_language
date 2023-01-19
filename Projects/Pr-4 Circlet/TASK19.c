#include<stdio.h>
#include<conio.h>

int main()
{ 
    int i,j,k,l;

    for(i=5; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ",j);
        }
        for(k=5; k>i; k--)
        {
            printf("    ");
        }
        for(l=i; l>=1; l--)
        {
            printf("%d ",l);
        }
        printf("\n");
    }

    for(i=2; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ",j);
        }
        for(k=5; k>i; k--)
        {
            printf("    ");
        }
        for(l=i; l>=1; l--)
        {
            printf("%d ",l);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j;

    for(i=1; i<=7; i++)
    {
        if(i==7)
        {
            printf("  * * *");
        }
        else
        {
            printf("*       *");
        }
        printf("\n");
    }
    return 0;
}
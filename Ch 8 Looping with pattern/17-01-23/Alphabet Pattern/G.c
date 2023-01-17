#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j;

    for(i=1; i<=7; i++)
    {
        if(i==1 || i==7 )
        {
            printf("  * * * ");
        }
        else if(i==2 || i==5 || i==6)
        {
            printf("*       *");
        }
        else if(i==4)
        {
            printf("*   * * *");
        }
        else
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j;

    for(i=1; i<=7; i++)
    {
        if(i==1 || i==7)
        {
            printf("*           *");
        }
        else if(i==2)
        {
            printf("* *         *");
        }
        else if(i==3)
        {
            printf("*   *       *");
        }
        else if(i==4)
        {
            printf("*     *     *");
        }
        else if(i==5)
        {
            printf("*       *   *");
        }
        else if(i==6)
        {
            printf("*         * *");
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
#include<conio.h>

// 1 0 1 0 1
// 0 1 0 1
// 1 0 1
// 0 1
// 1

int main()
{
    int i,j;

    for(i=5; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            if(i % 2 ==1)
            {
                if(j % 2 == 0)
                {
                    printf("0 ");
                }
                else
                {
                    printf("1 ");
                }
            }
            else
            {
                if(j % 2 == 0)
                {
                    printf("1 ");
                }
                else
                {
                    printf("0 ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
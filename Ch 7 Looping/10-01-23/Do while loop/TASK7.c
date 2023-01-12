#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i;

    i=2000;
    do
    { 
        if(i % 4 ==0)
        {
            printf("%d \n",i);
        }
        i++;
    } while (i<=3000);
    
    return 0;
}
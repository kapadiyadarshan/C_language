#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,t;

    printf("Enter any number = ");
    scanf("%d",&n);

    i=1;
    do
    {
        t=n*i;

        printf("%d * %d = %d\n",n,i,t);
        i++;
    } while (i<=10);
    
    return 0;
}
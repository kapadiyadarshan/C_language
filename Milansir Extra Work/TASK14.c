#include<stdio.h>

int main()
{
    int n;
    printf("Enter number == ");
    scanf("%d",&n);

    int i=1;
    do
    {
        printf("%d X %d = %d\n",n,i,n*i);
        i++;
    }
    while(i<=10);
    return 0;
}
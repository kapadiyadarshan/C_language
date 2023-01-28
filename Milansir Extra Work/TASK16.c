#include<stdio.h>

int main()
{
    int n;
    printf("Enter number == ");
    scanf("%d",&n);

    int fd,ld,sum;

    ld=n % 10;

    while(n > 10)
    {
        n=n/10;
    }
    fd=n;
    
    printf("First and last digit sum = %d",fd+ld);
    return 0;
}
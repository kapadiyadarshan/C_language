// C program to find factorial of number using recursion.

#include<stdio.h>

int fact(int n)
{
    if(n <= 0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

int main()
{
    int n;
    printf("Enter Any number = ");
    scanf("%d",&n);

    int ans = fact(n);
    printf("\n%d number Factorial is = %d",n,ans);
    
    return 0;
}
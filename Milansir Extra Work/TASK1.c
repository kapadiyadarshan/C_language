#include<stdio.h>

int main()
{
    int n;
    printf("Enter number = ");
    scanf("%d",&n);

    (n % 2 == 0)
        ? printf("This number is even number")
        : printf("This number is odd number");
    return 0;
}
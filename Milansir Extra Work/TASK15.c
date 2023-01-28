#include<stdio.h>

int main()
{
    int n;
    printf("Enter number == ");
    scanf("%d",&n);

    int count=0;

    while(n != 0)
    {
        n=n/10;
        count++;
    }
    
    printf("it's %d digits number",count);
    return 0;
}
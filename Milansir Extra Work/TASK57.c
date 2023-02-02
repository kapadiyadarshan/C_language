// C program to find SUM and AVERAGE of two integer Numbers using nested UDF.

#include<stdio.h>

int avg(int z)
{
    return z/2;
}

void sum(int x, int y)
{
    int z = x+y;
    printf("Sum of %d and %d = %d\n",x,y,z);
    

    int ans1 = avg(z);
    printf("Average of %d and %d = %d",x,y,ans1);
}

int main()
{
    int x,y;
    printf("Enter the value of X = ");
    scanf("%d",&x);
    printf("Enter the value of Y = ");
    scanf("%d",&y);

    printf("\n-------------------------------------------------------\n\n");

    sum(x, y);
    

    return 0;
}
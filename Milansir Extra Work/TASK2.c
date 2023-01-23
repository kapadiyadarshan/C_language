#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;

    printf("Enter the value of A = ");
    scanf("%d",&a);
    printf("Enter the value of B = ");
    scanf("%d",&b);
    printf("Enter the value of C = ");
    scanf("%d",&c);

    if(a==b && b==c)
    {
        printf("All values are same....");
    }
    else if(a==b)
    {
        printf("A & B are same...");
    }
    else if(a==c)
    {
        printf("A & C are same...");
    }
    else if(b==c)
    {
        printf("B & C are same...");
    }
    else
    {
        if(a>b)
        {
            if(a>c)
            {
                printf("A is maximum...");
            }
            else
            {
                printf("C is maximum...");
            }
        }
        else
        {
            if(b>c)
            {
                printf("B is maximum...");
            }
            else
            {
                printf("C is maximum...");
            }
        }
    }
    return 0;
}
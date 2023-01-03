#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
    clrscr();

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
        if(a<b)
        {
            if(a<c)
            {
                printf("A is minimum...");
            }
            else
            {
                printf("C is minimum...");
            }
        }
        else
        {
            if(b<c)
            {
                printf("B is minimum...");
            }
            else
            {
                printf("C is minimum...");
            }
        }
    }
    getch();
}
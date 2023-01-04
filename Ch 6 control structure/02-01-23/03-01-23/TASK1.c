#include<conio.h>
#include<stdio.h>

int main()
{
    int a,b;
    clrscr();

    printf("Enter the value of A =");
    scanf("%d",&a);
    printf("Enter the value of B =");
    scanf("%d",&b);

    (a==b)
        ? printf("A & B are same...\n")
        : (a>b)
            ? printf("A is Maximum...")
            : printf("B is Maximum...");       

    getch();
}
#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
    clrscr();

    printf("Enter the values of A = ");
    scanf("%d",&a);
    printf("Enter the values of B = ");
    scanf("%d",&b);
    printf("Enter the values of C = ");
    scanf("%d",&c);

    (a==b && b==c)
        ? printf("All values are same...")
        : (a==b)
            ? printf("A & B are same...")
            : (a==c)
                ? printf("A & C are same...")
                : (b==c)
                    ? printf("B & C are same...")
                    : (a>b)
                        ? (a>c)
                            ? printf("A is Maximum...")
                            : printf("C is Maximum...")
                        : (b>c)
                            ? printf("B is Maximum...")
                            : printf("C is Maximum...");

    getch();
}
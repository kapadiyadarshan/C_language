#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c,d;
    //clrscr();

    printf("Enter the values of A =");
    scanf("%d",&a);
    printf("Enter the values of B =");
    scanf("%d",&b);
    printf("Enter the values of C =");
    scanf("%d",&c);
    printf("Enter the values of D =");
    scanf("%d",&d);

    (a==b && b==c && c==d)
        ? printf("All values are same...")
        : (a==b && b==c)
            ? printf("A,B & C are same...")
            : (a==b && b==d)
                ? printf("A,B & D are same...")
                : (a==c && c==d)
                    ? printf("A,C & D are same...")
                    : (b==c && c==d)
                        ? printf("B,C & D are same...")
                        : (a==b)
                            ? printf("A & B are same...")
                            : (a==c)
                                ? printf("A & C are same...")
                                : (a==d)
                                    ? printf("A & D are same...")
                                    : (b==c)
                                        ? printf("B & C are same...")
                                        : (b==d)
                                            ? printf("B & D are same...")
                                            : (c==d)
                                                ? printf("C & D are same...")
                                                : (a>b)
                                                    ? (a>c)
                                                        ? (a>d)
                                                            ? printf("A is Maximum..")
                                                            : printf("D is Maximum..")
                                                        : (c>d)
                                                            ? printf("C is Maximum..")
                                                            : printf("D is Maximum..")
                                                    : (b>c)
                                                        ? (b>d)
                                                            ? printf("B is Maximum..")
                                                            : printf("D is Maximum..")
                                                        : (c>d)
                                                            ? printf("C is Maximum..")
                                                            : printf("D is Maximum..");
    
    return 0;
    //getch();
}
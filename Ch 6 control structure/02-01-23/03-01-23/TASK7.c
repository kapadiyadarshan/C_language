#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c,d,e;
    clrscr();

    printf("Enter the values of A =");
    scanf("%d",&a);
    printf("Enter the values of B =");
    scanf("%d",&b);
    printf("Enter the values of C =");
    scanf("%d",&c);
    printf("Enter the values of D =");
    scanf("%d",&d);
    printf("Enter the values of E =");
    scanf("%d",&e);
    
    (a==b && b==c && c==d && d==e)
        ? printf("All values are same...")
        : (a==b && b==c && c==d)
            ? printf("A,B,C & D are same...")
            : (a==b && b==c && c==e)
                ? printf("A,B,C & E are same...")
                : (a==b && b==d && d==e)
                    ? printf("A,B,D & E are same...")
                    : (b==c && c==d && d==e)
                        ? printf("B,C,D & E are same...")
                        : (a==c && c==d && d==e)
                            ? printf("A,C,D & E are same...")
                            : (a==b && b==c)
                                ? printf("A,B & C are same...")
                                : (a==b && b==d)
                                    ? printf("A,B & D are same...")
                                    : (a==b && b==e)
                                        ? printf("A,B & E are same...")
                                        : (a==c && c==d)
                                            ? printf("A,C & D are same...")
                                            : (a==c && c==e)
                                                ? printf("A,C & E are same...")
                                                : (a==d && d==e)
                                                    ? printf("A,D & E are same...")
                                                    : (b==c && c==d)
                                                        ? printf("B,C & D are same...")
                                                        : (b==c && b==e)
                                                            ? printf("B,C & E are same...")
                                                            : (b==d && d==e)
                                                                ? printf("B,D & E are same...")
                                                                : (c==d && d==e)
                                                                    ? printf("C,D & E are same...")
                                                                    : (a==b)
                                                                        ? printf("A & B are same...")
                                                                        : (a==c)
                                                                            ? printf("A & C are same...")
                                                                            : (a==d)
                                                                                ? printf("A & D are same...")
                                                                                : (a==e)
                                                                                    ? printf("A & E are same...")
                                                                                    : (b==c)
                                                                                        ? printf("B & C are same...")
                                                                                        : (b==d)
                                                                                            ? printf("B & D are same...")
                                                                                            : (b==e)
                                                                                                ? printf("B & E are same...")
                                                                                                : (c==d)
                                                                                                    ? printf("C & D are same...")
                                                                                                    : (c==e)
                                                                                                        ? printf("C & E are same...")
                                                                                                        : (d==e)
                                                                                                            ? printf("D & E are same...")
                                                                                                            : (a>b)
                                                                                                                ? (a>c)
                                                                                                                    ? (a>d)
                                                                                                                        ? (a>e)
                                                                                                                            ? printf("A is Maximum..")
                                                                                                                            : printf("E is Maximum..")
                                                                                                                        : (d>e)
                                                                                                                            ? printf("D is Maximum..")
                                                                                                                            : printf("E is Maximum..")
                                                                                                                    : (c>d)
                                                                                                                        ? (c>e)
                                                                                                                            ? printf("C is Maximum..")
                                                                                                                            : printf("E is Maximum..")
                                                                                                                        : (d>e)
                                                                                                                            ? printf("D is Maximum..")
                                                                                                                            : printf("E is Maximum..")
                                                                                                                : (b>c)
                                                                                                                    ? (b>d)
                                                                                                                        ? (b>e)
                                                                                                                            ? printf("B is Maximum..")
                                                                                                                            : printf("E is Maximum..")
                                                                                                                        : (d>e)
                                                                                                                            ? printf("D is Maximum..")
                                                                                                                            : printf("E is Maximum..")
                                                                                                                    : (c>d)
                                                                                                                        ? (c>e)
                                                                                                                            ? printf("C is Maximum..")
                                                                                                                            : printf("E is Maximum..")
                                                                                                                        : (d>e)
                                                                                                                            ? printf("D is Maximum..")
                                                                                                                            : printf("E is Maximum..");
                                                                                    
    
    getch();
}
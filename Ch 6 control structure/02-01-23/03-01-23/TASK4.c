#include<stdio.h>
#include<conio.h>

main()
{
    int a,b,c,d,e;
    clrscr();

    printf("Enter the value of A = \n");
    scanf("%d",&a);
    printf("Enter the value of B = \n");
    scanf("%d",&b);
    printf("Enter the value of C = \n");
    scanf("%d",&c);
    printf("Enter the value of D = \n");
    scanf("%d",&d);
    printf("Enter the value of E = \n");
    scanf("%d",&e);

    if(a==b && b==c && c==d && d==e)
    {
        printf("All values are same...");
    }
    else if(a==b && b==c && c==d)
    {
        printf("A,B,C & D are same...");
    }
    else if(a==b && b==c && c==e)
    {
        printf("A,B,C & E are same...");
    }
    else if(a==b && b==d && d==e)
    {
        printf("A,B,D & E are same...");
    }
    else if(a==c && c==d && d==e)
    {
        printf("A,C,D & E are same...");
    }
    else if(b==c && c==d && d==e)
    {
        printf("B,C,D & E are same...");
    }
    else if(a==b && b==c)
    {
        printf("A,B & C are same...");
    }
    else if(a==b && b==d)
    {
        printf("A,B & D are same...");
    }
    else if(a==b && b==e)
    {
        printf("A,B & E are same...");
    }
    else if(a==c && c==d)
    {
        printf("A,C & D are same...");
    }
    else if(a==c && c==e)
    {
        printf("A,C & E are same...");
    }
    else if(a==d && d==e)
    {
        printf("A,D & E are same...");
    }
    else if(b==c && c==d)
    {
        printf("B,C & D are same...");
    }
    else if(b==c && c==e)
    {
        printf("B,C & E are same...");
    }
    else if(b==d && d==e)
    {
        printf("B,D & E are same...");
    }
    else if(c==d && d==e)
    {
        printf("C,D & E are same...");
    }
    else if(a==b)
    {
        printf("A & B are same...");
    }
    else if(a==c)
    {
        printf("A & C are same...");
    }
    else if(a==d)
    {
        printf("A & D are same...");
    }
    else if(a==e)
    {
        printf("A & E are same...");
    }
    else if(b==c)
    {
        printf("B & C are same...");
    }
    else if(b==d)
    {
        printf("B & D are same...");
    }
    else if(b==e)
    {
        printf("B & E are same...");
    }
    else if(c==d)
    {
        printf("C & D are same...");
    }
    else if(c==e)
    {
        printf("C & E are same...");
    }
    else if(d==e)
    {
        printf("D & E are same...");
    }
    else
    {
        if(a<b)
        {
            if(a<c)
            {
                if(a<d)
                {
                    if(a<e)
                    {
                        printf("A is minimum \n");
                    }
                    else
                    {
                        printf("E is minimum \n");
                    }
                }
                else
                {
                    if(d<e)
                    {
                        printf("D is minimum \n");
                    }
                    else
                    {
                        printf("E is minimum \n");
                    }
                }
            }
            else
            {
                if(c<d)
                {
                    if(c<e)
                    {
                        printf("C is minimum \n");
                    }
                    else
                    {
                        printf("E is minimum \n");
                    }
                }
                else
                {
                    if(d<e)
                    {
                        printf("D is minimum \n");
                    }
                    else
                    {
                        printf("E is minimum \n");
                    }
                }
            }
        }
        else
        {
            if(b<c)
            {
                if(b<d)
                {
                    if(b<e)
                    {
                        printf("B is minimum...");
                    }
                    else
                    {
                        printf("E is minimum...");
                    }
                }
                else
                {
                    if(d<e)
                    {
                        printf("D is minimum...");
                    }
                    else
                    {
                        printf("E is minimum...");
                    }
                }
            }
            else
            {
                if(c<d)
                {
                    if(c<e)
                    {
                        printf("C is minimum...");
                    }
                    else
                    {
                        printf("E is minimum...");
                    }
                }
                else
                {
                    if(d<e)
                    {
                        printf("D is minimum...");
                    }
                    else
                    {
                        printf("E is minimum...");
                    }
                }
            }
        }
    }
    getch();
}

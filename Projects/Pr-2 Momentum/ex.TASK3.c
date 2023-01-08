#include<stdio.h>
#include<conio.h>

//ABCD
//which number is maximum

int main()
{
    int a,b,c,d;
    //clrscr();

    printf("Enter the value of A = ");
    scanf("%d",&a);
    printf("Enter the value of B = ");
    scanf("%d",&b);
    printf("Enter the value of C = ");
    scanf("%d",&c);
    printf("Enter the value of D = ");
    scanf("%d",&d);

    if(a==b && b==c && c==d)
    {
        printf("All values are same...");
    }
    else
    {
        if(a==b && b==c)
        {
            if(a<d)
            {
                printf("A,B & C are same...\n");
                printf("D is maximum..\n");
            }
            else
            {
                printf("A,B & C are same...\n");
                printf("D is minimum..\n");
            }
        }
        else
        {
            if(a==b && b==d)
            {
                if(a<c)
                {
                    printf("A,B & D are same... \n");
                    printf("C is maximum..\n");
                }
                else
                {
                    printf("A,B & D are same... \n");
                    printf("C is minimum..\n");
                }
            }
            else
            {
                if(a==c && c==d)
                {
                    if(a<b)
                    {
                        printf("A,C & D are same...\n");
                        printf("B is maximum..\n");
                    }
                    else
                    {
                        printf("A,C & D are same...\n");
                        printf("B is minimum..\n");
                    }
                }
                else
                {
                    if(b==c && c==d)
                    {
                        if(b<a)
                        {
                            printf("B,C & D are same... \n");
                            printf("A is maximum..\n");
                        }
                        else
                        {
                            printf("B,C & D are same... \n");
                            printf("A is minimum..\n");
                        }
                    }
                    else
                    {
                        if(a==b)
                        {
                            if(c==d)
                            {
                                printf("A & B are same... \n");
                                printf("C & D are same...\n");

                                if(a<c)
                                {
                                    printf("but C & D are maximum\n");
                                }
                                else
                                {
                                    printf("but A & B are maximum\n");
                                }
                            }
                            else
                            {
                                printf("A & B are same... \n");

                                if(a<c && d<c)
                                {
                                    printf("but C is maximum..\n");
                                }
                                else if(a<d && c<d)
                                {
                                    printf("but D is maximum..\n");
                                }
                                else
                                {
                                    printf("but bigger than C & D \n");
                                    printf("A & B are maximum \n");
                                }
                            }
                        }
                        else
                        {
                            if(a==c)
                            {
                                if(b==d)
                                {
                                    printf("A & C are same... \n");
                                    printf("B & D are same...\n");

                                    if(a<b)
                                    {
                                        printf("but B & D are maximum\n");
                                    }
                                    else
                                    {
                                        printf("but A & C are maximum\n");
                                    }
                                }
                                else
                                {
                                    printf("A & C are same... \n");

                                    if(a<b && d<b)
                                    {
                                        printf("but B is maximum..\n");
                                    }
                                    else if(a<d && b<d)
                                    {
                                        printf("but D is maximum..\n");
                                    }
                                    else
                                    {
                                        printf("But bigger than B & D \n");
                                        printf("A & C are maximum \n");
                                    }
                                }
                            }
                            else
                            {
                                if(a==d)
                                {
                                    if(b==c)
                                    {
                                        printf("A & D are same...\n");
                                        printf("B & C are same...\n");

                                        if(a<b)
                                        {
                                            printf("but B & C are maximum\n");
                                        }
                                        else
                                        {
                                            printf("but A & D are maximum\n");
                                        }
                                    }
                                    else
                                    {
                                        printf("A & D are same...\n");

                                        if(a<b && c<b)
                                        {
                                            printf("but B is maximum\n");
                                        }
                                        else if (a<c && b<c)
                                        {
                                            printf("but C is maximum\n");
                                        }
                                        else
                                        {
                                            printf("But bigger than C & D\n");
                                            printf("A & C are Maximum\n");
                                        }
                                        
                                    }
                                }
                                else
                                {
                                    if(b==c)
                                    {
                                        if(a==d)
                                        {
                                            printf("B & C are same...\n");
                                            printf("A & D are same...\n");

                                            if(b<a)
                                            {
                                                printf("but A & D are maximum\n");
                                            }
                                            else
                                            {
                                                printf("but B & C are maximum\n");
                                            }
                                        }
                                        else
                                        {
                                            printf("B & C are same...\n");

                                            if(b<a && d<a)
                                            {
                                                printf("but A is maximum\n");
                                            }
                                            else if(b<d && a<d)
                                            {
                                                printf("but D is maximum\n");
                                            }
                                            else
                                            {
                                                printf("But bigger than A & D\n");
                                                printf("B & C are Maximum\n");
                                            }
                                        }
                                    }
                                    else
                                    {
                                        if(b==d)
                                        {
                                            if(a==c)
                                            {
                                                printf("B & D are same...\n");
                                                printf("A & C are same...\n");

                                                if(b<a)
                                                {
                                                    printf("but A & C are maximum\n");
                                                }
                                                else
                                                {
                                                    printf("but B & D are maximum\n");
                                                }
                                            }
                                            else
                                            {
                                                printf("B & D are same...\n");

                                                if(b<a && c<a)
                                                {
                                                    printf("but A is maximum\n");
                                                }
                                                else if(b<c && a<c)
                                                {
                                                    printf("but C is maximum\n");
                                                }
                                                else
                                                {
                                                    printf("But bigger than A & C\n");
                                                    printf("B & D are Maximum\n");
                                                }
                                            }
                                        }
                                        else
                                        {
                                            if(c==d)
                                            {
                                                if(a==b)
                                                {
                                                    printf("C & D are same... \n");
                                                    printf("A & B are same...\n");

                                                    if(c<a)
                                                    {
                                                        printf("but A & B are maximum\n");
                                                    }
                                                    else
                                                    {
                                                        printf("but C & D are maximum\n");
                                                    }
                                                }
                                                else
                                                {
                                                    printf("C & D are same...\n");

                                                    if(c<a && b<a)
                                                    {
                                                        printf("but A is maximum\n");
                                                    }
                                                    else if(c<b && a<b)
                                                    {
                                                        printf("but B is maximum\n");
                                                    }
                                                    else
                                                    {
                                                        printf("But bigger than A & B\n");
                                                        printf("C & D are Maximum\n");
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                if(a>b)
                                                {
                                                    if(a>c)
                                                    {
                                                        if(a>d)
                                                        {
                                                            printf("A is Maximum...");
                                                        }
                                                        else
                                                        {
                                                            printf("D is Maximum...");
                                                        }
                                                    }
                                                    else
                                                    {
                                                        if(c>d)
                                                        {
                                                            printf("C is Maximum...");
                                                        }
                                                        else
                                                        {
                                                            printf("D is Maximum...");
                                                        }
                                                    }
                                                }
                                                else
                                                {
                                                    if(b>c)
                                                    {
                                                        if(b>d)
                                                        {
                                                            printf("B is Maximum...");
                                                        }
                                                        else
                                                        {
                                                            printf("D is Maximum...");
                                                        }
                                                    }
                                                    else
                                                    {
                                                        if(c>d)
                                                        {
                                                            printf("C is Maximum...");
                                                        }
                                                        else
                                                        {
                                                            printf("D is Maximum...");
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
    //getch();
}
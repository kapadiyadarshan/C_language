#include<stdio.h>
#include<conio.h>

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
            printf("A,B & C are same...");
        }
        else
        {
            if(a==b && b==d)
            {
                printf("A,B & D are same...");
            }
            else
            {
                if(a==c && c==d)
                {
                    printf("A,C & D are same...");
                }
                else
                {
                    if(b==c && c==d)
                    {
                        printf("B,C & D are same...");
                    }
                    else
                    {
                        if(a==b)
                        {
                            printf("A & B are same...");
                        }
                        else
                        {
                            if(a==c)
                            {
                                printf("A & C are same...");
                            }
                            else
                            {
                                if(a==d)
                                {
                                    printf("A & D are same...");
                                }
                                else
                                {
                                    if(b==c)
                                    {
                                        printf("B & C are same...");
                                    }
                                    else
                                    {
                                        if(b==d)
                                        {
                                            printf("B & D are same...");
                                        }
                                        else
                                        {
                                            if(c==d)
                                            {
                                                printf("C & D are same...");
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
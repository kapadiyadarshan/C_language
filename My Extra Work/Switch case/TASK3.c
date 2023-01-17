#include<stdio.h>
#include<conio.h>

//without space 1 to 13

int main()
{
    int choice,i,j;
    int sum=1;
    char a='A';

    printf("Enter your choice = ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1 :
            for(i=1; i<=5; i++)
            {
                for(j=1; j<=i; j++)
                {
                    printf("%d ",j);
                }
                printf("\n");
            }
        break;

        case 2 :
            for(i=1; i<=5; i++)
            {
                for(j=i; j>=1; j--)
                {
                    printf("%d ",j);
                }
                printf("\n");
            }
        break;

        case 3 :
            for(i=1; i<=5; i++)
            {
                for(j=1; j<=i; j++)
                {
                    printf("%d ",i);
                }
                printf("\n");
            }
        break;

        case 4 :
            for(i=5; i>=1; i--)
            {
                for(j=5; j>=i; j--)
                {
                    printf("%d ",j);
                }
                printf("\n");
            }
        break;

        case 5 :
            for(i=5; i>=1; i--)
            {
                for(j=i; j<=5; j++)
                {
                    printf("%d ",j);
                }
                printf("\n");
            }
        break;

        case 6 :
            for(i=5; i>=1; i--)
            {
                for(j=5; j>=i; j--)
                {
                    printf("%d ",i);
                }
                printf("\n");
            }
        break;

        case 7 :
            for(i=5; i>=1; i--)
            {
                for(j=1; j<=i; j++)
                {
                    printf("%d ",j);
                }
                printf("\n");
            }
        break;

        case 8 :
            for(i=5; i>=1; i--)
            {
                for(j=i; j<=5; j++)
                {
                    printf("%d ",j);
                }
                printf("\n");
            }
        break;

        case 9 :
            for(i=1; i<=5; i++)
            {
                for(j=5; j>=i; j--)
                {
                    printf("%d ",i);
                }
                printf("\n");
            }
        break;

        case 10 :
            for(i=1; i<=5; i++)
            {
                for(j=1; j<=i; j++)
                {
                    printf("%d ",sum++);
                }
                printf("\n");
            }
        break;

        case 13 :
            for(i=1; i<=5; i++)
            {
                for(j=1; j<=i; j++)
                {
                    printf("%c ",a++);
                }
                printf("\n");
            }
        break;

        case 12 :
            for(i='A'; i<='E'; i++)
            {
                for(j='A'; j<=i; j++)
                {
                    printf("%c ",j);
                }
                printf("\n");
            }
        break;

        case 11 :
            for(i=5; i>=1; i--)
            {
                for(j=1; j<=i; j++)
                {
                    if(j % 2 ==1)
                    {
                        if(i % 2 ==1)
                        {
                            printf("1 ");
                        }
                        else
                        {
                            printf("0 ");
                        }
                    }
                    else
                    {
                        if(i % 2 == 1)
                        {
                            printf("0 ");
                        }
                        else
                        {
                            printf("1 ");
                        }
                    }
                }
                printf("\n");
            }
        break;

    }
    return 0;
}
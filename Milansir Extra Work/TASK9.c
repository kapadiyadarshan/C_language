#include<stdio.h>

int main()
{
    int month;
    printf("Enter month(1-12) == ");
    scanf("%d",&month);

    switch(month)
    {
        case 1 :
            printf("This month has 31 days");
            break;
        case 2 :
            printf("This month has 28 to 29 days");
            break;
        case 3 :
            printf("This month has 31 days");
            break;
        case 4 :
            printf("This month has 30 days");
            break;
        case 5 :
            printf("This month has 31 days");
            break;
        case 6 :
            printf("This month has 30 days");
            break;
        case 7 :
            printf("This month has 31 days");
            break;
        case 8 :
            printf("This month has 31 days");
            break;
        case 9 :
            printf("This month has 30 days");
            break;
        case 10 :
            printf("This month has 31 days");
            break;
        case 11 :
            printf("This month has 30 days");
            break;
        case 12 :
            printf("This month has 31 days");
            break;
        default :
            printf("invalid choice");
            break;
    }
    return 0;
}
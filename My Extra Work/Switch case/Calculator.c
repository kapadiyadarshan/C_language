#include<stdio.h>

int main()
{
    int n1,n2;

    printf("Enter 1st number = ");
    scanf("%d",&n1);

    printf("Enter 2nd number = ");
    scanf("%d",&n2);

    char choice;
    printf("Enter your choice = ");
    scanf("%c",&choice);

    switch(choice)
    {
        case '+' :
            printf("%d ",n1+n2);
            break;

        case '-' :
            printf("%d ",n1-n2);
            break;
        
        case '*' :
            printf("%d ",n1*n2);
            break;

        case '/' :
            printf("%d ",n1/n2);
            break;    

        default :
            printf("Unvalid choice");
    }
    return 0;
}
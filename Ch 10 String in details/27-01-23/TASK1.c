#include<stdio.h>
#include<string.h>

int main()
{
    char pass[200];
    int i;
    int isDigit=0, isUpper=0, isLower=0, isSymbol=0;
    
    printf("Enter Password = ");
    gets(pass);

    for(i=0; i<strlen(pass); i++)
    {
        if(pass[i]>=48 && pass[i]<=57)
        {
            isDigit=1;
        }
        else if(pass[i]>=65 && pass[i]<=90)
        {
            isUpper=1;
        }
        else if(pass[i]>=97 && pass[i]<=122)
        {
            isLower=1;
        }
        else
        {
            isSymbol=1;
        }
    }

    printf("---------------------------------------------------------\n");

    if(isDigit==1 && isLower==1 && isUpper==1 && isSymbol==1)
    {
        printf("Password is valid....");
    }
    else
    {
        printf("Password is invalid...");
    }

    return 0;
}
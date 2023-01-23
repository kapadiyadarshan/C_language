#include<stdio.h>

int main()
{
    char n;
    printf("Enter any charcater = ");
    scanf("%c",&n);

    if((n>='A' && n<='Z') || (n>='a' && n<='z'))
    {
        printf("it's Alphabet");
    }
    else if(n>='0' && n<='9')
    {
        printf("it's Number");
    }
    else
    {
        printf("it's special character");
    }
    return 0;
}
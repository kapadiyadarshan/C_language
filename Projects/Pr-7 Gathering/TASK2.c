//C program to find Length of the String by passing String/ Character Array as an Argument using User Define Functions.

#include<stdio.h>

void length(char str[200])
{
    int i;
    int length1=0;
    for(i=0; str[i]!='\0'; i++)
    {
        length1++;
    }
    printf("\nLength of string is %d",length1++);
}

int main()
{
    char str[200];
    printf("Enter string = ");
    gets(str);

    length(str);
    return 0;
}
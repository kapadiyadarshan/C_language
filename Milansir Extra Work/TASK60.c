// C program to find length of the string by passing string / character array as an argument using user definr function.

#include<stdio.h>

void length(char A[200])
{
    int i;
    int length1=0;
    for(i=0; A[i]!='\0'; i++)
    {
        length1++;
    }
    printf("\nLength of string is %d",length1++);
}

int main()
{
    char A[200];
    printf("Enter string = ");
    gets(A);

    length(A);
    return 0;
}
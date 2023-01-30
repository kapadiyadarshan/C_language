//C program to check whether a string is palindrome or not

#include<stdio.h>
#include<string.h>

int main()
{
    char A[200],B[200];
    printf("Enter Any String\n");
    gets(A);

    strcpy(B,A);

    strrev(B);

    if(strcmp(B,A)==0)
    {
        printf("String is palindrome......");
    }
    else
    {
        printf("String is not palindrome......");
    }

    return 0;
}
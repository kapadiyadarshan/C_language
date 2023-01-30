#include<stdio.h>
#include<string.h>

// C program to find length of a string

int main()
{
    char A[200];
    int length=0;

    printf("Enter Any string\n");
    gets(A);

    length=strlen(A);

    printf("String length is %d",length);
    return 0;
}
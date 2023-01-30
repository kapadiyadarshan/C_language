#include<stdio.h>
#include<string.h>

//C program to copy one string to another string

int main()
{
    char A[200],B[200];

    printf("Enter Any String\n");
    gets(A);

    strcpy(B,A);

    puts(B);
    return 0;
}
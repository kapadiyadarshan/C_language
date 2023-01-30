#include<stdio.h>
#include<string.h>

// C program to get and print a string using gets() and puts().

int main()
{
    char A[200];
    printf("Enter Any string\n");
    gets(A);

    printf("\n------------------------------------------\n\n");

    puts(A);
    return 0;
}
#include<stdio.h>

// C Program to find length of string using pointer.

int main()
{
    char A[200];
    printf("Enter String\n");
    gets(A);

    int length=0,i;
    char *p;

    p = &A;

    for(i=0; *(p+i) != '\0'; i++)
    {
        length++;
    }

    printf("String Length is %d ",length);

    return 0;
}
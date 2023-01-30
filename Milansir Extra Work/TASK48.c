#include<stdio.h>
#include<string.h>

// C program to toggle case of each character in a string.

int main()
{
    char A[200];
    printf("Enter any string\n");
    gets(A);

    printf("\n------------------------------------------\n\n");

    int i;
    for(i=0; A[i] != '\0'; i++)
    {
        if(A[i]>='A' && A[i]<='Z')
        {
            A[i]=A[i]+32;
        }
        else if(A[i]>='a' && A[i]<='z')
        {
            A[i]=A[i]-32;
        }
    }

    puts(A);
    
    return 0;
}
//Write C program to remove spaces, blanks from a string

#include<stdio.h>
#include<string.h>

int main()
{
    char A[200];
    int i,j,a;

    printf("Enter String With Spaces\n");
    gets(A);

    for(a=0; a<200; a++)
    {
        for(i=0; i<strlen(A); i++)
        {
            if(A[i] == ' ')
            {
                for(j=i; j<strlen(A); j++)
                {
                    A[j]=A[j+1];
                }
            }
        }
    }

    printf("Without Spaces String\n");
    puts(A);
    return 0;
}
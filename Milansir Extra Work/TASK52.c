#include<stdio.h>
#include<string.h>

//C program to remove all repeated characters in a string.

int main()
{
    char A[200],B[200];
    int i,j,k,m=0;

    printf("Enter Any String\n");
    gets(A);

    for(i=0; A[i]!='\0'; i++)
    {
        for(j=i+1; A[j]!='\0'; j++)
        {
            if(A[i]==A[j])
            {
                for(k=j; A[k]!='\0'; k++)
                {
                    A[k]=A[k+1];
                }
            }
        }
    }
    printf("---------------------------------------\n");

    puts(A);

    return 0;
}
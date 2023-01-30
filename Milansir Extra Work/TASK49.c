#include<stdio.h>
#include<string.h>

// C program to count frequency of each character in a string

int main()
{
    char A[200],c;
    int count=0;
    int i;
    printf("Enter Any String\n");
    gets(A);

    for(c='a'; c<='z'; c++)
    {
        count=0;

        for(i=0; A[i]!='\0'; i++)
        {
            if(c==A[i])
            {
                count++;
            }
        }
        if(count>0)
        {
            printf("%c found for %d times\n",c,count);
        }
    }
    return 0;
}
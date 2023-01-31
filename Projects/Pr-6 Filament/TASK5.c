#include<stdio.h>
#include<string.h>

//Find length of number of given string in 2D character array.

int main()
{
    int n,i,length=0;
    printf("Enter Row Size = ");
    scanf("%d",&n);

    char A[n][200];

    printf("------------------------------------------------\n");
    for(i=0; i<n; i++)
    {
        printf("A[%d] = ",i);
        fflush(stdin);
        gets(A[i]);

        length++;
    }

    printf("------------------------------------------------\n");

    for(i=0; i<n; i++)
    {
        puts(A[i]);
    }

    printf("------------------------------------------------\n");

    printf("Array length is %d",length);

    printf("------------------------------------------------\n");
    
    return 0;
}
#include<stdio.h>

// C program to reverse an array using pointers.

int main()
{
    int n,i,j;
    int *p;
    printf("Enter Array Size = ");
    scanf("%d",&n);

    printf("\n--------------------------------------------------------------------------\n\n");

    int dk[n];

    p = &dk;

    printf("Enter Array Elements\n");

    for(i=0; i<n; i++)
    {
        printf("dk[%d] --> ",i);
        scanf("%d",&(*(p+i)));
    }

    printf("\n------------------5--------------------------------------------------------\n\n");

    printf("Reverse Array Elemets\n");
    
    for(i=0,j=n-1; i<n,j>=0; i++,j--)
    {
        printf("dk[%d] --> %d\n",i,*(p+j));
    }

    return 0;
}
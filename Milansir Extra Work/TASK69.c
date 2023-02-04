#include<stdio.h>

// C program to input and print array elements using pointers.

int main()
{
    int n,i;
    printf("Enter Array Size = ");
    scanf("%d",&n);

    int darshan[n];
    int *p;

    printf("\n=========================================================\n\n");
    printf("Enter array elements\n");

    for(i=0; i<n; i++)
    {
        printf("darshan[%d] ==> ",i);
        scanf("%d",&darshan[i]);
    }

    p = &darshan;

    printf("\n=========================================================\n\n");

    for(i=0; i<n; i++)
    {
        printf("darshan[%d] --> %d\n",i,*(p+i));

    }

    return 0;
}
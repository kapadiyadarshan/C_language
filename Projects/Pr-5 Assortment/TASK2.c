#include<stdio.h>

int main()
{
    int n;
    printf("Enter array size = ");
    scanf("%d",&n);

    int A[n];
    int i,max=0,max2=0;
    for(i=0; i<n; i++)
    {
        printf("A[%d] ==> ",i);
        scanf("%d",&A[i]);
    }

    for(i=0; i<n; i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }

    for(i=0; i<n; i++)
    {
        if(A[i]>max2 && A[i] != max)
        {
            max2=A[i];
        }
    }

    printf("Second largest elements is = %d",max2);
    return 0;
}
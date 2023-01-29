#include<stdio.h>

int main()
{
    int n;
    printf("Enter Array size = ");
    scanf("%d",&n);

    printf("\n============================================================\n");

    int A[n];
    int i;
    for(i=0; i<n; i++)
    {
        printf("A[%d] == ",i);
        scanf("%d",&A[i]);
    }

    printf("\n============================================================\n");

    printf("negative elemets are = ");
    
    for(i=0; i<n; i++)
    {
        if(A[i]<0)
        {
            printf("%d, ",A[i]);
        }
    }
    return 0;
}
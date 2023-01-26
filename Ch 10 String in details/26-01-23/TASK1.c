#include<stdio.h>

int main()
{
    char A;
    printf("Enter input = ");
    scanf("%c",&A);

    if(A >='A' && A <='Z')
    {
        printf("Output is = %c",A+32);
    }
    else
    {
        printf("invalid input");
    }
    return 0;
}
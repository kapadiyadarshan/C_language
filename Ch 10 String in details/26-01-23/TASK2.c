#include<stdio.h>

//WAP to convert given character in uppercase.

int main()
{
    char A;
    printf("Enter input = ");
    scanf("%c",&A);

    if(A >='a' && A <='z')
    {
        printf("Output is = %c",A-32);
    }
    else
    {
        printf("invalid input");
    }
    return 0;
}
#include<stdio.h>
#include<conio.h>

// A 
// B C 
// D E F   
// G H I J 
// K L M N O 

int main()
{
    int i,j;
    char a='A';

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c ",a++);
        }
        printf("\n");
    }
    return 0;
}
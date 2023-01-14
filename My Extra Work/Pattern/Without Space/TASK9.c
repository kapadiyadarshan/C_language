#include<stdio.h>
#include<conio.h>

/*
      A
      A B
      A B C
      A B C D 
      A B C D E
*/

int main()
{
    char i,j;

    for(i='A'; i<='E'; i++)
    {
        for(j='A'; j<=i; j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}
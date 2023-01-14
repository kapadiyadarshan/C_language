#include<stdio.h>
#include<conio.h>

// A B C D E
// A B C D E
// A B C D E 
// A B C D E
// A B C D E

int main()
{
    char i,j;

    for(i='A'; i<='E'; i++)
    {
        for(j='A'; j<='E'; j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}
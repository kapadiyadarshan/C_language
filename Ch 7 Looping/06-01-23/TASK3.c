#include<stdio.h>
#include<conio.h>

//print 1 to n numbers

int main()
{
    int n,i;
    //clrscr();

    printf("Enter any number = ");
    scanf("%d",&n);

    i=1;
    while(i<=n)
    {
        printf("%d \n",i);
        i++;
    }
    return 0;
    //getch();
}
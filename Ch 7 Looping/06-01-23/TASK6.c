#include<stdio.h>
#include<conio.h>

//print even number

int main()
{
    int n,i;
    //clrscr();

    printf("Enter any number = ");
    scanf("%d",&n);

    i=1;
    while(i<=n)
    {
        if(i % 2 == 0)
        {
            printf("%d \n",i);
        }
        i++;
    }
    return 0;
    //getch();
}
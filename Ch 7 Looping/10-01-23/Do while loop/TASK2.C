#include<stdio.h>
#include<conio.h>

main()
{
	int i;
	clrscr();

	i=10;
	do
	{
		printf("%d \n",i);
		i--;
	}while(i>=1);
	getch();
}
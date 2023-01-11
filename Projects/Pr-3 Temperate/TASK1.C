#include<stdio.h>
#include<conio.h>

main()
{
	char i;
	clrscr();

	i='a';
	do
	{
		printf("%c \n",i);
		i++;

	}while(i<='z');
	getch();
}
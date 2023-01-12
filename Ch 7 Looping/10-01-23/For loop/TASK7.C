#include<stdio.h>
#include<conio.h>

int main()
{
	int i;
	clrscr();

	for(i=2000; i<=3000; i++)
	{
		if(i % 4 == 0)
		{
			printf("%d\n",i);
		}
	}

	getch();
}
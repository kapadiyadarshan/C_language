#include<stdio.h>
#include<conio.h>

main()
{
	int A,i;
	int *p;
	clrscr();

	p = &A;
	for(i=0; i<10; i++)
	{
		printf("%u\t",p+i);
	}

	getch();
}
#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i;
	clrscr();

	printf("Enter Any Number = ");
	scanf("%d",&n);

	for(i=n; i>=1; i--)
	{
		printf("%d\n",i);
	}

	getch();
}
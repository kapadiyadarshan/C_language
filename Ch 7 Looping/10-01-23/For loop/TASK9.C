#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,fact=1;
	clrscr();

	printf("Enter Any Number = ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		printf("%d\n",i);
		fact=fact*i;
	}

	printf("Factorial is = %d",fact);

	getch();
}
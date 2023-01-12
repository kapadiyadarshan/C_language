#include<stdio.h>
#include<conio.h>

int main()
{
	int n,fd,ld,sum;
	clrscr();

	printf("Enter Any Number = ");
	scanf("%d",&n);

	ld=n % 10;

	while(n >= 10)
	{
		n=n/10;
	}

	fd=n;
	sum=fd+ld;

	printf("first and last digit sum = %d",sum);
	getch();
}
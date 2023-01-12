#include<stdio.h>
#include<conio.h>

int main()
{
	int n,counter;
	clrscr();

	printf("Enter Any Number = ");
	scanf("%d",&n);

	counter=0;
	while(n != 0)
	{
		n=n/10;
		counter++;
	}

	printf("It's %d digits number",counter);
	getch();
}
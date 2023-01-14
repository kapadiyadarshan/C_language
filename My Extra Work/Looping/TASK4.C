#include<stdio.h>
#include<conio.h>

// 1 to n number cube

int main()
{
	int n,i;
	clrscr();

	printf("Enter number = ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		printf("\nnumber %d cube is = %d",i,i*i*i);
	}

	getch();
}
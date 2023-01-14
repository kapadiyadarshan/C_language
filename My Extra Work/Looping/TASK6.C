#include<stdio.h>
#include<conio.h>

// 1 to n number Multiplication table

int main()
{
	int n,i,j;
	clrscr();

	printf("Enter number = ");
	scanf("%d",&n);

	printf("Multiplication Table from 1 to %d\n",n);

	for(i=1; i<=10; i++)
	{
		for(j=1; j<=n; j++)
		{
			printf("%d*%d=%d,  ",j,i,i*j);
		}
		printf("\n");
	}

	getch();
}
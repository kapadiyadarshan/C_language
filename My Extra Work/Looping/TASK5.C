#include<stdio.h>
#include<conio.h>

// 1 to n number square

int main()
{
	int n,i;
	clrscr();

	printf("Enter number = ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		printf("\nnumber %d square is = %d",i,i*i);
	}

	getch();
}
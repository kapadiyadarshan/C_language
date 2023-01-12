#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,sum=0;
	clrscr();

	printf("Enter Any Number = ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		printf("%d\n",i);
		sum=sum+i;
	}

	printf("Sum is = %d",sum);

	getch();
}
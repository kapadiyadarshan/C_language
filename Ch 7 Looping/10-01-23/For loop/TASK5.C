#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i;
	clrscr();

	printf("Enter Any Number = ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		if(i % 2 != 0)
		{
			printf("%d\n",i);
		}
	}

	getch();
}
#include<stdio.h>
#include<conio.h>

/* first N even number print and its sum */

int main()
{
	int n,i,ev,sum=0;
	clrscr();

	printf("Enter Number = ");
	scanf("%d",&n);

	printf("\n\nFirst %d even number = ",n);

	i=1;
	while(i<=n)
	{
		ev=2*i;
		printf("%d  ",ev);
		sum=sum+ev;
		i++;
	}

	printf("\n\nFirst %d even numbers sum = %d",n,sum);
	getch();
}
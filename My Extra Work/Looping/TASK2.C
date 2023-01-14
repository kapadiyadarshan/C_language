#include<stdio.h>
#include<conio.h>

/* first N odd number print and its sum */

int main()
{
	int n,i,od,sum=0;
	clrscr();

	printf("Enter Number = ");
	scanf("%d",&n);

	printf("\n\nFirst %d odd number = ",n);

	i=1;
	while(i<=n)
	{
		od=2*i-1;
		printf("%d  ",od);
		sum=sum+od;
		i++;
	}

	printf("\n\nFirst %d odd numbers sum = %d",n,sum);
	getch();
}
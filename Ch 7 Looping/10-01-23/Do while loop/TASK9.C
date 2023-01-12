#include<stdio.h>
#include<conio.h>

main()
{
	int n,i,sum;
	clrscr();

	printf("Enter any Number = ");
	scanf("%d",&n);

	sum=0;
	i=1;
	do
	{
		printf("%d\n",i);
		sum=sum+i;
		i++;
	}while(i<=n);

	printf("Sum is = %d",sum);
	getch();
}
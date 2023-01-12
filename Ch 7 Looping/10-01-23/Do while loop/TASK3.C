#include<stdio.h>
#include<conio.h>

main()
{
	int n,i;
	clrscr();

	printf("Enter any Number = ");
	scanf("%d",&n);

	i=1;
	do
	{
		printf("%d \n",i);
		i++;
	}while(i<=n);
	getch();
}
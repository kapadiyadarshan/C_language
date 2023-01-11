#include<stdio.h>
#include<conio.h>

main()
{
	int n,i,fact;
	clrscr();

	printf("Enter any number = ");
	scanf("%d",&n);

	fact=1;
	for(i=1; i<=n; i++)
	{
		printf("%d\n",i);
		fact=fact*i;
	}
		printf("factorial is = %d \n",fact);

	getch();
}
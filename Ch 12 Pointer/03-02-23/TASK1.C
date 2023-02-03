#include<stdio.h>
#include<conio.h>

//WAP to find square of each element using Pointer.

main()
{
	int A[200];
	int n,i;
	int *p;
	clrscr();
	printf("Enter Array Size = ");
	scanf("%d",&n);

	printf("\n-----------------------------------------------\n\n");

	printf("Enter Array Elements\n");

	for(i=0; i<n; i++)
	{
		printf("A[%d] ==> ",i);
		scanf("%d",&A[i]);
	}

	p = &A;

	printf("\n-----------------------------------------------\n\n");

	for(i=0; i<n; i++)
	{
		printf("A[%d] Value is %d and It's Square is %d\n",i,*(p+i),*(p+i)*(*(p+i)));
	}
	getch();
}
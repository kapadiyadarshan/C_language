#include<stdio.h>
#include<conio.h>

main()
{
	int choice;
	clrscr();
	printf("Press 1 for january \n");
	printf("Press 2 for february \n");
	printf("Press 3 for march \n");
	printf("Press 4 for april \n");
	printf("Press 5 for may \n");
	printf("Press 6 for jun \n");
	printf("Press 7 for july \n");
	printf("Press 8 for august \n");
	printf("Press 9 for september \n");
	printf("Press 10 for octomber \n");
	printf("Press 11 for november \n");
	printf("Press 12 for december \n");

	printf("\nEnter your choice = ");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1 :
			printf("This month is january \n");
			break;
		case 2 :
			printf("This month is february \n");
			break;
		case 3 :
			printf("This month is march \n");
			break;
		case 4 :
			printf("This month is april \n");
			break;
		case 5 :
			printf("This month is may \n");
			break;
		case 6 :
			printf("This month is jun \n");
			break;
		case 7 :
			printf("This month is july \n");
			break;
		case 8 :
			printf("This month is august \n");
			break;
		case 9 :
			printf("This month is september \n");
			break;
		case 10 :
			printf("This month is october \n");
			break;
		case 11 :
			printf("This month is november \n");
			break;
		case 12 :
			printf("This month is december \n");
			break;
		default :
			printf("Invalid choice");

	}
	getch();
}
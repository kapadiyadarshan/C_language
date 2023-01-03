#include<stdio.h>
#include<conio.h>

main()
{
   int number;
   clrscr();

   printf("Enter Number = ");
   scanf("%d",&number);

   if(number==0)
   {
      printf("This number is zero \n");
   }
   else
   {
      if(number>0)
      {
	 printf("This number is positive \n");
      }
      else
      {
	 printf("This number is negative \n");
      }
   }
   getch();
}
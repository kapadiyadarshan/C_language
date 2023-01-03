#include<stdio.h>
#include<conio.h>

// which number is minimum

main()
{
   int a,b;
   clrscr();

   printf("Enter number A = ");
   scanf("%d",&a);
   printf("Enter number B = ");
   scanf("%d",&b);

   if(a < b)
   {
      printf("A is minimum \n");
   }
   else
   {
      printf("B is minimum \n");
   }

   getch();
}
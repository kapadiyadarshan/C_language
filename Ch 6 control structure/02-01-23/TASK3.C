#include<stdio.h>
#include<conio.h>

// which number is maximum

main()
{
   int a,b,c;
   clrscr();

   printf("Enter number A = ");
   scanf("%d",&a);
   printf("Enter number B = ");
   scanf("%d",&b);
   printf("Enter number C = ");
   scanf("%d",&c);

   if(a>b && a>c)
   {
      printf("A is maximum \n");
   }
   else if(b>a && b>c)
   {
      printf("B is maximum \n");
   }
   else
   {
      printf("C is maximum \n");
   }

   getch();
}
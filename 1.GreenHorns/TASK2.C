 #include<stdio.h>
 #include<conio.h>

 //swap value
 //without 3rd variable

 main()
 {
     int a,b;
     clrscr();

     printf("Enter the value of A = ");
     scanf("%d",&a);
     printf("Enter the value of B = ");
     scanf("%d",&b);

     a=a+b;
     b=a-b;
     a=a-b;

     printf("A = %d \n",a);
     printf("B = %d \n",b);
     getch();
 }
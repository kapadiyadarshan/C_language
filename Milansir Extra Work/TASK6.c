#include<stdio.h>
#include<math.h>

//Write a C program to find all roots of a quadratic equation.

int main()
{
    float a, b, c, d, r1, r2; 
    printf("Enter the value of a = ");
    scanf("%f",&a);
    printf("Enter the value of b = ");
    scanf("%f",&b);
    printf("Enter the value of c = ");
    scanf("%f",&c);

    d = (b*b)-(4*a*c);

    if(d == 0)
    {
        printf("Roots are real and equals\n");

        r1 = -b/(2*a);
        r2 = -b/(2*a);

        printf("r1 = %f and r2 = %f\n",r1,r2);
    }
    else if(d > 0)
    {
        printf("Rotts are real and different\n");

        r1 = (-b + sqrt(d))/(2*a);
        r2 = (-b - sqrt(d))/(2*a);

        printf("r1 = %f and r2 = %f\n",r1,r2);
    }
    else
    {
        printf("Roots are imaginary");
    }
    return 0;
}
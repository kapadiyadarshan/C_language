//C program to find diameter, circumference and area of circle using function

#include<stdio.h>

void circle(float r)
{
    float pi = 3.14;
    printf("Diameter of circle = %f\n",2*r);
    printf("Circumference of circle = %f\n",2*pi*r);
    printf("Area of circle = %f\n",pi*r*r);
}

void main()
{
    float r;
    printf("Enter Circle Radius = ");
    scanf("%f",&r);

    circle(r);
}
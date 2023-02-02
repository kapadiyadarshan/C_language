// WAP to create infinite calc using UDF, switch case and Loop.

#include<stdio.h>

void addition(float x,float y)
{
    printf("addition of %f and %f is %f",x,y,x+y);
}
void subtraction(float x,float y)
{
    printf("subtraction of %f and %f is %f",x,y,x-y);
}
void multiplication(float x,float y)
{
    printf("multiplication of %f and %f is %f",x,y,x*y);
}
void division(float x,float y)
{
    printf("division of %f and %f is %f",x,y,x/y);
}
void modulus(int x,int y)
{
    printf("modulus of %d and %d is %d",x,y,x%y);
}

int main()
{
    float x,y;
    char choice;
    printf("Enter the value of X = ");
    scanf("%f",&x);
    printf("Enter the value of Y = ");
    scanf("%f",&y);

    do
    {
        printf("\n---------------------------------------------------------\n\n");
        printf("press + for addition\n");
        printf("press - for subtraction\n");
        printf("press * for multiplication\n");
        printf("press / for division\n");
        printf("press %% for modulus\n");
        printf("press 0 for exit\n");
        printf("\n---------------------------------------------------------\n");

        printf("Enter your choice = ");
        fflush(stdin);
        scanf("%c",&choice);

        switch(choice)
        {
            case '+' :
                addition(x, y);
                break;

            case '-' :
                subtraction(x, y);
                break;

            case '*' :
                multiplication(x, y);
                break;

            case '/' :
                division(x, y);
                break;
        
            case '%' :
                modulus(x, y);
                break;
    
            case '0' :
                break;
        }
    }while(choice != '0');

    return 0;
}
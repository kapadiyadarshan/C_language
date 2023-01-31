#include<stdio.h>
#include<string.h>

int main()
{
    char email[100];
    char password[100];

    char email1[]="darshan.kapadia.35@gmail.com";
    char password1[]="Dar8153";

    printf("Enter Your Email = ");
    gets(email);

    printf("Enter Your Password = ");
    gets(password);

    if((strcmp(email,email1)==0) && (strcmp(password,password1)==0))
    {
        printf("\nLogin Successful.....\n");
    }
    else
    {
        printf("\npassword is wrong....\n");
    }

    return 0;
}
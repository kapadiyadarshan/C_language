#include<stdio.h>

// Yf members details in C program

struct yf
{
    int id;
    char name[100];
    int age;
    char birthdate[30];
    char contact[12];
    char address[200];

}member[200];

int main()
{
    int n,i;
    printf("Enter Your Group Member = ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter id = ");
        scanf("%d",&member[i].id);
        fflush(stdin);

        printf("Enter Name = ");
        gets(member[i].name);
        fflush(stdin);

        printf("Enter Age = ");
        scanf("%d",&member[i].age);
        fflush(stdin);

        printf("Enter Birthdate = ");
        gets(member[i].birthdate);
        fflush(stdin);

        printf("Enter Contact No. = ");
        gets(member[i].contact);
        fflush(stdin);

        printf("Enter Address = ");
        gets(member[i].address);
        fflush(stdin);

        printf("\nEnter next member details");
        printf("\n------------------------------------------------------\n\n");
    }

    for(i=0; i<n; i++)
    {
        printf("No.%d Member details\n",i+1);

        printf("id         = %d\n",member[i].id);
        printf("Name       = %s\n",member[i].name);
        printf("Age        = %d\n",member[i].age);
        printf("Birthdate  = %s\n",member[i].birthdate);
        printf("Contact No.= %s\n",member[i].contact);
        printf("Address    = %s\n",member[i].address);

        printf("\n------------------------------------------------------\n\n");
    }

    return 0;
}
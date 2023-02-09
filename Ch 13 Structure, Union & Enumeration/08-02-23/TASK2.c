#include<stdio.h>

// Employee's details

struct Employee
{
    int id;
    char name[50];
    int age;
    char role[50];
    char city[50];
    int exp;
    char company[100];
}emp[100];


int main()
{
    int i,n;
    printf("How many Employee details add = ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("\n-------------------------------------------------------------------------\n\n");
        printf("Enter %d Employee details\n\n",i+1);

        printf("Enter Id = ");
        scanf("%d",&emp[i].id);
        fflush(stdin);

        printf("Enter Name = ");
        scanf("%s",&emp[i].name);
        fflush(stdin);

        printf("Enter Age = ");
        scanf("%d",&emp[i].age);
        fflush(stdin);

        printf("Enter Role = ");
        scanf("%s",&emp[i].role);
        fflush(stdin);

        printf("Enter City = ");
        scanf("%s",&emp[i].city);
        fflush(stdin);

        printf("Enter Experience = ");
        scanf("%d",&emp[i].exp);
        fflush(stdin);

        printf("Enter Company Name = ");
        scanf("%s",&emp[i].company);
    }

    for(i=0; i<n; i++)
    {
        printf("\n---------------------------------------------------------------------\n\n");

        printf("Id           = %d\n",emp[i].id);
        printf("Name         = %s\n",emp[i].name);
        printf("Age          = %d\n",emp[i].age);
        printf("Role         = %s\n",emp[i].role);
        printf("City         = %s\n",emp[i].city);
        printf("Experience   = %d\n",emp[i].exp);
        printf("Company Name = %s\n",emp[i].company);

    }
    return 0;
}
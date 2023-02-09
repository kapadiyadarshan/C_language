#include<stdio.h>

// Student's Details

struct Student
{
    int id;
    char name[50];
    int age;
    char course[50];
    char city[50];
    int std;
    char school[100];
}stu[100];


int main()
{
    int i,n;
    printf("How many student in your class = ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("\n-------------------------------------------------------------------------\n\n");
        printf("Enter %d Student details\n\n",i+1);

        printf("Enter Id = ");
        scanf("%d",&stu[i].id);
        fflush(stdin);

        printf("Enter Name = ");
        scanf("%s",&stu[i].name);
        fflush(stdin);

        printf("Enter Age = ");
        scanf("%d",&stu[i].age);
        fflush(stdin);

        printf("Enter Course = ");
        scanf("%s",&stu[i].course);
        fflush(stdin);

        printf("Enter City = ");
        scanf("%s",&stu[i].city);
        fflush(stdin);

        printf("Enter Standard = ");
        scanf("%d",&stu[i].std);
        fflush(stdin);

        printf("Enter School = ");
        scanf("%s",&stu[i].school);
    }

    for(i=0; i<n; i++)
    {
        printf("\n---------------------------------------------------------------------\n\n");

        printf("Id       = %d\n",stu[i].id);
        printf("Name     = %s\n",stu[i].name);
        printf("Age      = %d\n",stu[i].age);
        printf("Course   = %s\n",stu[i].course);
        printf("City     = %s\n",stu[i].city);
        printf("Standard = %d\n",stu[i].std);
        printf("School   = %s\n",stu[i].school);

    }
    return 0;
}
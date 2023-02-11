#include<stdio.h>

// Write a program to store and print the roll no., name , age and marks of a student using structures.

struct Student
{
    int rollNo;
    char name[50];
    int age;
    int marks;
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

        printf("Enter Roll no. = ");
        scanf("%d",&stu[i].rollNo);
        fflush(stdin);

        printf("Enter Name = ");
        scanf("%s",&stu[i].name);
        fflush(stdin);

        printf("Enter Age = ");
        scanf("%d",&stu[i].age);
        fflush(stdin);

        printf("Enter Marks = ");
        scanf("%d",&stu[i].marks);
    }

    for(i=0; i<n; i++)
    {
        printf("\n---------------------------------------------------------------------\n\n");

        printf("Id       = %d\n",stu[i].rollNo);
        printf("Name     = %s\n",stu[i].name);
        printf("Age      = %d\n",stu[i].age);
        printf("Standard = %d\n",stu[i].marks);

    }
    return 0;
}
#include<stdio.h>

struct Student
{
    int rollno;
    char name[50];
    float chem;
    float phy;
    float math;
}stu[5];

int main()
{
    int i;
    float per;

    for(i=0; i<2; i++)
    {
        printf("\n---------------------------------------------------------------------\n\n");
        printf("Roll No. = ");
        scanf("%d",&stu[i].rollno);
        fflush(stdin);

        printf("Name = ");
        scanf("%s",&stu[i].name);
        fflush(stdin);

        printf("Chemistry marks = ");
        scanf("%f",&stu[i].chem);
        fflush(stdin);

        printf("Physics marks = ");
        scanf("%f",&stu[i].phy);
        fflush(stdin);

        printf("Math's marks = ");
        scanf("%f",&stu[i].math);
        fflush(stdin);
    }

    printf("\n====================================================\n\n");

    for(i=0; i<2; i++)
    {
        per = 0;

        per = (stu[i].chem + stu[i].phy + stu[i].math) / 3 ;

        printf("Roll no. = %d\n",stu[i].rollno);
        printf("Name     = %s\n",stu[i].name);
        printf("Percentage = %f\n",per);

        printf("\n---------------------------------------------------------------------\n\n");
    }
    return 0;
}
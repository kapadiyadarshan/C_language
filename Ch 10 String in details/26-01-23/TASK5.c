#include<stdio.h>

//WAP to convert given string in titlecase.

int main()
{
    char a[200];
    int i;

    printf("Enter any string\n");
    gets(a);

    printf("=========================\n");

    for(i=0; i<200; i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
    }

    a[0]=a[0]-32;
    
    for(i=0; i<200; i++)
    {
        if(a[i]==' ')
        {
            a[i+1]=a[i+1]-32;
        }
    }

    puts(a);
    return 0;
}
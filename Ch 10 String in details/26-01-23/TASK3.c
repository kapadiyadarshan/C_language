#include<stdio.h>

//WAP to convert given string in lowercase.

int main()
{
    char a[100];
    int i;

    printf("Enter any string in Uppercase\n");
    gets(a);

    printf("==================================\n");

    for(i=0; i<100; i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
    }

    puts(a);

    return 0;
}
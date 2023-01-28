#include<stdio.h>
#include<string.h>

int main()
{
    char pass[200];
    int i,l=0,d=0,s=0,len;

    printf("enter password\n");
    gets(pass);

    for(i=0; pass[i]!='\0'; i++)
    {
        if((pass[i]>='A' && pass[i]<='Z') || (pass[i]>='a' && pass[i]<='z'))
        {
            l=1;
        }
        else if(pass[i]>='0' && pass[i]<='9')
        {
            d=1;
        }
        else
        {
            s=1;
        }
    }

    len=strlen(pass);

    if(l==1 && d==1 && s==1 && len>=6)
    {
        printf("password is valid......");
    }
    else
    {
        printf("password is not valid....");
    }
    return 0;
}

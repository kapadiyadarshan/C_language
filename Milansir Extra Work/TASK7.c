#include<stdio.h>

int main()
{
    float n,B,TB;
    printf("Enter electricity units == ");
    scanf("%f",&n);

    if(n<=50)
    {
        B=(n*0.50);
    }
    else if(n<=150)
    {
        B=((n-50)*0.75)+(50*0.50);
    }
    else if(n<=250)
    {
        B=((n-150)*1.20)+(100*0.75)+(50*0.50);
    }
    else if(n>250)
    {
        B=((n-250)*1.50)+(100*1.20)+(100*0.75)+(50*0.50);
    }

    TB=B+(B*20/100);

    printf("TOTAL BILL =  %0.2f Rs",TB);


    return 0;
}
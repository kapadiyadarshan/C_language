#include<stdio.h>

// distance addition

struct distance
{
    int inch;
    int feet;
}dis[2],sum;

int main()
{
    int i;
    
    for(i=0; i<2; i++)
    {
        printf("Enter %d distance details\n",i+1);
        
        printf("Enter feet = ");
        scanf("%d",&dis[i].feet);

        printf("Enter inch = ");
        scanf("%d",&dis[i].inch);

        printf("\n------------------------------------------------------------------\n\n");
    }

    sum.feet = dis[0].feet + dis[1].feet;
    sum.inch = dis[0].inch + dis[1].inch;

    while(sum.inch >= 12)
    {
        if(sum.inch >= 12)
        {
            sum.inch = sum.inch - 12;
            sum.feet++;
        }
    }

    printf("\nSum of Distance = %d' %d''",sum.feet,sum.inch);

    return 0;
}
#include<stdio.h>
#include<conio.h>

int main()
{
    char day;
    //clrscr();

    printf("Press M for Monday \n");
    printf("Press T for Tuesday \n");
    printf("Press W for Wednesday \n");
    printf("Press t for Thrusday \n");
    printf("Press F for Friday \n");
    printf("Press S for Saturday \n");
    printf("Press s for sunday \n");

    printf("\n Enter any day = ");
    scanf("%c",&day);

    switch(day)
    {
        case 'M' : 
            printf("Monday \n");
            break;
        case 'T' : 
            printf("Tuesday \n");
            break;
        case 'W' : 
            printf("Wednesday \n");
            break;
        case 't' : 
            printf("Thrusday \n");
            break;
        case 'F' : 
            printf("Friday \n");
            break;
        case 'S' : 
            printf("Saturday \n");
            break;
        case 's' : 
            printf("Sunday \n");
            break;
        default :
            printf("Invalid \n");
            break;
    }

    return 0;
    //getch();
}
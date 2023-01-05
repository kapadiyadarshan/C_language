#include<stdio.h>
#include<conio.h>

int main()
{
    int choice,n;
    //clrscr();

    printf("gujarati mate 1 dabavo \n");
    printf("hindi ke liye 2 dabaye \n");
    printf("press 3 for english \n");

    printf("\nEnter your choice = ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1 :
            printf("Gujarati \n");
            printf("recharge offer sambandhit jankari mate 1 dabavo \n");
            printf("network sambandhit jankari mate 2 dabavo \n");
            printf("customer care adhikari sathe vat karva mate 3 dabavo \n");

            printf("Enter your choice = ");
            scanf("%d",&n);

            switch (n)
            {
                case 1 :
                    printf("recharge offer jankari \n");
                    break;
                case 2 :
                    printf("network jankari \n");
                    break;
                case 3 :
                    printf("tamaro call amara custmer care adhikari ne transfer karvama avi rahiyo chhe\n");
                    break;
                default :
                    printf("invalid choice \n");
            }
            break;
        case 2 :
            printf("Hindi \n");
            printf("recharge offer ke bare me jankari ke liye 1 dabaye \n");
            printf("network sambandhit jankari ke liye 2 dabaye \n");
            printf("grahak sewa adhikari sathe bat karne ke liye 3 dabaye \n");

            printf("Enter your choice = ");
            scanf("%d",&n);

            switch (n)
            {
                case 1 :
                    printf("recharge offer jankari \n");
                    break;
                case 2 :
                    printf("network jankari \n");
                    break;
                case 3 :
                    printf("apka call humare grahak sewa adhikari ko transfer kiya ja raha hai\n");
                    break;
                default :
                    printf("invalid choice \n");
            }
            break;
        case 3 :
            printf("English \n");
            printf("press 1 for information regarding recharge offer \n");
            printf("press 2 for network related information \n");
            printf("press 3 to speak to a customer care officer\n");

            printf("Enter your choice = ");
            scanf("%d",&n);

            switch (n)
            {
                case 1 :
                    printf("recharge offer information \n");
                    break;
                case 2 :
                    printf("network information \n");
                    break;
                case 3 :
                    printf("Your call is being transferred to our customer care officer\n");
                    break;
                default :
                    printf("invalid choice \n");
            }
            break;
        default :
            printf("Invalid choice \n");
    }
    return 0;
    //getch();
}
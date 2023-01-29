#include <stdio.h>
#include <ctype.h>
#include <time.h>

int Menu();

int main()
{
    int selection = 0;
    float totalBalance = 10000.00;
    float allFunds;
    float income = 40000.00;
    char y_n;
    int currentTime, elaspedTime;
    int menu;

    y_n = '\0';

    menu = Menu();

    switch (menu)
    {

    case 1:
        printf("\nEnter fund amount to deposit: ");
        scanf("%f", &allFunds);
        printf("\nYour balance is now %.2f", allFunds + totalBalance);
        Menu();

    case 2:
        printf("\nEnter amount to withdraw: ");
        scanf("%f", &allFunds);
        if (allFunds > totalBalance)
        {

            printf("\nInsufficient Fund\n");
        }
        else
        {
            printf("Your new balance is %f", totalBalance - allFunds);
        }
        Menu();

    case 3:
        printf("\nEnter amount to transfer: ");
        scanf("%f", &allFunds);
        if (allFunds > totalBalance)
        {

            printf("\nInsufficient Fund");
            printf("\nYour current balance is %f", totalBalance);
        }
        else
        {

            printf("\nTransfer Successful!");
            printf("\nYour new balance is %f", totalBalance - allFunds);
        }
        Menu();

    case 4:
        printf("\n\tYour current balance is %f", totalBalance);
        Menu();

    case 5:
        printf("\nEnter amount to top up: ");
        scanf("%f", &allFunds);
        if (allFunds < totalBalance)
        {

            printf("\nAre you sure you want to recharge %.1f", allFunds);
            printf("\npress Y or N: ");
            scanf("%c", &y_n);
            if (y_n == 'Y' || y_n == 'y')
            {

                printf("\nSuccessful!\n");
            }
            else
            {

                printf("\nNot Successfull\n");
            }
        }
        else
        {

            printf("\nInsufficent Fund\n");
        }
        Menu();

    case 6:
        if (income < 25000)
        {

            printf("\nNot eligible");
        }
        else
        {

            printf("\nEnter amount to loan: ");
            scanf("%f", &allFunds);
            printf("\nPlease wait\n");

            currentTime = time(NULL);

            do
            {

                elaspedTime = time(NULL);
            } while (elaspedTime - currentTime < 3);

            printf("\nYour new balance is %.2f", totalBalance + allFunds);
        }
        Menu();

    case 7:
        printf("\n1\tElectricity bill\n");
        printf("2\tWater bill\n");
        printf("3\tHouse rent\n");
        printf("4\tCar bill\n");
        Menu();

    case 8:
        printf("\nThank You, pick your card\n");
        break;
    }
}

int Menu()
{

    int selection;

    printf("\n\t\t\tWELCOME JOHN DOE\n");
    printf("\n\t\tMENU\n");
    printf("\n1\tDeposit Funds\n");
    printf("\n2\tWithdraw Funds\n");
    printf("\n3\tTransfer Funds\n");
    printf("\n4\tCheck Balance\n");
    printf("\n5\tTop Airtime\n");
    printf("\n6\tGet Loan\n");
    printf("\n7\tPayTax\n");
    printf("\n8\tQuit\n");
    printf("\n\nEnter your Selection: ");
    scanf("%d", &selection);

    return selection;
}
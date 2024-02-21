
#include <stdio.h>

float balance= 0.0;

int main()
{
    int choice;
    float amount;
    printf("welcome to the banking system");
    do
    {
        printf("\n1. Deposit\n2. Withdraw\n3. check balance\n4. Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1: //1.Deposit

            printf("Enter amount to deposit: ");
            scanf("%f",&amount);
            balance+=amount;
            printf("Deposit successful. current balance: %2f\n",balance);
            break;

        case 2: //2.Withdraw

            printf("Enter amount to withdraw:");
            scanf("%f",&amount);
            if (amount<=balance)
            {
                balance-=amount;
                printf("Withdraw successful. Current balance:%2f\n",balance);
            }else
            {
                printf("Insufficient Funds. Current balance:%2f\n",balance);
            }
            break;


         case 3: //3.Current balance

            printf("Your Current balance:%2f\n",balance);
            break;

        case 4: //4.Exit

            printf("Thank you for using our banking system. Good Bye!\n");
            break; 

        default: // If user enter wrong function.
            printf("Invalid choice.Please try again.\n");
        }
    } while (choice!=4);

    return 0;
    
}
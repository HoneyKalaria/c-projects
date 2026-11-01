#include <stdio.h>
// Function prototypes
void checkBalance(float balance);
void deposit(float *balance);
void withdraw(float balance);
int again;
int main(){
    printf("ATM\n");
    int atm;
 float balance = 5000;
float amount;

int pin = 1234;
int enteredPin;
int correct = 0;

for (int i = 1; i <=3 ; i++)

{
    printf("Enter PIN: ");
scanf("%d", &enteredPin);

    if(enteredPin == pin)
{
    printf("PIN correct!\n");
    correct = 1;
    break;
}
else
{
    printf("Incorrect PIN!\n");
    
}

}
 if (correct == 1)
 {

    do{
printf("1. Check Balance\n");
printf("2. Deposit Money\n");
printf("3. Withdraw Money\n");
printf("4. Exit\n");

printf("Enter your choice:");
scanf("%d",&atm);
/*switch(atm)
{
    case 1:
        printf("Check Balance: %.2f\n",balance);
        break;

    case 2:
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    balance = balance + amount;

    printf("New balance: %.2f\n", balance);
    break;
   case 3:
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if(amount <= balance)
    {
        balance = balance - amount;
        printf("New balance: %.2f\n", balance);
    }
    else
    {
        printf("Insufficient balance\n");
    }

    break;

    case 4:
        printf("Thank you for using the ATM\n");
        break;

    default:
        printf("Invalid choice\n");
}*/

switch(atm)
    {
        case 1:
            checkBalance(balance);
            break;

        case 2:
            deposit(&balance);
            break;

        case 3:
            withdraw(balance);
            break;

        case 4:
            printf("Thank you for using the ATM\n");
            break;
    
        default:
            printf("Invalid choice\n");
    }
    if(atm != 4)
    {
        printf("Do you want to perform another transaction? (1 = Yes, 0 = No): ");
        scanf("%d", &again);
    }
    }while(atm != 4);
}
else 
{
    printf("\nACCOUNT BLOCKED\n");
}


    return 0;
}
// Function definitions

void checkBalance(float balance)
{
    printf("Current balance: %.2f\n", balance);
}

void deposit(float *balance)

{
    float amount;

    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    *balance = *balance + amount;

    printf("New balance: %.2f\n", *balance);
}

void withdraw(float balance)
{
    float amount;

    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if(amount <= balance)
    {
        balance = balance - amount;
        printf("New balance: %.2f\n", balance);
    }
    else
    {
        printf("Insufficient balance\n");
    }
}
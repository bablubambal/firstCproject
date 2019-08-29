#include<stdio.h>
#include<conio.h>
#include<string.h>
float withdraw( float balance,float amount);
float deposit( float balance,float amount);
void main()
{
    int i,j,choice;
    float balance,deposit_amount,withdraw_amount,updated_balance;
    char username[6],password[6];
    printf("\t\t WELCOME TO ATM MACHINE\n");
    printf("\n\t\t****Login Page****\n :");
    while(1){
    printf("\nEnter Username\n ");
    gets(username);
    printf("\n Enter the Pin : ");
    gets(password);
    i = strcmp(username,"admin");
    j = strcmp(password,"1234");

    if(i==0 && j==0)
    {
       printf("Logged in Succesfully.........");
       while(1){
        printf("\nEnter your choice to perform action:\n1 Check Balance\n2 Deposit Money\n3 Withdraw Money \n4 Exit\n\n");
        scanf("%d",&choice);
        switch(choice){
        case 1:

            printf("\nThe Balance in your Account is %f\n",balance);
            break;
        case 2:
            printf("Enter the Amount Deposited:");
            scanf("%f",&deposit_amount);
            balance = balance + deposit_amount;
           // deposit(balance,deposit_amount);
            break;
        case 3:
            printf("Enter the Amount to withdraw:");
            scanf("%f",&withdraw_amount);
            balance = balance - withdraw_amount;
           // withdraw(balance,withdraw_amount);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("******Choose a valid Option*********\n");
        }
       }
    }
    else{
        printf("try again Incorrect Pin or name");

    }
    }
}

/**float withdraw(float balance,float amount)
{
    balance = balance-amount;
    if(balance<0){
        printf("\n Your balance is negative\n");
        printf("\n Your New Balance is %f \n",balance);
    }
     else
    printf("\n Your New Balance is %f \n",balance);
    return balance;
}
float deposit(float balance,float amount)
{
    balance = balance+amount;

    printf("The Current Balance is %f \n",balance);
   return balance;
} **/


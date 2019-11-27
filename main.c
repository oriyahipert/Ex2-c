#include "myBank.h"
#include <stdio.h>

int main(){
    char choice = ' ';
    double amount = 0;
    int account = 0;
    printf("Hello, what do you want to do? \n to open a new account press 'O' \n to chek your balance inquiry press 'B' \n to deposit money press 'D' \n to withdraw money press 'W' \n to close your account press 'C' \n to add interest press 'I' \n to print the open accounts press 'P' \n to close all the accounts and exit from the program press 'E' \n\n");
    do{
            
    if ((scanf(" %c" ,&choice)) !=1){
        printf("error: this order is not correct, please enter your choice again \n\n");
    }else{
        switch (choice)
        {
        case ('O'):
        {
        amount = 0;
        printf("please enter the amount you want to deposit: \n");
        if ((scanf("%lf" ,&amount)) == 0){
            printf("Error: this order is not correct \n\n");
        }else{
            open(amount);
        }
            break;
        }

        case ('B'):
        {
        account = 0;
        printf("please enter your account number: \n\n");
        scanf("%d" ,&account);
        if (account < 901 || account > 950){
            printf("error: this number is not correct \n\n");
            break;
        }else{
        balance(account);
        }
        break;
        }

        case ('D'):
        {
        account = 0;
        printf("please enter your account number: \n\n");
        scanf("%d" ,&account);
        if (account < 901 || account > 950){
            printf("error: this number is not correct, please enter the account number again \n\n");
        }else{
        amount = 0;
        printf("please enter the amount you want to deposit: \n\n");
        scanf("%lf" ,&amount);
        deposit(account,amount);
        }
        }
            break;

        case ('W'):
        {
        account = 0;
        printf("please enter your account number: \n\n");
        scanf("%d" ,&account);
        if (account < 901 || account > 950){
            printf("error: this number is not correct, please enter the account number again\n\n");
            break;
        }
        account = account-900-1;
    if (bank[0][account] == 0){
        printf("this account is close \n \n");
    }else{
        amount = 0;
        printf("please enter the amount you want to withdraw: \n\n");
        scanf("%lf" ,&amount);
        withdraw(account,amount);
    }
            break;
        }

        case ('C'):
        {
        account = 0;
        printf("please enter your account number: \n\n");
        scanf("%d" ,&account);
        if (account < 901 || account > 950){
            printf("error: this number is not correct, please enter the account number again\n\n");
        }
        close(account);
            break;
        }

        case('I'):
        {
        double r = 0;
        printf("please enter interest rate : \n\n");
        scanf("%lf" ,&r);
        interest(r);
            break;
        }

        case ('P'):
        {
        print();
        break;
        }

        case ('E'):
        {
        closeAll();
        break;
        }    

        default:
        {
        printf("Error: your choice is not correct, please try again \n\n");
            break;
        }
        }
    }
    if (choice != 'E'){
    printf("Hello, what do you want to do? \n to open a new account press 'O' \n to chek your balance inquiry press 'B' \n to deposit money press 'D' \n to withdraw money press 'W' \n to close your account press 'C' \n to add interest press 'I' \n to print the open accounts press 'P' \n to close all the accounts and exit from the program press 'E' \n\n");
    }
    }
    while (choice != 'E');{

    }
    return 0;
}
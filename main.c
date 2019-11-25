#include "myBank.h"
#include <stdio.h>

int main(){
    char choice;
    printf("Hello, what do you want to do? \n to open a new account press 'O' \n to chek your balance inquiry press 'B' \n to deposit money press 'D' \n to withdraw money press 'W' \n to close your account press 'C' \n to add interest press 'I' \n to print the open accounts press 'P' \n to close all the accounts and exit from the program press 'E' \n");
    do{
            
    if ((scanf(" %c" ,&choice)) !=1){
        printf("error: this order is not correct, please enter your choice again");
    }else{
        switch (choice)
        {
        case ('O'):
        {
        double m = 0;
        printf("please enter the amount you want to deposit: ");
        scanf("%lf" ,&m);
        open(m);
            break;
        }

        case ('B'):
        {
        int a;
        printf("please enter your account number: ");
        scanf("%d" ,&a);
        if (a < 901 || a > 950){
            printf("error: this number is not correct \n");
            break;
        }else{
        balance(a);
        }
        break;
        }

        case ('D'):
        {
        int a = 0;
        printf("please enter your account number: ");
        scanf("%d" ,&a);
        if (a < 901 || a > 950){
            printf("error: this number is not correct, please enter the account number again");
        }else{
        double m = 0;
        printf("please enter the amount you want to deposit: ");
        scanf("%lf" ,&m);
        deposit(a,m);
        }
        }
            break;

        case ('W'):
        {
        int a = 0;
        printf("please enter your account number: ");
        scanf("%d" ,&a);
        if (a < 901 || a > 950){
            printf("error: this number is not correct, please enter the account number again");
            break;
        }
        double m = 0;
        printf("please enter the amount you want to deposit: ");
        scanf("%lf" ,&m);
        withdraw(a,m);
            break;
        }

        case ('C'):
        {
        int a = 0;
        printf("please enter your account number: ");
        scanf("%d" ,&a);
        if (a < 901 || a > 950){
            printf("error: this number is not correct, please enter the account number again");
        }
        close(a);
            break;
        }

        case('I'):
        {
        double r = 0;
        printf("please enter interest rate : ");
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
        printf("Error: your choice is not correct, please try again \n");
            break;
        }
        }
    }
    if (choice != 'E'){
    printf("Hello, what do you want to do? \n to open a new account press 'O' \n to chek your balance inquiry press 'B' \n to deposit money press 'D' \n to withdraw money press 'W' \n to close your account press 'C' \n to add interest press 'I' \n to print the open accounts press 'P' \n to close all the accounts and exit from the program press 'E' \n");
    }
    }
    while (choice != 'E');{

    }
    return 0;
}
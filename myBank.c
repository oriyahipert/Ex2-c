#include "myBank.h"
#include <stdio.h>

double bank [2][50] = {0};

void open(double amount){
    int j;
        for (j = 0; j < 50;){
            if (bank[0][j] == 0){
                bank[0][j] = 1;
                printf("the account number is:%d \n \n" ,900+1+j);
                bank[1][j] += amount;
                break;
            }else{
                j++;
            }
            if (j > 49){
                printf("can not open a new account, the bank is full \n \n");
            }
        }
}

void balance(int account_num){
    int j = account_num-900-1;
    if (bank[0][j] == 0){
        printf("this account is close \n \n");
    }
   else{
       double x = bank[1][j];
       printf("the balance is: %0.2lf \n \n" ,x);
   }
}

void deposit(int account_num , double amount){
   int j = account_num-900-1;
    if (bank[0][j] == 0){
        printf("this account is close \n \n");
    }else{
    bank[1][j] += amount;
    printf("the  new balance is: %0.2lf \n \n" ,bank[1][j]);
    }
}

void withdraw(int account_num , double amount){
    int j = account_num-900-1;
    if (bank[0][j] == 0){
        printf("this account is close \n \n");
    }else{
    double x = bank[1][j] - amount;
    if (x < 0){
        printf("Error: your account is empty, you can not withdraw this amount. please enter your amount again \n \n");
    }else{
        bank[1][j] = x;
    }
    printf("the  new balance is: %lf \n \n" ,bank[1][j]);
}
}

void close(int account_num){
   int j = account_num-900-1;
    if (bank[0][j] == 0){
        printf("this account is  already close \n \n");
    }else{
       bank[0][j] = 0; 
    }
}

void interest(double rate){
    double x = 0;
    for(int j = 0; j < 50; j++){
        if(bank[0][j] == 1){
            x=(rate*bank[1][j])/100;
            bank[1][j] += x;
        }
    }
}

void print(){
    for (int j = 0; j < 50; j++){
        if (bank[0][j] == 1){
            int n = 901 + j;
            printf("the account number is: %d \n \n" ,n);
            printf("the balance of this account is: %0.2lf \n \n" ,bank[1][j]);
        }
    }
}

void closeAll(){
   for (int j = 0; j < 50; j++){
       bank[0][j] = 0;
       bank[1][j] = 0;
   } 
}
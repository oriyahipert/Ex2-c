#ifndef _MYBANK
#define _MYBANK

#define NUM_ACCOUNTS 50
#define NUM 2

    double bank [NUM][NUM_ACCOUNTS] = {0};
    void open(double);
    void balance(int);
    void deposit(int,double);
    void withdraw(int,double);
    void close(int);
    void interest(double);
    void print();
    void closeAll();


#endif
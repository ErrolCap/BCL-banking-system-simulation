#ifndef BANKING_H
#define BANKING_H

#include "config.h"
typedef struct account {
        int accNo;
        char fname[40];
        char lname[40];
        char pin[5];
        float balance;
}ACCOUNT ;

extern int count;

extern ACCOUNT acc[MAX];
extern ACCOUNT active;

void view_balance();
void widthdraw();
void deposit();
void fund_transfer();

#endif // BANKING_H

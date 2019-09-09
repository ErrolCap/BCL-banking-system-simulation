#ifndef BANKING_H
#define BANKING_H
#include <string>
#include "config.h"
typedef struct account {
        int accNo;
        char fname[40];
        char mname[40];
        char lname[40];
        char cpNo[11];
        char sex[10];
        char dob[20];
        char addr[40];
        char email[40];
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
void changePin();

#endif // BANKING_H

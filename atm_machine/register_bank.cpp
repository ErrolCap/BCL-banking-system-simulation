#include "register_bank.h"
#include "banking.h"
#include "crud.h"
#include <iostream>
#include <string.h>
#include "Bycrpyt.h"
using namespace std;
void registerAcc(){
    Bycrpyt hash;
    char fname[30], lname[30], *pin, *v_pin;
    float balance;
    cout<<"Register Account"<<endl<<endl;
    cout<<"Enter your Firstname: ";
    cin>> fname;
    cout<<"Enter your Lastname: ";
    cin>> lname;
    
    rePass:
    cout<<"Enter your password: ";
    pin = hash.pinField();
    
    cout<<endl <<"Verify your password: ";
    v_pin = hash.pinField();
    
    cout<<endl;
    if(strcmp(pin, v_pin) != 0){
        goto rePass;
    }
    
    reBalance:
    cout <<"Enter the initial deposit ( 3000 is the minimum) : ";
    cin>> balance;
    
    if(balance < 3000){
        goto reBalance;
    }
    pin = hash.encryptPin(pin);
    
    
    insert(fname, lname, pin, balance);
   
}


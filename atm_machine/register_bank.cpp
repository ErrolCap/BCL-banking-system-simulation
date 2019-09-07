#include "register_bank.h"
#include "banking.h"
#include "crud.h"
#include <iostream>
#include <string.h>
#include "Bycrpyt.h"
#include "file_handling.h"
#include "CARD.h"
#include "error.h"
#include "alert.h"
using namespace std;
void registerAcc(char card){
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
    
    card = getRemovableDisk();
    
    if(card != '0'){
            insert(card, fname, lname, pin, balance);
    }else{
         setMessage("Card is removed", 1);
    }
}


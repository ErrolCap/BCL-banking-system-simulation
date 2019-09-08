#include "auth.h"
#include "banking.h"
#include "card_validation.h"
#include "CARD.h"
#include "error.h"
#include "atm_menu.h"
#include "file_handling.h"
#include "Bycrpyt.h"
#include "alert.h"
#include "utils.h"
#include <iostream>
#include <conio.h>
#include "string.h"
#include "logo.h"
#include "main_menu.h"

int loginAccount(int accNo, char * pin);
void loginInput(const char card);
using namespace std;

void verifyCardLogged(){
    
    system("cls");
    while(1){
        char card = getRemovableDisk();
        
        if(card != '0'){
            if(isRegistered(card) == 1){
                    loginInput(card);
            }else{
                setMessage("The card has not yet registered", -1);
                main_menu();
            }
        }else{
             noCardDetected();
        }
    }
  
    
    
    
}

void loginInput(const char card){
    Bycrpyt hash;
    logo();
    char *pin;
    int res, cardNo;
    
    cardNo = loggedCard(card);
    
    cout<<"Enter your pin: ";
    pin = hash.pinField();
    res = loginAccount(cardNo, pin);
    
    if(res == 0){
        setMessage("Login failed!", 4);
        verifyCardLogged();
    }
    system("cls");
    atm_menu();
}

int loginAccount(int accNo, char * pin){
        Bycrpyt hash;
        int loc = location(accNo);
        
        if(loc == 0){
            return 0;
        }

		char * db_pin = hash.decryptPin(acc[loc].pin);
		char * user_pin = pin;
		
        if(strcmp(db_pin,user_pin) != 0){
            return 0;
        }

        active.accNo = acc[loc].accNo;
        strcpy(active.fname, acc[loc].fname);
        strcpy(active.lname, acc[loc].lname);
        strcpy(active.pin, acc[loc].pin);
        active.balance = acc[loc].balance;
       
        return 1;
        
}

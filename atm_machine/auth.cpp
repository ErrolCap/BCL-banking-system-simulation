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
#include "Input.h"
#include "main_menu.h"

int loginAccount(char * accNo, char * pin);
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
                setMessage("\tThe card has not yet registered", -1);
                main_menu();
            }
        }else{
             noCardDetected();
        }
    }
  
    
    
    
}

void loginInput(const char card){
    Bycrpyt hash;
	Input inp;
    logo();
    char *pin;
    char * cardNo = new char[16];
    
    cardNo = loggedCard(card);
    cout<<"\t\t\t\t\t\tEnter your pin: ";
    pin = inp.getPassword(1, 6);
    
    if(loginAccount(cardNo, pin)){
        cout<<"\t\t\t\t\t\tLogin failed, Please try again..."<<endl;
		getch();
        verifyCardLogged();
    }
	//109328
    system("cls");
    atm_menu();
}

int loginAccount(char * accNo, char * pin){
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

		strcpy(active.accNo, acc[loc].accNo);
        strcpy(active.fname, acc[loc].fname);
        strcpy(active.mname, acc[loc].mname);
        strcpy(active.lname, acc[loc].lname);
		strcpy(active.dob, acc[loc].dob);
		strcpy(active.cpNo, acc[loc].cpNo);
		strcpy(active.addr, acc[loc].addr);
		strcpy(active.pin, acc[loc].pin);
		strcpy(active.sex, acc[loc].sex); //132439
		strcpy(active.email, acc[loc].email);
        active.balance = acc[loc].balance;
		
        return 1;
        
}

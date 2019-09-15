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
#include <windows.h>
#include <string>
#include "string.h"
#include "logo.h"
#include "Input.h"
#include "main_menu.h"

int loginAccount(char accNo[], char pin[]);
void loginInput(char card);
char * decryptPin(char pin[6]);
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

void loginInput(char card){
    Bycrpyt hash;
	Input inp;
    logo();
		
	char pin[10];
	char *cardNo = new char[20];
	strcpy(cardNo, loggedCard(card).c_str());


    cout<<"\t\t\t\t\t\tEnter your pin: ";
	strcpy(pin, inp.getPassword(1, 6));
    if(loginAccount(cardNo, pin) != 0){
		system("cls");
		atm_menu();
    }
	
	cout<<"\t\t\t\t\t\tLogin failed, Please try again..."<<endl;
	getch();
	verifyCardLogged();
}

int loginAccount(char accNo[], char pin[]){
        int loc = location(accNo);
        Bycrpyt hash;
        if(loc == 0){
            return 0;
        }
		char dec_pin[7],orig_pin[7];
		strcpy(orig_pin, acc[loc].pin);
		strcpy(dec_pin,hash.decryptPin(orig_pin));
        if(strcmp(dec_pin, pin) != 0){
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
		strcpy(active.sex, acc[loc].sex);
		strcpy(active.email, acc[loc].email);
        active.balance = acc[loc].balance;
		
        return 1;
        
}
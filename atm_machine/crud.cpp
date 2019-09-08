#include <string.h>
#include <iostream>
#include <conio.h>
#include "crud.h"
#include "banking.h"
#include "alert.h"
#include "validation.h"
#include "config.h"
#include "utils.h"
#include "file_handling.h"

using namespace std;
void insert(char card, char * fname, char *lname, char * pin, float balance){
 
    cout<<fname<<lname<<pin<<endl;
    getch();
    if(isFull()){
        setMessage("Account is full", 1);
    }else{
        count++;
        acc[count].accNo = (acc[count - 1].accNo + 1);
        strcpy(acc[count].fname, fname);
        strcpy(acc[count].lname, lname);
        strcpy(acc[count].pin, pin);
        acc[count].balance = balance;
        registerCARD(card,acc[count].accNo);
        saveFile();
        setMessage("Account successfully registed", 1);
        
    }
}

int update(int accNo, float amount){
	int loc = location(accNo);
	cout<<"the amount "<<amount<<endl;
	getch();
	if(loc != 0){
        acc[loc].balance = amount;
        saveFile();
        return 1;
       
	}

    return 0;
}



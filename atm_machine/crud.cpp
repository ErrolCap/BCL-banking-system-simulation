#include <string.h>
#include <iostream>
#include <conio.h>
#include "crud.h"
#include "banking.h"
#include "alert.h"
#include "validation.h"
#include "config.h"
#include "utils.h"
#include "Bycrpyt.h"
#include "file_handling.h"
#include "auth.h"

using namespace std;
void insert(char filePath, char *accNo, char *fname, char *mname, char *lname, char *cpNo, 
                    char *sex, char *dob, char *addr,  char *email,  char *pin, float balance){
	cout<<"\t"<<accNo<<" "<<fname<<" "<<mname<<" "<<lname<<" "<<cpNo<<" "<<sex<<" "<<dob<<" "<<addr<<" "<<email<<" "<<pin<<" "<<balance<<endl;
    if(isFull()){
        setMessage("\tAccount is full", 1);
    }else{
        count++;
		strcpy(acc[count].accNo, accNo);
        strcpy(acc[count].fname, fname);
        strcpy(acc[count].mname, mname);
        strcpy(acc[count].lname, lname);
        strcpy(acc[count].cpNo, cpNo);
        strcpy(acc[count].sex, sex);
        strcpy(acc[count].dob, dob);
        strcpy(acc[count].addr, addr);
        strcpy(acc[count].email, email);
        strcpy(acc[count].pin, pin);
        acc[count].balance = balance;
        registerCARD(filePath, accNo);
        saveFile();
        setMessage("\tAccount successfully registered", 1);
        
    }
	return;
}

int update(char * accNo, float amount){
	int loc = location(accNo);
	if(loc != 0){
        acc[loc].balance = amount;
        saveFile();
        return 1;
       
	}

    return 0;
}


int updatePin(char * pin){
	Bycrpyt hash;
	int loc = location(active.accNo);
	
	if(loc != 0){
		strcpy(acc[loc].pin, encryptPin(pin));
		saveFile();
		return 1;
	}
	
	return 0;
}



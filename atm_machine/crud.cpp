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
void insert(char filePath, char fname[40], char mname[40], char lname[40], char cpNo[11], 
                    char sex[10], char dob[20], char addr[40],  char email[40],  char pin[5], float balance){
 
    if(isFull()){
        setMessage("\tAccount is full", 1);
    }else{
        count++;
        acc[count].accNo = (acc[count - 1].accNo + 1);
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
        registerCARD(filePath,acc[count].accNo);
        saveFile();
        setMessage("\tAccount successfully registered", 1);
        
    }
}

int update(int accNo, float amount){
	int loc = location(accNo);
	if(loc != 0){
        acc[loc].balance = amount;
        saveFile();
        return 1;
       
	}

    return 0;
}


int updatePin(char * pin){
	int loc = location(active.accNo);
	
	if(loc != 0){
		strcpy(acc[loc].pin, pin);
		saveFile();
		return 1;
	}
	
	return 0;
}



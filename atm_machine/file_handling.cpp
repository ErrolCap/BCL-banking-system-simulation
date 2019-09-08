#include <fstream>

//Context
#include "file_handling.h"
#include "banking.h"
#include "validation.h"
#include "utils.h"
#include "config.h"
//Components
#include "alert.h"
 
//File handling
using namespace std;
fstream file;
void saveFile(){
    int i;
    
    file.open(FILE_NAME, ios::out);

    if(file.is_open()){
        file<<count<<endl;
        for(i = 1; i<= count; i++){
            file<<acc[i].accNo<<" "<<acc[i].fname<<" "<<acc[i].lname<<" "<<acc[i].pin<<" "<<acc[i].balance<<endl;
        }
    }
    else setMessage("Bank is offline...", 0);
    file.close();
}

void retriveFile(){
    int i;
    file.open(FILE_NAME, ios::in);

    if(file.is_open()){
        file>>count;
        for(i = 1; i<= count; i++){
            file>>acc[i].accNo;
            file>>acc[i].fname;
            file>>acc[i].lname;
            file>>acc[i].pin;
            file>>acc[i].balance;
        }
    }
    else {
    	setMessage("Bank is offline...", 0);
    	makeNull();
	}
    file.close();
}

int registerCARD(const char  drive, int accNo){

    string path = ":\\";
    path.append(BANK_NAME);
    path.insert(0, 1, drive);
    path.append(".txt");
    file.open(path,ios::out);
    
    if(file.good()){
        file<<accNo;
        file.close();
        return 1;
    }
    
    return 0;
}

int loggedCard(const char drive){
    int accNo;
    string path = ":\\";
    path.append(BANK_NAME);
    path.insert(0, 1, drive);
    path.append(".txt");
    file.open(path,ios::in);
    
    if(file.is_open()){
        file>>accNo;
        file.close();
        return accNo;
    }else{
        file.close();
        return 0;
    }
  
}


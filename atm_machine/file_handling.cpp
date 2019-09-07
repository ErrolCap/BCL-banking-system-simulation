#include <fstream>

//Context
#include "file_handling.h"
#include "banking.h"
#include "validation.h"

//Components
#include "alert.h"
 
//File handling
using namespace std;
void saveFile(){
    int i;
    ofstream file;
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
    ifstream file;
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


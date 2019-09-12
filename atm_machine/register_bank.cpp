#include "register_bank.h"
#include "banking.h"
#include "crud.h"
#include "Bycrpyt.h"
#include "file_handling.h"
#include "card_validation.h"
#include "CARD.h"
#include "error.h"
#include "alert.h"
#include "input.h"

#include <iostream>
#include <string.h>
#include <ctime>

using namespace std;
void registerAcc(char card){
	Input inp;
    Bycrpyt hash;
	system("cls");
    char fname[40], mname[40], lname[40], cpNo[11], sex[10], dob[20] , addr[40], email[40];
    char *pin;
	float balance;
    
    cout<<"\tRegister Account"<<endl<<endl;
	cout<<"\tPersonal Information"<<endl;
	cout<<"\t========================================================================="<<endl;
    cout<<"\tEnter your First Name: ";
    strcpy(fname, inp.getText(40, "letter"));
    cout<<fname<<endl;
    cout<<"\tEnter your Middle Name: ";
	strcpy(mname, inp.getText(40, "letter"));
    
    cout<<"\tEnter your Last Name: ";
	strcpy(lname, inp.getText(40, "letter"));
	
	cout<<"\tEnter your Cellphone Number: 63+";
	strcpy(cpNo, inp.getText(11, "digit"));
	
	//cout<<"\tEnter your Home Address [1369 Mend St. Sta Cruz, Manila]: ";
	//cin.getline(addr,40);
    //cout<<addr;
	
    cout<<"\tEnter gender [MALE/FEMALE]: ";
	strcpy(sex, inp.getText(10, "letter"));
	
	cout<<"\tEnter your birthday [ MM/DD/YYYY ]: ";
	strcpy(sex, inp.getText(20, "letter"));
	
	cout<<"\tEnter your Email Address [johndoe@gmail.com]: ";
	strcpy(email, inp.getText(20, "letter"));
	
	//Calling the function of plan Chooser 
    balance = planChooser();
    
    pin = generatePin();
	cout<<"\tYour initial pin for card is: "<<pin<<endl;
	pin = hash.encryptPin(pin);
        
    if(isConnected()){
			insert(card, fname, mname, lname, cpNo, sex, dob, addr,  email, pin, balance);
    }else{
         setMessage("\tCard is removed", 1);
    }
}

float planChooser(){
	float initDeposit = 0; 
	char choice;
	system("cls");
	cout<<"\tChoose your plan"<<endl;
	cout<<"\t========================================================================="<<endl;
	cout<<"\t[1] STUDENT PLAN - Recommend for the student only need to present valid"<<endl;
	cout<<"\t    and the initial deposit is only 100.00 pesos"<<endl;
	cout<<"\t[2] WORKERT PLAN - Recommend for the workers who earn 10,000 to 100,000"<<endl;
	cout<<"\t    only need to present valid and the initial deposit is only 3,000 pesos"<<endl;
	cout<<"\t[3] BUSSINESS PLAN - Recommend for the bussiness owner that want savings account"<<endl;
	cout<<"\t    and insurance at the sametime and who earn about 50,000 to 1,000,000 only"<<endl;
	cout<<"\t    need to present bussiness certificate and BIR Record the initial deposit is"<<endl;
	cout<<"\t    only 100,000 pesos."<<endl<<endl;
	cout<<"\tEnter your choice: ";
	cin>>choice;
	switch(choice){
		case '1':
		initDeposit = 100.00;
		break;
		
		case '2':
		initDeposit = 3000.00;
		break;
		
		case '3':
		initDeposit = 100000.00;
		break;
		
		default: 
		setMessage("\tInvalid choice", -1);
		planChooser();
		break;
		
	}
	
	return initDeposit;
}


char * generatePin(){
	char* pin = new char[6];
    srand(time(NULL));
    int value = rand() % 899999 + 100000;
    itoa(value,pin, 10);
    pin[6]='\0';
    return pin;
}



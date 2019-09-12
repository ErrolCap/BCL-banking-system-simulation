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
#include "validation.h"
#include <iostream>
#include <string.h>
#include <ctime>

using namespace std;
void registerAcc(char card){
	Input inp;
    Bycrpyt hash;
	system("cls");
    char *fname = new char[40], *mname= new char[40], *sname= new char[40], *cpNo= new char[11], *dob= new char[10], *sex= new char[5],  *addr= new char[40], *email= new char[40], *pin = new char[6];
	float balance;
    
    cout<<"\tRegister Account"<<endl<<endl;
	cout<<"\tPersonal Information"<<endl;
	cout<<"\t========================================================================="<<endl;
    cout<<"\tEnter your First Name: ";
    strcpy(fname, inp.getText(1, 40, "letter"));
	
    cout<<"\tEnter your Middle Name: ";
	strcpy(mname, inp.getText(1, 40, "letter"));
	
    cout<<"\tEnter your Last Name: ";
	strcpy(sname, inp.getText(1, 40, "letter"));
	
	cout<<"\tEnter your Cellphone Number: ";
	strcpy(cpNo, inp.getText(11 ,11, "digit"));
	
	cout<<"\tEnter your Home Address [ex. 1369 Mend St. Sta Cruz, Manila]: ";
	strcpy(addr, inp.getText(5 ,40, "address"));
	
	//Parsing space to _
	strcpy(addr, inp.parseSpace(addr, true));
	
    cout<<"\tEnter gender (Press tab to choose): ";
	strcpy(sex, inp.getGender());
	
	cout<<"\tEnter your birthday [ MM/DD/YYYY ] : ";
	strcpy(dob, inp.getDate());
	
	cout<<"\tEnter your Email Address [ex. johndoe@gmail.com]: ";
	strcpy(email, inp.getText(5,30, "email"));
	
	//Calling the function of plan Chooser 
    balance = planChooser();
    
    strcpy(pin,  generatePin());
	cout<<"\tYour initial pin for card is: "<<pin<<endl;
	strcpy(pin, hash.encryptPin(pin));
		
    if(isConnected() && to_continue()){
			insert(card, fname, mname, sname, cpNo, sex, dob, addr, email, pin, balance);
    }else{
         setMessage("\tProcess terminated..", 1);
    }
}

float planChooser(){
	Input inp;
	float initDeposit = 0; 
	char choice;
	cout<<endl<<"\tChoose your plan"<<endl;
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
	choice = inp.getChoice('1', '3');
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



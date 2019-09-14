#include "atm_menu.h"
#include "banking.h"
#include "Input.h"
#include <iostream>
#include <string.h>
#include "main_menu.h"
#include <ctime>
using namespace std;

ACCOUNT active;

void atm_menu(){
	Input inp;
    char ch;
    atm_header("Choose ATM Transaction ");
    cout<<"\t[1] View Balance"<<endl;
    cout<<"\t[2] Deposit"<<endl;
    cout<<"\t[3] Withdraw"<<endl;
    cout<<"\t[4] Fund Transfer"<<endl;
	cout<<"\t[5] Setting"<<endl;
    cout<<"\t[6] Logout"<<endl<<endl;
	cout<<"\tChoice: ";
    ch = inp.getChoice('1', '6');
    system("cls");

    switch (ch)
    {
    case '1':   
        view_balance(); 
	break;
	
    case '2':
        deposit();
    break;
        
    case '3':
        widthdraw();
    break;

    case '4':
        fund_transfer();
    break;
    
	case '5':
		setting_menu();
	break;
    default:
        main_menu();
        break;
    }
}

void setting_menu(){
	Input inp;
    char ch;
	atm_header("Setting");
	cout<<"\t[1] Change pin"<<endl;
	cout<<"\t[2] Back"<<endl<<endl;
	cout<<"\tChoice: ";
    ch = inp.getChoice('1', '2');
    system("cls");

    switch (ch)
    {
    case '1':   
        changePin(); 
	break;
	
    default:
        atm_menu();
        break;
    }
}

void atm_header(const char * msg){
	time_t tt; 
	struct tm * ti; 
	time(&tt);
	ti = localtime(&tt); 
	system("cls");
	cout<<"\t"<<BANK_NAME<<endl;
	cout<<"\tHello! "<<(strcmpi(active.sex, "MALE") ? "Mr." : "Mam. ")<<active.fname<<" "<<active.lname<<"\t\t\t\tCurrent time is "<<asctime(ti);
	box();
	cout<<"\t"<<msg<<endl;
	box();cout<<endl;
	
}

void box(){
	int i;
	cout<<"\t";
	for(i = 0; i< 100; i++){
		cout << '=';
	}
	cout<<endl;
}
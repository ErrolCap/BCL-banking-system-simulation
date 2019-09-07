#include "atm_menu.h"
#include "banking.h"
#include <iostream>
#include "main_menu.h"
using namespace std;

ACCOUNT active;

void atm_menu(){
    char ch;
    cout<<"WELCOME TO "<<BANK_NAME<<" "<<"MR: "<<active.fname<<" "<<active.lname<<" "<<endl;
    cout<<"Choose mode"<<endl;
    cout<<"[1] View Balance"<<endl;
    cout<<"[2] Deposit"<<endl;
    cout<<"[3] Withdraw"<<endl;
    cout<<"[4] Fund Transfer"<<endl;
    cout<<"[5] Exit"<<endl;
    cin>>ch;
    
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
    
    default:
        main_menu();
        break;
    }
}

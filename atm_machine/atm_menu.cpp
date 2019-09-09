#include "atm_menu.h"
#include "banking.h"
#include <iostream>
#include "main_menu.h"
using namespace std;

ACCOUNT active;

void atm_menu(){
    char ch;
	system("cls");
    cout<<"\tWELCOME TO "<<BANK_NAME<<" "<<active.fname<<" "<<active.lname<<" "<<endl;
	cout<<"\t=========================================================================="<<endl;
    cout<<"\tChoose mode"<<endl;
    cout<<"\t[1] View Balance"<<endl;
    cout<<"\t[2] Deposit"<<endl;
    cout<<"\t[3] Withdraw"<<endl;
    cout<<"\t[4] Fund Transfer"<<endl;
	cout<<"\t[5] Setting"<<endl;
    cout<<"\t[6] Logout"<<endl;
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
    
	case '5':
		changePin();
	break;
    default:
        main_menu();
        break;
    }
}

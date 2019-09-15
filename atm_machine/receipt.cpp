#include "receipt.h"
#include <iostream>
#include <conio.h>
#include "banking.h"
#include "config.h"
#include "alert.h"
#include <ctime>
using namespace std;
void receipt(int mode, float amount, char accNo[]){
	time_t tt; 
	struct tm * ti; 
	time(&tt);
	ti = localtime(&tt); 
	float balance = active.balance;
	system("cls");
	 cout<<"\t\t\t\t"<<endl;
	 cout<<"\t\t\t\t"<<"==========================================="<<endl;
	 cout<<"\t\t\t\t"<<" ____ 	  ____	 _     					"<<endl;
	 cout<<"\t\t\t\t"<<"| __ )	 / ___|	| |    					"<<endl;
	 cout<<"\t\t\t\t"<<"|  _ \\	| |   	| |    					"<<endl;
	 cout<<"\t\t\t\t"<<"| |_) 	| |___	| |___					"<<endl;
	 cout<<"\t\t\t\t"<<"|____/	 \\____|	|_____|					"<<endl<<endl;
	 cout<<"\t\t\t\t"<<"==========================================="<<endl;
	 cout<<"\t\t\t\t"<<BANK_NAME<<" ("<<BANK_ACRO<<") "<<endl;
	 cout<<"\t\t\t\t"<<"==========================================="<<endl;
	 cout<<"\t\t\t\t"<<"Transaction Time: "<<asctime(ti)<<endl;
	 cout<<"\t\t\t\t"<<"NAME: "<<active.fname<<" "<<active.lname<<endl;
	 cout<<"\t\t\t\t"<<"==========================================="<<endl<<endl;
	 cout<<"\t\t\t\t"<<"ACCT NUM: "<<active.accNo<<endl<<endl;
	 if(mode == 1){
		 cout<<"\t\t\t\t"<<"AMT DEPOSIT: P "<<amount<<endl<<endl;
	 }else if(mode == 2){
		 cout<<"\t\t\t\t"<<"AMT WITHDRAW: P "<<amount<<endl<<endl;
	 }else if(mode == 3){
		 cout<<"\t\t\t\t"<<"AMT TRANSFERED: P "<<amount<<endl<<endl;
		 cout<<"\t\t\t\t"<<"TRANSFERED TO: "<<accNo<<endl<<endl;
	 }
	 cout<<"\t\t\t\t"<<"TOTAL: P "<<amount<<endl<<endl;
	 cout<<"\t\t\t\t"<<"ACCT BAL: P "<<(balance + amount)<<endl<<endl;               
	 cout<<"\t\t\t\t"<<"AVAIL BAL: P "<<balance<<endl<<endl;
	 cout<<"\t\t\t\t"<<"==========================================="<<endl;
	 cout<<"\t\t\t\t"<<"Thanks for trusting us, Have good day!"<<endl;
	 cout<<"\t\t\t\t"<<"Please keep the receipt for more info.."<<endl;
	 cout<<"\t\t\t\t"<<"==========================================="<<endl;
	 cout<<"\t\t\t\t"<<"Press any key to continue...";
	 getch();
}
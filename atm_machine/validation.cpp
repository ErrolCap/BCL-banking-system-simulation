#include "validation.h"
#include "banking.h"
#include "config.h"
#include "validation.h"
#include "alert.h"
#include <iostream>

using namespace std;
void makeNull(){ count = 0;  }

int isEmpty(){ return count == 0; }

int isFull(){ return count >= MAX; }

int insufiecient(float amount){
	return amount > active.balance;
}

int bank_limit(float amount){
    return amount >= BANK_LIMIT ;
}


int to_continue(){
	char choice;
	cout<<endl<<"Do you want to register the account ?"<<endl;
	cout<<"[1] Register the account"<<endl;
	cout<<"[2] Discard"<<endl;
	cout<<"Enter your choice: ";
	cin>>choice;
	
	switch(choice){
		case '1':
		return 1;
		break;
		case '2':
		return 0;
		break;
		
		default:
		setMessage("Wrong input, please try again.", -1);
		to_continue();
		break;
	}
	
}

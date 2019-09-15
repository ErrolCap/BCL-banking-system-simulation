#include "validation.h"
#include "banking.h"
#include "config.h"
#include "validation.h"
#include "alert.h"

#include "input.h"
#include <iostream>

using namespace std;
void makeNull(){ count = 0;  }

int isEmpty(){ return count == 0; }

int isFull(){ return count >= MAX; }

int insufiecient(float amount){
	return amount > (active.balance - BANK_LIMIT);
}

int bank_limit(float amount){
    return amount < BANK_LIMIT ;
}


int to_continue(){
	Input inp;
	char choice;
	cout<<endl<<"\tDo you want to continue ?"<<endl;
	cout<<"\t[1] Continue"<<endl;
	cout<<"\t[2] Discard"<<endl;
	cout<<"\tEnter your choice: ";
	choice = inp.getChoice('1', '2');
	cout<<endl;
	switch(choice){
		case '1':
		return 1;
		break;
		case '2':
		return 0;
		break;
		
		default:
		setMessage("\tWrong input, please try again.", -1);
		to_continue();
		break;
	}
	return -1;
}

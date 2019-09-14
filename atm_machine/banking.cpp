#include <iostream>

#include "banking.h"
#include "alert.h"
#include "crud.h"
#include "string.h"
#include "validation.h"
#include "card_validation.h"
#include "utils.h"
#include "Bycrpyt.h"
#include "Input.h"
#include "atm_menu.h"

using namespace std;
void view_balance(){
	Input inp;
	 if(!isConnected()){
        setMessage("\tCard is ejected, Please re insert your card", 3);
        return;
    }
    atm_header("Check Balance");
	cout<<"\tYour balance is: "<<active.balance<<endl;
	setMessage("", 2);
	
}

void widthdraw(){
    Input inp;
    if(!isConnected()){
        setMessage("\tCard is ejected, Please re insert your card", 3);
        return;
    }
    atm_header("Widthraw");
	cout<<"\tYour balance is: "<<active.balance<<endl;
	float amount;
	cout<<"\tEnter your amount to widthraw"<<endl;
    amount = inp.getFloat(10);
	if(!insufiecient(amount)){
		if(!bank_limit(amount)){
            active.balance -= amount;
			
            if(update(active.accNo, active.balance)){
                setMessage("\tAmount widthdrawed \nPlease remove your card",2);
            }else{
                setMessage("\tBank is offline...", 2);
            }
        }else{
            setMessage("\tThe limit to widthdraw is 500", 2);
        }
	}else{
        setMessage("\tInsufficient Balance", 2);
    }
	
}

void deposit(){
	 Input inp;
     if(!isConnected()){
        setMessage("\tCard is ejected, Please re insert your card", 3);
        return;
    }
    atm_header("Deposit");
    cout<<"\tYour balance is: "<<active.balance<<endl;
	float amount;
	cout<<"\tEnter your amount to deposit: ";
    amount = inp.getFloat(10);

    if(!bank_limit(amount)){
        active.balance += amount;

        if(update(active.accNo, active.balance)){
            setMessage("\tAmount deposit \nPlease remove your card", 2);
        }else{
            setMessage("\tBank is offline...", 2);
        }
    }else{
        setMessage("\tThe limit to widthdraw is 500", 2);
    }
}

void fund_transfer(){
	Input inp;
    if(!isConnected()){
        setMessage("\tCard is ejected, Please re insert your card", 3);
        return;
    }
    atm_header("Fund Transfer");
    char * accNo = new char[16], loc;
    float amount, amountTransfer;

    cout<<"\tYour balance is: "<<active.balance<<endl;
    cout<<"\tEnter the account number of the reciever: ";
    strcpy(accNo, inp.getText(15,16, "digit"));
    loc = location(accNo);
    if(loc != 0){
        cout<<"\tThe reciever name is "<<acc[loc].fname<<" "<<acc[loc].lname<<" "<<endl;
        cout<<"\tEnter your amount to transfer: ";
		amount = inp.getFloat(10);

        if(!insufiecient(amount)){

            if(!bank_limit(amount)){
                active.balance -= amount;

                if(update(active.accNo, active.balance)){
                    amountTransfer = acc[loc].balance + amount;
                    if(update(acc[loc].accNo, amountTransfer)){

                        setMessage("\tThe fund is transfered succesffuly", 2);
                    } else{
                         setMessage("\tBank is offline...", 2);
                    }
                    
                }else{
                    setMessage("\tBank is offline...", 2);
                }
            }else{
                setMessage("\tThe limit to widthdraw is 500"+BANK_LIMIT, 2);
            }
        }else{
            setMessage("\tInsufficient Balance", 2);
        }
        

    }
}


void changePin(){
	if(!isConnected()){
        setMessage("\tCard is ejected, Please re-insert your card", 3);
        return;
    }
	Input inp;
	Bycrpyt hash;
	
	char *old_pin, *pin, *re_pin;
	atm_header("Change PIN");
	cout<<"\tEnter your old PIN: ";
	old_pin = inp.getPassword(1, 6);
	cout<<"\tEnter your new PIN: ";
	pin = inp.getPassword(1, 6);
	cout<<"\tRe enter your new PIN: ";
	re_pin = inp.getPassword(1, 6);
	
	if(stricmp(hash.decryptPin(active.pin), old_pin)!=0){
		setMessage("\tWrong old pin input, Please try again...",-1);
		changePin();
	}
	
	if(strcmp(pin, re_pin) != 0){
		setMessage("\tThe pin not match, Please try again...", -1);
		changePin();
	}
	
	if(strcmp(old_pin, pin) == 0){
		setMessage("\tYour pin has been used before, Please try again...", -1);
		changePin();
	}
	
	if(updatePin(hash.encryptPin(pin))){
		setMessage("\tYour pin is successfully change", 2);
		return;
	}
	
	setMessage("\tBank is offline, please try again later...", 2);
	
	
}


#include <iostream>
#include <conio.h>
#include <string.h>

#include "banking.h"
#include "alert.h"
#include "crud.h"
#include "auth.h"
#include "validation.h"
#include "card_validation.h"
#include "utils.h"
#include "Bycrpyt.h"
#include "Input.h"
#include "atm_menu.h"
#include "receipt.h"

void view_balance();
void widthdraw();
void deposit();
void fund_transfer();
void changePin();
void tranferNext(char accNo[]);

using namespace std;
Input inp;
void view_balance(){
	 if(!isConnected()){
        setMessage("\tCard is ejected, Please re insert your card", 3);
        return;
    }
    atm_header("Check Balance");
	cout<<"\tYour balance is: "<<active.balance<<endl;
	setMessage("", 2);
	
}

void widthdraw(){
    if(!isConnected()){
        setMessage("\tCard is ejected, Please re insert your card", 3);
        return;
    }
    atm_header("Widthraw");
	cout<<"\tYour balance is: "<<active.balance<<endl;
	float amount = 0;
	cout<<"\tEnter your amount to widthraw: ";
    amount = inp.getFloat(10);
	if(!insufiecient(amount)){
		if(to_continue()){
			if(!bank_limit(amount)){
            active.balance -= amount;
			
				if(update(active.accNo, active.balance)){
					receipt(2, amount, " ");
					isRemoved("\tAmount widthdrawed to your account");
				}else{
					setMessage("\tBank is offline...", 2);
				}
				
			}else{
				setMessage("\tThe limit to widthdraw is 500", 2);
			}
			
		}else{
			setMessage("\tProcess Terminated...", 2);
		}
		
	}else{
        setMessage("\tInsufficient Balance", 2);
    }
	
}

void deposit(){
     if(!isConnected()){
        setMessage("\tCard is ejected, Please re insert your card", 3);
        return;
    }
    atm_header("Deposit");
    cout<<"\tYour balance is: "<<active.balance<<endl;
	float amount = 0;
	cout<<"\tEnter your amount to deposit: ";
    amount = inp.getFloat(10);

    if(to_continue()){
		if(!bank_limit(amount)){
			active.balance += amount;

			if(update(active.accNo, active.balance)){
				receipt(1, amount, " ");
				isRemoved("\tAmount deposit to your account");
			}else{
				setMessage("\tBank is offline...", 2);
			}
		}else{
			setMessage("\tThe limit to deposit is 500", 2);
		}
	}else{
		setMessage("\tProcess Terminated...", 2);
	}
}

void fund_transfer(){
    if(!isConnected()){
        setMessage("\tCard is ejected, Please re insert your card", 3);
        return;
    }
    atm_header("Fund Transfer");

	char accNo[16];
    cout<<"\tYour balance is: "<<active.balance<<endl;
    cout<<"\tEnter the account number of the reciever: ";
	
//	strcpy(acc, inp.getText(16,16, "digit"));
	cin>>accNo;
	if(strcmp(accNo, active.accNo) != 0){
		tranferNext(accNo);
	}else{
		setMessage("\tInvalid Account Number...", 2);
	}
	
}

void tranferNext(char accNo[]){
	int loc = location(accNo);
	float amount = 0, amountTransfer = 0;
	
    if(loc != 0){
        cout<<"\tThe reciever name is "<<acc[loc].fname<<" "<<acc[loc].lname<<" "<<endl;
        cout<<"\tEnter your amount to transfer: ";
		amount = inp.getFloat(10);
		
        if(!insufiecient(amount)){
            if(to_continue()){
				if(!bank_limit(amount)){
                active.balance -= amount;

					if(update(active.accNo, active.balance)){
						amountTransfer = (acc[loc].balance + amount);
						
						if(update(acc[loc].accNo, amountTransfer)){
							receipt(3, amount, accNo);
							isRemoved("\tMoney transfered successfully");
						} else{
							 setMessage("\tBank is offline...", 2);
						}
						
					}else{
						setMessage("\tBank is offline...", 2);
					}
				}else{
					setMessage("\tThe limit to widthdraw is 500", 2);
				}
			}
			else{
				setMessage("\tProcess Terminated...", 2);
			}
        }else{
            setMessage("\tInsufficient Balance", 2);
        }
    }else{
		setMessage("\tNo accounts found with the Account number entered", 2);
	}
}

void changePin(){
	if(!isConnected()){
        setMessage("\tCard is ejected, Please re-insert your card", 3);
        return;
    }
	Bycrpyt hash;
	atm_header("Change PIN");
	char old_pin[7], pin[7], re_pin[7], orig_pin[7], dec_pin[7];
	cout<<"\tEnter your old PIN: ";
	strcpy(old_pin, inp.getPassword(1, 6));
	cout<<"\tEnter your new PIN: ";
	strcpy(pin, inp.getPassword(1, 6));
	cout<<"\tRe enter your new PIN: ";
	strcpy(re_pin, inp.getPassword(1, 6));
	
	strcpy(orig_pin, active.pin);
	strcpy(dec_pin, hash.decryptPin(orig_pin));
	if(to_continue()){
		if(stricmp(dec_pin, old_pin)!=0){
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
			isRemoved("\tYour pin is successfully change");
			return;
		}
		
		setMessage("\tBank is offline, please try again later...", 2);
	}else{
		setting_menu();
	}
	
	
}


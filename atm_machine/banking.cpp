#include <iostream>

#include "banking.h"
#include "alert.h"
#include "crud.h"
#include "string.h"
#include "validation.h"
#include "card_validation.h"
#include "utils.h"

using namespace std;
void view_balance(){
	 if(!isConnected()){
        setMessage("Card is ejected, Please re insert your card", 3);
        return;
    }
    
	cout<<"Your balance is: "<<active.balance<<endl;
	setMessage("", 2);
	
}

void widthdraw(){
    
    if(!isConnected()){
        setMessage("Card is ejected, Please re insert your card", 3);
        return;
    }
    
	cout<<"Your balance is: "<<active.balance<<endl;
	float amount;
	cout<<"Enter your amount to widthraw"<<endl;
    cin>>amount;
	if(!insufiecient(amount)){
		if(!bank_limit(amount)){
            active.balance -= amount;
			
            if(update(active.accNo, active.balance)){
                setMessage("Amount widthdrawed \nPlease remove your card",2);
            }else{
                setMessage("Bank is offline...", 2);
            }
        }else{
            setMessage("The limit to widthdraw is 500", 2);
        }
	}else{
        setMessage("Insufficient Balance", 2);
    }
	
}

void deposit(){
     if(!isConnected()){
        setMessage("Card is ejected, Please re insert your card", 3);
        return;
    }
    
    cout<<"Your balance is: "<<active.balance<<endl;
	float amount;
	cout<<"Enter your amount to deposit"<<endl;
    cin>>amount;

    if(!bank_limit(amount)){
        active.balance += amount;

        if(update(active.accNo, active.balance)){
            setMessage("Amount deposit \nPlease remove your card", 2);
        }else{
            setMessage("Bank is offline...", 2);
        }
    }else{
        setMessage("The limit to widthdraw is 500", 2);
    }
}

void fund_transfer(){
    if(!isConnected()){
        setMessage("Card is ejected, Please re insert your card", 3);
        return;
    }
    
    int accNo, loc;
    float amount, amountTransfer;

    cout<<"Your balance is: "<<active.balance<<endl;
    cout<<"Enter the account number of the reciever: ";
    cin>> accNo;
    loc = location(accNo);
    if(loc != 0){
        cout<<"The reciever name is "<<acc[loc].fname<<" "<<acc[loc].lname<<" "<<endl;
        cout<<"Enter your amount to transfer: ";
        cin>>amount;

        if(!insufiecient(amount)){

            if(!bank_limit(amount)){
                active.balance -= amount;

                if(update(active.accNo, active.balance)){
                    amountTransfer = acc[loc].balance + amount;
                    if(update(acc[loc].accNo, amountTransfer)){

                        setMessage("The fund is transfered succesffuly", 2);
                    } else{
                         setMessage("Bank is offline...", 2);
                    }
                    
                }else{
                    setMessage("Bank is offline...", 2);
                }
            }else{
                setMessage("The limit to widthdraw is 500"+BANK_LIMIT, 2);
            }
        }else{
            setMessage("Insufficient Balance", 2);
        }
        

    }
}


#include <iostream>

#include "banking.h"
#include "alert.h"
#include "crud.h"
#include "string.h"
#include "validation.h"
#include "utils.h"

using namespace std;
void view_balance(){
	
	cout<<"Your balance is: "<<active.balance<<endl;
	setMessage("", 0);
	
}

void widthdraw(){
	cout<<"Your balance is: "<<active.balance<<endl;
	float amount;
	cout<<"Enter your amount to widthraw"<<endl;
    cin>>amount;
	if(!insufiecient(amount)){
		if(bank_limit(amount)){
            active.balance -= amount;
			
            if(update(active.accNo, active.balance)){
                setMessage("Amount widthdrawed \nPlease remove your card", 0);
            }else{
                setMessage("Bank is offline...", 0);
            }
        }else{
            setMessage(strcat("The limit to widthdraw is ", BANK_LIMIT + "(Pesos)") , 0);
        }
	}else{
        setMessage("Insufficient Balance", 0);
    }
	
}

void deposit(){
    cout<<"Your balance is: "<<active.balance<<endl;
	float amount;
	cout<<"Enter your amount to deposit"<<endl;
    cin>>amount;

    if(bank_limit(amount)){
        active.balance += amount;

        if(update(active.accNo, active.balance)){
            setMessage("Amount deposit \nPlease remove your card", 0);
        }else{
            setMessage("Bank is offline...", 0);
        }
    }else{
        setMessage(strcat("The limit to deposit is ", BANK_LIMIT + "(Pesos)") , 0);
    }
}

void fund_transfer(){
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

            if(bank_limit(amount)){
                active.balance -= amount;

                if(update(active.accNo, active.balance)){
                    amountTransfer = acc[loc].balance + amount;
                    if(update(acc[loc].accNo, amountTransfer)){

                        setMessage("The fund is transfered succesffuly", 0);
                    } else{
                         setMessage("Bank is offline...", 0);
                    }
                    
                }else{
                    setMessage("Bank is offline...", 0);
                }
            }else{
                setMessage(strcat("The limit to transfer money is ", BANK_LIMIT + "(Pesos)") , 0);
            }
        }else{
            setMessage("Insufficient Balance", 0);
        }
        

    }
}


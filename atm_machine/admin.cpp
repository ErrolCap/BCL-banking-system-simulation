#include <iostream>
#include <conio.h>
#include "admin.h"
#include "banking.h"
#include "validation.h"
#include "alert.h"
#include "config.h"
#include "input.h"
#include "Bycrpyt.h"
using namespace std;
void display(){
    int i;
	Input inp;
	Bycrpyt hash;
	system("cls");
    if(isEmpty() ){
        setMessage("\tNo registered account yet", 1);
		
    }else{
		cout<<"\tBank Accounts Information"<<endl;
		cout<<"\t=========================================================================="<<endl<<endl;
        for(i = 1; i<= count; i++){
			cout<<"\t"<<acc[i].accNo<<" ======================================"<<endl;
            cout<<"\t"<<acc[i].fname<<" "<<acc[i].mname<<" "<<acc[i].lname<<endl;
			cout<<"\t"<<acc[i].dob<<" "<<acc[i].cpNo<<" "<<inp.parseSpace(acc[i].addr, false)<<" "<<acc[i].sex<<" "<<acc[i].email<<" "<<acc[i].balance<<endl;
			cout<<"\t"<<hash.decryptPin(acc[i].pin)<<endl<<endl;
        }
        setMessage("\tThe Registered Accounts", 1);
    }

}
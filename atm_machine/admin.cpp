#include <iostream>
#include <conio.h>
#include "admin.h"
#include "banking.h"
#include "validation.h"
#include "alert.h"
#include "config.h"

using namespace std;
void display(){
    int i;
	system("cls");
    if(isEmpty() ){
        setMessage("\tNo registered account yet", 1);
		
    }else{
        for(i = 1; i<= count; i++){
            cout<<"\t"<<acc[i].accNo<<" "<<acc[i].fname<<" "<<acc[i].mname<<" "<<acc[i].lname<<" "<<acc[i].dob<<" "<<acc[i].cpNo<<" "<<acc[i].addr<<" "<<acc[i].pin<<" "<<acc[i].sex<<" "<<acc[i].email<<" "<<acc[i].balance<<endl;
    
        }
        setMessage("\tThe Registered Accounts", 1);
    }

}
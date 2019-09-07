#include <iostream>

#include "admin.h"
#include "banking.h"
#include "validation.h"
#include "alert.h"
#include "config.h"

using namespace std;
void display(){
    int i;
    if(isEmpty() ){
        setMessage("No registered account yet", 1);
    }else{
        for(i = 1; i<= count; i++){
            cout<<acc[i].accNo<<" "<<acc[i].balance<<" "<<acc[i].fname<<" "<<acc[i].lname<<" "<<acc[i].pin<<endl;
    
        }
        setMessage("The Registered Accounts", 1);
    }

}
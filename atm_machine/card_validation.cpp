#include "card_validation.h"
#include "CARD.h"
#include "config.h"
#include "auth.h"
#include "logo.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int isConnected(){
         while(1){
            char card = getRemovableDisk();
            
            if(card != '0'){
                return 1;
            }
            
            return 0;
        }
}

void isRemoved(char msg[]){
	while(1){
		char card = getRemovableDisk();
		
		if(card == '0'){
			verifyCardLogged();
		}else{
			system("cls");
			logo();
			cout<<endl<<"\t\t"<<msg<<endl;
			cout<<"\t\t\tPlease safely removed your card"<<endl;
			cout<<"\t\t\tThanks for trusting "<<BANK_NAME<<" have a wonderful day!"<<endl;
		}
	}
}


int isRegistered(const char  drive){
        fstream file;
        
        string path = ":\\";
        path.append(BANK_NAME);
        path.insert(0, 1, drive);
        path.append(".txt");
        file.open(path,ios::in);
         
         if(file.is_open()){
             file.close();
             return 1;
         }else{
             file.close();
             return 0;
         }
}

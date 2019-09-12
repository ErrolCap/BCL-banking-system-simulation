#include <conio.h>
#include "Bycrpyt.h"
#include "config.h"
#include <iostream>

using namespace std;
Bycrpyt::Bycrpyt()
{
}

Bycrpyt::~Bycrpyt()
{
}


char* Bycrpyt::pinField(){
    int i = 0;
    char* pin = new char[6];
    char temp; 
	
    while(temp != 13 && i != 6 ){
        temp = getch();
        
		if(temp != 8){
			pin[i] = temp;
			putch(42);
			i++;
		}else{
			cout<<"\b\b";
			i--;
		}
    }
    pin[i+1] = '\0';
	
    return pin;
}


char * Bycrpyt::encryptPin(char * pin){
    int i;
    for(i = 0; i <= 5 ; i++){
        pin[i] += ROUNDS;
    }
    return pin; 
}

char * Bycrpyt::decryptPin(char * pin){
    int i;
    for(i = 0; i <= 5 ; i++){
        pin[i] -= ROUNDS;
    }
    return pin; 
}


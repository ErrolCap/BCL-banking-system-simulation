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


char * Bycrpyt::encryptPin(char pin[]){
    int i;
    for(i = 0; i <= 5 ; i++){
        pin[i] += ROUNDS;
    }
    return pin; 
}

char * Bycrpyt::decryptPin(char pin[]){
	
    int i;
    for(i = 0; i <= 5 ; i++){
        pin[i] -= ROUNDS;
    }
	pin[6]='\0';
    return pin; 
}
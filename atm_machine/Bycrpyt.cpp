#include <conio.h>
#include "Bycrpyt.h"
#include "config.h"

Bycrpyt::Bycrpyt()
{
}

Bycrpyt::~Bycrpyt()
{
}


char* Bycrpyt::pinField(){
    int i = 0;
    char* pin = new char[6];
    
    while(i != 6 ){
        pin[i] = getch();
        putch(42);
        i++;
    }
    pin[6] = '\0';
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


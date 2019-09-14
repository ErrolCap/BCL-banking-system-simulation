#include "utils.h"
#include "banking.h"
#include "config.h"
#include <string>
#include <string.h>
#include <time.h>
#include <sstream>
#include <iostream>
ACCOUNT acc[MAX];
int count;

using namespace std;
int location(char * cardNo){
    int i;
    for(i = 1; i <= count; i++){
        if(strcmp(acc[i].accNo, cardNo) == 0){
        	return i;
		}
    }
    return 0;

}

char * generateAccNo(){
	char *toReturn = new char[20];
	const string genAcc = BANK_INIT;
	ostringstream os;
	
	srand(time(NULL));
	for (int i = 0; i < 12; ++i)
	{
		int digit = rand() % 10;
		os << digit;
	}
	string result = genAcc + os.str();
	strcpy(toReturn, result.c_str());
	
	if(location(toReturn) >= 1){
		generateAccNo();
	}
	return toReturn;
	
}

char * generatePin(){
	char* pin = new char[6];
    srand(time(NULL));
    int value = rand() % 899999 + 100000;
    itoa(value,pin, 10);
    pin[6]='\0';
    return pin;
}


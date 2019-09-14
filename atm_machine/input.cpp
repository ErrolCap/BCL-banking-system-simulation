#include "Input.h"
#include <conio.h>
#include <iostream>
#include <string.h>
#include <cstdlib>
#include <iomanip>
#include <locale>

#define BACK_SPACE 8
#define ENTER 13
#define RIGHT_ARROW 26
#define LEFT_ARROW 27
using namespace std;
Input::Input()
{
}

Input::~Input()
{
}

char * Input::getText(int min, int max, const char * type){
	int i = 0;
	char* text = new char[max], temp;
	while(temp != 13 && i != max){
		isEmptyLBL:
		temp = getch();
		if(temp != 8){
			if(getterValidator(temp, type)){
				putch(temp);
				text[i] = temp;
				i++;
			}
		}else{
			if(i != 0){
				cout<<"\b \b";
				i--;
			}
		}
	}
	if(i < min){
		goto isEmptyLBL;
	}
	text[i] = '\0';
	cout<<endl;
	return text;
}

float Input::getFloat(int max){
	int i = 0;
	char * val = new char[max], temp;
	while(temp != 13 && i != max){
		isEmptyFloat:
		temp = getch();
		if(temp != 8){
			if(isFloat(temp)){
				putch(temp);
				val[i] = temp;
				i++;
			}
		}else{
			if(i != 0){
				cout<<"\b \b";
				i--;
			}
		}
	}
	if(i < 1){
		goto isEmptyFloat;
	}
	val[i] = '\0';
	cout<<endl;
	return atof(val);
}


char* Input::getPassword(int min, int max){
    int i = 0;
	char * pin = new char[max], temp;
	while(temp != 13 && i != max){
		isEmptyPin:
		temp = getch();
		if(temp != 8){
			if(isNumber(temp)){
				putch(42);
				pin[i] = temp;
				i++;
			}
		}else{
			if(i != 0){
				cout<<"\b \b";
				i--;
			}
		}
	}
	if(i < min){
		goto isEmptyPin;
	}
	pin[i] = '\0';
	cout<<endl;
	return pin;
}

char * Input::getDate(){
	int i = 0;
	char * date = new char[10];
	char temp;
	while(i != 10){
		temp = getch();
		
		if(temp != 8){
			if(isNumber(temp)){
				date[i] = temp;
				i++;
				putch(temp);
				if(i == 2){
					date[2]= '/';
					cout<<"/";
					i = 3;
				}else if(i == 5){
					date[5]= '/';
					cout<<"/";
					i = 6;
				}
			}
		}else{
			if(i != 0){
				cout<<"\b \b";
				i--;
			}
		}
		
	}
	date[10] = '\0';
	cout<<endl;
	return date;
}

char * Input::getGender(){
		
	char *seletected = new char[6];
	char temp;
	int toggle = 0;
	cout<<"      ";
	while(temp != 13){
		
		temp = getch();
		if(temp == 9){
			
			if(toggle == 0) {
				toggle = 1;
				cout<<"\b\b\b\b\b\bFEMALE";
				strcpy(seletected, "FEMALE");
			}
			else {
				toggle = 0;
				cout<<"\b\b\b\b\b\bMALE  ";
				strcpy(seletected, "MALE");
			}
		}
	}
	cout<<endl;
	return seletected;
}

char * Input::moneyFormat(float amount){
	char * format = new char[20];
	stringstream ss;
	ss.imbue(locale(""));
	
	if(amount < 0){
	   ss << "-\u20B1" << fixed << -amount; 
	} else {
	   ss << "\u20B1" << fixed << amount; 
	}
	strcpy(format, ss.str().c_str());
	return format;
	
}

int Input::getterValidator(char inp,const char * type){
	if(strcmpi("letter", type) == 0){
		return isLetter(inp);
	}else if(strcmpi("digit", type) == 0){
		return isNumber(inp);
	}else if(strcmpi("alphaNum", type) == 0){
		return isAlphaNumerical(inp);
	}else if(strcmpi("email", type) == 0){
		return isEmail(inp);
	}else if(strcmpi("address", type) == 0){
		return isAlphaNumericWSpace(inp);
	}else if(strcmpi("float", type) == 0){
		return isFloat(inp);
	}
	return -1;
}

int Input::isLetter(char inp){
	
	if((inp >= 'a' && inp <= 'z') || (inp >= 'A' && inp <= 'Z') ){
		return 1;
	}
	return 0;
}

int Input::isNumber(char inp){
	if((inp >= '0' && inp <= '9')){
		return 1;
	}
	return 0;
}

int Input::isFloat(char inp){
	return (isNumber(inp) || inp == 46) ? 1 : 0;
}

int Input::isAlphaNumerical(char inp){
	return (isLetter(inp) || isNumber(inp)) ? 1 : 0;
}


int Input::isLetterUtils(char inp){
	return (inp == ENTER && inp == BACK_SPACE) ? 1 : 0;
}


char * Input::parseSpace(char * inp, bool mode){
	int i = 0;
	int len = strlen(inp);
	while(i != len){
		if(mode){
			if(inp[i] == 32) inp[i] = 95;
		}else{
			if(inp[i] == 95) inp[i] = 32;
		}
		i++;
	}
	return inp;
}

int Input::isAlphaNumericWSpace(char inp){
	return (isAlphaNumerical(inp) || (inp == 32 || inp == 44)) ? 1 : 0;
}

int Input::isEmail(char inp){
	return (isAlphaNumerical(inp) || (inp == 64 || inp == 95 || inp == 46)) ? 1 : 0;
}

int Input::NavigateOnLetter(char inp){
	
	if(inp == RIGHT_ARROW){
		return 1;
	}else if(inp == LEFT_ARROW){
		return 0;
	}
	return -1;
}

char Input::getChoice(char firstOpt, char lastOpt){
	char temp;
	char choosen = '\0';
	while(temp != 13){
		loop2:
		temp = getch();
		if(temp != 8){
			if(isNumber(temp) && (temp >= firstOpt && temp <= lastOpt)){
				if(choosen == '\0'){
					putch(temp);
					choosen = temp;
				}
			}
		}else{
			if(choosen != '\0'){
				cout<<"\b \b";
				choosen = '\0';
				temp = '\0';
			}
		}
	}
	if(choosen == '\0'){
		goto loop2;
	}
	cout<<endl;
	return choosen;
}




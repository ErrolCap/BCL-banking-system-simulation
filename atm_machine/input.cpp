#include "Input.h"
#include <conio.h>
#include <iostream>
#include <string.h>
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

char * Input::getText(int len,const char * type){
	int i = 0;
	char * text = new char[len], temp;
	
	while(temp != 13 && i != len){
		temp = getch();
		if(isLetter(temp)){
			if(temp != 8){
				putch(temp);
				text[i] = temp;
				i++;
			}else{
				if(i >= 0){
					cout<<"\b \b";
					i--;
				}
			}
		}
	}
	text[i+1] = '\0';
	cout<<text<<endl;
	return text;
}

int Input::getterValidator(char inp,const char * type){
	if(strcmpi("letter", type) == 0){
		return isLetter(inp);
	}else if(strcmpi("digit", type) == 0){
		return isNumber(inp);
	}else if(strcmpi("alphaNum", type) == 0){
		return isAlphaNumerical(inp);
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

int Input::isAlphaNumerical(char inp){
	if(isLetter(inp) && isNumber(inp)){
		return 1;
	}
	return 0;
}



int Input::NavigateOnLetter(char inp){
	
	if(inp == RIGHT_ARROW){
		return 1;
	}else if(inp == LEFT_ARROW){
		return 0;
	}
	return -1;
}


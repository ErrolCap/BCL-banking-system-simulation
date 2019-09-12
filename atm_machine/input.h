#ifndef INPUT_H
#define INPUT_H

class Input
{
public:
	Input();
	~Input();
	char * getText(int min, int max, const char * type);
	char * getPassword(int min, int max);
	char * getGender();
	char * getDate();
	char getChoice(char firstOpt, char lastOpt);
	char * parseSpace(char * inp, bool mode);
	int isLetter(char inp);
	int isNumber(char inp);
	int isAlphaNumerical(char inp);
	int NavigateOnLetter(char inp);
	int isAlphaNumericWSpace(char inp);
	int getterValidator(char inp, const char * type);
	int isLetterUtils(char inp);
	int isEmail(char inp);
	
};

#endif // INPUT_H

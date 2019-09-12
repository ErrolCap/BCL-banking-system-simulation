#ifndef INPUT_H
#define INPUT_H

class Input
{
public:
	Input();
	~Input();
	char * getText(int len, const char * type);
	int isLetter(char inp);
	int isNumber(char inp);
	int isAlphaNumerical(char inp);
	int NavigateOnLetter(char inp);
	int getterValidator(char inp, const char * type);
};

#endif // INPUT_H

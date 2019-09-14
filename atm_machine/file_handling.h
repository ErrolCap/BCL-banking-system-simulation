#ifndef FILE_HANDLING_H
#define FILE_HANDLING_H
#include <iostream>
using namespace std;

void saveFile();
void retriveFile();
int registerCARD(const char  drive, char * accNo);
string loggedCard(char drive);
#endif // FILE_HANDLING_H

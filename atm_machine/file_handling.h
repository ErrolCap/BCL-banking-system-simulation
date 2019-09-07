#ifndef FILE_HANDLING_H
#define FILE_HANDLING_H

void saveFile();
void retriveFile();
int registerCARD(const char  drive, int accNo);
int loggedCard(const char drive);
int checkRegistered(const char  drive);

#endif // FILE_HANDLING_H

#ifndef CRUD_H
#define CRUD_H

void insert(char filePath,char fname[40], char mname[40], char lname[40], char cpNo[11], char sex[10], char dob[20], char addr[40], char email[40],  char pin[5], float balance);
int update(int accNo, float amount);
int updatePin(char * pin);

#endif // CRUD_H

#ifndef CRUD_H
#define CRUD_H

void insert(char filePath, char *accNo, char *fname, char *mname, char *lname, char *cpNo, 
                    char *sex, char *dob, char *addr,  char *email,  char *pin, float balance);
int update(char * accNo, float amount);
int updatePin(char * pin);

#endif // CRUD_H

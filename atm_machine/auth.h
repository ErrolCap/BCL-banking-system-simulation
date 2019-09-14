#ifndef AUTH_H
#define AUTH_H

void verifyCardLogged();
char * encryptPin(char pin[6]);
char * decryptPin(char pin[6]);

#endif // AUTH_H

#ifndef BYCRPYT_H
#define BYCRPYT_H

class Bycrpyt
{
public:
    Bycrpyt();
    ~Bycrpyt();
    
    char * pinField();
    char * encryptPin(char * pin);
    char * decryptPin(char * pin);
};

#endif // BYCRPYT_H

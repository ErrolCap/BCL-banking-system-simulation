#include "error.h"
#include "logo.h"
#include <conio.h>
#include <iostream>

using namespace std;
void noCardDetected(){
    system("cls");
	logo();
    cout<<"\t\t\tPlease insert your card"<<endl;
}


#include "main_menu.h"
#include "atm_menu.h"
#include "admin_menu.h"
#include "file_handling.h"
#include <iostream>
#include <conio.h>
#include "auth.h"
using namespace std;
void main_menu(){
    char choice;
            system("cls");
            retriveFile();
            cout<<"Enter modules to enter"<<endl;
            cout<<"[1] Administrator"<<endl;
            cout<<"[2] Atm Machine"<<endl;
            cin>>choice;
            switch(choice){
                case '1':
                    admin_menu();
                break;
                
                 case '2':
                    verifyCardLogged();
                break;
                
                default:
                    main_menu();
                break;
    }
}


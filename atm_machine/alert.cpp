#include <iostream>
#include <conio.h>

#include "alert.h"
#include "admin_menu.h"
#include "atm_menu.h"
#include "main_menu.h"

using namespace std;

void setMessage(const char * msg,  int menu ){
    cout<<msg<<endl;
    cout<<"\tPress any key to continue";
    getch();
    system("cls");
    
    switch(menu){
        case 1: admin_menu();
        break;
        
        case 2: atm_menu();
        break;
        
        case 3: main_menu();
        break;
        
        default:
        break;
    }

}


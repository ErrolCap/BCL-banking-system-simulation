#include "admin_menu.h"
#include "admin.h"
#include "register_bank.h"
#include <iostream>

using namespace std;
void admin_menu(){
    char ch;
    cout<<"Choose mode"<<endl;
    cout<<"[1] Register Account"<<endl;
    cout<<"[2] Display"<<endl;
    cin>>ch;

    switch (ch)
    {
    case '1':
        registerAcc();
        break;

    case '2':
        display();
    break;

    default:
        admin_menu();
        break;
    }
}

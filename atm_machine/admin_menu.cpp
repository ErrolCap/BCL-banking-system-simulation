#include "admin_menu.h"
#include "main_menu.h"
#include "admin.h"
#include "register_bank.h"
#include "conio.h"
#include "file_handling.h"
#include <iostream>
#include "CARD.h"
#include "error.h"
#include "alert.h"
using namespace std;
void admin_menu(){
    char ch;
    system("cls");
    cout<<"Choose mode"<<endl;
    cout<<"[1] Register Account"<<endl;
    cout<<"[2] Display"<<endl;
    cout<<"[3] Display"<<endl;
    cin>>ch;
    switch (ch)
    {
    case '1':
       
        while(1){
                char card = getRemovableDisk();
                if (card != '0'){
                    if(checkRegistered(card) != 1){
                        registerAcc(card);
                    }else{
                        setMessage("The card is registered", 1);
                    }
                }else{
                    setMessage("Please insert a card", 1);
                }
        }
        
        break;

    case '2':
        display();
    break;
    
    case '3':
        main_menu();
    break;

    default:
        admin_menu();
        break;
    }
}

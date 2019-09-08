#include "admin_menu.h"
#include "main_menu.h"
#include "admin.h"
#include "register_bank.h"
#include "conio.h"
#include "card_validation.h"
#include <iostream>
#include "CARD.h"
#include "error.h"
#include "alert.h"
#include "logo.h"
#include "gotoxy.h"
using namespace std;
void admin_menu(){
    char ch;
    system("cls");
    logo();
    gotoxy(20,23);cout<<"[1] Register Account"<<endl;
    gotoxy(20,24);cout<<"[2] Display"<<endl;
    gotoxy(20,25);cout<<"[3] Menu"<<endl;
    gotoxy(20,26);cout<<"=============================="<<endl;
    gotoxy(20,27);cout<<"Type your choice: "<<endl;
    gotoxy(38,27);cin>>ch;
    gotoxy(20,28);cout<<"=============================="<<endl;
    switch (ch)
    {
    case '1':
       
        while(1){
                char card = getRemovableDisk();
                if (card != '0'){
                    if(isRegistered(card) != 1){
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

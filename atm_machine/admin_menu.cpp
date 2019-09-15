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
#include "Input.h"
using namespace std;
void admin_menu(){
    char ch;
	Input inp;
    system("cls");
    logo();
    cout<<"\t\t\t[1] Register Account"<<endl;
	cout<<"\t\t\t[2] Display"<<endl;
	cout<<"\t\t\t[3] Menu"<<endl;
	cout<<"\t\t\t=============================="<<endl;
	cout<<"\t\t\tType your choice: ";
	ch = inp.getChoice('1', '3');
	system("cls");
    switch (ch)
    {
    case '1':
        while(1){
                char card = getRemovableDisk();
                if (card != '0'){
					
                    if(isRegistered(card) != 1){
                        registerAcc(card);
                    }else{
                        setMessage("\tThe card is registered", 1);
                    }
                }else{
                    setMessage("\tPlease insert a card", 1);
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

#include "gotoxy.h"
#include <windows.h>

void gotoxy (int x, int y)
    {
         COORD coordinates;     // coordinates is declared as COORD
         coordinates.X = x;     // defining x-axis
         coordinates.Y = y;     //defining  y-axis
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);       
    }
    

void gotoX(int x){
        COORD coordinates;     // coordinates is declared as COORD
         coordinates.X = x;     // defining x-axis
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);       
}
 
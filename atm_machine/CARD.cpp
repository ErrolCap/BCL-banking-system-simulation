#include "CARD.h"
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <string>

using namespace std;


char getRemovableDisk(){
    char drive='0';
    int i;
    char szLogicalDrives[MAX_PATH];
    DWORD dwResult = GetLogicalDriveStrings(MAX_PATH, szLogicalDrives);

    string currentDrives="";

    //cout << dwResult << endl;
    for(i=0; i<dwResult; i++)
    {
        if(szLogicalDrives[i]>64 && szLogicalDrives[i]< 90)
        {
          if(GetDriveType(&szLogicalDrives[i]) == DRIVE_REMOVABLE){
                drive =  szLogicalDrives[i];
            }
        }
    }
    
    Sleep(1000);
    return drive;
}



#include "utils.h"
#include "banking.h"
#include "config.h"
#include <string>
#include <time.h> 
ACCOUNT acc[MAX];
int count;

int location(int cardNo){
    int i;
    for(i = 1; i <= count; i++){
        if(acc[i].accNo == cardNo){
        	return i;
		}
    }

    return 0;

}


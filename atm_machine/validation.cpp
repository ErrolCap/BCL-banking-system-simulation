#include "validation.h"
#include "banking.h"
#include "config.h"
#include "validation.h"

void makeNull(){ count = 0;  }

int isEmpty(){ return count == 0; }

int isFull(){ return count >= MAX; }

int insufiecient(float amount){
	return amount > active.balance;
}

int bank_limit(float amount){
    return amount >= BANK_LIMIT ;
}


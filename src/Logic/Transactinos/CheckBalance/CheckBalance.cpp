#pragma once

#include "CheckBalance.hpp"

namespace nsCheckBalance{

double GetBalance(stClientInfo Client){
return Client.AccountBalance; 
}

void PrintBalance(stClientInfo Client){

double Balance=GetBalance(Client);

cout<<"Your Balance Is : "<<Balance;

}

}
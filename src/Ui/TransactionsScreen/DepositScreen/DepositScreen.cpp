#pragma once

#include "DepositScreen.hpp"

namespace nsDepositScreen{
void ShowDepositScreen(stClientInfo &Client){
cout<<"_______________________________"<<"____________________"<<"_______________________________\n";
cout<<"_______________________________"<<"   Deposit Screen   "<<"_______________________________\n";
cout<<"_______________________________"<<"____________________"<<"_______________________________\n";

nsDeposit::PerformDeposit(Client);
}
}
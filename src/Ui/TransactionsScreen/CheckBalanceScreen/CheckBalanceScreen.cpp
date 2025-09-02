#pragma once

#include "CheckBalanceScreen.hpp"
namespace nsCheckBalanceScreen{
void ShowCheckBalanceScreen(stClientInfo &Client){
cout<<"_______________________________"<<"____________________"<<"_______________________________\n";
cout<<"_______________________________"<<"Check Balance Screen"<<"_______________________________\n";
cout<<"_______________________________"<<"____________________"<<"_______________________________\n";

nsCheckBalance::PrintBalance(Client);
}
}
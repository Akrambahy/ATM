#pragma once

#include "QuickWithdrawScreen.hpp"

namespace nsQuickWithdrawScreen{
void ShowQuickWithdrawScreen(stClientInfo& Client){
cout<<"_______________________________"<<"____________________"<<"_______________________________\n";
cout<<"=============================="<<"Quick Withdraw Screen"<<"==============================\n";
cout<<"_______________________________"<<"____________________"<<"_______________________________\n";

nsQuickWithdraw::PerformQuickWithdraw(Client);
}
}
#pragma once

#include "NormalWithdrawScreen.hpp"

namespace nsNormalWithdrawScreen{
void ShowNormalWithdrawScreen(stClientInfo &Client){
cout<<"_______________________________"<<"____________________"<<"_______________________________\n";
cout<<"______________________________"<<"Normal Withdraw Screen"<<"______________________________\n";
cout<<"_______________________________"<<"____________________"<<"_______________________________\n";

nsNormalWithdraw::PerformNormalWithdraw(Client);
}
}
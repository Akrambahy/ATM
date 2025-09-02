#pragma once

#include <iostream>
#include "../../Models/Types/Types.hpp"

#include "../../Ui/TransactionsScreen/CheckBalanceScreen/CheckBalanceScreen.cpp"
#include "../../Ui/TransactionsScreen/DepositScreen/DepositScreen.cpp"
#include "../../Ui/TransactionsScreen/NormalWithdrawScreen/NormalWithdrawScreen.cpp"
#include "../../Ui/TransactionsScreen/QuickWithdrawScreen/QuickWithdrawScreen.cpp"

using namespace std ;

namespace nsMainMenu{

short ReadChoose(); // To ask User about her Choose And Take And Return It

enMainMenu ShowMainMenu(); // To Print Main Menu Elements And Call Read Chose And Return Choose In enMainMenu Form

void PerformMainMenu(stClientInfo& Client); // To Perform User Choose And Show Transaction Screen Her Choose It 

}

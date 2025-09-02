#pragma once

#include <iostream>
#include "../../Client/Client.cpp"
#include "../../../Models/Types/Types.hpp"

using namespace std;

namespace nsQuickWithdraw{

void PrintQuickWithdrawOptions();// To Print Quick Withdraw Options

short ReadQuickWithdrawAmount(); // To Call Print QuickWithdrawOptions And Get Amount Of WithDraw AAnd Return It

short ConvertChooseAmountToRealAmount(short ChooseAmount);

void WithdrawFromClient(stClientInfo& Client , short RealAmount ); // To Take Amount And Ferform WithDraw

bool PerformQuickWithdraw(stClientInfo& Client); // To Collect All Functions  Of Withdraw 

}
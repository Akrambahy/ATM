#pragma once

#include <iostream>
#include "../../Client/Client.cpp"
#include "../QuickWithdraw/QuickWithdraw.cpp"
#include "../../../Models/Types/Types.hpp"

using namespace std;

namespace nsNormalWithdraw{

short ReadWithdrawAmounr(); // To Get Amount Of Withdraw And Return It

bool CheckMultipleFive(short Amount); // To Check Amount Of Withdraw Multiple 5 or Not

bool PerformNormalWithdraw(stClientInfo& Client); // To Perform Normal Withdraw And Print Final Balance

}
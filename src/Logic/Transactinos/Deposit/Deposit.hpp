#pragma once

#include <iostream>
#include "../../Client/Client.cpp"
#include "../../../Models/Types/Types.hpp"

using namespace std;

namespace nsDeposit{

short ReadDepositAmount();// To Read Amount Of Deposit

bool DepositInClientBalance(stClientInfo &Client , short DepositAmount);// To Increase Balance Of Client By Deposit  Amount

bool PerformDeposit(stClientInfo& Client); // To Perform Deposit 
}
#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "../../Models/Types/Types.hpp"

using namespace std;

namespace nsClient{

string ReadAccountNumber(); // T Ask User About Account Number And Read It And Return Answer

string ReadPinCode(); // T Ask User About Pin Code And Read It And Return Answer

bool ClientExistByAccountNumber(string AccountNuber ,vector <stClientInfo> vClients); // To Check Client Exist In Vector Or Not By Account Number And Return Answer

bool FindClientByAccountNumberAndPinCode(string AccountNumber,string PinCode ,vector <stClientInfo > vClients, stClientInfo &Client); // To Check Client Has This Account Number Found Or Not And If Yes Store In Client And Return Answer 

bool CheckWithdrawByBalance(stClientInfo Client , short WithdrawAmount);  // To Ckeck Balance More Than Or Equal WithdrawAmount
}

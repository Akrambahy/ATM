#pragma once
#include "Client.hpp"
using namespace std;

namespace nsClient
{

    string ReadAccountNumber() // T Ask User About Account Number And Read It And Return Answer
    {
        string AccountNumber;

        cout << "\nEnter Account Number : ";
        cin >> AccountNumber;

        return AccountNumber;
    }

    string ReadPinCode() // To Ask User About Pin Code And Read It And Return AnswerLogic/Transactinos/QuickWithdraw/QuickWithdraw.hpp:4
    {
        string PinCode;

        cout << "\nEnter Pin Code : ";
        cin >> PinCode;

        return PinCode;
    }

    bool ClientExistByAccountNumber(string AccountNuber, vector<stClientInfo> vClients) // To Check Client Exist In Vector Or Not By Account Number And Return Answer
    {

        for (stClientInfo C : vClients)
        {
            if (C.AccountNumber == AccountNuber)
            {
                return true;
            }
        }

        return false;
    }

    bool FindClientByAccountNumberAndPinCode(string AccountNumber, string PinCode, vector<stClientInfo> vClients, stClientInfo &Client) // To Check Client Has This Account Number Found Or Not And If Yes Store In Client And Return Answer
    {
        for (stClientInfo C : vClients)
        {

            if (C.AccountNumber == AccountNumber && C.PinCode == PinCode)
            {
                Client = C;
                return true;
            }
        }

        return false;
    }

    bool CheckWithdrawByBalance(stClientInfo Client, short WithdrawAmount) // To Ckeck Balance More Than Or Equal WithdrawAmount
    {
        if (Client.AccountBalance >= WithdrawAmount)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}

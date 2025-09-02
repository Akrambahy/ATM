#pragma once

#include "NormalWithdraw.hpp"
using namespace std;


namespace nsNormalWithdraw
{

    short ReadWithdrawAmount() // To Get Amount Of Withdraw And Return It
    {
        short WithdrawAmount = 0;

        cout << "Enter An Amount Muliple 5 : ";
        cin >> WithdrawAmount;
        return WithdrawAmount;
    }
    bool CheckMultipleFive(short Amount) // To Check Amount Of Withdraw Multiple 5 or Not
    {
        if (Amount % 5 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
        return false;
    }

    bool PerformNormalWithdraw(stClientInfo &Client) // To Perform Normal Withdraw And Print Final Balance
    {
        short WithdrawAmount;
        char Answer = 'N';

        do
        {
            WithdrawAmount = ReadWithdrawAmount();
        } while (!CheckMultipleFive(WithdrawAmount));

            if (nsClient::CheckWithdrawByBalance(Client, WithdrawAmount))
        {
            cout << "Are You Sure You Want Withdraw : " << WithdrawAmount << " ? [Y]/[N] : ";
            cin >> Answer;
            if (Answer == 'Y' || Answer == 'y')
            {
                nsQuickWithdraw::WithdrawFromClient(Client, WithdrawAmount);
                cout << "Normal Transaction Is Successfully \n";
                cout << "Your New Balance Is : " << Client.AccountBalance << endl;
                return true;
            }
            else
            {
                cout << "Transaction Not Successfully !\n";
                return false;
            }
        }
        else
        {
            cout << "Your Balance Not enough !\n";
            return false;
        }
        return false;
    }

}

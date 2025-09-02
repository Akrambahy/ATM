#pragma once
#include "Deposit.hpp"

namespace nsDeposit
{

    short ReadDepositAmount() // To Read Amount Of Deposit
    {
        short DepositAmount;
        cout << "Enter A Positive Deposit Amount : ";
        cin >> DepositAmount;
        return DepositAmount;
    }

    bool DepositInClientBalance(stClientInfo &Client, short DepositAmount) // To Increase Balance Of Client By Deposit  Amount
    {
        Client.AccountBalance += DepositAmount;
        return true;
    }

    bool PerformDeposit(stClientInfo &Client) // To Perform Deposit
    { 
        short DepositAmount;
         char Answer='N';

        DepositAmount=ReadDepositAmount();

        cout << "Are You Sure You Want Do Deposit  : " << DepositAmount << " ? [Y]/[N] : ";
        cin >> Answer;
        if (Answer == 'Y' || Answer == 'y')
        {
            DepositInClientBalance(Client, DepositAmount);
            cout << "Deposit Transaction Is Successfully \n";
            cout << "Your New Balance Is : " << Client.AccountBalance << endl;
            return true;
        }
        else
        {
            cout << "Transaction Not Successfully !\n";
            return false;
        }
        return false;
    }

}
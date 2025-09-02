#pragma once


#include "MainMenu.hpp"


namespace nsMainMenu
{

    short ReadChoose() // To ask User about her Choose And Take And Return It
    {
        short Choose = 0;
        cout << "Choose The Number Of You Want Do ? [1] To [5] : ";
        cin >> Choose;

        return Choose;
    }

    enMainMenu ShowMainMenu() // To Print Main Menu Elements And Call Read Chose And Return Choose In enMainMenu Form
    {
        cout << "\n[1] Quick Withdraw. \n";
        cout << "[2] Normal Withdraw. \n";
        cout << "[3] Deposit. \n";
        cout << "[4] Check Balance. \n";
        cout << "[5] Logout. \n";
        cout << "__________________________________________\n";

        short Choose = 0;
        Choose = ReadChoose();

        return enMainMenu(Choose);
    }

    void PerformMainMenu(stClientInfo &Client) // To Perform User Choose And Show Transaction Screen Her Choose It
    {
        enMainMenu UserChoose;
         UserChoose=ShowMainMenu();

         switch (UserChoose)
         {
         case enMainMenu::QuickWithdraw:
            nsQuickWithdrawScreen::ShowQuickWithdrawScreen(Client);
            PerformMainMenu(Client);
            break;
         case enMainMenu::NormalWithdraw:
            nsNormalWithdrawScreen::ShowNormalWithdrawScreen(Client);
            PerformMainMenu(Client);
            break;
         case enMainMenu::Deposit:
            nsDepositScreen::ShowDepositScreen(Client);
            PerformMainMenu(Client);
            break;
         case enMainMenu::CheckBalance:
            nsCheckBalanceScreen::ShowCheckBalanceScreen(Client);
            PerformMainMenu(Client);
            break;
        case enMainMenu::Logout:
        cout<<"Logout Successfully !.";
            break;
         
         default:
            break;
         }

    }

}

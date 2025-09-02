#pragma once
#include "QuickWithdraw.hpp"

namespace nsQuickWithdraw
{

   void PrintQuickWithdrawOptions() // To Print Quick Withdraw Options
   {
      cout << "\n[1] 20                [2] 50\n";
      cout << "[3] 100               [4] 200\n";
      cout << "[5] 400               [6] 800\n";
      cout << "[7] 1000              [8] Exit\n";
      cout << "_________________________________\n";
   }

   short ReadQuickWithdrawAmount() // To Call Print QuickWithdrawOptions And Get Amount Of WithDraw AAnd Return It
   {
      short Amount = 0;
      PrintQuickWithdrawOptions();
      cin >> Amount;
      return Amount;
   }

   short ConvertChooseAmountToRealAmount(short ChooseAmount)
   {

      switch (ChooseAmount)
      {
      case 1:
         return 20;
         break;
      case 2:
         return 50;
         break;
      case 3:
         return 100;
      case 4:
         return 200;
         break;
      case 5:
         return 400;
         break;
      case 6:
         return 800;
         break;
      case 7:
         return 1000;
         break;
      case 8:
         break;
      default:
         return 0;
         break;
      };
      return 0;
   }

   void WithdrawFromClient(stClientInfo &Client, short RealAmount) // To Take Amount And Ferform WithDraw
   {
      Client.AccountBalance -= RealAmount;
   }

   bool PerformQuickWithdraw(stClientInfo& Client) // To Collect All Functions  Of Withdraw
   {
      char Answer = 'n';

      short QuickWithdrawAmountChoose = ReadQuickWithdrawAmount();
      short RealAmount = ConvertChooseAmountToRealAmount(QuickWithdrawAmountChoose);

      if (nsClient::CheckWithdrawByBalance(Client, RealAmount))
      {
         cout << "Are You Sure You Want Withdraw : " << RealAmount << " ? [Y]/[N] : ";
         cin >> Answer;
         if (Answer == 'Y' || Answer == 'y')
         {
            WithdrawFromClient(Client, RealAmount);
            cout << "Withdraw Transaction Is Successfully \n";
            cout<<"Your New Balance Is : "<<Client.AccountBalance<<endl;
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
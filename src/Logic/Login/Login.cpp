#pragma once
#include "Login.hpp"

namespace nsLogin
{

    bool Login(vector<stClientInfo>& vClients, stClientInfo& Client) //  To Collect Login Functions And Call It And Return Final Answer
    {
        string AccountNumber ;
        string PinCode ;
        do{

        do {AccountNumber=nsClient::ReadAccountNumber();}
        while(!nsClient::ClientExistByAccountNumber( AccountNumber ,vClients));
         
            PinCode = nsClient::ReadPinCode();
       }while (!nsClient::FindClientByAccountNumberAndPinCode(AccountNumber,PinCode,vClients,Client));
       cout<<"\nLogin Successfully\n";
      return true;
    }

}

#pragma once

#include "LoginScreen.hpp"
namespace nsLoginScreen{
void ShowLoginScreen(vector <stClientInfo>& vClients , stClientInfo& Client){
cout<<"_______________________________"<<"____________________"<<"_______________________________\n";
cout<<"==============================="<<"Login Screen"<<"======================================\n";
cout<<"_______________________________"<<"____________________"<<"_______________________________\n";

nsLogin::Login(vClients , Client);
}
}
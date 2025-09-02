#include <iostream>

#include "Ui/LoginScreen/LoginScreen.cpp"
#include "Ui/MainMenuScreen/MainMenuScreen.cpp"
#include "Data/UtilsData/UtilsData.cpp"
using namespace std;

const string ClientsFileName = "Data/ClientsData.txt";

int main(){


vector<stClientInfo> vClients;
vClients=nsUtilsData::LoadClientsDataFromFile(ClientsFileName);
	
	stClientInfo Client;

	nsLoginScreen::ShowLoginScreen(vClients,Client);
	nsMainMenuScreen::ShowMainMenuScreen(Client);

	nsUtilsData::SaveClientDataToFile(ClientsFileName,vClients,Client);

return 0;
}
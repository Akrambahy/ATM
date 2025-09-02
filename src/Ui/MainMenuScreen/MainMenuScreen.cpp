#pragma once

#include "MainMenuScreen.hpp"
namespace nsMainMenuScreen{
void ShowMainMenuScreen(stClientInfo &Client){
cout<<"----------------------------------------------------------------------------------------------\n";
cout<<"==================================="<<"Main Menu Screen"<<"===================================\n";
cout<<"----------------------------------------------------------------------------------------------\n";


nsMainMenu::PerformMainMenu(Client);
}
}
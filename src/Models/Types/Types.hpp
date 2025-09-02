#pragma once

#include <iostream>

using namespace std;

// Enums

enum enMainMenu
{
QuickWithdraw=1,
NormalWithdraw=2,
Deposit=3,
CheckBalance=4,
Logout=5,
};



//Structs 

struct stClientInfo // To Organize Informatios Of Client Into Specific Format
{

string AccountNumber="";
string PinCode="";
string Name="";
string Phone="";
double AccountBalance=0;
};


#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "../../SplitString/SplitString.cpp"
#include "../../../../Models/Types/Types.hpp"

using namespace std;

namespace nsConvertClientData
{

    string ConvertClientDataFromeRecordToLine(stClientInfo ClientInfo, string Seperator ) ; // To Convert ClientData From Record (struct) To Line(String)
    

    stClientInfo ConvertClientDataFromeLineToRecord(string ClientDataLine, string Seperator) ;// To Convert ClientData From Line(String) To Record (struct) Using SpletString
    
}
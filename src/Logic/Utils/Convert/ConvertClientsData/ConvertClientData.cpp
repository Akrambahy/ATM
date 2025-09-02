#pragma once
#include "ConvertClientData.hpp"
using namespace std;

namespace nsConvertClientData
{

    string ConvertClientDataFromeRecordToLine(stClientInfo ClientInfo, string Seperator = "/") // To Convert ClientData From Record (struct) To Line(String)
    {
        string ClientDataLine = "";

        ClientDataLine += ClientInfo.AccountNumber + Seperator;
        ClientDataLine += ClientInfo.PinCode + Seperator;
        ClientDataLine += ClientInfo.Name + Seperator;
        ClientDataLine += ClientInfo.Phone + Seperator;
        ClientDataLine += to_string(ClientInfo.AccountBalance);

        return ClientDataLine;
    }

    stClientInfo ConvertClientDataFromeLineToRecord(string ClientDataLine, string Seperator = "/") // To Convert ClientData From Line(String) To Record (struct) Using SpletString
    {
        stClientInfo ClientInfo;

        vector<string> vClientsDataLine;

        vClientsDataLine = nsSplitString::SplitString(ClientDataLine, Seperator);

        ClientInfo.AccountNumber = vClientsDataLine[0];
        ClientInfo.PinCode = vClientsDataLine[1];
        ClientInfo.Name = vClientsDataLine[2];
        ClientInfo.Phone = vClientsDataLine[3];
        ClientInfo.AccountBalance = stod(vClientsDataLine[4]);

        return ClientInfo;
    }

}
#pragma once
#include "UtilsData.hpp"

namespace nsUtilsData
{



    vector<stClientInfo> LoadClientsDataFromFile(string FileName) // To Load  Client Data Info From File
    {
        vector<stClientInfo> vClientsData;

        fstream MyFile;

        MyFile.open(FileName, ios::in);

        if (MyFile.is_open())
        {

            string Line;
            stClientInfo Client;

            while (getline(MyFile, Line))
            {

                Client = nsConvertClientData::ConvertClientDataFromeLineToRecord(Line);

                vClientsData.push_back(Client);
            }

            MyFile.close();
        }

        return vClientsData;
    }

    vector<stClientInfo> SaveClientDataToFile(string FileName, vector<stClientInfo>& vClients, stClientInfo Client) // To Delete Client are Deletable and save file
    {
        fstream MyFile;

        string Line;

        MyFile.open(FileName,ios::out);

        if (MyFile.is_open())
        {


            for (stClientInfo C : vClients)
            {
                if(C.AccountNumber==Client.AccountNumber) C.AccountBalance=Client.AccountBalance;

                 Line = nsConvertClientData::ConvertClientDataFromeRecordToLine(C);
                    MyFile << Line << endl;
                
            }

            MyFile.close();
        }

        return vClients;
    }


}
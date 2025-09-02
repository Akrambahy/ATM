#pragma once
#include <iostream>
#include <fstream>
#include <vector>

#include "../../Logic/Utils/Convert/ConvertClientsData/ConvertClientData.cpp"
#include "../../Models/Types/Types.hpp"

using namespace std;

namespace nsUtilsData
{


    vector<stClientInfo> LoadClientsDataFromFile(string FileName); // To Load  Client Data Info From File
    


    vector<stClientInfo> SaveClientDataToFile(string FileName,  vector<stClientInfo>& vClients, stClientInfo Client); // To Delete Client are Deletable and save file
   

   

   
    

}
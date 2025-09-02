#pragma once

#include <iostream>
#include "../../Client/Client.cpp"
#include "../../../Models/Types/Types.hpp"

using namespace std;

namespace nsCheckBalance{

double GetBalance(stClientInfo Client);

void PrintBalance(stClientInfo Client);

}
// LAB1_Perfect_Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "module.h"


using namespace std;

int main(int argc, char* argv[])
{
    long int MaxNumber;

    MaxNumber = GetMaxValue(argc, argv);

    for (long int lcv = 2; lcv <= MaxNumber; lcv++)
    {
        cout << lcv << "\r";

        if (IsPerfect(lcv))
        {
            cout << lcv << "\n";
        }
    }

    cout << "         \r";

    return 0;
}

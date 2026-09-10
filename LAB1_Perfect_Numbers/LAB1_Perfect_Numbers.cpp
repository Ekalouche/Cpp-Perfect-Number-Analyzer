// LAB1_Perfect_Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "module.h"


using namespace std;

int main(int argc, char* argv[])
{
    long int MaxNumber;

    // Get the upper limit to check, based on command-line arguments
    MaxNumber = GetMaxValue(argc, argv);

    // Loop through every number from 2 up to MaxNumber
    for (long int lcv = 2; lcv <= MaxNumber; lcv++)
    {
        // Print current number, "\r" returns cursor to start of line
        // so the next number overwrites it (progress display)
        cout << lcv << "\r";

        // Check if the current number is a perfect number
        if (IsPerfect(lcv))
        {
            cout << lcv << " Is Perfect \n";
        }
    }

    // Clear the progress line before exiting
    cout << "         \r";

    return 0;
}

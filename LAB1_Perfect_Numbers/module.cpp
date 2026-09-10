
//Modual file for LAB1_Perfect_Numbers
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

// Gets the maximum number to check, either from command-line args or user input
int GetMaxValue(int argc, char* argv[])
{
    int input; //initalize veriable named input
    if (argc > 1) 
    {
        // Use the first command-line argument if one was given
        input = atoi(argv[1]);
    }
    else
    {
        // Otherwise, ask the user to enter a number
        cout << "Please Choose a Number: ";
        cin >> input;
    }
    return input;
}

// Checks whether a number is "perfect"
// (a perfect number equals the sum of its proper divisors)
bool IsPerfect(long int num)
{
    int sum = 0;

    // Check every number smaller than num to see if it's a divisor
    for (int icv = 1; icv < num; icv++)
    {
        if ((num % icv) == 0)
        {
            sum += icv;
        }
    }

    // If the sum of divisors equals the number itself, it's perfect
    return sum == num;
}
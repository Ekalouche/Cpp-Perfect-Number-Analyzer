
//Modual file for LAB1_Perfect_Numbers
#include <iostream>

#include <iostream>

using namespace std;

int GetMaxValue(int argc, char* argv[])
{
    int input;

    cout << "Please Choose a Number: ";
    cin >> input;

    return input;
}

bool IsPerfect(long int num)
{
    int sum = 0;

    for (int icv = 1; icv < num; icv++)
    {
        if ((num % icv) == 0)
        {
            sum += icv;
        }
    }

    return sum == num;
}
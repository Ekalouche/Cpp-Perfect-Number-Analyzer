
//Modual file for LAB1_Perfect_Numbers
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int GetMaxValue(int argc, char* argv[])
{
    int input; //initalize veriable named input
    if (argc > 1) 
    {
        input = atoi(argv[1]);
    }
    else
    {
        cout << "Please Choose a Number: ";
        cin >> input;
    }
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

/*
bool IsWeird(long int num)
{
    int sum = 0;
    vector<int> factors;

    for (int icv = 1; icv < num; icv++)
    {
        if ((num % icv) == 0)
        {
            factors.push_back(icv);
        }
    }

    for (int icv = 1; icv < num; icv++)
    {
        if ()
        {
            factors.push_back(icv);
        }
    }

    return sum <= num;
}
*/
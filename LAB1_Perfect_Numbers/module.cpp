
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


bool IsWeird(long int num)
{
    int sum = 0;
    int factorT = 0;
    int factor[100];

    for (int icv = 1; icv < num; icv++)
    {
        if ((num % icv) == 0)
        {
            factor[icv];
            factorT++;
        }
    }

    for (int icv = 1; icv <= factorT; icv++)
    {
       sum = factor[icv];
    }
    
    if (sum > num)
    {
        return true;
    }
    else
    {
        return false;
    }
}

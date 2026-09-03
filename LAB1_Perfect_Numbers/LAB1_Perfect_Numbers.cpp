// LAB1_Perfect_Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std;

int main(int argc, char* argv[])
{
	long int MaxNumber; // The number from the command line or user prompt.

	MaxNumber = GetMaxValue(argc, argv); //Gets max number.

	for (long int lcv = 2; lcv <= MaxNumber; lcv++) //loops through all the numbers up to the maximum.
	{
		printf("%ld\r", lcv); //Prints out the number being tested but dont advance the line.

		if (IsPerfect(lcv) == 1) //Check to see if the number is perfect or not.
		{
			printf("%ld\n", lcv); // Prints "The number is perfect" Printed on a new line. (%ld = %(look for) ld(Long Int))
		}

		/* if()
		{

		}
		*/

		/*
		for()
		{

		}
		*/

	}

	printf("         \r"); // Prints out blanks to over write the display of the last number tested.

		return 0;
} /* main() */


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

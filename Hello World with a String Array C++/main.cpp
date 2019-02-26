//++++++++++++++++++++++++++++++++++++++++++++++++++++
// C++ Hello World Exercise
// Dion Jackson
// www.DarkCybernetics.com
// All Rights Reserved 2019
// As-Is use at your own risk.
//+++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
using namespace std;

/*
 Simple C++ Hello World Exercise with a string.
*/
int main()
{

	int i = 0; // Array Index Control Number

	string String_Array[2] = {"Hello", "World"};

	while(i != 2)
	{ // I is  not equal to 2.
		cout<< String_Array[i]<< endl; // Output I.
		i++; // Increase the I Vale.
	}
	return 0;
}

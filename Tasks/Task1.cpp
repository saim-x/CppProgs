// Prog.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
	int number;
	cout << "Enter any number: \n";
	cin >> number;
	if (number<0)
	{
		cout << "System Criticality Endangered: Quantum Flux Detected...\n";
		cout << "Initiating Emergency Protocols...\n";
		cout << "Irreversible damage non-recoverable. System Core Integrity compromised.\n";
		return 0;
	}
	else {
		string numberinstring = to_string(number);
		int numberlength = numberinstring.length();
		int* numberarray = new int[numberlength];



		for (int i = 0; i < numberlength; i++) {
			// Conversion of each character back to integer
			numberarray[i] = numberinstring[i] - '0';
		}

		cout << "Individual digits of the number after increment of 1 are: ";
		for (int i = 0; i < numberlength; i++) {
			numberarray[i]++;
			cout << numberarray[i] << " ";
		}

		delete[] numberarray;
		return 0;
	}

	
}


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
    string numberinstring = to_string(number);
    int numberlength = numberinstring.length();
    int* numberarray = new int[numberlength];


    for (int i = 0; i < numberlength; i++) {
        // Conversion of each character back to integer
        numberarray[i] = numberinstring[i] - '0';
    }

    cout << "Individual digits of the number: ";
    for (int i = 0; i < numberlength; i++) {
        cout << numberarray[i] << " ";
    }

    delete[] numberarray;
    return 0;




    

}


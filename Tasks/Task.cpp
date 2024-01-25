#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	int array_size;
	cout << "Enter the size of array: ";
	cin >> array_size;
	int* array = new int[array_size];
	for (int i = 0; i < array_size; i++)
	{
		cout << "Enter your" << i + 1 << "number\n";
		cin >> array[i];
	}

}
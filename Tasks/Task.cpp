#include <iostream>
#include <string>
#include <vector>
using namespace std;

void b_main() {
	int array_size;
	int temp;
	cout << "Enter the size of the array: ";
	cin >> array_size;
	if (array_size < 2)
	{
		cout << "Enter 2 or more numbers! ";
		return ;
	}
	else {
		int* array = new int[array_size];
		for (int i = 0; i < array_size; i++)
		{
			cout << "Enter the " << i + 1 << " number ";
			cin >> array[i];
		}
		int temp;
		for (int i = 0; i < array_size-1; i++)
		{
			if (array[i] > array[i+1]) {
				temp = array[i];
				array[i] = array[i+1];
				array[i+1] = temp;
			}
		}
		//The Second Largest Number
		cout << "The Second Largest Number is " << array[array_size - 2] << endl;
		delete[] array;
	}
	
	
}
int main() {
	b_main();
	return 0;
}
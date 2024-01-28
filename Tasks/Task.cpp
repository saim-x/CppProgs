#include <iostream>
#include <string>
#include <vector>
using namespace std;

void b_main() {
	int array_size;
	int temp;
	cout << "Enter the size of the array: ";
	cin >> array_size;
	int *array = new int[array_size];
	for (int i = 0; i < array_size; i++)
	{
		cout << "Enter the " << i + 1 << " number ";
		cin >> array[i];
	}
	temp = 0;
	int highest = array[0];

	


	delete[] array;
	
}
int main() {
	b_main();
	return 0;
}
#include <iostream>
#include <string>
#include <vector>
using namespace std;
//void b_main() {
//	int array_size;
//	int temp;
//	cout << "Enter the size of the array: ";
//	cin >> array_size;
//	if (array_size < 2)
//	{
//		cout << "Enter 2 or more numbers! ";
//		return ;
//	}
//	else {
//		int* array = new int[array_size];
//		for (int i = 0; i < array_size; i++)
//		{
//			cout << "Enter the " << i + 1 << " number ";
//			cin >> array[i];
//		}
//		int temp;
//		for (int i = 0; i < array_size-1; i++)
//		{
//			if (array[i] > array[i+1]) {
//				temp = array[i];
//				array[i] = array[i+1];
//				array[i+1] = temp;
//			}
//		}
//		int second_highest = array[array_size - 2];
//		second_highest = array[array_size - 2];
//		cout << "The Second Largest Number is " << second_highest << endl;
//		delete[] array;
//	}
//}
//const int MAX_STRINGS = 15;
//const int MAX_LENGTH = 50;
//int c_main() {
//        string* strings[MAX_STRINGS];
//        string buffer;
//        int numStrings;
//        cout << "Enter the number of strings (up to " << MAX_STRINGS << "): ";
//        cin >> numStrings;
//        // Validate the number of strings
//        if (numStrings < 1 || numStrings > MAX_STRINGS) {
//            cout << "Invalid string number entered. Please enter a number between 1 and " << MAX_STRINGS << ".\n";
//            return 1;
//        }
//        for (int i = 0; i < numStrings; i++) {
//            cout << "Enter string " << i + 1 << ": ";
//            cin >> buffer;
//
//            strings[i] = new string(buffer);
//        }
//        cout << "\nStrings in reverse order:\n";
//        for (int i = numStrings - 1; i >= 0; i--) {
//            cout << *strings[i] << endl;
//
//            // Free the memory
//            delete strings[i];
//        }
//        return 0;
//}

int d_main() {
	int array_size;
	int target;
	int answer[2];
	int flag = 0;
	cout << "Enter the size of the array: ";
	cin >> array_size;
	int *array = new int[array_size];
	for (int i = 0; i < array_size; i++)
	{
		cout << "Enter the " << i + 1 << " number ";
		cin >> array[i];
	}
	cout << "Enter the target number ";
	cin >> target;
	int count = 0;
	for (int i = 0; i < array_size; i++)
	{
		for (int j = 0; j < array_size; j++)
		{
			if (array[i] + array[j] == target) {
				answer[0] = i;
				answer[1] = j;
				flag = 1;
				break;

			}
			
		}
		if (flag)
		{
			break;
		}
	}
	if (flag)
	{
		cout << "The two number's indexes are: " << answer[0] << " and " << answer[1] << endl;

	}
	else {
		cout << "No such numbers exist" << endl;
		return 0;
	}


}
int main() {
	d_main();
	return 0;
}
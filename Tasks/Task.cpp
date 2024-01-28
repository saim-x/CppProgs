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
//
//int d_main() {
//	int array_size;
//	int target;
//	int answer[2];
//	int flag = 0;
//	cout << "Enter the size of the array: ";
//	cin >> array_size;
//	int *array = new int[array_size];
//	for (int i = 0; i < array_size; i++)
//	{
//		cout << "Enter the " << i + 1 << " number ";
//		cin >> array[i];
//	}
//	cout << "Enter the target number ";
//	cin >> target;
//	int count = 0;
//	for (int i = 0; i < array_size; i++)
//	{
//		for (int j = 0; j < array_size; j++)
//		{
//			if (array[i] + array[j] == target) {
//				answer[0] = i;
//				answer[1] = j;
//				flag = 1;
//				break;
//
//			}
//			
//		}
//		if (flag)
//		{
//			break;
//		}
//	}
//	if (flag)
//	{
//		cout << "The two number's indexes are: " << answer[0] << " and " << answer[1] << endl;
//
//	}
//	else {
//		cout << "No such numbers exist" << endl;
//		return 0;
//	}
//}



//#include <iostream>
//
//using namespace std;
//
//void func(int** matrix, int rows, int cols) {
//    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
//
//    while (top <= bottom && left <= right) {
//        for (int i = left; i <= right; ++i)
//            cout << matrix[top][i] << " ";
//        top++;
//
//        for (int i = top; i <= bottom; ++i)
//            cout << matrix[i][right] << " ";
//        right--;
//
//        if (top <= bottom) {
//            for (int i = right; i >= left; --i)
//                cout << matrix[bottom][i] << " ";
//            bottom--;
//        }
//
//        if (left <= right) {
//            for (int i = bottom; i >= top; --i)
//                cout << matrix[i][left] << " ";
//            left++;
//        }
//    }
//}
//
//int main() {
//    int** matrix;
//    int rows, cols;
//    cout << "Enter the number of rows: ";
//    cin >> rows;
//    cout << "Enter the number of columns: ";
//    cin >> cols;
//
//    if (rows != cols) {
//        cout << "The matrix must be square!" << endl;
//        return 0;
//    }
//    else {
//        matrix = new int* [rows];
//        for (int i = 0; i < rows; i++) {
//            matrix[i] = new int[cols];
//        }
//
//        for (int i = 0; i < rows; i++) {
//            cout << "Enter the " << i + 1 << " row: " << endl;
//            for (int j = 0; j < cols; j++) {
//                cin >> matrix[i][j];
//            }
//        }
//
//        func(matrix, rows, cols);
//
//        for (int i = 0; i < rows; i++) {
//            delete[] matrix[i];
//        }
//        delete[] matrix;
//    }
//
//    return 0;
//}
//
//
//#include <iostream>
//
//using namespace std;
//
//void transpose(int** matrix, int rows, int cols) {
//    // Transpose the matrix in-place
//    for (int i = 0; i < rows; i++) {
//        for (int j = i + 1; j < cols; j++) {
//            swap(matrix[i][j], matrix[j][i]);
//        }
//    }
//
//    //  transposed matrix
//    cout << "The new matrix is: " << endl;
//    for (int i = 0; i < rows; i++) {
//        cout << endl;
//        for (int j = 0; j < cols; j++) {
//            cout << matrix[i][j] << " ";
//        }
//    }
//}
//
//int main() {
//    int** matrix;
//    int rows = 3, cols = 3;
//
//    matrix = new int* [rows];
//    for (int i = 0; i < rows; i++) {
//        matrix[i] = new int[cols];
//    }
//
//    int values[][3] = {
//        {1, 2, 3},
//        {4, 5, 6},
//		{7, 8, 9},
//    };
//
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            matrix[i][j] = values[i][j];
//        }
//    }
//
//    transpose(matrix, rows, cols);
//
//    // Deallocate 
//    for (int i = 0; i < rows; i++) {
//        delete[] matrix[i];
//    }
//    delete[] matrix;
//
//    return 0;
//}



#include <iostream>
using namespace std;

class Solution {
public:
    int maxArea(int* height, int heightSize) {
        int i = 0, j = heightSize - 1;
        int ans = 0;
        while (i < j) {
            int t = min(height[i], height[j]) * (j - i);
            ans = max(ans, t);
            if (height[i] < height[j]) {
                ++i;
            }
            else {
                --j;
            }
        }
        return ans;
    }
};

int main() {
    int heightArraySize;
    cout << "Enter the size of the array (The number of values of height you will be giving in the array!): ";
    cin >> heightArraySize;

    int* height = new int[heightArraySize];
    for (int i = 0; i < heightArraySize; i++) {
        cout << "Enter the " << i + 1 << " value of height: ";
        cin >> height[i];
    }

    Solution solution;
    int result = solution.maxArea(height, heightArraySize);
    cout << "Max Area: " << result << endl;

    delete[] height;

    return 0;
}



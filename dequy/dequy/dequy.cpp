// dequy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
#define N 11
bool isSorted(int arr[], int pos) {
	if (pos == N - 1) {
		return true;
	}
	else {
		if (arr[pos] > arr[pos + 1]) {
			return false;
		}
		else {
			return isSorted(arr, pos + 1);
		}
	}
}
int main()
{
	int arr[] = { 23,346,5,87,23,798,21,35,56534,56,34127,9 };
	bool rs = isSorted(arr, 0);
	std::cout << rs;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

// C++ program to print all elements that appear more than once.
#include <iostream>
using namespace std;

void printRepeating(int arr[], int n)
{

	for (int i = 0; i < n; i++)
	{
		int index = arr[i] % n;
		arr[index] += n;
	}

	for (int i = 0; i < n; i++)
	{
		if ((arr[i] / n) >= 2)
			cout << i << " ";
	}
}

int main()
{
	int arr[] = { 1, 2, 3, 6, 3, 6, 1};
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	cout << "The repeating elements are: \n";

	printRepeating(arr, arr_size); 	// Function call
	return 0;
}


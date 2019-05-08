#include <iostream>

using namespace std;



///
// Start sort function
///
int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;
		if (arr[mid] == x)
			return mid;
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);
		return binarySearch(arr, mid + 1, r, x);
	}
	return -1;
}
///
// End of sort function
///


int main()
{
	///
	// Exemple of usage
	///
	int *arr;
	int size;
	cout << "n = ";
	cin >> size;

	arr = new int[size];

	 
	///
	// Read array
	///
	for (int i = 0; i < size; i++) {
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}



	///
	// Calling a sort function
	///

	int x = 10;
	int result = binarySearch(arr, 0, size - 1, x);
	cout << endl << result << endl;


	///
	// Output result
	///
	delete[] arr;
	return 0;
	///
	//  End of exemple of usage
	///
}

#include <iostream>

using namespace std;



///
// Start sort function
///
int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		// If the element is present at the middle 
		// itself 
		if (arr[mid] == x)
			return mid;

		// If element is smaller than mid, then 
		// it can only be present in left subarray 
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		// Else the element can only be present 
		// in right subarray 
		return binarySearch(arr, mid + 1, r, x);
	}

	// We reach here when element is not 
	// present in array 
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

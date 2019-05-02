#include <iostream>

using namespace std;



///
// Start sort function
///
void InsertionSort(int arr[], int size) {
	for (int j = 2; j < size; j++) {
		int key = arr[j];
		int i = j - 1;
		while (i >= 0 && arr[i] > key) {
			arr[i + 1] = arr[i];
			i--;
		}
		arr[i + 1] = key;
	}
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
	InsertionSort(arr, size);


	///
	// Output result
	///
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	delete[] arr;
	return 0;
	///
	//  End of exemple of usage
	///
}

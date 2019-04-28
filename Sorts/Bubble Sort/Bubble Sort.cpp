#include <iostream>

using namespace std;



///
// Sort function
///
void BubleSort(int *arr, int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
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
	BubleSort(arr, size);


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

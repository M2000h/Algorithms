#include <iostream>

using namespace std;
///
// Start sort function
///
void QuickSort(int arr[], int left, int right) {
	int i = left, j = right;
	int middle = arr[(left + right) / 2];
	while (i <= j) {
		while (arr[i] < middle)
			i++;
		while (arr[j] > middle)
			j--;
		if (i <= j)
			swap(arr[i++], arr[j--]);
	}
	if (left < j)
		QuickSort(arr, left, j);
	if (i < right)
		QuickSort(arr, i, right);
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
	QuickSort(arr,-1, size-1);


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


#include <iostream>

using namespace std;

void BubleSort(int *arr, int size) {
	int temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int *arr;
	int size;
	cout << "n = ";
	cin >> size;
	
	arr = new int[size];
	for (int i = 0; i < size; i++) {
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	
	
	BubleSort(arr, size);


	//output
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	delete[] arr;
	return 0;
}

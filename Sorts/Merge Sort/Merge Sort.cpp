#include <iostream> 
#include <vector>
using namespace std;


void merge(int arr[], int l, int m, int r)
{
	int i, j;
	int n1 = m - l + 1;
	int n2 = r - m;
	int L[1000], R[1000];


	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];


	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];
	
	
	for (i = 0, j = 0;i < n1 && j < n2;)
		arr[l++] = L[i] <= R[j] ? L[i++]: R[j++];
	
	
	while (i < n1)
		arr[l++] = L[i++];
	
	
	while (j < n2)
		arr[l++] = R[j++];
}

void mergeSort(int arr[], int l, int r)
{
	if (l < r)
	{
		int m = l + (r - l) / 2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
}


int main(void)
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
	mergeSort(arr, 0, size - 1);


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

#include <iostream> 
#include <vector>
using namespace std;


#define Items { 2, 33, 4, 1, 10, 40 }


int SearchInArray(int arr[], int size, int x)
{
	for (size_t i = 0; i < size; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

int SearchInVector(vector<int> vec, int x)
{
	return find(vec.begin(), vec.end(), x) - vec.begin();
}


int main(void)
{
	int arr[] = Items;
	int x = 10;
	int size = sizeof(arr) / sizeof(arr[0]);
	int ArrayrResult = SearchInArray(arr, size, x);

	vector <int> vec = Items;
	int VectorResult = SearchInVector(vec, x);

	cout << ArrayrResult << endl;
	cout << VectorResult << endl;
	return 0;
}

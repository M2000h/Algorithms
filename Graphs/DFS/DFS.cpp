#include <iostream>
#include <vector>
using namespace std;

vector<int> vec[100];
bool Mark[100];
int Way[100];
int finish;

void DFS(int v, int from, int size, int deep) {
	Mark[v] = true;
	Way[deep] = v;
	if (v == finish)
	{
		for (size_t i = 0; i < deep; i++)
			cout << Way[i] << "-->";
		cout << Way[deep]<<endl;
		return;
	}
	for (int i = 1; i <= size; ++i)
		if (!Mark[i] && find(vec[v].begin(), vec[v].end(), i) != vec[v].end())
			DFS(i, v, size,deep+1);
	
}
//5 4
//1 2
//2 3
//4 5
//5 4
//3 5
int main(void)
{
	int size;
	cin >> size;
	cin >> finish;
	for (size_t i = 0; i < size; i++)
	{
		int a, b;
		cin >> a >> b;
		vec[a].push_back(b);
	}
	Mark[1] = 1;
	DFS(1, 1, size, 0);
}

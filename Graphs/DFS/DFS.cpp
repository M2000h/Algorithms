#include <iostream> 
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int Graph[100][100];
int Mark[100];
int Way[100];
int finish;

void DFS(int v, int from, int size, int deep) {
	Mark[v] = 1;
	
	Way[deep] = v;
	if (v == finish)
	{
		for (size_t i = 0; i < deep; i++)
			cout << Way[i] << "-->";
		cout << Way[deep]<<endl;
		return;
	}
	for (int i = 1; i <= size; ++i)
	{
		if (Mark[i] == 0 && Graph[v][i])
			DFS(i, v, size,deep+1);
	}
}
int main(void)
{
	int size;
	cin >> size;
	cin >> finish;
	for (size_t i = 0; i < size; i++)
	{
		int a, b;
		cin >> a >> b;
		Graph[a][b] = 1;
	}
	Mark[1] = 1;
	DFS(1, 1, size, 0);
}

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> vec[100];
bool Mark[100];
int Way[100];
int finish;
int n;
int s=1;
int start = 1;
void BFS()
{
	queue<int> q;
	q.push(start);
	Way[start] = 0;
	Mark[start] = 1;
	while (!q.empty())
	{
		int v = q.front();
		q.pop();
		for (int i = 0; i < (int)vec[v].size(); ++i)
		{
			if (Mark[vec[v][i]] == 0)
			{
				Way[vec[v][i]] = Way[v] + 1;
				Mark[vec[v][i]] = 1;
				q.push(vec[v][i]);
			}
		}
	}
}
//5 4
//1 2
//2 3
//4 5
//5 4
//3 5
int main(void)
{
	//int size;
	cin >> s;
	cin >> finish;
	for (size_t i = 0; i < s; i++)
	{
		int a, b;
		cin >> a >> b;
		vec[a].push_back(b);
	}
	Mark[1] = 1;
	BFS();
	for(int object : Way)
	{ if (object)
		cout << object << endl;
	}
}

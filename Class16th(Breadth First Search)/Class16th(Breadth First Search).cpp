#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <queue>

#define SIZE 8
using namespace std;

class Graph
{
private:
	queue<int> q;

	vector<int> list[SIZE];
	bool visited[SIZE];
public:
	Graph()
	{
		for (int i = 0; i < SIZE; i++)
		{
			visited[i] = false;
		}
	}
	void insert(int i, int j)
	{
		list[i].push_back(j);
		list[j].push_back(i);
	}

	void search(int start)
	{
		q.push(start);
		visited[start] = true;

		while (!q.empty())
		{
			int current = q.front();
			q.pop();
			cout << current << endl;

			for (int i = 0; i < list[current].size(); i++)
			{
				int next = list[current][i];
				if (!visited[next])
				{
					visited[next] = true;
					q.push(next);
				}
			}
		}
	}


	void Queue()
	{
		while (!q.empty())
		{
			cout << q.front() << endl;
			q.pop();
		}
	}
};
int main()
{
#pragma region 너비 우선 탐색(Breadth First Search)
	// 시작 정점을 방문한 후 시작 정점에 인접한
	// 모든 정점들을 우선적으로 방문하는 탐색

	// 더 이상 방문하지 않은 정점이 없을 때까지 방문하지 않은
	// 모든 정점들이 대해서 너비 우선 탐색을 적용

	Graph graph;

	graph.insert(1, 2);
	graph.insert(1, 3);

	graph.insert(2, 4);
	graph.insert(2, 5);

	graph.insert(3, 6);
	graph.insert(3, 7);

	graph.search(1);




#pragma endregion


	return 0;
}


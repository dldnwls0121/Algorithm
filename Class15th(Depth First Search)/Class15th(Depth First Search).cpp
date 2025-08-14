#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#define SIZE 8
using namespace std;

class Graph
{
private:
	bool visited[SIZE];
	vector<int> list[SIZE];
public:
	Graph()
	{
		for (int i = 0; i < SIZE; i++)
		{
			visited[i] = false;
		}
	}

	void Insert(int i, int j)
	{
		list[i].push_back(j);
		list[j].push_back(i);
	}

	void search(int start)
	{
		if (start >= SIZE) // !visited[next] 여기서 걸리지니 굳이 사용하지 않아도 됨
		{
			return;
		}
		else
		{
			visited[start] = true;
			cout << start << endl;
			for (int i = 0; i < list[start].size(); i++)
			{
				int next = list[start][i];
				if (!visited[next])
				{
					search(next);
				}
			}
		}
	}
};

int main()
{
#pragma region 깊이 우선 탐색(Depth First Search)
	// root 노드에서부터 다음 분기로 넘어가기 전에
	// 해당 분기를 완벽하게 탐색하는 방법

	// 깊이 우선 탐색은 스택을 활용 

	Graph graph;

	graph.Insert(1, 2);
	graph.Insert(1, 3);

	graph.Insert(2, 3);
	graph.Insert(2, 4);
	graph.Insert(2, 5);

	graph.Insert(3, 6);
	graph.Insert(3, 7);

	graph.Insert(4, 5);
	graph.Insert(6, 7);

	graph.search(1);
#pragma endregion


}


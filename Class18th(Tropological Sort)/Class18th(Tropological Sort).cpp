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
	vector<int> degree;
public:
	Graph()
	{
		degree.resize(SIZE, 0);
	}
	void insert(int vertex, int edge)
	{
		list[vertex].push_back(edge);
		degree[edge]++;
	}

	void deprint()
	{
		for (int i = 1; i < degree.size(); i++)
		{
			cout << i << " " << degree[i] << endl;
		}
	}

	void sort(int start)
	{
		q.push(start);

		while (!q.empty())
		{
			int current = q.front();
			q.pop();
			cout << current << endl;

			for (int i = 0; i < list[current].size(); i++)
			{
				int next = list[current][i];
				degree[next]--;
				if (degree[next] == 0)
				{
					q.push(next);
				}

			}
		}
	}
};
int main()
{
#pragma region 위상 정렬
	// 병합 그래프에 존재하는 각 정점들의 선행 순서를 지키며,
	// 모든 정점을 차례대로 진행하는 알고리즘

	// 사이클이 발생하는 경우 위상 정렬을 수행할 수 없음

	// DAG("Directed Acyclic Graph) : 사이클이 존재하지 않는 그래프 

	// 시간 복잡도 : O(V + E)

	// 위상 정렬하는 방법

	// 1. 진입 차수가 0인 정점을 Queue에 삽입

	// 2. Queue에서 원소를 꺼내 연결된 모든 간선을 제거

	// 3. 간선 제거 이후에 진입 차수가 0이 된 정점을 Queue에 삽입

	// 4. Queue가 비어있을 때까지 2번 ~ 3번 작업을 반복 수행

	Graph graph;

	graph.insert(1, 2);
	graph.insert(1, 5);

	graph.insert(2, 3);
	graph.insert(3, 4);

	graph.insert(4, 6);

	graph.insert(5, 6);
	graph.insert(6, 7);

	//graph.deprint();

	graph.sort(1);

#pragma endregion



	return 0;
}
#include <iostream>
#include <vector>
#define SIZE 8
using namespace std;

class Backtracking
{
private:
	int n, m;
	vector<int> result;
	bool visited[SIZE];
public:
	Backtracking(int n, int m) : n(n), m(m)
	{
		for (int i = 0; i < SIZE; i++)
		{
			visited[i] = false;
		}
	}

	void answer(int count)
	{

			if (count == m) 
			{
				for (int num : result)
				{
					cout << num << " ";
				}
				cout << endl;
				return;
			}

			for (int i = 1; i <= n; ++i)
			{
				if (!visited[i]) 
				{
					visited[i] = true;
					result.push_back(i);
					answer(count + 1);
					visited[i] = false;
					result.pop_back();
				}
			}
		
	}
};
int main()
{
#pragma region 퇴각 검색
	// 해를 찾는 도중에 해가 될 수 없다고 판단되면 그 이전 단계로 돌아가서 다시 시도하는 알고리즘
	// DFS(깊이 우선 탐색) 방식이고, 조건이 맞지 않으면 탐색을 중단하고 이전 단계로 되돌아가서 다른 선택지를 탐색
	// 완전 탐색 문제에서 불필요한 탐색을 줄이기 위해 사용

	// 탐색 방법
	// 가능한 모든 경우를 재귀적으로 탐색
	// 어떤 조건을 만족하지 않으면, 그 이후는 탐색하지 않고 가지치기

	// 가지치기란
	// 탐색 도중 해가 될 수 없는 선택지나 경로는 더 이상 탐색하지 않고 건너뛰는 것

	Backtracking backtracking(4, 2);
	backtracking.answer(0);

#pragma endregion

}


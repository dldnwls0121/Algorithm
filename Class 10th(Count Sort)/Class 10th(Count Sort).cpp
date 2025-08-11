#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;


int main()
{
#pragma region 계수 정렬
	// 데이터의 값을 비교하지 않고 각 원소에 데이터가 몇 개 있는지
	// 개수를 세어 저장한 다음 정렬하는 알고리즘

	int array[] = { 1,3,2,2,4,5,1,2 };
	int len = sizeof(array) / sizeof(array[0]);
	//vector<int> count(6,0);
	//vector<int> answer;
	//for (int i = 0; i < len; i++)
	//{
	//	if (array[i] == 1)
	//	{
	//		count[array[i]]++;
	//	}
	//	else if (array[i] == 2)
	//	{
	//		count[array[i]]++;
	//	}
	//	else if (array[i] == 3)
	//	{
	//		count[array[i]]++;
	//	}
	//	else if (array[i] == 4)
	//	{
	//		count[array[i]]++;
	//	}
	//	else if (array[i] == 5)
	//	{
	//		count[array[i]]++;
	//	}
	//
	//}
	//
	//for (int i = 1; i <= 5; i++)
	//{
	//	for (int j = 0; j < count[i]; j++)
	//	{
	//		answer.push_back(i);
	//	}
	//}
	//for (auto& a : answer)
	//{
	//	cout << a << endl;
	//}

	unordered_map<int, int> count;

	for (int i = 0; i < len; i++)
	{
		count[array[i]]++;
	}

	vector<int> key;
	for (auto& a : count)
	{
		key.push_back(a.first);
	}

	sort(key.begin(), key.end());

	vector<int> answer;
	for (int a : key)
	{
		for (int i = 0; i < count[a]; i++)
		{
			answer.push_back(a);
		}

	}

	for (int a : answer)
	{
		cout << a << endl;
	}
#pragma endregion



}


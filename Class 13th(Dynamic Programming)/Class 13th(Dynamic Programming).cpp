#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int fibonacci(int n)
{
	if (n < 1)
	{
		return 0;
	}
	else if (n < 3)
	{
		return 1;
	}
	else
	{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int fibonacci(int n, int list[])
{

	if (n < 1)
	{
		return 0;
	}
	else if (n < 3)
	{
		return 1;
	}

	if (list[n] != 0)
	{
		return list[n];
	}
	else
	{
		list[n] = fibonacci(n - 1, list) + fibonacci(n - 2, list);
		return list[n];
	}

}
int main()
{
#pragma region 동적 계획법
	// 특정 범위까지의 값을 구하기 위해 그것과 다른 범위 까지의 값을 이용하여
	// 효율적으로 값을 구하는 알고리즘

	// 겹치는 부분 문제 (Overlapping Subproblems)
	// 동일한 작은 문제들이 반복하여 나타는 경우를 의미

	// 최적 부분 구조 (Optimal Substructure)
	// 부분 문제의 최적 경로가 값을 사용하여 전체 문제의 최적의 
	// 결과를 낼 수 있는 경우를 의미

	// 메모이제이션 (Memoization)
	// 프로그램이 동일한 계산을 반복해야 할 때, 이전에 계산한 값을
	// 메모리에 저장함으로써, 동일한 계산을 반복 수행하는 작업을
	// 제거하여 프로그램이 실행 속도를 향상시키는 방법

	//cout << fibonacci(50);

	int list[100001] = { 0, };
	cout << fibonacci(50, list);

	int n = 50;
	int* list2 = new int[n + 1] {0};
	cout << fibonacci(n, list2);
	delete[] list2;

	return 0;
#pragma endregion


}


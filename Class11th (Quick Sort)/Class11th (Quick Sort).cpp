#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

void quick_sort(int list[], int start, int end)
{
	int pivot = start;
	int stcount = start + 1;
	int edcount = end;

	if (start >= end)
	{
		return;
	}

	while (stcount <= edcount)
	{
		while (stcount <= end && list[pivot] >= list[stcount])
		{
			stcount++;
		}
		while (edcount > start && list[pivot] <= list[edcount])
		{
			edcount--;
		}

		if (stcount > edcount)
		{
			swap(list[pivot], list[edcount]);
		}
		else
		{
			swap(list[stcount], list[edcount]);
		}

	}

	quick_sort(list, start, edcount - 1);
	quick_sort(list, edcount + 1, end);

}

int main()
{
#pragma region 퀵 정렬
	// 기준점을 획득한 다음 기준점을 기준으로 배열을 나누고 한 쪽에는
	// 기준점보다 작은 값들이 위치하게 한 다음 다른 한 쪽에는 기준점보다
	// 큰 값들이 위치하도록 정렬

	// 나누어진 하위 배열에 대해 재귀적으로 퀵 정렬을 호출하여
	// 모든 배열이 기본 배열이 될 때까지 반복하면서 정렬하는 알고리즘

	int list[8] = { 5,3,8,4,1,6,2,7 };
	int len = sizeof(list) / sizeof(list[0]);

	quick_sort(list, 0, 7);

	for (int i = 0; i < len; i++)
	{
		cout << list[i] << endl;
	}
#pragma endregion

	return 0;
}


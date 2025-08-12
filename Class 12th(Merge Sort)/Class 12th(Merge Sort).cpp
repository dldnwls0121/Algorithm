#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;



void combine(int list[], int start, int mid, int end)
{
	int count = 0;
	int left = start;
	int right = mid + 1;
	int* container = new int[end - start + 1];

	while (left <= mid && right <= end)
	{
		if (list[left] <= list[right])
		{
			container[count++] = list[left++];
		}
		else
		{
			container[count++] = list[right++];
		}
	}

	while (left <= mid)
	{
		container[count++] = list[left++];
	}

	while (right <= end)
	{
		container[count++] = list[right++];
	}

	for (int i = 0; i < count; i++)
	{
		list[start + i] = container[i];
	}

	delete[] container;
}

void merge_sort(int list[], int start, int end)
{
	int mid = (start + end) / 2;

	if (start == end)
	{
		return;
	}
	else
	{
		merge_sort(list, start, mid);
		merge_sort(list, mid + 1, end);
		combine(list, start, mid, end);
	}




}
int main()
{
#pragma region 병합 정렬
	// 하나의 리스트를 두 개의 균일한 크기로 분할하고 분할된
	// 부분 리스트를 정렬한 다음, 두 개의 정렬된 부분 리스트를
	// 합하여 전체가 정렬된 리스트가 되게 하는 방법

	// 1. 리스트의 길이가 0 또는 1이 되면 이미 정렬된 것으로 봄
	// 2. 그렇지 않은 경우 
	// 2-1. 정렬되지 않은 리스트를 절반으로 잘반으로 잘라 비슷한 크기의 두 부분 리스트로 나눔
	// 2-2. 각 부분 리스트를 재귀적으로 병합 정렬을 이용하여 정렬
	// 2-3. 두 부분 리스트를 다시 하나의 정렬된 리스트로 병합

	int list[] = { 3,5,2,7,4,1,8,6 };
	int len = sizeof(list) / sizeof(list[0]);
	merge_sort(list, 0, 7);
	for (int i = 0; i < len; i++)
	{
		cout << list[i] << endl;
	}
#pragma endregion


	return 0;
}


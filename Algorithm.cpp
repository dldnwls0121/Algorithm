#include <iostream>

using namespace std;

int find(int array[],int start,int end,int key)
{
	if (start > end)
	{
		cout << "키를 찾을 수 없음" << endl;
		return 0;
	}

	int pivot = (start + end) / 2;
	if (array[pivot] == key)
	{
		cout << key << endl;
		return key;
	}
	else if(key < array[pivot])
	{
		int Left_v = find(array, start, pivot - 1, key);
	}
	else
	{
		int Right_v = find(array, pivot + 1, end, key);
	}
	
	return 0;
}
int main()
{
#pragma region 이분 탐색
	// 탐색 범위를 반으로 나누어 찾는 값을 포함하는 범위를 좁혀나가는 방식으로 동작하는 알고리즘
	int array[] = { 6,10,13,22,57 };
	int size = sizeof(array) / 4 - 1;
	find(array, 0, size, 22);


#pragma endregion


}


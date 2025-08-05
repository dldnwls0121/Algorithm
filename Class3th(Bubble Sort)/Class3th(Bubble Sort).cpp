#include <iostream>

using namespace std;

int main()
{
#pragma region 거품 정렬
	// 서로 인접한 두 원소를 비교하여 정렬하는 알고리즘
	int array[] = { 5,3,1,4,7 };
	int len = sizeof(array) / sizeof(array[0]);
	for (int i = 0; i < len; i++)
	{
		for (int j = i + 1; j < len - i; j++)
		{
			if (array[i] > array[j])
			{
				swap(array[i], array[j]);
			}
		}
	}
	for (int i = 0; i < len; i++)
	{
		cout << array[i] << endl;
	}
	cout << len << endl;
#pragma endregion


}


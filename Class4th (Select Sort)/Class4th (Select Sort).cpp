#include <iostream>

using namespace std;

int main()
{
#pragma region 선택 정렬
	// 주어진 리스트 중에 최소값을 찾은 다음 특정한 위치에서 
	// 결과를 교체하는 방식으로 정렬하는 알고리즘

	int array[] = { 6,4,8,3,1,5,7,9,10 };
	int len = sizeof(array) / sizeof(array[0]);
	int min = 0;

	for (int i = 0; i < len; i++)
	{
		min = array[i];
		int index = i;
		for (int j = i + 1; j < len; j++)
		{
			if (min > array[j])
			{
				min = array[j];
				index = j;

			}
		}
		swap(array[index], array[i]);
	}

	for (int i = 0; i < len; i++)
	{
		cout << array[i] << endl;
	}

#pragma endregion


	return 0;
}


#include <iostream>

using namespace std;

int main()
{
#pragma region 삽입 정렬
	// 데이터를 하나씩 확인하면서 이미 정렬된 부분과 비교하여
	// 자신의 위치를 찾아 삽입하는 방식으로 정렬하는 알고리즘 

	int array[] = { 8,5,6,2,4 };
	int key = 0;
	int len = sizeof(array) / sizeof(array[0]);
	int index = 0;
	for (int i = 0; i < len; i++)
	{
		key = array[i];


		for (index = i - 1; index >= 0 && array[index] > key; index--)
		{
			array[index + 1] = array[index];

		}
		array[index + 1] = key;

	}

	for (int i = 0; i < len; i++)
	{
		cout << array[i] << endl;
	}

#pragma endregion


	return 0;
}


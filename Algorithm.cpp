#include <iostream>
#include <cmath>
using namespace std;

void sieve(int n)
{
	int* array = new int[n];
	int j = 1;
	for (int i = 0; i < n; i++)
	{
		array[i] = j;
		j++;
	}

	int count = 0;
	for (int i = 0; i < sqrt(array[i]); i++)
	{
		for (count = 2;  count< length; count++)
		{

		}
	
		

	}
	for (int i = 0; i < n; i++)
	{
		cout << array[i];

	}

	delete[] array;
}
int main()
{
#pragma region 에라토스테네스의 체
	int j = 0;
	for (int i = 2; i <= 50; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0 )
			{
				break;
			}
		}

		if (i == j)
		{
			//cout << i << endl;
		}
	
	}

	sieve(16);
#pragma endregion


}


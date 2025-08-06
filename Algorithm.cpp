#include <iostream>
#include <cmath>
using namespace std;

void sieve(int n)
{
	int* array = new int[n + 1];

    for (int i = 0; i < n; i++)
        array[i] = i + 1;

    array[0] = 0; 

    for (int i = 1; i < n; i++)
    {
        if (array[i] != 0 && array[i] <= (int)sqrt(n))
        {
            int prime = array[i];
            for (int j = prime * prime - 1; j < n; j += prime)
            {
                array[j] = 0; 
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (array[i] != 0)
            cout << array[i] << " ";
    }
    cout << endl;

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


#include <iostream>

using namespace std;

int main()
{
#pragma region 완전 탐색
	// 가능한 모든 경우의 수를 탐색하면서 결과를 찾아내는 알고리즘
	int password[3] = { 6,1,7 };
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			for (int k = 0; k <= 9; k++)
			{
				if (password[0] == i && password[1] == j && password[2] == k)
				{
					cout << "비밀번호 : " << i << j << k << " " << "해제되었습니다" << endl;
					return;
				}

			}
		}
	}

#pragma endregion


}


#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int changeback(int money)
{
	int count = 0;
	while (money != 0)
	{
		if (money >= 1000)
		{
			int a = money / 1000;
			money = money % 1000;
			count += a;
			cout << "1000원 : " << a << endl;
		}
		else if (money < 1000 && money >= 500)
		{
			int b = money / 500;
			money = money % 500;
			count += b;
			cout << "500원 : " << b << endl;
		}
		else if (money < 500 && money >= 100)
		{
			int c = money / 100;
			money = money % 100;
			count += c;
			cout << "100원 : " << c << endl;
		}
		else if (money < 100 && money >= 50)
		{
			int d = money / 50;
			money = money % 50;
			count += d;
			cout << "50원 : " << d << endl;
		}
		else if (money < 50)
		{
			int e = money / 10;
			money = money % 10;
			count += e;
			cout << "10원 : " << e << endl;
		}
	}

	return count;
}

int main()
{
#pragma region 탐욕법
	// 최적의 해를 구하는 데에 사용되는 근사적인 방법으로 여러 경우 중
	// 하나를 검색해야 할 때마다 그 순간에 최적이라고 생각되는 것을 선택해 나가는
	// 방식으로 진행하여 최종적인 해답을 구하는 알고리즘

	// 1. 탐욕 선택 속성
	// 각 단계에서 '최적의 선택'을 했을 때 전체 문제에 대한
	// 최적의 해를 구할 수 있는 경우

	// 2. 최적 부분 구조
	// 전체 문제의 최적의 해가 '부분 문제의 최적의 해로 구성'될 수 있는 경우

	// 탐욕 알고리즘으로 문제를 해결하는 방법
	// 1. 선택 절차(Selection Procedure)
	// 현재 상태에서의 최적의 해답을 선택

	// 2. 적절성 검사(Feasibility Check)
	// 선택된 해가 문제의 조건을 만족하는지 검사

	// 3. 해당 검사(Solution Check)
	// 원래의 문제가 해결되었는지 검사하고, 해결되지 않았다면
	// 선택 정차로 돌아가 위의 과정을 반복

	// 이 순차적으로 푼 후 코드로 만들기
	int money = 1370;
	cout << changeback(money);
#pragma endregion

}


﻿#include <iostream>
#include <cmath>
using namespace std;

int max(int list[], int left, int right)
{

	if (left == right)
	{
		return list[left];
	}
	else
	{
		int mid = (left + right) / 2;
		int v_left = max(list, left, mid);
		int v_right = max(list, mid + 1, right);

		return (v_left > v_right) ? v_left : v_right;
	}


}
int main()
{
#pragma region 분할 정복
	// 주어진 2개 이상의 부분으로 문제를 나눈 뒤 각 부분
	// 문제에 대한 답을 재귀 호출을 이용하여 계산한 다음,
	// 그 답으로부터 전체 문제의 답을 계산해내는 알고리즘

	// 분할(Divide) : 주어진 문제를 두 개 혹은 그 이상의 형식으로 나눈다

	// 정복(Conquer) : 나누어진 문제를 재귀적으로 해결해서 나누어진 문제를 
	// 더 이상 나누어서 문제가 필요없을 때까지 계속 분할

	// 통합(Combine) : 나누어서 해결한 문제들을 통합해서 원래 문제의 해답을 생성
	int list[] = { 20,15,99,1,74 };
	cout << max(list, 0, 4);
#pragma endregion


}


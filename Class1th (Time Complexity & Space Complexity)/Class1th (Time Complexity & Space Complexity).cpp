﻿#include <iostream>

using namespace std;
int main()
{
#pragma region 시간 복잡도
	// 컴퓨터 프로그램의 엽력 값과 연산 수행 시간의 상관 관계를 나타내는 척도

#pragma region 상수 시간 : O(1)
	// 입력 크기와 상관 없이 일정한 시간 복잡도를 가지는 시간
	// ex) 배열의 요소 접근
#pragma endregion

#pragma region 로그 시간 : O(log n)
	// 데이터의 크기에 따라 실행 시간이 로그 함수의 형태로 증가하는 시간 복잡도
	// ex) 이진 탐색
#pragma endregion

#pragma region 선형 시간 : O(n)
	// 입력에 따라 걸리는 시간이 선형적으로 증가되는 시간 복잡도
	// ex) 순차 탐색 -> for문으로 탐색
#pragma endregion

#pragma region 제곱 시간 : O(n^2)
	// 입력되는 데이터를 기준으로 n^2 만큼의 시간이 증가하는 시간 복잡도
	// ex) 중첩 반복문 -> 이중 for문

#pragma endregion

#pragma endregion

#pragma region 공간 복잡도
	// 프로그램 실행과 완료에 얼마나 많은 공간이 필요한 지 나타내는 척도

#pragma region 고정 공간
	// 입력 크기와 상관없이 항상 일정한 크기의 공간을 사용하는 형태
	// ex) 배열 
#pragma endregion

#pragma region 가변 공간
	// 입력 크기에 따라 변화하는 메모리 공간
	// ex) 동적 배열, 재귀 호출 시 사용되는 스택 공간
#pragma endregion


#pragma endregion

#pragma region 접근적 표기법
	// 상수 계수와 중요하지 않은 항목을 제거하여 표기하는 방법

	// f(n) = n^2 + n + 300

	// 점근적 표기법 -> n^2
	// 높은 수가 낮은차수에 붙어 있어도 n이 무한대로 갈 수 있기 때문에 제일 높은 차수가 됨
#pragma endregion

}


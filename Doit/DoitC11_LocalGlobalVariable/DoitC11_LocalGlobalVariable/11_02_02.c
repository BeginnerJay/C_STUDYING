// 전역 변수와 지역 변수의 이름이 같을 때 문제점 살펴보기
#include <stdio.h>
int result; // 전역 변수 result. 특별한 초기화 값이 없으면 0으로 초기화된다
void Sum(int data1, int data2)
{
	int result; // 지역 변수 result. 초기화되어 있지 않다.
	result = data1 + data2; // 지역 변수의 우선순위가 더 높기 때문에, 연산 결과의 값은 전역 변수 result가 아니라 지역 변수 result에 저장된다.
}

main()
{
	Sum(5, 3);
	printf("5 + 3 = %d\n", result);
}
/*
지역 변수와 전역 변수의 이름이 중복되었지만 변수 형식이 달라서 오류로 처리되지 않았다.
이름이 중복되는 경우에는 지역 변수가 우선 처리된다. -> 전역 변수에는 아무런 값도 대입되지 않는다 -> 전역 변수 result는 계속 0
이런 문제가 발생하지 않도록 전역 변수 앞에 g_같은 접두어를 사용하는게 좋다.
ex) int g_result;(전역 변수 result 선언시)
*/
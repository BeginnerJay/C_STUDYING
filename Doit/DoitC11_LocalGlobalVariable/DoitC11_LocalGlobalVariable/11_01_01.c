//변수의 사용 범위에 따른 유효성 이해하기
#include <stdio.h>
int Sum(int data1, int data2)
// 매개변수 data1, data2는 Sum 함수의 지역 변수
{
	// Sum 함수의 지역 변수 result를 선언한 후 data1 + data2 값으로 초기화
	int result = data1 + data2;
	return result;
}

main()
{
	int result; // main 함수의 지역 변수 result. 초기화되지 않아 어떤 값이 들어 있는지 모른다
	result = Sum(5, 3);
	printf("5 + 3 = %d\n", result);
}
/*
main 함수와 Sum 함수의 result 변수는 서로 다른 함수에 들어 있는 지역 변수이기 때문에 이름이 같아도 오류로 처리되지 않는다.
그리고 main 함수에서는 Sum 함수의 data1, data2, 그리고 result 변수를 사용할 수 없다.
지역 변수는 스스로 초기화되지 않기 때문에 필요할 때 프로그래머가 직접 초기화해야 한다.
*/


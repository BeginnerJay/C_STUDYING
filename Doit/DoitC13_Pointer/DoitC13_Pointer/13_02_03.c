// 직접 주소 지정 방식으로 변수 값 교환하기
#include <stdio.h>
// temp 변수를 이용하여 a와 b의 값을 서로 바꾸는 함수
void Swap(int a, int b)
{
	int temp = a; // a = 96, b = 5
	a = b; // a = 5, b = 5 !! 주의! 오른쪽에 있는 값을 왼쪽에다 넣는것
	b = temp; // a = 5, b = 96
}

main()
{
	int start = 96, end = 5;

	printf("before : start = %d, end = %d\n", start, end);
	if (start > end)
	{
		Swap(start, end); // start와 end의 값을 바꾸기 위해 Swap 함수 호출함.
	}
	printf("after : start = %d, end = %d\n", start, end);

}
// Swap 함수도 조건에 맞게 호출되었고, start, end 변수 값을 파라미터 a, b로 전달받아서 서로 교환도 했다.
// 하지만 main 함수의 start, end 와 상관 없이 변경된 변수가 a, b라는 것이 이 예제의 문제이다.
// 함수가 호출되어도 Swap 함수의 메모리에서만 연산이 실행되고, main 함수의 변수는 그대로 있다.
// 다른 함수의 지역 변수 값을 변경할 수 있는 포인터 문법을 사용해 이 문제를 해결할 필요가 있다.
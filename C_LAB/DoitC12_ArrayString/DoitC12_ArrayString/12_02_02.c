// 배열에 저장된 문자열의 길이를 구하는 함수 만들기
// 문자열의 길이를 구하는 기능은 자주 쓰이므로 함수화하자.
#include <stdio.h>

int GetStringLength(char data[])// 매개변수 data의 [] 안에 숫자를 적지 않아도 된다.
// 숫자를 적어도 오류가 발생하지는 않지만, 실제로 전달되는 배열의 크기에 의해 무시된다.
{
	int count = 0;
	// 0이 나올 때까지 문자의 개수를 더함
	while (data[count])
	{
		count++;
	}
	return count; // 문자열의 길이를 반환함
}

main()
{
	int data_length; // 문자열 길이를 저장할 변수
	char data[] = "happy"; // 문자열 저장
	data_length = GetStringLength(data); // data 변수에 들어 있는 문자열의 길이를 구함
	printf("data length = %d\n", data_length); // 문자열의 길이를 출력
}
// C 언어에서는 배열에 저장된 값을 다른 함수의 매개 변수로 전달하는 문법 제공
// 이 작업의 동작 원리는 배열과 포인터 단원에서 설명된다.
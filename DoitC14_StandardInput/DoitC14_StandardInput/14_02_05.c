// gets 함수에서 사용자 키 입력 취소 처리하기

/*
표준 입력을 받는 중에, 프로그램의 중지를 의미하는 ctrl+c 키를 사용자가 입력하면, 표준 입력이 취소되고 프로그램이 중지된다.
그런데 14_02_04 예제에서는 입력 취소 처리를 하지 않았기 때문에, ctrl+c 키를 입력하면 에러가 생긴다.
왜냐 하면 입력 버퍼에 들어 있는 문자들이 input_string 배열에 복사되지 않은 상태로 gets 함수가 종료되기 때문이다.
이것을 해결하려면 gets 함수의 반환값을 확인해야 한다.
gets 함수는 사용자 입력이 정상적으로 완료되지 않았다면 NULL값을 반환하고,
성공적으로 입력했다면 input_data 배열의 시작 주소를 반환한다.
*/

// gets 함수로 문자열을 입력받을 때 입력 취소까지 처리하기
#include <stdio.h>
main()
{
	char input_string[10];
	// 반환값이 NULL이 아니라면 문자열을 입력받아서 input_string에 저장함
	if (NULL != fgets(input_string, 10, stdin))
	{
		printf("input : %s\n", &input_string[0]);
	}
	else
	{
		printf("input -> Canceled\n");
	}
}

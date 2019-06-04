// gets 함수는 입력받은 문자열의 개수를 제한하는 기능이 없음 -> 본질적 한계.
// gets 함수의 기능을 변경해야 하는데, gets 함수는 표준 입력 함수이기 때문에 소스 코드를 프로그래머가 변경할 수 없다.
// 따라서 gets 함수와 비슷한 함수를 프로그래머가 직접 만들어야 한다.

// 문자열을 입력받을 때 입력 취소까지 처리하기
// 다음 예제에서는 문자를 한 개씩 입력받아 처리하는 getchar 함수를 사용하여
// 마치 gets 함수처럼 문자열을 처리함으로써 이 문제를 해결했다.

#include <stdio.h>

int GetMyString(char buffer[], int limit)
// buffer는 사용자가 입력한 문자열을 저장할 배열이며, limit는 최대 입력 가능한 문자 개수이다.
// 이 함수가 1을 반환하면 정상 입력되었다는 뜻이고
// 0을 반환하면 너무 길게 입력해서 제한된 개수만 받았다는 뜻이다.
{
	int i;
	for ( i = 0; i < limit; i++) // 최대 개수만큼 반복함
	{
		buffer[i] = getchar();
		if (buffer[i] == '\n')
		{
			buffer[i] = 0; // enter 키 위치에 0을 넣어서 문자열을 완성함.
			rewind(stdin); // 표준 입력 버퍼에 남아 있는 문자들을 제거함
			return 1; // 정상적으로 입력이 완료됨
		}
	}
	// 반복문을 빠져나왔다는 것은 입력 개수 제한을 초과했다는 것
	// -> 현재 위치에 0을 넣고 문자열을 완성한다.
	buffer[i] = 0; 
	rewind(stdin); // 표준 입력 버퍼에 남아 있는 문자들을 제거함
	return 0; // 입력 초과 현상이 발생했음을 알림
}

main()
{
	char temp[10];
	int state;
	// 사용자에게 최대 9개까지만 입력받겠다고 제한함
	state = GetMyString(temp, 9);

	if (state == 1)
	{
		printf("input : %s\n", temp); // 정상 입력함
	}
	else
	{
		printf("input : %s -> out of range\n", temp); // 범위를 초과함
	}
}

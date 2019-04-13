// 길이 제한 없이 문자열 형식의 숫자를 정수로 변환하기(2)
#include <stdio.h>
main()
{
	int num = 0, count = 0;
	char num_string[4] = "123";
	// 문자열이 끝날 때까지 반복함
	while (num_string[count] != 0)
	{
		num = num * 10 + (num_string[count] - '0');
		count++; // 다음 문자로 이동함
	}
	printf(" %s -> %d\n", num_string, num);
}
// 약간의 생각 전환을 통해 소스 코드가 간결해진다.
// 이런 생각을 잘 하려면 알고리즘이나 오토마타를 공부해보자.
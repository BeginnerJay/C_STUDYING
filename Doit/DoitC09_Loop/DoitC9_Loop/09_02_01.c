//While 반복문을 사용하여 1부터 5까지 더하기
#include <stdio.h>
//while은 종결 조건이 거짓일 될 때까지 명령문을 반복하는 형태
//반복의 3요소가 분명하게 정햐져 있다면 for 반복문을 사용하는 것이 편리
main()
{
	// while 반복문에서는 종결 조건을 생략할 수 없다.
	int sum = 0, num = 1;
	int i = 1;
	// 1부터 5까지 1씩 증가시키면서 반복함
	while (num <= 5)
	{
		printf("num(%d) + sum(%d) = ", num, sum);
		sum = sum + num; // sum에 num을 더함
		printf("%d\n", sum);//더한 후 sum값을 출력하고 줄 바꿈
		num++; // 조건 변화 수식
	}
	printf("\nResult : num = %d sum = %d\n", num, sum);
	while (i <= 10)
	{
		printf("안녕하세요!\n");
		i++;
	}
}
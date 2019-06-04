//do ~ while 반복문을 사용하여 1부터 5까지 더하기
#include <stdio.h>
//do while은 종결 조건이 거짓이라도 한 번은 명령문을 수행하고서 종료한다.
main()
{
	int sum = 0, num = 1;

	do
	{
		printf("num(%d) + sum(%d) = ", num, sum);
		sum = sum + num; // sum에 num을 더함
		printf("%d\n", sum);//더한 후 sum값을 출력하고 줄 바꿈
		num++; // 조건 변화 수식
	} while (num <= 5);
	printf("\nResult : num = %d sum = %d\n", num, sum);
}
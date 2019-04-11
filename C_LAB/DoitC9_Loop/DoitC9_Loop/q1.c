// break문을 이용해 전체 반복문 빠져나오기
#include <stdio.h>

main()
{
	int m, n;
	for (m = 5; m < 7; m++)
	{
		for (n = 0; n < 3; n++)
		{
			if (m == 5 && n == 1)
			{
				break; // n을 사용하는 반복문에서 break문으로 빠져나와서
			}
			if (n == 2)
			{
				continue;
			}
			printf("m(%d) - n(%d)\n", m, n);
		}
		// m이 5고 n이 1일 때 break를 수행
		if (m == 5 && n == 1)
		{
			break; // 또다시 같은 조건문에 걸려 break문이 실행 -> m을 이용하는 반복문도 종료
		}
	}
}
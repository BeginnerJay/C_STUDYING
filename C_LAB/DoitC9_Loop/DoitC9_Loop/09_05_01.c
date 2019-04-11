// break문을 이용해 하나의 반복문 빠져나오기
#include <stdio.h>
// break는 자신이 포함된 반복문을 종료시키는 기능
/* 
하지만 break로 반복문을 종료하는 효과는 하나의 반복문에만 미치기 때문에, 
중첩된 반복문에서도 하나의 반복문에만 적용된다. 
*/
main()
{
	int m, n;
	for (m = 5; m < 7; m++)
	{
		for (n = 0; n < 3; n++)
		{
			// m이 5고 n이 1일 때 break를 수행
			if (m ==5 && n == 1)
			{
				break;
			}
			printf("m(%d) = n(%d)\n", m, n);
		}
	}
}
// continue문을 이용해 반복문의 실행 흐름 변경하기
/* 
break는 반복문을 종료. But continue는 1회성 취소
-> 이후 명령문을 실행하지 않고 조건 변화 수식으로 회귀
-> 그러고 나서 종결 조건을 check 한 뒤 다시 정상적으로 반복을 진행
*/
#include <stdio.h>

main()
{
	int m;
	for ( m = 5; m < 8; m++)
	{
		if (m == 6)
		{
			continue;
		}
		printf("m(%d)\n", m);
	}
}
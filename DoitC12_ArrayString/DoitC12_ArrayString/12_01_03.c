// 반복문을 사용하여 배열의 모든 요소를 0으로 초기화하기
#include <stdio.h>
main()
{
	short student[20];
	for (short i = 0; i < 20; i++)
	{
		student[i] = 0;
	}

	student[1] = 10;
	printf("%d %d\n", student[1], student[2]);
}
// 초기화 안하면 엉뚱한 값이 들어가 있다.
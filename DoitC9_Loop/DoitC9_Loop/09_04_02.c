// for 반복문을 중첩 사용해서 구구단 전체를 출력하기
#include <stdio.h>
main()
{
	int step, i;
	/*
	for ( step = 2; step < 10; step++)
	{
		for ( i = 1; i <= 9; i++)
		{
			printf("%d * %d = %d\n", step, i, step * i);
		}
	}
	*/
	for (step = 2; step < 6; step++)
	{
		for (i = 1; i <= 9; i++)
		{
			printf("%d * %d = %d\n", step, i, step * i);
		}
	}
}
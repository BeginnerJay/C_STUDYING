//for 반복문을 사용하여 구구단 2단 출력하기
#include <stdio.h>
main()
{
	int i; // i 변수가 1부터 9까지 1씩 증가하면서 총 9번 반복함
	for ( i = 1; i <= 9; i++)
	{
		// 2 * i 형식으로 출력함
		printf("2 * %d = %d\n", i, 2 * i);
	}
}
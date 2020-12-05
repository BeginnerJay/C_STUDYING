// for 반복문과 함수를 이용해서 구구단 특정 단 출력 프로그램 만들기
#include <stdio.h>
//함수화(main에서 모든 것을 다 하지 않게)
//함수는 main함수보다 무조건 먼저 작성! 아니면 error!
void ShowMultiplication(int step)
{
	int i;
	for (i = 1; i <= 9; i++)
	{
		// step * i 형식으로 출력함
		printf("%d * %d = %d\n", step, i, step * i);
	}
}

main()
{
	int step = 5;
	ShowMultiplication(step);
}

#include <stdio.h>
// for 반복문을 사용하여 1부터 5까지 더하기
void main()
{
	// 합한 값을 저장할 sum과 합산에 사용할 숫자를 지정할 num을 선언
	int sum, num;
	int fin;
	int i, j, k;
	// 1에서 5까지 1씩 증가하면서 반복함
	for (sum = 0, num = 1, fin = 5; num <= fin; num++)
	// 합산하기 전 sum값을 사용하여 'num + sum = ' 이라고 출력함
	{
		printf("num(%d) + sum(%d) = ", num, sum);
		sum = sum + num; // sum에 num을 더함
		printf("%d\n", sum);//더한 후 sum값을 출력하고 줄 바꿈
	}
	// 반복이 끝나면 줄을 바꾼 후 num 변수 값과 sum변수 값을 출력함
	printf("\nResult : num = %d sum = %d\n", num, sum);

	for (i = 1, j = 0, k = 100; i <= k; i++)
	{
		j += i;
	}
	printf("\n1에서 %d까지의 합은 %d", k, j); // 반복문 안에 넣으면 값 겁나 많이 출력함
}
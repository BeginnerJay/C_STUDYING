// 정적 메모리 할당을 사용하여 숫자를 입력받아 합산하기
#include <stdio.h>
#define MAX_COUNT 5 // 최대 입력을 5회로 제한함
main()
{
	int num[MAX_COUNT], count = 0, sum = 0;
	while (count < MAX_COUNT)
	{
		printf("숫자를 입력하세요 (9999를 누르면 종료) : ");
		scanf_s("%d", num + count); // scanf_s("%d", &num[count]와 같은 표현
		if (num[count] == 9999)
		{
			break;
		}
		count++; // 입력된 횟수를 계산함
	}
	// 입력된 횟수만큼 숫자를 출력함
	for (int i = 0; i < count; i++)
	{
		if (i > 0) 
		{
			printf(" + "); // 숫자와 숫자 사이에 + 를 출력함
		}
		printf(" %d ", num[i]); // 입력한 숫자를 출력함
		sum = sum + num[i]; // 입력한 숫자들을 합산함
	}
	printf(" = %d\n", sum); // 합산한 값을 출력함
}
// 동적 메모리 할당을 사용하여 숫자를 입력받아 합산하기
// 배열은 상수로만 명시할 수 있다.
// 그러므로 배열을 사용하는 프로그램은 사용자에게 제한적 사용을 강요하거나, 비효율을 감수하고 메모리를 낭비하게 된다.
// 이러한 낭비를 막기 위해 동적 메모리 할당을 사용한다.
	// 배열과 달리 malloc은 함수이기 때문에, 할당할 크기를 적을 때 상수뿐만 아니라 변수도 사용할 수 있다.
	// 그러므로 사용할 데이터의 갯수를 제한할 필요가 없다.
		// 배열처럼 MAX_COUNT를 정할 필요 없이, 사용자에게 입력받은 만큼 사용 가능

#include <stdio.h>
#include <malloc.h>
main()
{
	int *p_num_list, count = 0, sum = 0, limit = 0;

	printf("사용할 최대 갯수를 입력하세요 : ");
	scanf_s("%d", &limit); 
	// 사용자가 입력한 개수만큼 정수를 저장할 수 있는 메모리를 할당함
	p_num_list = (int *)malloc(sizeof(int)*limit);
	// 중간에 9999를 누르면 종료함

	while (count < limit)
	{
		printf("숫자를 입력하세요 (9999를 누르면 종료) : ");
		scanf_s("%d", p_num_list + count); // scanf_s("%d", &num[count]와 같은 표현
		if (*(p_num_list + count) == 9999)
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
		printf(" %d ", *(p_num_list + i)); // 입력한 숫자를 출력함
		sum = sum + *(p_num_list + i); // 입력한 숫자들을 합산함
	}
	printf(" = %d\n", sum); // 합산한 값을 출력함
	free(p_num_list); // 사용했던 메모리를 제거함
}
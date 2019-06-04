/*
배열은 요소의 갯수를 상수로만 입력받을 수 있음.
	1. 2차원 배열 사용하기
	최대 인원수를 4보다 크게 변경하려면 소스 코드에서 count 배열의 크기를 직접 변경해야 한다.
		이렇게 되면 소스 코드를 다시 컴파일해야 한다.
	2. 포인터 배열 사용하여 메모리 할당하기
		사용자가 입력한 인원수만큼 메모리를 동적으로 할당해야 한다.
		연령층에는 변화가 없음 -> 포인터 배열을 사용하여 3개의 포인터 선언
		그 후 각 포인터에 malloc 함수 사용 -> 사용자가 입력한 연령별 인원수로 메모리 동적 할당
*/
// 포인터 배열로 연령별 윗몸 일으키기 횟수 관리하기
#include <stdio.h>
#include <malloc.h>
main()
{
	unsigned char limit_table[3]; // 연령벌 인원수를 저장할 배열 -> 사용자에게 입력받음
	unsigned char *p[3]; // 연령별 윗몸 일으키긱 횟수를 저장할 배열
	int age, member, temp, sum;
	for ( age = 0; age < 3; age++)
	{
		printf("\n%d0대 연령의 윗몸 일으키기 횟수\n", age + 2);
		printf("이 연령대는 몇 명입니까?");
		scanf_s("%d", &temp);
		limit_table[age] = (unsigned char)temp;
		
		p[age] = (unsigned char *)malloc(limit_table[age]); // 입력받은 인원수만큼 메모리를 할당함

		for (member = 0; member < limit_table[age]; member++) // 해당 연령 사람들 순서대로 입력받음
		{
			printf("%dth : ", member + 1); // 1th, 2th .. 식으로 입력받음
			
			// scanf_s로 unsigned char 변수에 직접 정수를 받을 수 없음
				// temp 변수에서 정수로 입력받은 후에 *(p[age] + member)에 저장
			
			scanf_s("%d", &temp);
			*(p[age] + member) = (unsigned char)temp;
		}
	}

	printf("\n\n연령별 평균 윗몸 일으키기 횟수");
	// 연령별로 입력된 횟수를 합산하여 평균값을 출력함
	for (age = 0; age < 3; age++)
	{
		sum = 0;
		printf("%d0대 : ", age + 2);
		// 해당 연령에 소속된 사람들의 횟수를 합산함
		for (member = 0; member < limit_table[age]; member++)
		{
			sum += *(p[age] + member);
		}
		// 합산 값을 인원수로 나누어서 평균을 냄
		printf("%5.2f\n", (double)sum / limit_table[age]);
		free(p[age]);
	}
}
// 직원의 연령층이 다양해진다면??
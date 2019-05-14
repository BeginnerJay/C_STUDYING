/*
malloc 함수를 사용하면 1차원 포인터를 원하는 갯수만큼 동적으로 할당할 수 있다.
age_step 변수 추가.
age_step 변수를 malloc 함수로 동적 할당(p_limit_table 배열이 더 이상 고정되어 있지 않음)
*/
// 2차원 포인터로 연령별 윗몸 일으키기 횟수 관리하기
#include <stdio.h>
#include <malloc.h>
main()
{
	unsigned char *p_limit_table; // 연령벌 인원수를 저장할 포인터 -> 사용자에게 입력받음
	unsigned char **p; // 연령별 윗몸 일으키긱 횟수를 저장할 2차원 포인터
	int age, age_step, member, temp, sum;
	
	printf("20대부터 시작해서 연령층이 몇 개인가요 : ");
	scanf_s("%d", &age_step);
	// 연령별 인원수를 저장할 메모리를 만듦
	p_limit_table = (unsigned char *)malloc(age_step);
	p = (unsigned char *)malloc(sizeof(unsigned char *) * age_step);
	
	for (age = 0; age < age_step; age++)
	{
		printf("\n%d0대 연령의 윗몸 일으키기 횟수\n", age + 2);
		printf("이 연령대는 몇 명입니까?");
		scanf_s("%d", &temp);
		*(p_limit_table + age) = (unsigned char)temp;

		*(p + age) = (unsigned char *)malloc(*(p_limit_table + age)); // 입력받은 인원수만큼 메모리를 할당함

		for (member = 0; member < *(p_limit_table + age); member++) // 해당 연령 사람들 순서대로 입력받음
		{
			printf("%dth : ", member + 1); // 1th, 2th .. 식으로 입력받음

			// scanf_s로 unsigned char 변수에 직접 정수를 받을 수 없음
				// temp 변수에서 정수로 입력받은 후에 *(p[age] + member)에 저장

			scanf_s("%d", &temp);
			*(*(p + age) + member) = (unsigned char)temp;
		}
	}

	printf("\n\n연령별 평균 윗몸 일으키기 횟수");
	// 연령별로 입력된 횟수를 합산하여 평균값을 출력함
	for (age = 0; age < age_step; age++)
	{
		sum = 0;
		printf("%d0대 : ", age + 2);
		// 해당 연령에 소속된 사람들의 횟수를 합산함
		for (member = 0; member < *(p_limit_table + age); member++)
		{
			sum += *(*(p + age) + member);
		}
		// 합산 값을 인원수로 나누어서 평균을 냄
		printf("%5.2f\n", (double)sum / *(p_limit_table + age));
		free(*(p + age));
	}
	free(p);
	free(p_limit_table);
}
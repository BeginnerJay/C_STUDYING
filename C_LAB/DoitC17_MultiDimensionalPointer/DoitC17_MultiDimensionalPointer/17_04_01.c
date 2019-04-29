/*
17-4 2차원 포인터와 2차원 배열
	여러 개의 1차원 포인터를 정적 할당하기
		short *p[100] // short* 형식의 1차원 포인터를 100개 선언함
			낭비가 생기거나 변수가 많아질 경우 다시 컴파일해야 한다.
	
	여러 개의 1차원 포인터를 동적 할당하기	
		2차원 포인터가 가리키는 첫 번째 대상에는 1차원 포인터의 주소값을 저장해서 쓰는 것이 가장 좋다.
			하지만 4바이트 크기의 메모리에 주소 값을 저장해서 사용해도 된다.
			그래서 malloc 함수로 4byte 메모리를 할당하여 2차원 포인터에 저장하면, 그 메모리를 1차원 포인터처럼 활용 可
				short **pp;
				pp = (short **)malloc(sizeof(short *)); // sizeof(short *) = 4
			malloc 함수의 매개변수에 동적 할당할 메모리의 크기를 적을 때에는 상수뿐만 아니라 변수도 사용 可
			따라서 short * 형식의 1차원 포인터를 n개 할당 가능, *(pp+0) ~ *(pp+ n-1)으로 사용 可
				int n;
				short **pp;
				scanf_s("%d", &n); // 사용할 1차원 포인터의 갯수를 사용자에게 받음
				pp = (short **)malloc(sizeof(short *) * n); // short * 형식의 1차원 포인터 n개 할당
		이렇게 2차원 포인터와 malloc 함수를 사용하면 배열보다 코드는 복잡해진다.
			하지만 프로그램 실행 중에 1차원 포인터의 갯수가 바뀌어도 소스 파일을 다시 컴파일할 필요가 없다.
			또한 사용자가 메모리를 사용하고 싶은 크기만큼 선택 可 -> 메모리 효율성 高
	
	2차원 배열과 동적 메모리 할당	
		2차원 배열로 메모리를 할당하는 방법
			unsigned char count[3][4]; // 3개의 그룹에 최대 4명의 사람을 관리함		
*/

// 2차원 배열로 연령별 윗몸일으키기 횟수 관리하기
#include <stdio.h>
main()
{
	unsigned char limit_table[3] = { 4, 2, 3 };
	unsigned char count[3][4];
	int member, temp, sum, age;
	// 연령별로 윗몸 일으키기 횟수를 입력받음
	for (age = 0; age < 3; age++)
	{
		// 각 연령의 윗몸 일으키기 횟수 라고 출력함
		printf("\n%d0대 연령의 윗몸 일으키기 횟수\n", age + 2);
		for ( member = 0; member < limit_table[age]; member++) // 해당 연령 사람들 순서대로 입력받음
		{
			printf("%dth : ", member + 1); // 1th, 2th .. 식으로 입력받음
			scanf_s("%d", &temp); 
			// scanf_s로 unsigned char 변수에 직접 정수를 받을 수 없음
				// temp 변수에서 정수로 입력받은 후에 count 요소에 저장
			count[age][member] = (unsigned char)temp;
		}
	}

	printf("\n\n연령별 평균 윗몸 일으키기 횟수");
	// 연령별로 입력된 횟수를 합산하여 평균값을 출력함
	for (age = 0; age < 3; age++)
	{
		sum = 0;
		printf("%d0대 : ", age + 2);
		// 해당 연령에 소속된 사람들의 횟수를 합산함
		for ( member = 0; member < limit_table[age]; member++)
		{
			sum += count[age][member];
		}
		// 합산 값을 인원수로 나누어서 평균을 냄
		printf("%5.2f\n", (double)sum / limit_table[age]);
	}
}
// 만약 각 연령층에 포함된 인원수가 변한다면??
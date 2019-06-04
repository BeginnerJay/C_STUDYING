// ArraytoInteger를 직접 만들지 않아도 C 표준 라이브러리에서 atoi라는 함수를 제공한다.
#include <stdio.h>
#include <stdlib.h> // atoi 함수를 사용하기 위해 포함시킴
main()
{
	int first_num, second_num;
	char first_string[16], second_string[16];
	printf("input first number : ");
	fgets(first_string, 16, stdin);
	printf("input second number : ");
	fgets(second_string, 16, stdin);

	first_num = atoi(first_string); // 문자열 -> 정수
	second_num = atoi(second_string); // 문자열 -> 정수
	// 정수로 변환된 두 수를 합산한 결과 값을 출력함
	printf("%d + %d = %d\n", first_num, second_num, first_num + second_num);
}
// 숫자 형식의 문자열을 처리하는 함수 만들기

// 숫자 형태로 구성된 문자열을 정수로 바꾸는 함수는 사용 빈도가 높다.
// 그래서 함수로 구성해 놓고 프로그램에서 사용하는 것이 좋다.
// 다음 코드는 gets 함수를 사용하여 사용자에게 두 개의 숫자를 입력받아서 합산하는 예제이다.

#include <stdio.h>
int ArraytoInteger(char string[]) // 문자열로 바꾸는 함수 선언
{
	int count = 0, num = 0;
	// 문자열이 끝날 때까지 반복함
	while (string[count] != 0 && string[count] != '\n') // fgets쓰면 문자열 끝에 '\n'이 추가된다.
	{
		// 반복할 때마다 이전 값에 10을 곱해서 자릿수를 증가시킴
		num = num * 10 + string[count] - '0';
		count++;
	}
	return num;
}

main()
{
	int first_num, second_num;
	char first_string[16], second_string[16];

	printf("input first number : ");
	fgets(first_string,16,stdin);
	printf("input second number : ");
	fgets(second_string, 16, stdin);

	first_num = ArraytoInteger(first_string);
	second_num = ArraytoInteger(second_string);

	printf("%d + %d = %d\n", first_num, second_num, first_num + second_num);
}
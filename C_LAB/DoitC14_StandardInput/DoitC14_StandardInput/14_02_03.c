// rewind 함수를 사용하여 표준 입력 버퍼 초기화하기
#include <stdio.h>
main()
{
	int input_data;
	input_data = getchar();
	rewind(stdin); // 표준 입력 버퍼에 있는 모든 입력 값을 제거함
	printf("first input : %c\n", input_data); // 첫 번째 값만 받아들여 출력한다.
	input_data = getchar();
	rewind(stdin); // 표준 입력 버퍼에 있는 모든 입력 값을 제거함
	printf("second input : %c\n", input_data);
}
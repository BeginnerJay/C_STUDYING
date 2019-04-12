// getchar() 함수를 이용하여 키보드에서 문자 한 개 입력받기
// 이 함수를 이용할 때, 문자 한 개를 입력받더라도 Enter 키를 눌러야만 작업이 완료된다.
#include <stdio.h>
main()
{
	int input_data;
	printf("Enter one character : ");
	// 표준 입력 함수를 사용하여 문자를 한 개 입력받음
	input_data = getchar();
	// 입력받은 문자를 출력함
	printf("input : %c\n", input_data);
}
// getchar() 변수는 int 형식으로 데이터를 반환합니다.
// 그래서 int형 변수로 반환값을 받는 것이 일반적이지만, char 변수로 받아도 된다.
// getchar() 함수를 사용하여 문자 한 개씩 두 번 입력받기
// getchar 쓸때의 주의점을 알 수 있게 된다.
#include <stdio.h>
main() 
{
	int input_data;
	input_data = getchar();
	printf("first input : %c\n", input_data);
	input_data = getchar();
	printf("second input : %c\n", input_data);
}
// 첫 번째 문자만 넣고 Enter 눌렀는데 두 개의 getchar가 한 번에 동작해서 두 번쨰 getchar는 문자를 입력받지 못하였다.
// 정확히 말하면, 두 번째 getchar 함수는 첫 번째 입력을 받을 때 함께 입력된 enter키를 받게 되어
// 아무것도 출력하지 못하고 줄 바꿈만 한 번 더 일어난다는 것이다.

/* 
해결 방법 1
getchar() 함수를 밑에 한 번 더 써서 표준 입력 버퍼에 입력된 쓸모없는 enter 입력을 출력되지 않도록 하기
해결 방법 2
한 개의 문자만 입력 버퍼에서 가져오고, 그 후에 입력 버퍼를 초기 상태로 비워서 남아 있는 문자들을 모두 제거하는 것
*/
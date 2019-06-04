#include <stdio.h>
#include <malloc.h> // malloc, free 함수를 사용하기 위해 추가함

main()
{
	char *p_name;
	p_name = (char *)malloc(32); // 32바이트의 메모리를 동적 할당한다.
	if (p_name != NULL)
	{
		printf("Your name : ");
		gets_s(p_name,32); // 이름을 출력받음

		printf("Hi ~ %s\n", p_name); // 입력받은 이름을 출력함
		free(p_name);
	}
	else
	{
		// 메모리 할당에 실패한 경우
		printf("Memeory Allocation Error!!");
	}
}
// 실수로 free하지 않으면 메모리가 손실된다.
// 그렇다고 해서 할당도 되지 않은 메모리를 해제하면, 컴파일은 성공하더라도 실행시 오류가 발생한다.
// 정적으로 할당된 메모리를 해제하는 경우에도 오류가 발생한다.
// 할당된 메모리를 두 번 해제해도 오류가 발생한다.
// malloc 함수를 통해 동적 할당을 하는 경우에는, free 함수로 할당된 메모리를 해제하는 코드를 먼저 추가해 놓자.
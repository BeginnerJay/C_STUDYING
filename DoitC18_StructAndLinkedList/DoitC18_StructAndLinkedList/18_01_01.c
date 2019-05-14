// typedef로 정의한 자료형으로 변수 선언하기
#include <stdio.h>

// unsigned short int형을 US라는 새로운 이름으로 정의함
typedef unsigned short int US;
// 재정의되었거나 치환되었음을 알리기 위해 모두 대문자로 이름짓는 것이 관례.

main()
{
	unsigned short int data = 5;
	US temp;

	temp = data;
	printf("temp = %d\n", temp);
}
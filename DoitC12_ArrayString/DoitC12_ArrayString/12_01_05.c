// 배열의 각 요소에 저장된 값 합하기
#include <stdio.h>
main()
{
	// data 배열을 1~5로 초기화
	char data[5] = { 1, 2, 3, 4, 5 };
	// 합한 값을 저장할 result 변수를 0으로 초기화
	int result = 0, i;

	//배열의 각  요소 값을 result 변수에 합하는 과정을 반복문
	for ( i = 0; i < 5; i++)
	{
		result = result + data[i];
	}
	
	printf("data 배열의 각 요소의 합은 %d입니다\n", result);
}
// 배열은 사용자 정의 자료형이다
// -> C 문법이 기본으로 제공하는 자료형으로 표현할 수 없던 3바이트, 5바이트 크기의 변수도 배열로 만들 수 있다.
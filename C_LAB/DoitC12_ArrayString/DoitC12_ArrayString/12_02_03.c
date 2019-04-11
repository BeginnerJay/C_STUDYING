// strlen 함수를 사용하여 문자열 길이 출력하기
#include <stdio.h>
#include <string.h> // 문자열 표준 함수를 사용하기 위해 추가함

main()
{
	int data_length; // 문자열 길이를 저장할 변수
	char data[] = "happy";
	data_length = strlen(data);// data 변수에 들어 있는 문자열의 길이를 구함
	printf("data length = %d\n", data_length); // 문자열의 길이를 출력
}
/*
런타임 라이브러리 함수 다 공부 필요 없음. C 언어 개발 도구에서 해당 함수 설명 볼 수 있음.
strlen, strcpy, strcat 함수는 사용법 숙지할 것! 자주 쓰임.
*/
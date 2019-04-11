// 두 개의 문자열 합치기
#include <stdio.h>
#include <string.h> // 문자열 표준 함수를 사용하기 위해 추가함

main()
{
	
	char data[] = {'a', 'b', 'c', 0};
	char result[16];
	
	strcpy_s(result, 4, data); // 복사된 값이 들어가는 배열, 복사되는 문자열의 갯수,복사되는 배열
	strcat_s(result, sizeof(result),"def"); // abc라는 값이 복사된 result 배열에 , 6만큼을 최대로 해서, def를 덧붙인다
	printf("%s + \"def\" = %s\n", data, result); // 문자열의 길이를 출력
}
/*
런타임 라이브러리 함수 전부를 공부할 필요는 없음. C 언어 개발 도구에서 해당 함수 설명 볼 수 있음.
strlen, strcpy, strcat 함수는 사용법 숙지할 것! 자주 쓰임.
*/
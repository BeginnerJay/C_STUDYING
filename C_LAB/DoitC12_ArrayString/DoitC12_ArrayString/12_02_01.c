// 배열에 문자열을 저장하고 출력하기
#include <stdio.h>
main()
{
	//char data[5] = { 'h','a','p','p','y' };
	char data[6] = { 'h','a','p','p','y', 0 };
	//char data_length = 5;
	// char data[6] = { 'h','a','p','p','y', 0 }이나 char data[6] = "happy" 도 같은 표현이다.
	char ment[] = "C Programming~!"; // [] 안의 숫자를 생략해도 된다.
	
	printf("%s\n", data);
	printf("%s\n", ment);
}
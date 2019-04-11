// 다른 변수의 주소를 사용하여, 포인터로 값 대입하기
#include <stdio.h>
main()
{
	short birthday;
	short *ptr; // 포인터 변수 선언
	ptr = &birthday; // birthday 변수의 메모리 주소를 ptr 포인터 변수에 대입함
	*ptr = 0x0412; // birthday 변수에 0x0412라는 값을 변수를 이용한 직접 주소 지정 방식이 아닌 포인터를 이용한 간접 주소 지정 방식으로 저장

	printf("birthday = %d (0x%04X)\n", birthday, birthday);
}
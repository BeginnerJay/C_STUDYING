#include <stdio.h>
// 변수의 특정 비트를 1로 만드는 예제
unsigned char SetBit(unsigned char dest_data, unsigned char bit_num)
/*
dest_data 변수의 bit_num번째 있는 비트를 설정하는 함수로 해당 비트가 1으로 설정된 값을 반환한다.
*/
{
	// 1바이트 변수라서 비트 이동은 0~7까지 가능함
	if (bit_num < 8)
	{
		dest_data = dest_data | (0x01 << bit_num);
	}
	// 변경된 값을 반환함
	return dest_data;
}

main()
{
	unsigned char lamp_state = 0x77;
	// 16진수 0x77는 2진수 0111 0111
	printf("%X -> ", lamp_state); //변경 전 값을 출력함
	lamp_state = SetBit(lamp_state, 3); // 16진수 0x77은 0111 0111
	printf("%X\n", lamp_state); // 변경 전 값을 출력함
}
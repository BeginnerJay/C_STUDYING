#include <stdio.h>
unsigned char ModifyBit(unsigned char dest_data,
	unsigned char bit_num, char value)
{
	unsigned char mask;
	// 1바이트 변수라서 비트 이동은 0~7까지만 가능
	if (bit_num < 8)
	{
		mask = 0x01 << bit_num;
		if (value == 1)
		{
			dest_data = dest_data | mask;
		}
		else
		{
			dest_data = dest_data & ~mask;
		}
	}
	return dest_data;
}

main()
{
	unsigned char lamp_state = 0x7f;
	// 16진수 0x7f는 2진수 0111 1111
	printf("%X -> ", lamp_state);// 변경 전 값 출력
	// lamp_state 변수의 3번째 비트 값을 0으로 설정함
	lamp_state = ModifyBit(lamp_state, 3, 0);
	// 16진수 0x77은 2진수 0111 0111
	printf("%X -> ", lamp_state);// 변경 후 값 출력
	// lamp_state 변수의 3번째 비트 값을 1으로 설정함
	lamp_state = ModifyBit(lamp_state, 3, 1);
	// 16진수 0x7f는 2진수 0111 1111
	printf("%X", lamp_state);// 변경 후 값 출력
}
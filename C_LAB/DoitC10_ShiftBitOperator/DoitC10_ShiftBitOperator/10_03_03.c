#include <stdio.h>
unsigned char GetBit(unsigned char dest_data, unsigned char bit_num)
{
	unsigned char bit_state = 0; // 1바이트 변수라서 비트 이동은 0~7까지만 가능함
	if (bit_num < 8)
	{
		bit_state = dest_data & (0x01 << bit_num);
		bit_state = bit_state >> bit_num;
	}
	// bit_num에 지정된 비트 값을 반환함
	return bit_state;
}

main()
{
	unsigned char lamp_state = 0x75;
	unsigned char bit_state;
	int i;

	printf("%X -> ", lamp_state); // 16진법으로 현재 값을 출력함
	for (i = 0; i < 8; i++) // 8개 비트 값을 모두 출력하기 위해 8번 반복
	{
		bit_state = GetBit(lamp_state, 7 - i);
		printf("%d", bit_state);
	}
	printf("\n");
}
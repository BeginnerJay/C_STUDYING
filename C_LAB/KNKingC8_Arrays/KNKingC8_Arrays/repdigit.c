// Checks numbers for repeated digits
// checks whether any of the digits in a number
// appear more than once.
#include <stdbool.h> // C99 only
#include <stdio.h>
main()
{
	bool digit_seen[10] = { false };
	// 컴파일러가 나머지를 0으로 초기화(0 = false)
	int digit; long n;

	printf("Enter a number : ");
	scanf_s("%ld", &n);

	while (n > 0)
	{
		digit = n % 10;
		// 예를 들어 28212 입력되면
		// 첫번째로 반복되는 digit은 2.
		// digit[2]는 true가 된다.
		// 또 digit이 2가 되면
		// 반복문은 종료된다.
		if (digit_seen[digit])
		{
			break;
		}
		digit_seen[digit] = true; 
		n /= 10;
		//다음 자릿수에 대한 반복 여부 계산을 위해 나눈다
	}
	if (n > 0)
	{
		printf("Repeated digit\n");
	}
	else
	{
		printf("No repeated digit\n");
	}
}
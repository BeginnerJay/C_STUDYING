// Sums a series of numbers (using long variables)
#include <stdio.h>

int main(void)
{
	long n, sum = 0;

	printf("This program sums a series of integers.\n");
	printf("Enter integers (0 to terminate) : ");

	scanf_s("%ld", &n);
	while (n != 0)
	{
		sum += n;
		scanf_s("%ld", &n);
	}
	printf("The sum is : %1d\n", sum);
}
// 인수를 int에서 long으로 바꾸고, %d 대신에 %ld 써서 integer overflow 해결!
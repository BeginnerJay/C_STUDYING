// sums a series of numbers (using long variables)
#include <stdio.h>
main()
{
	long n, sum = 0;
	printf("this program sums a series of integers.\n"); \
		printf("Enter integers (0 to terminate) : ");
	scanf_s("%ld", &n);
	while (n != 0) {
		sum += n;
		scanf_s("%ld", &n);
	}
	printf("The sum is : %ld\n", sum);
}
// sums a series of numbers
#include <stdio.h>
main()
{
	int n, sum = 0;

	printf("This program sums a series of integers.\n");
	
	printf("Enter integers (0 to terminate) : ");
	scanf_s("%d", &n);

	while (n != 0)
	{
		sum += n;
		scanf_s("%d", &n);
	}
	printf("The sum is : %d\n", sum);
}
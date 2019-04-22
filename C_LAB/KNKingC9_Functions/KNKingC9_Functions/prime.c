// Tests whethera number is prime
#include <stdbool.h> // C99 only
#include <stdio.h>

bool is_prime(int n)
{
	int divisor;

	if (n <= 1)
	{
		return false;
	}

	for ( divisor = 2; divisor*divisor <= n; divisor++)
	{
		if (n%divisor == 0)
		{
			return false;
		}
	}
	return true;
}

main()
{
	int n;
	printf("Enter a number : ");
	scanf_s("%d", &n);
	if (is_prime(n))
	{
		printf("Prime");
	}
	else
	{
		printf("Not prime");
	}
}
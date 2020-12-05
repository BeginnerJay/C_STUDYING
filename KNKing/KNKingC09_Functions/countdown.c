// Prints a countdown
#include <stdio.h>
void print_count(int n)
{
	printf("T minus %d and counting\n", n);
}

main()
{
	for (int i = 10; i > 0 ; --i)
	{
		print_count(i);
	}
}
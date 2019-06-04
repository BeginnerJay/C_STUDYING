// Prints a table of square using a for statement
#include <stdio.h>
main()
{
	int i, n;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf_s("%d", &n);

	for ( i = 1	; i <= n; i++)
	{
		printf("%10d%10d\n", i, i*i);
	}
}
#include <stdio.h>
#include <stdbool.h>

bool has_zero(int a[], int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (a[i] == 0);

		else
			return false;
	}
	return true;
}

main()
{
	int a[] = { 1, 2, 3, 4, 0 };
	bool tf = has_zero(a[], 3);
}
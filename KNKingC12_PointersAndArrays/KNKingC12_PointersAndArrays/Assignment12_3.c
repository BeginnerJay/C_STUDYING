#define N 10
#include <stdio.h>

main()
{
	int a[N] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = &a[0], * q = &a[N - 1];
	int temp = 0;

	while (p < q)
	{
		temp = *p;
		*p++ = *q;
		*q-- = temp;
	}
	printf("%d\n", temp);
	for (int i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
	}
}

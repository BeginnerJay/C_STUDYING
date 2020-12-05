#include <stdio.h>
#define N 10
// reverses a series of numbers
main()
{
	int a[N];

	printf("Enter %d numbers : ", N);
	for ( int i = 0; i < N;	i++)
	{
		scanf_s("%d", &a[i]);
	}

	printf("In reverse order : ");
	for (int i=N-1; i >=0; i--)
	{
		printf(" %d", a[i]);
	}
	printf("\n");
}

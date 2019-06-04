// Reverses a sereis of numbers (pointer version)
#include <stdio.h>
#define N 10
main()
{
	int a[N], * p;

	printf("Enter %d numbers: ", N);
	/*
	for(p = &a[0]; p < &p[N]; p++)	
	*/
	for ( p = a; p < a + N; p++)
	{
		scanf_s("%d", p);
	}

	printf("In reverse order: ");
	/*
	for(p = &a[N-1]; p >= &a[0]; p--)
	*/
	for (p = a + N - 1; p >= a; p--)
	{
		printf(" %d", *p);
	}
	printf("\n");
}
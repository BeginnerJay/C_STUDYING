#include <stdio.h>
main()
{
	
#define N 10
	int a[N];
	/* The length of the array can be specified
	   by any (integer) constant expressions.

	   Since array lengths may need to be adjusted 
	   when the program is later changed,
	   using a macro to define the length of an array
	   is an excellent practice.
	*/
	for  (int i = 0; i <  N; i++)
	{
		a[i] = 0; // initailize a
	}

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &a[i]); // reads data into a
	}

	for (int i = 0, sum = 0; i < N; i++)
	{
		sum += a[i]; // sums the elements of a
	}
}

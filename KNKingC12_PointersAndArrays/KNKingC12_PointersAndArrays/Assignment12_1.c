#include <stdio.h>

main()
{
	int a[] = { 5,15,34,54,14,2,52,72 };
	int *p = &a[1];
	int *q = &a[5];

	printf("%d\n", *(p + 3));
	printf("%d\n", *(q - 3));
	printf("%d\n", q-p);
	printf("%s\n", p < q ? "true" : "false");
	printf("%s\n", *p < *q ? "true" : "false");
	// printf(q - p);
	// printf(p < q);
	// printf(*p < *q);
	
	/*
	printf(*(p + 3));
	printf(*(q - 3));
	printf(q - p);
	printf(p < q);
	// printf(*p < *q);
	*/
}
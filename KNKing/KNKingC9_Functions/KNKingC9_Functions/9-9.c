#include <stdio.h>

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	printf("i = %d, j = %d\n", a, b);
}

int sum(int n, int m)
{
	int result;
	result = n + m;
	return result;
}


int main(void)
{
	int a = 1, b = 2;
	swap(a, b);
	// printf("i = %d, j = %d\n", i, j);
	
	int i = sum(83, 12);
	printf("%d\n", i);
	double x = sum(83, 12);
	printf("%f\n", x);
	int j = sum(3.15, 9.28);
	printf("%d\n", j);
	double y = sum(3.15, 9.28);
	printf("%f\n", y);
	
	return 0;
}


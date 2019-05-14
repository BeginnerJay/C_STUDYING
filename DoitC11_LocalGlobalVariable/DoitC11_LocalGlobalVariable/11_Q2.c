#include <stdio.h>
int result;
void Test()
{
	int result = 5;
	result++;
}

main()
{
	Test();
	printf("result : %d", result);
}
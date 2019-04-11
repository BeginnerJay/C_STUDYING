#include <stdio.h>
int result;
void Test()
{
	static int data = 0;
	printf("%d, ", data++);
}

main()
{
	int i;
	for ( i = 0; i < 5; i++)
	{
		Test();
	}
}
#include <stdio.h>
main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	/* If the initializer is shorter than array,
	   the remaining elements of the array
	   are given the value 0.
	*/
	int b[10] = { 1,2,3,4,5,6 }; // 나머지는 0
	// 모든 값을 0으로 초기화하기
	int c[10] = { 0 };// 첫째 값 0으로 직접 초기화
	// 나머지 값은 자동적으로 0으로 채워짐
	// 다 비우면 에러난다.
	int d[15] = { [2] = 29,[9] = 7,[14] = 48 };
	int e[] = { [2] = 29,[9] = 7,[14] = 48, [20] = 99 };
	// designated initializer
	// 원하는 곳만 원하는 값으로 초기화, 나머지는 0 처리
	// designators must be integer CONSTANT expressions.
	for (int i = 10 - 1; i >= 0; i--)
	{
		printf(" %d", a[i]);
		
	}
	printf("\n");
	for (int i = 10 - 1; i >= 0; i--)
	{
		printf(" %d", b[i]);
	}
	printf("\n");
	for (int i = 10 - 1; i >= 0; i--)
	{
		printf(" %d", c[i]);
	}
	printf("\n");
	for (int i = 15 - 1; i >= 0; i--)
	{
		printf(" %d", d[i]);
	}
	printf("\n");
	for (int i = 20 - 1; i >= 0; i--)
	{
		printf(" %d", e[i]);
	}
}
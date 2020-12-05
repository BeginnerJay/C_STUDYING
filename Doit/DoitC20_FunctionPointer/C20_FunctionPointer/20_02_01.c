// 함수 포인터를 사용하여 비슷한 함수를 반복문으로 호출하기
#include <stdio.h>
int Sum(int a, int b)
{
	return a + b;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b) 
{
	return a * b;
}
int Div(int a, int b)
{
	return a / b;
}

main()
{
	int(*p[4])(int, int) = { &Sum, &Sub, &Mul, &Div };
	int i;
	char op_table[4] = { '+', '-', '*', '/' };
	// 가감승제 순으로 호출함
	for (i = 0; i < sizeof(*p); i++) { // sizeof(p) 하면 에러난다
		printf("%d %c %d = %d\n", 8, op_table[i], 2, (*p[i])(8, 2));
	}
	
}
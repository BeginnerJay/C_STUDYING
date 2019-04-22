int b, c; // 전역 변수
// 지역 변수와 전역 변수의 이름이 중복되는 경우에는 지역 변수가 처리된다.

void f(void)
{
	int b, d;
}

void g(int a)
{
	int c;
	{
		int a, d;
	}
}

int main(void)
{
	int c, d;
}
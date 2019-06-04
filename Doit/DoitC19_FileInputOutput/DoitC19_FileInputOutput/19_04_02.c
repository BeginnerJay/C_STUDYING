// fscanf 함수로 문자열 형식의 정수 값 읽어 오기
#include <stdio.h>

main()
{
	errno_t err;
	FILE* p_file;
	int num1, num2, num3;
	err = fopen_s(&p_file, "number.txt", "rt");
	if (err)
	{
		printf_s("The file is not opened\n");
	}
	else
	{
		// num1에 412, num2에 100, num3에 123 값을 저장함.
		fscanf_s(p_file, "%d %d %d", &num1, &num2, &num3);
		printf("%d %d %d\n", num1, num2, num3);
		fclose(p_file);
	}
}
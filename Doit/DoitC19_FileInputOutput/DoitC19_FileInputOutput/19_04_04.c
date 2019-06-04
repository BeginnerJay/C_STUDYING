// fscanf 함수는 기본적으로 공백 문자를 만나면 다음 입력이 시작된 것으로 처리한다.
#include <stdio.h>
#include <stdlib.h>
main()
{
	char temp[64]; // 파일에서 문자열을 입력받을 배열 변수
	FILE* p_file;
	errno_t err = fopen_s(&p_file, "주저하는 연인들을 위해.txt", "rt");
	if (err)
	{
		printf("The file is not opened");
	}
	else
	{
		while (EOF != fscanf_s(p_file, "%s", temp, _countof(temp)))
		{
			printf("%s\n", temp);
		}
		fclose(p_file);
	}
}
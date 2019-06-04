#include <stdio.h>

main()
{
	int num;
	errno_t err;
	FILE* p_file;
	err = fopen_s(&p_file, "number.txt", "rt");
	if (err)
	{
		printf("The file is not opened");
	}
	else
	{
		while (EOF != fscanf_s(p_file, "%d", &num))
		// 텍스트 파일의 끝은 EOF문자로 구분하는데, fscanf 함수가 EOF 문자를 만나면 EOF 값을 반환한다.
		// 따라서  EOF를 반환할 때가지 반복하면서 숫자 값을 읽어 온다.
		{
			printf("%d\n", num);
		}
		fclose(p_file);
	}
}
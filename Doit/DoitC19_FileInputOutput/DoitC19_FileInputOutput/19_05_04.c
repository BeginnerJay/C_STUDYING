//fseek 함수와 ftell 함수로 바이너리 파일 크기 알아내기
#include <stdio.h>

void main()
{
	int file_size = 0;
	FILE* p_file;
	errno_t err = fopen_s(&p_file, "주저하는 연인들을 위해.txt", "rb");
	if (err)
	{
		printf("File is not opened");
	}
	else
	{
		fseek(p_file, 0, SEEK_END); // 파일의 끝으로 이동함
		file_size = ftell(p_file); // 현재 파일 위치로 파일의 크기를 구함
		printf("파일 크기 : %d\n", file_size);
		fclose(p_file);
	}
}
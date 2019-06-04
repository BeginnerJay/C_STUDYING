// fread 함수로 바이너리 파일의 첫 4바이트 값 읽어오기
#include <stdio.h>

void main()
{
	int data;
	FILE* p_file;
	errno_t err = fopen_s(&p_file, "jin.dat", "rb");
	if (err)
	{
		printf("File is not opened");
	}
	else
	{
		fread(&data, sizeof(int), 1, p_file);
		fclose(p_file);
		printf("File data : %d(0x%04x)\n", data, data);
	}
}
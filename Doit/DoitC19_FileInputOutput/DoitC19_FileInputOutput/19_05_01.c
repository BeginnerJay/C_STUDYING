// fwrite 함수로 바이너리 파일에 int 형 변수 값 저장하기
#include <stdio.h>
main()
{
	int data = 0x00000412;
	FILE* p_file;
	errno_t err = fopen_s(&p_file, "jin.dat", "wb");
	if (err)
	{
		printf("The file is not opened");
	}
	else
	{
		fwrite(&data, sizeof(int), 1, p_file);
		// data의 시작 주소부터, 4바이트 크기만큼을, 한 번만, p_file 파일 포인터가 가리키는 파일에, 저장한다.
		fclose(p_file);
		printf("File written");
	}
}
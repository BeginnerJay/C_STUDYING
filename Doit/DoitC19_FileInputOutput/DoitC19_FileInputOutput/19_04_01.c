#include <stdio.h>
main()
{
	errno_t err;
	FILE* p_file;
	err = fopen_s(&p_file, "number.txt", "wt");
	//FILE *p_file = fopen_s(&p_file, "hello.txt", "wt");
	if (NULL != p_file)
	{
		fprintf_s(p_file, "412 100 123\n");
		fprintf_s(p_file, "408 127 121\n");
		fclose(p_file);
		printf("File Written\n");
	}
}
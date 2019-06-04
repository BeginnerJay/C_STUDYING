// fgets 함수로 문자열을 줄 단위로 모두 읽어 오기
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
		// 두 번째 매개변수는 첫 번째 매개변수에 사용되는 메모리의 크기 표시
		while (NULL != fgets(temp, sizeof(temp), p_file))
		{
			printf("%s", temp);
			// gets 함수는 줄 끝에 있는 \n도 읽어서 temp 배열 마지막에 넣어 주기 때문에 \n 적지 않는다.
		}
		fclose(p_file);
	}
}
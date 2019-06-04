#include "remind.h"
#include <stdio.h>

int read_line(char str[], int n)
{
	int ch = getchar(), i = 0;
	while (ch != '\n'); // new-line character가 나오기 전까지
	{
		if (i < n)
		{
			str[i] = ch;
			i++;
		}
	}
	str[i] = '\0'; // null character 붙여줘서 string으로 처리할 수 있게끔 한다.
	return i;
}
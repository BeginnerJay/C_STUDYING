#include <stdio.h>
#include "word.h"

int read_char(void)
{
	int ch = getchar();

	if (ch == '\n' || ch == '\t')
	{
		return ' ';
	}
	return ch;
}

void read_word(char* word, int len)
{
	int ch = read_char(), pos = 0;
	while (ch == ' ')
	{
		;
	}
	while (ch != ' ' && ch != EOF)
	{
		if (pos < len)
		{
			word[pos++] = ch;
		}
		ch = read_char();
	}
	word[pos] = '\0';
}
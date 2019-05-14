// Determines the length of a message
#include <stdio.h>
main()
{
	char ch;
	int len = 0;

	printf("Enter a message : ");
	ch = getchar();
	while (ch != '\n')
	{
		len++;
		ch = getchar();
	}
	printf("Your message was %d character long.\n", len);
}
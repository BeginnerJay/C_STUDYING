// Determines the length of a message
#include <stdio.h>
main()
{
	int len = 0;
	printf("Enter a message : ");
	while (getchar() != '\n')
	{
		len++;
	}
	printf("Your message was %d character long.\n", len);
}
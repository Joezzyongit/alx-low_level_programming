#include "main.h"
/**
 * puts2 function should print only one character out of two
 * return print
 */

void puts2(char *str)
{
	int head = 0;

	int f = 0;

	char *y = str;

	int u;

	while (*y != '\0')
	{
		y++;

		head++;
	}

	f = head - 1;
	
	for (u = 0; u <= f; u++)
	{
		if (u % 2 == 0)
		{
			_putchar(str[u]);
		}
	}
	_putchar('\n');
}

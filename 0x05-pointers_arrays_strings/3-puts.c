#include "main.h"

/**
 * print a string followed by new line using the _puts function
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

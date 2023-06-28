#include "main.h"
/**
 * print_rev print the reverse of a string 
 * @s string
 */

void print_rev(char *s)
{
	int flame = 0;

	int l;

	while (*s != '\0')
	{
		flame++;
		s++;
	}
	s--;
	for (l = flame; l > 0; l--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

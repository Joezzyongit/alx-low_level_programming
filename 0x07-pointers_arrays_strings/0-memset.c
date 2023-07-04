#include "main.h"
/**
 * _memset -  function that fill a block of memory with a specific value
 * @s - starting  address of memory to be filled
 * @b - the desired value to be set
 * @n - number of bytes to be changed
 * Return - Pointer to changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int h;

	for (h = 0; h < n; h++)
		s[h] = b;
	return (s);
}

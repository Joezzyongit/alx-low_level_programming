#include "main.h"
/**
 * _strncpy - a function that copies a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int f;
	for (f = 0; f < n && src[f] != '\0'; f++)
		dest[f] = src[f];

	for (; f < n; f++)
		dest[f] = '\0';
	return (dest);
}

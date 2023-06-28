#include "main.h"
/**
 * char *_strcpy a function that copies the string pointed to by src
 * @dest copy to
 * @src copy from
 * Return string
 */

char *_strcpy(char *dest, char *src)
{
	int w = 0;

	int r = 0;

	while (*(src + w) != '\0')
	{
		w++;
	}

	for (; r < w ; r++)
	{
		dest[r] = src[r];
	}

	dest[w] = '\0';
	return (dest);
}

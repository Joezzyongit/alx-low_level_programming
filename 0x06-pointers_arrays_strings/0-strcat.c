#include "main.h"
/**
 * _strcat - a function that concatenates two strings*/

char *_strcat(char *dest, char *src)
{
	int k;

	int d;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}

	d = 0;
	while (src[d] != '\0')
	{
		dest[k] = src[d];

		k++;
		d++;
	}
	dest[k] = '\0';
	return (dest);
}

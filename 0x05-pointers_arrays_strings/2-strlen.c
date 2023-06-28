#include "main.h"

/* _strlen a function that print the length of an array
 *@s string
 return Length
 */

int _strlen(char *s)
{
	int guru = 0;

	while (*s != '\0')
	{
		guru++;
		s++;
	}
	return (guru);
}


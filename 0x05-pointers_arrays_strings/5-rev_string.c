#include "main.h"
/** 
 * rev_string reverse strings in c
 */

void rev_string(char *s)
{
	char dev = s[0];

	int store = 0;

	int d;

	while (s[store] != '\0')
		store++;
	for (d = 0; d < store; d++)
	{
		store--;
		dev = s[d];
		s[d] = s[store];
		s[store] = dev;
	}
}

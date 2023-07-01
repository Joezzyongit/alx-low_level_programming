#include "main.h"
/**a function that encodes a string into 1337*/

char *leet(char *n)
{
	int e, h;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (e = 0; n[e] != '\0'; e++)
	{
		for (h = 0; h < 10; h++)
		{
			if (n[e] == s1[h])
			{
				n[e] = s2[h];
			}
		}
	}
	return (n);
}


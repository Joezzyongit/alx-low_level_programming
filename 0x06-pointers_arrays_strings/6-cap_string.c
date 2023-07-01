#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string
 */
char *cap_string(char *n)
{
	int sad = 0;

	while (n[sad] != '\0')
	{
		if (n[sad] >= 97 && n[sad] <= 122)
		{
			if (sad == 0)
			{
				n[sad] -= 32;
			}
			if (n[sad - 1] == 32 || n[sad - 1] == 9 || n[sad - 1] == 10 ||
					n[sad - 1] == 44 || n[sad - 1] == 59 || n[sad - 1] == 46 ||
					n[sad - 1] == 33 || n[sad - 1] == 63 || n[sad - 1] == 34 ||
					n[sad - 1] == 40 || n[sad - 1] == 41 || n[sad - 1] == 123 ||
					n[sad - 1] == 124)
			{
				n[sad] -= 32;
			}
		}
		sad++;
	}
	return (n);
}

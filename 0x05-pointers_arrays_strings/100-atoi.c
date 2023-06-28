#include "main.h"
/**
 *_atoi a function that convert a string to an integer
 return the int converted from string
 */

int _atoi(char *s)
{
	int a, b, c, ten, g, numb;

	a = 0;
	b = 0;
	c = 0;
	ten = 0;
	g = 0;
	numb = 0;

	while (s[ten] != '\0')
		ten++;

	while (a < ten && g == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			numb = s[a] - '0';
			if (b % 2)
				numb = -numb;
			c = c * 10 + numb;
			g = 1;

			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			g = 0;
		}
		a++;
	}
	if (g == 0)
		return (0);
	return (c);
}

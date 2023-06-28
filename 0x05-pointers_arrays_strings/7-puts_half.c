#include "main.h"
/**
 * A function that print half of a string with a new line
 * if the number of character is odd n = (length_of_the_string - 1) / 2
 * return half of stdint
 */

void puts_half(char *str)
{
	int j, e, toy;

	toy = 0;

	for (j = 0; str[j] != '\0'; j++)

		toy++;

	e = (toy / 2);

	if ((toy % 2) == 1)

		e = ((toy + 1) /2);

	for (j = e; str[j] != '\0'; j++)

		_putchar(str[j]);

	_putchar('\n');
}

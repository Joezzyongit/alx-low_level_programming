#include <unistd.h>
#include "main.h"
/**
 * _putchar - print the character c to stdo
 * @c - The character to be printed
 * Return: on success, return number of character written
 *  on error, returns -1 and sets errno
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

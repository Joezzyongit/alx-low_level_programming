#include <stdio.h>
/**print_alphabet_x10 - alphabet in lowercase 10 times*/

void print_alphabet_10x(void)
{
	char c;
	int a;

	a = 0;

	for (a = 0; a <= 9; a++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}
}


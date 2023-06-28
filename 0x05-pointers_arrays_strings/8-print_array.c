#include "main.h"
#include <stdio.h>
/**
 * print_array function that prints elements of an array
 * @a name of array
 * return a and n input
 */

void print_array(int *a, int n)
{
	int h;

	for (h = 0; h < (n - 1); h++)
	{
		printf("%d, ", a[h]);
	}

	if (h == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}


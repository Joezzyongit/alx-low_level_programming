#include "main.h"
/**
 * a function that reverses the content of an array of integers.
 */

void reverse_array(int *a, int n)
{
	int s;
	int g;

	for (s = 0; s < n--; s++)
	{
		g = a[s];
		a[s] = a[n];
		a[n] = g;
	}
}

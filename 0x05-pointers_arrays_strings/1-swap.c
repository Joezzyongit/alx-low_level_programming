#include "main.h"
/*The swap_int function swaps the values of two int
 @a first element to change
 @b second element to change
 */
void swap_int(int *a, int *b)
{
	int try;

	try = *a;
	*a = *b;
	*b = try;
}

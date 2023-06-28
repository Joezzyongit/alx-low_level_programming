#include "main.h"
#include <stdio.h>
/** function that check for uppercase character*/
/**Return 0 or 1*/
int _isupper(int c);

	int main()
{
	char c;

	if (c >= 'A' && c <= 'Z')
		return(1);

	else
		return(0);

	putchar(c);
}

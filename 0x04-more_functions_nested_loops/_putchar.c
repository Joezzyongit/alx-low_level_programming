#include "main.h"
#include <unistd.h>
/* we are using the putchar to write to the stdio*/
int _putchar(char c) 
{
	return (write(1, &c, 1));
}

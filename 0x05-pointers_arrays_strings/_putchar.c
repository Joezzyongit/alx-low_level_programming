#include <unistd.h>
/** putchar display the c character*/
int _putchar(char c)
{
	return (write(1,&c, 1));
}
